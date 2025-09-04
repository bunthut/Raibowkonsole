// This file was part of the KDE libraries
// SPDX-FileCopyrightText: 2024 Your Name <your.email@example.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#ifndef RANDOMCOLORSPLUGIN_H
#define RANDOMCOLORSPLUGIN_H

#include <pluginsystem/IKonsolePlugin.h>

#include <QHash>

class QAction;

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

    void createWidgetsForMainWindow(Konsole::MainWindow *mainWindow) override;
    void activeViewChanged(Konsole::SessionController *controller, Konsole::MainWindow *mainWindow) override;
    QList<QAction *> menuBarActions(Konsole::MainWindow *mainWindow) const override;

private:
    mutable QHash<Konsole::MainWindow *, QAction *> m_enableActions;
};

#endif // RANDOMCOLORSPLUGIN_H
