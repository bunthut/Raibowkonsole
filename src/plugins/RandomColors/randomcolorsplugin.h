// This file was part of the KDE libraries
// SPDX-FileCopyrightText: 2024 Your Name <your.email@example.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#ifndef RANDOMCOLORSPLUGIN_H
#define RANDOMCOLORSPLUGIN_H

#include <pluginsystem/IKonsolePlugin.h>

namespace Konsole {
class SessionController;
class MainWindow;
}

class RandomColorsPlugin : public Konsole::IKonsolePlugin
{
    Q_OBJECT

public:
    RandomColorsPlugin(QObject *parent, const QVariantList &args);
    ~RandomColorsPlugin() override;

    void activeViewChanged(Konsole::SessionController *controller, Konsole::MainWindow *mainWindow) override;
};

#endif // RANDOMCOLORSPLUGIN_H
