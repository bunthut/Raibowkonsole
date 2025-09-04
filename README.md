# Rainbowkonsole und randomcolorplugin
───────

Konsole-Plugin für zufällige Farbschemata beim Start neuer Terminal-Sessions.

Autor: Thomas Lorkowski  
Status: Experimentell  
Kompatibilität: Plasma 6 / KDE Frameworks 6 / Qt 6

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
  - `/usr/lib/x86_64-linux-gnu/plugins/konsole/randomcolorplugin.so`

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

Noch festzulegen. Empfehlung: MIT oder GPLv2+

───────
