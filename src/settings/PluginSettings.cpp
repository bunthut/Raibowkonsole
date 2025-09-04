/*
  SPDX-FileCopyrightText: 2024 KDE Contributors

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
*/

// Own
#include "PluginSettings.h"

// Qt
#include <QFileDialog>

// KDE
#include <KLocalizedString>
#include <KPluginMetaData>
#include <KPluginWidget>
#include <KSharedConfig>
#include <KConfigGroup>
#include <keditlistwidget.h>

using namespace Konsole;

PluginSettings::PluginSettings(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);

    // Populate plugin list
    auto config = KSharedConfig::openConfig();
    pluginWidget->setConfig(config->group(QStringLiteral("Plugins")));
    const auto metaData = KPluginMetaData::findPlugins(QStringLiteral("konsoleplugins"));
    pluginWidget->addPlugins(metaData, QString());
    pluginWidget->load();

    // Use a file dialog to add directories
    connect(addPathButton, &QPushButton::clicked, this, [this]() {
        const QString dir = QFileDialog::getExistingDirectory(this, i18n("Select Plugin Directory"));
        if (dir.isEmpty()) {
            return;
        }
        QStringList paths = kcfg_CustomPluginPaths->items();
        if (!paths.contains(dir)) {
            paths.append(dir);
            kcfg_CustomPluginPaths->setItems(paths);
        }
    });
}

PluginSettings::~PluginSettings() = default;

#include "moc_PluginSettings.cpp"
