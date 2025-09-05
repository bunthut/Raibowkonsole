# Konsole project

# KDE Application Version, managed by release script
set(RELEASE_SERVICE_VERSION_MAJOR "25")
set(RELEASE_SERVICE_VERSION_MINOR "11")
set(RELEASE_SERVICE_VERSION_MICRO "70")
set(RELEASE_SERVICE_VERSION "${RELEASE_SERVICE_VERSION_MAJOR}.${RELEASE_SERVICE_VERSION_MINOR}.${RELEASE_SERVICE_VERSION_MICRO}")

# Do not increase these requirements without a merge-request or/and
# approval from maintainer(s).
# minimal requirements

# See comments in https://invent.kde.org/utilities/konsole/-/commit/9d8e47298c81fc1e47c998eda1b6e980589274eb
cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

option(BUILD_WITH_QT5 "Build against Qt5/KF5 instead of Qt6/KF6" OFF)

if(BUILD_WITH_QT5)
    set(QT_MAJOR_VERSION 5)
    set(QT_MIN_VERSION "5.15.2")
    set(KF_MAJOR_VERSION 5)
    set(KF_MIN_VERSION "5.105.0")
    set(ECM_MIN_VERSION "5.105.0")
else()
    set(QT_MAJOR_VERSION 6)
    set(QT_MIN_VERSION "6.4.2")
    set(KF_MAJOR_VERSION 6)
    set(KF_MIN_VERSION "6.0.0")
    set(ECM_MIN_VERSION "6.0.0")
endif()

set(KF_PREFIX KF${KF_MAJOR_VERSION})

# Release script will create bugzilla versions
project(konsole VERSION ${RELEASE_SERVICE_VERSION} LANGUAGES CXX)

find_package(ECM ${ECM_MIN_VERSION} REQUIRED NO_MODULE)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${ECM_MODULE_PATH})

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings NO_POLICY_SCOPE)
include(ECMOptionalAddSubdirectory)
include(ECMInstallIcons)
include(ECMSetupVersion)
include(ECMMarkNonGuiExecutable)
include(ECMGenerateHeaders)
include(GenerateExportHeader)
include(FeatureSummary)
include(ECMQtDeclareLoggingCategory)
include(KDEClangFormat)
include(KDEGitCommitHooks)
include(CheckFunctionExists)
include(CheckIncludeFiles)

# Allows passing e.g. -DECM_ENABLE_SANITIZERS='address;undefined' to cmake.
include(ECMEnableSanitizers)

find_package(Qt${QT_MAJOR_VERSION} ${QT_MIN_VERSION} CONFIG REQUIRED
    Core
    Multimedia
    PrintSupport
    Widgets
)

find_package(KF${KF_MAJOR_VERSION} ${KF_MIN_VERSION} REQUIRED
    Bookmarks
    Config
    ConfigWidgets
    CoreAddons
    Crash
    GuiAddons
    I18n
    IconThemes
    KCMUtils
    KIO
    NewStuff
    Notifications
    NotifyConfig
    Parts
    Service
    TextWidgets
    WidgetsAddons
    WindowSystem
    XmlGui
)

if(NOT WIN32)
    find_package(KF${KF_MAJOR_VERSION} ${KF_MIN_VERSION} REQUIRED
        Pty
    )
endif()

# shall we use DBus?
# enabled per default on Linux & BSD systems
set(USE_DBUS_DEFAULT OFF)
if(UNIX AND NOT APPLE AND NOT ANDROID AND NOT HAIKU)
    set(USE_DBUS_DEFAULT ON)
endif()
option(USE_DBUS "Build components using DBus" ${USE_DBUS_DEFAULT})
if(USE_DBUS)
    find_package(Qt${QT_MAJOR_VERSION} ${QT_MIN_VERSION} CONFIG REQUIRED
        DBus
    )
    find_package(KF${KF_MAJOR_VERSION} ${KF_MIN_VERSION} REQUIRED
        DBusAddons
        GlobalAccel
    )
    set(HAVE_DBUS 1)
endif()

set(KFDocTools_MODULE KF${KF_MAJOR_VERSION}DocTools)
find_package(${KFDocTools_MODULE} ${KF_MIN_VERSION})
set_package_properties(${KFDocTools_MODULE} PROPERTIES DESCRIPTION
    "Tools to generate documentation"
    TYPE OPTIONAL
)

find_package(ICU 61.0 COMPONENTS uc i18n REQUIRED)

if(UNIX AND NOT APPLE AND NOT ANDROID AND NOT HAIKU)
    option(WITH_X11 "Build with X11 integration" ON)
endif()

# Check for function GETPWUID
check_symbol_exists(getpwuid "pwd.h" HAVE_GETPWUID)

check_function_exists(malloc_trim HAVE_MALLOC_TRIM)

# See above includes for defaults
add_definitions(
  -DQT_NO_FOREACH
  -DQT_STRICT_ITERATORS
  -DQT_NO_URL_CAST_FROM_STRING
)

set(CMAKE
