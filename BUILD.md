# Konsole - KDE's Terminal Emulator

Konsole is a terminal program for KDE.


## HOWTO Build

1. Install dependencies (KDE Frameworks 6.0+). On Debian/Ubuntu:
```
apt install git cmake make g++ extra-cmake-modules qt6-base-dev qt6-declarative-dev qt6-multimedia-dev qt6-printsupport-dev \
    kf6-bookmarks-dev kf6-config-dev kf6-configwidgets-dev kf6-coreaddons-dev kf6-crash-dev kf6-guiaddons-dev kf6-i18n-dev \
    kf6-iconthemes-dev kf6-kio-dev kf6-newstuff-dev kf6-notifications-dev kf6-notifyconfig-dev kf6-parts-dev kf6-service-dev \
    kf6-textwidgets-dev kf6-widgetsaddons-dev kf6-windowsystem-dev kf6-xmlgui-dev kf6-pty-dev
```
   Optional components:
   - `kf6-dbusaddons-dev` and `kf6-globalaccel-dev` (requires Qt's DBus module, provided by `qt6-base-dev`)
   - `kf6-doctools-dev` to build documentation
   To build with Qt5/KF5, install the corresponding Qt5 and KF5 development packages and see the configure step below.
2. Clone with `git clone https://invent.kde.org/utilities/konsole.git`
3. Make _build_ directory: `mkdir konsole/build`
4. Change into _build_ directory: `cd konsole/build`
5. Configure: `cmake ..` (or `cmake .. -DCMAKE_INSTALL_PREFIX=/where/your/want/to/install`)
   To build against Qt5/KF5 use: `cmake .. -DBUILD_WITH_QT5=ON`
   Alternatively, from the project root you can run:
   ```
   cmake -S . -B build -DBUILD_WITH_QT5=ON
   ```
6. Build: `make`
7. Install: `make install`



