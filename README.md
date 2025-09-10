# Rainbowkonsole und randomcolorplugin
───────

Konsole-Plugin für zufällige Farbschemata beim Start neuer Terminal-Sessions.

Autor: Thomas Lorkowski
Status: Experimentell
Kompatibilität: Plasma 5 / KDE Frameworks 5 / Qt 5

Benötigte Qt-Module: Core, Widgets, PrintSupport (kein Qt Multimedia erforderlich)

───────

## Idee

Dieses Plugin erweitert Konsole um die Fähigkeit, bei jeder neuen Terminal-Session ein zufälliges Farbprofil auszuwählen. Ziel ist es, visuelle Orientierung zu bieten und parallele Sessions besser unterscheidbar zu machen.

───────

## Features

• Automatische Auswahl eines zufälligen `.profile`-Farbthemas  
• Anwendung via `Konsole::Session::setProfile()`  
• Läuft automatisch nach dem Start (kein Benutzer-Input nötig)  
• Integration ins Plugin-System von Konsole  
• Vorbereitung für Deaktivierbarkeit über die GUI

───────

## Technische Details

• Durchsucht folgende Pfade nach Profilen:
  - `~/.local/share/konsole/`
  - `/usr/share/konsole/`

• Installation unter:
  - `/usr/lib/x86_64-linux-gnu/qt5/plugins/konsoleplugins/konsole_randomcolorsplugin.so`

• Aktivierbar über:
  - Menü → Einstellungen → Plugins
  - oder per CLI: `konsole --list-plugins`

───────

## Bekannte Einschränkungen

• Keine UI zur Deaktivierung (noch in Planung)  
• Keine persistente Farbzuweisung pro Host  
• Farbauswahl ist rein zufällig (kein Hash-basiertes Mapping)

───────

## Erweiterungsideen

• Hostname-basierte Farbschema-Zuweisung (z. B. `prod → rot`)  
• Warnmechanismen für bestimmte SSH-Ziele  
• Export/Auditing der Session-Farben  
• Dynamischer Theme-Wechsel während einer Session

───────

## Kontakt & Mitentwicklung

Quellcode:  
→ https://github.com/bunthut/Raibowkonsole

Konsole-Entwicklerliste:  
→ https://mail.kde.org/mailman/listinfo/konsole-devel

Offizielle Seite:  
→ https://konsole.kde.org

───────

## Lizenz
GPLv2+

───────
