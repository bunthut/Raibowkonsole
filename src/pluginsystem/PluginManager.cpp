/*  This file was part of the KDE libraries

    SPDX-FileCopyrightText: 2021 Tomaz Canabrava <tcanabrava@kde.org>

    SPDX-License-Identifier: GPL-2.0-or-later
*/

#include "PluginManager.h"

#include "IKonsolePlugin.h"
#include "KonsoleSettings.h"
#include "MainWindow.h"
#include "konsoledebug.h"

#include <KConfigGroup>
#include <KLocalizedString>
#include <KPluginFactory>
#include <KPluginMetaData>
#include <KSharedConfig>

#include <QAction>
#include <QVersionNumber>
#include <QtGlobal>

namespace Konsole {
struct PluginManagerPrivate {
  std::vector<std::unique_ptr<IKonsolePlugin>> plugins;
};

PluginManager::PluginManager() : d(std::make_unique<PluginManagerPrivate>()) {}

PluginManager::~PluginManager() = default;

void PluginManager::loadAllPlugins() {
  auto filter = [](const KPluginMetaData &data) {
    const QVersionNumber pluginVersion =
        QVersionNumber::fromString(data.version());

    const QVersionNumber releaseVersion =
        QVersionNumber::fromString(QLatin1String(RELEASE_SERVICE_VERSION));

    // Accept only plugins that match the current major and minor release
    // version
    if (pluginVersion.majorVersion() == releaseVersion.majorVersion() &&
        pluginVersion.minorVersion() == releaseVersion.minorVersion()) {
      return true;
    }

    qCWarning(KonsoleDebug)
        << "Ignoring" << data.name() << "plugin version ("
        << pluginVersion.toString() << ") doesn't match release version ("
        << releaseVersion.toString() << ")";
    return false;
  };

  QString pluginNamespace = QStringLiteral("konsoleplugins");
#if QT_VERSION_MAJOR >= 6
  QVector<KPluginMetaData> pluginMetaData = KPluginMetaData::findPlugins(
      QStringLiteral("kf6/konsoleplugins"), filter);
  if (pluginMetaData.isEmpty()) {
    pluginMetaData = KPluginMetaData::findPlugins(pluginNamespace, filter);
  }
#else
  QVector<KPluginMetaData> pluginMetaData =
      KPluginMetaData::findPlugins(pluginNamespace, filter);
#endif

  const QStringList extraPaths = KonsoleSettings::customPluginPaths();
  for (const QString &path : extraPaths) {
    pluginMetaData += KPluginMetaData::findPlugins(path, filter);
  }

  KConfigGroup pluginsConfig(KSharedConfig::openConfig(),
                             QStringLiteral("Plugins"));
  for (const auto &metaData : std::as_const(pluginMetaData)) {
    if (!metaData.isEnabled(pluginsConfig)) {
      continue;
    }
    const KPluginFactory::Result result =
        KPluginFactory::instantiatePlugin<IKonsolePlugin>(metaData);
    if (!result) {
      continue;
    }

    d->plugins.emplace_back(std::unique_ptr<IKonsolePlugin>(result.plugin));
  }
}

void PluginManager::registerMainWindow(Konsole::MainWindow *window) {
  QList<QAction *> internalPluginSubmenus;
  for (const std::unique_ptr<IKonsolePlugin> &plugin : d->plugins) {
    plugin->addMainWindow(window);
    internalPluginSubmenus.append(plugin->menuBarActions(window));
    window->addPlugin(plugin.get());
  }

  if (internalPluginSubmenus.isEmpty()) {
    auto *emptyMenuAct = new QAction(i18n("No plugins available"), this);
    emptyMenuAct->setEnabled(false);
    internalPluginSubmenus.append(emptyMenuAct);
  }

  window->setPluginsActions(internalPluginSubmenus);
}

std::vector<IKonsolePlugin *> PluginManager::plugins() const {
  std::vector<IKonsolePlugin *> pluginPtrs;
  pluginPtrs.reserve(d->plugins.size());
  for (const std::unique_ptr<IKonsolePlugin> &plugin : d->plugins) {
    pluginPtrs.push_back(plugin.get());
  }
  return pluginPtrs;
}

} // namespace Konsole

#include "moc_PluginManager.cpp"
