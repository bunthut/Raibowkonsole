/*
  SPDX-FileCopyrightText: 2024 KDE Contributors

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
*/

#ifndef PLUGINSETTINGS_H
#define PLUGINSETTINGS_H

#include "ui_PluginSettings.h"

namespace Konsole
{
class PluginSettings : public QWidget, private Ui::PluginSettings
{
    Q_OBJECT

public:
    explicit PluginSettings(QWidget *parent = nullptr);
    ~PluginSettings() override;
};
}

#endif
