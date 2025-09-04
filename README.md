# 🎲 Rainbowkonsole und randomColorsplugin – Farbschemata bei jedem Start

**Autor**: Thomas Lorkowski  
**Plugin-Typ**: Konsole Plugin (KPart-basiert)  
**Kompatibilität**: Plasma 6 / KF6 / Qt6  
**Status**: ✨ experimentell (läuft) – Deaktivierung via Plugin-Menü geplant

---

## 🧠 Idee

Dieses Plugin weist jeder neuen Konsole-Session beim Start **zufällig ein Farbschema** zu.

Das Ziel:  
- **visuelle Orientierung** (gerade bei vielen offenen Sessions),
- **reduzierte Fehleranfälligkeit** (SSH auf „falschem“ Server),
- und ein bisschen **Freude an der Ästhetik**.

---

## 🚀 Features

- 🎲 Wählt zufällig ein bestehendes Farbprofil aus
- 🎨 Nutzt `Konsole::Session::setProfile()` zur Anwendung
- ✅ Wird automatisch geladen
- (🛠️ in Planung) Menüpunkt zum Deaktivieren im Plugin-Fenster

---

## 🔧 Technische Details

- Lädt alle `.profile`-Dateien aus:
  - `~/.local/share/konsole/`
  - `/usr/share/konsole/`
- Verwendet das interne **Profil-API** von Konsole
- Installationsziel:  
  `/usr/lib/x86_64-linux-gnu/plugins/konsole/randomcolorplugin.so`
- Aktivierbar über:
  - **Einstellungen > Plugins** in Konsole
  - oder per `konsole --list-plugins`

---

## 🐞 Bekannte Einschränkungen

- Kein UI-Toggle zum Abschalten (noch)
- Keine persistenten Host-Zuweisungen
- Farbauswahl ist komplett zufällig, keine Gewichtung

---

## ✨ Ideen für die Zukunft

- 🔗 Verknüpfung von Hostnamen (SSH) mit spezifischen Farbschemata
- 🧠 Farbliches Warnsystem für produktive Server („root@prod → rot!“)
- 📷 Auto-Screenshot + Auditing für Sessions mit sensiblen Hosts
- 🖼️ Live-Wechsel des Farbschemas während der Session (Theme Cycling)

---

## 📩 Kontakt

- 🔧 **Quellcode & Issues**: [github.com/bunthut/Raibowkonsole](https://github.com/bunthut/Raibowkonsole)
- 📨 **Entwicklerliste**: [konsole-devel@kde.org](mailto:konsole-devel@kde.org)
- 🌐 **Offizielle Webseite**: [konsole.kde.org](https://konsole.kde.org)
- 💬 **Mailingliste**: [mail.kde.org/mailman/listinfo/konsole-devel](https://mail.kde.org/mailman/listinfo/konsole-devel)

---

## 🖼️ Screenshots

_Optional hier einfügen: z. B. verschiedene Farben bei verschiedenen SSH-Zielen_

---

## Lizenz

[MIT](https://opensource.org/licenses/MIT) oder [GPLv2+](https://www.gnu.org/licenses/gpl-2.0.html) – noch festzulegen.
