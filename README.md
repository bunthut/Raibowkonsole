🧩Raibowkonsole und randomcolorsplugin – Farbenfrohes SSH-Roulette für Konsole

Plugin-Typ: Konsole Plugin (KPart-basiert)
Kompatibilität: Plasma 6 / KF6 / Qt6
Stand: experimentell, läuft 🎉 – Deaktivierung noch in Planung

🧠 Idee

Dieses Plugin wählt bei jedem Start einer neuen Konsole-Session ein zufälliges Farbprofil aus — für mehr visuelles Feedback, Orientierung oder einfach gute Laune.

Langfristig soll das Plugin zusätzlich:

gezielt auf SSH-Ziele reagieren (Hostname → Farbschema),

sich über das Plugin-Menü aktivieren/deaktivieren lassen (UI-Hook steht noch aus).

📦 Features

🎲 Zufällige Farbauswahl aus den installierten Profilen

🧠 Profil wird über Konsole::Session::setProfile() angewendet

🧰 Plug-in ist beim Start automatisch aktiv

(🔜) Toggle über das Plugin-Menü geplant

🔧 Technische Hinweise

Die Farbschemata werden aus ~/.local/share/konsole/*.profile und systemweiten Pfaden geladen

Das Plugin wird installiert unter:
/usr/lib/x86_64-linux-gnu/plugins/konsole/randomcolorplugin.so (standard)

Aktivierung automatisch über pluginsrc oder im Menü Einstellungen > Plugins

🐞 Bekannte Einschränkungen

Keine UI zum Ein-/Ausschalten (wird nachgereicht)

Nicht alle Themes enthalten Farbanpassungen für alle Terminaltypen

Bei Multisession-Start (z. B. Tiling) können Farben identisch sein

✨ Zukunftsideen

Mapping hostname → colorscheme

Visuelle Warnung bei produktiven Hosts (rot!🔥)

Export der aktiven Farbzuweisungen (für Auditing, Screenshots, Logging)

📩 Kontakt & Mitentwicklung

Code & Issues: https://github.com/bunthut/Raibowkonsole
