# Konsole - KDE's Terminal Emulator

Konsole is a terminal program for KDE.


## HOWTO Build

1. Install dependencies (KDE Frameworks 5.105+). On Debian/Ubuntu:
```
apt install git cmake make g++ extra-cmake-modules qtbase5-dev qtdeclarative5-dev \
    kf5-bookmarks-dev kf5-config-dev kf5-configwidgets-dev kf5-coreaddons-dev kf5-crash-dev kf5-guiaddons-dev kf5-i18n-dev \
    kf5-iconthemes-dev kf5-kcmutils-dev kf5-kio-dev kf5-newstuff-dev kf5-notifications-dev kf5-notifyconfig-dev kf5-parts-dev kf5-service-dev \
    kf5-textwidgets-dev kf5-widgetsaddons-dev kf5-windowsystem-dev kf5-xmlgui-dev kf5-pty-dev
```
   Optional components:

   - `kf5-dbusaddons-dev` and `kf5-globalaccel-dev` (requires Qt's DBus module, provided by `qtbase5-dev`)
   - `kf5-doctools-dev` to build documentation

2. Clone with `git clone https://invent.kde.org/utilities/konsole.git`
3. Make _build_ directory: `mkdir konsole/build`
4. Change into _build_ directory: `cd konsole/build`
5. Configure: `cmake ..` (or `cmake .. -DCMAKE_INSTALL_PREFIX=/where/your/want/to/install`)

   Alternatively, from the project root you can run:
   ```
   cmake -S . -B build
   ```
6. Build: `make`
7. Install: `make install`


### Qt5 limitations

* Plugins are installed under `qt5/plugins/konsoleplugins`; existing builds for Qt6 must be relocated.
* DBus helpers use the older `qt5_*` macros as `qt_add_dbus_adaptor` is unavailable in Qt5.
* `KColorSchemeManager::instance()` is not present in KF5; an explicit manager object is used instead.