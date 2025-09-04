/*  This file was part of the KDE libraries

    SPDX-FileCopyrightText: 2021 Tomaz Canabrava <tcanabrava@kde.org>

    SPDX-License-Identifier: GPL-2.0-or-later
*/

#include "PluginManager.h"

#include "IKonsolePlugin.h"
#include "MainWindow.h"
#include "konsoledebug.h"

#include <KLocalizedString>
#include <KPluginFactory>
#include <KPluginMetaData>

#include <QAction>
#include <QVersionNumber>

namespace Konsole
{
struct PluginManagerPrivate {
    std::vector<IKonsolePlugin *> plugins;
};

PluginManager::PluginManager()
    : d(std::make_unique<PluginManagerPrivate>())
{
}

PluginManager::~PluginManager()
{
    qDeleteAll(d->plugins);
}

void PluginManager::loadAllPlugins()
{
    QVector<KPluginMetaData> pluginMetaData = KPluginMetaData::findPlugins(QStringLiteral("konsoleplugins"), [](const KPluginMetaData &data) {
        const QVersionNumber pluginVersion = QVersionNumber::fromString(QString::fromLatin1(data.version()));
        const QVersionNumber releaseVersion = QVersionNumber::fromString(QLatin1String(RELEASE_SERVICE_VERSION));
        if (pluginVersion.majorVersion() == releaseVersion.majorVersion() && pluginVersion.minorVersion() == releaseVersion.minorVersion()) {
            return true;
        } else {
            qCWarning(KonsoleDebug) << "Ignoring" << data.name() << "plugin version (" << pluginVersion.toString()
                                    << ") doesn't match release version (" << releaseVersion.toString() << ")";
            return false;
        }
    });
    for (const auto &metaData : std::as_const(pluginMetaData)) {
        const KPluginFactory::Result result = KPluginFactory::instantiatePlugin<IKonsolePlugin>(metaData);
        if (!result) {
            continue;
        }

        d->plugins.push_back(result.plugin);
    }
}

void PluginManager::registerMainWindow(Konsole::MainWindow *window)
{
    QList<QAction *> internalPluginSubmenus;
    for (auto *plugin : d->plugins) {
        plugin->addMainWindow(window);
        internalPluginSubmenus.append(plugin->menuBarActions(window));
        window->addPlugin(plugin);
    }

    if (internalPluginSubmenus.isEmpty()) {
        auto *emptyMenuAct = new QAction(i18n("No plugins available"), this);
        emptyMenuAct->setEnabled(false);
        internalPluginSubmenus.append(emptyMenuAct);
    }

    window->setPluginsActions(internalPluginSubmenus);
}

std::vector<IKonsolePlugin *> PluginManager::plugins() const
{
    return d->plugins;
}

}

#include "moc_PluginManager.cpp"
