/*
    This source file is part of Konsole, a terminal emulator.

    SPDX-FileCopyrightText: 2007-2008 Robert Knight <robertknight@gmail.com>

    SPDX-License-Identifier: GPL-2.0-or-later
*/

// Own
#include "KeyboardTranslatorManager.h"

#include "KeyboardTranslatorReader.h"
#include "KeyboardTranslatorWriter.h"

// Qt
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QStandardPaths>

using namespace Konsole;

KeyboardTranslatorManager::KeyboardTranslatorManager()
    : _haveLoadedAll(false)
    , _translators(QHash<QString, KeyboardTranslator *>())
{
}

KeyboardTranslatorManager::~KeyboardTranslatorManager()
{
    qDeleteAll(_translators);
}

Q_GLOBAL_STATIC(KeyboardTranslatorManager, theKeyboardTranslatorManager)
KeyboardTranslatorManager *KeyboardTranslatorManager::instance()
{
    return theKeyboardTranslatorManager;
}

void KeyboardTranslatorManager::addTranslator(KeyboardTranslator *translator)
{
    _translators.insert(translator->name(), translator);

    if (!saveTranslator(translator)) {
        qCDebug(KonsoleKeyTrDebug) << "Unable to save translator" << translator->name() << "to disk.";
    }
}

bool KeyboardTranslatorManager::deleteTranslator(const QString &name)
{
    Q_ASSERT(_translators.contains(name));

    // locate and delete
    QString path = findTranslatorPath(name);
    if (QFile::remove(path)) {
        _translators.remove(name);
        return true;
    }
    qCDebug(KonsoleKeyTrDebug) << "Failed to remove translator - " << path;
    return false;
}

bool KeyboardTranslatorManager::isTranslatorDeletable(const QString &name) const
{
    const QString &dir = QFileInfo(findTranslatorPath(name)).path();
    return QFileInfo(dir).isWritable();
}

bool KeyboardTranslatorManager::isTranslatorResettable(const QString &name) const
{
    auto foundFiles = QStandardPaths::locateAll(QStandardPaths::GenericDataLocation, QStringLiteral("konsole/") + name + QStringLiteral(".keytab")).count();
    if (QFile::exists(QStringLiteral(":/konsole/keyboard-layouts/") + name + QStringLiteral(".keytab"))) {
        ++foundFiles;
    }
    return (foundFiles > 1);
}

const QString KeyboardTranslatorManager::findTranslatorPath(const QString &name) const
{
    auto file = QStandardPaths::locate(QStandardPaths::GenericDataLocation, QStringLiteral("konsole/") + name + QStringLiteral(".keytab"));

    // fallback to bundled ones
    if (file.isEmpty() && QFile::exists(QStringLiteral(":/konsole/keyboard-layouts/") + name + QStringLiteral(".keytab"))) {
        file = QStringLiteral(":/konsole/keyboard-layouts/") + name + QStringLiteral(".keytab");
    }

    return file;
}

void KeyboardTranslatorManager::findTranslators()
{
    QStringList dirs = QStandardPaths::locateAll(QStandardPaths::GenericDataLocation, QStringLiteral("konsole"), QStandardPaths::LocateDirectory);
    dirs.append(QStringLiteral(":/konsole/keyboard-layouts")); // fallback to bundled ones

    QStringList list;
    for (const QString &dir : std::as_const(dirs)) {
        const QStringList fileNames = QDir(dir).entryList(QStringList() << QStringLiteral("*.keytab"));
        for (const QString &file : fileNames) {
            list.append(dir + QLatin1Char('/') + file);
        }
    }

    // add the name of each translator to the list and associated
    // the name with a null pointer to indicate that the translator
    // has not yet been loaded from disk
    for (const QString &translatorPath : std::as_const(list)) {
        QString name = QFileInfo(translatorPath).completeBaseName();

        if (!_translators.contains(name)) {
            _translators.insert(name, nullptr);
        }
    }

    _haveLoadedAll = true;
}

const KeyboardTranslator *KeyboardTranslatorManager::findTranslator(const QString &name)
{
    if (name.isEmpty()) {
        return defaultTranslator();
    }

    if (_translators.contains(name) && _translators[name] != nullptr) {
        return _translators[name];
    }

    KeyboardTranslator *translator = loadTranslator(name);

    if (translator != nullptr) {
        _translators[name] = translator;
    } else if (!name.isEmpty()) {
        qCDebug(KonsoleKeyTrDebug) << "Unable to load translator" << name;
    }

    return translator;
}

bool KeyboardTranslatorManager::saveTranslator(const KeyboardTranslator *translator)
{
    const QString dir = QStandardPaths::writableLocation(QStandardPaths::GenericDataLocation) + QStringLiteral("/konsole/");
    QDir().mkpath(dir);
    const QString path = dir + translator->name() + QStringLiteral(".keytab");

    ////qDebug() << "Saving translator to" << path;

    QFile destination(path);
    if (!destination.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qCDebug(KonsoleKeyTrDebug) << "Unable to save keyboard translation:" << destination.errorString();
        return false;
    }

    {
        KeyboardTranslatorWriter writer(&destination);
        writer.writeHeader(translator->description());
        const QList<KeyboardTranslator::Entry> entriesList = translator->entries();
        for (const KeyboardTranslator::Entry &entry : entriesList) {
            writer.writeEntry(entry);
        }
    }

    destination.close();

    return true;
}

KeyboardTranslator *KeyboardTranslatorManager::loadTranslator(const QString &name)
{
    const QString &path = findTranslatorPath(name);

    QFile source(path);
    if (name.isEmpty() || !source.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return nullptr;
    }

    return loadTranslator(&source, name);
}

KeyboardTranslator *KeyboardTranslatorManager::loadTranslator(QIODevice *source, const QString &name)
{
    auto translator = new KeyboardTranslator(name);
    KeyboardTranslatorReader reader(source);
    translator->setDescription(reader.description());
    while (reader.hasNextEntry()) {
        translator->addEntry(reader.nextEntry());
    }

    source->close();

    if (!reader.parseError()) {
        return translator;
    }
    delete translator;
    return nullptr;
}

const KeyboardTranslator *KeyboardTranslatorManager::defaultTranslator()
{
    // Note that as of 24.08, all keytab files are bundled into the
    // executable via qrc.  Hence there should be no way for this code
    // to not find the default translator.
    //
    // Try to find the default.keytab file if it exists, otherwise
    // fall back to the internal hard-coded fallback translator
    auto translator = findTranslator(QStringLiteral("default"));
    if (translator != nullptr) {
        return translator;
    }

    auto fallback = new KeyboardTranslator(QStringLiteral("fallback"));
    fallback->setDescription(QStringLiteral("Fallback Keyboard Translator"));
    // Key "TAB" should send out '\t'
    KeyboardTranslator::Entry entry;
    entry.setKeyCode(Qt::Key_Tab);
    entry.setText("\t");
    fallback->addEntry(entry);
    return fallback;
}

const QStringList KeyboardTranslatorManager::allTranslators()
{
    if (!_haveLoadedAll) {
        findTranslators();
    }

    return _translators.keys();
}
