/*  This file was part of the KDE libraries

    SPDX-FileCopyrightText: 2021 Tomaz Canabrava <tcanabrava@kde.org>

    SPDX-License-Identifier: GPL-2.0-or-later
*/

#include "PluginManager.h"

#include "IKonsolePlugin.h"
#include "MainWindow.h"
#include "konsoledebug.h"
#include "KonsoleSettings.h"

#include <KLocalizedString>
#include <KPluginFactory>
#include <KPluginMetaData>

#include <QAction>

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
    auto filter = [](const KPluginMetaData &data) {
        auto plugin_version = QString(data.version()).left(5);
        auto release_version = QLatin1String(RELEASE_SERVICE_VERSION).left(5);
        if (plugin_version == release_version) {
            return true;
        } else {
            qCWarning(KonsoleDebug) << "Ignoring" << data.name() << "plugin version (" << plugin_version
                                    << ") doesn't match release version (" << release_version << ")";
            return false;
        }
    };
    QVector<KPluginMetaData> pluginMetaData = KPluginMetaData::findPlugins(QStringLiteral("konsoleplugins"), filter);

    const QStringList extraPaths = KonsoleSettings::customPluginPaths();
    for (const QString &path : extraPaths) {
        pluginMetaData += KPluginMetaData::findPlugins(path, filter);
    }

    for (const auto &metaData : std::as_const(pluginMetaData)) {
        if (!metaData.isEnabled()) {
            continue;
        }
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
