// This file was part of the KDE libraries
// SPDX-FileCopyrightText: 2024 Your Name <your.email@example.com>
// SPDX-License-Identifier: GPL-2.0-or-later

#include "randomcolorsplugin.h"

#include "session/SessionController.h"
#include "session/SessionManager.h"
#include "profile/Profile.h"
#include "colorscheme/ColorSchemeManager.h"

#include <QRandomGenerator>

#include "MainWindow.h"

K_PLUGIN_CLASS_WITH_JSON(RandomColorsPlugin, "konsole_randomcolors.json")

RandomColorsPlugin::RandomColorsPlugin(QObject *parent, const QVariantList &args)
    : Konsole::IKonsolePlugin(parent, args)
{
    setName(QStringLiteral("RandomColors"));
}

RandomColorsPlugin::~RandomColorsPlugin() = default;

void RandomColorsPlugin::activeViewChanged(Konsole::SessionController *controller, Konsole::MainWindow *mainWindow)
{
    Q_UNUSED(mainWindow)
    if (!controller) {
        return;
    }

    auto schemes = Konsole::ColorSchemeManager::instance()->allColorSchemes();
    if (schemes.isEmpty()) {
        return;
    }

    int index = QRandomGenerator::global()->bounded(schemes.size());
    const auto scheme = schemes.at(index);
    if (!scheme) {
        return;
    }

    auto profile = Konsole::SessionManager::instance()->sessionProfile(controller->session());
    profile = Konsole::Profile::Ptr(new Konsole::Profile(profile));
    profile->setProperty(Konsole::Profile::ColorScheme, scheme->name());

    controller->view()->applyProfile(profile);
    Konsole::SessionManager::instance()->setSessionProfile(controller->session(), profile);
}

#include "moc_randomcolorsplugin.cpp"
#include "randomcolorsplugin.moc"
