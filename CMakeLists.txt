# Konsole project

# KDE Application Version, managed by release script
set(RELEASE_SERVICE_VERSION_MAJOR "25")
set(RELEASE_SERVICE_VERSION_MINOR "11")
set(RELEASE_SERVICE_VERSION_MICRO "70")
set(RELEASE_SERVICE_VERSION "${RELEASE_SERVICE_VERSION_MAJOR}.${RELEASE_SERVICE_VERSION_MINOR}.${RELEASE_SERVICE_VERSION_MICRO}")

# Do not increase these requirements without a merge-request or/and
# approval from maintainer(s).
# minimal requirements

cmake_minimum_required(VERSION 3.16 FATAL_ERROR)


# Build against Qt5 and KF5
set(QT_MAJOR_VERSION 5)
set(QT_MIN_VERSION "5.15.2")
set(KF_MAJOR_VERSION 5)
set(KF_MIN_VERSION "5.105.0")
set(ECM_MIN_VERSION "5.105.0")

set(KF_PREFIX KF5)


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


find_package(Qt5 ${QT_MIN_VERSION} CONFIG REQUIRED

    Core
    Multimedia
    PrintSupport
    Widgets
)


find_package(KF5 ${KF_MIN_VERSION} REQUIRED

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

    find_package(KF5 ${KF_MIN_VERSION} REQUIRED

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

    find_package(Qt5 ${QT_MIN_VERSION} CONFIG REQUIRED
        DBus
    )
    find_package(KF5 ${KF_MIN_VERSION} REQUIRED

        DBusAddons
        GlobalAccel
    )
    set(HAVE_DBUS 1)
endif()


set(KFDocTools_MODULE KF5DocTools)


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

# C++ standard configuration
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR})

file(GLOB ICONS_SRCS "data/icons/*.png")

option(ENABLE_PLUGIN_SSHMANAGER "Build the SSHManager plugin" ON)
option(ENABLE_PLUGIN_QUICKCOMMANDS "Build the Quick Commands plugin" ON)

add_subdirectory( src )
add_subdirectory( desktop )

if(${KFDocTools_MODULE}_FOUND)
    add_subdirectory( doc/manual )
endif()

add_subdirectory( tools )

# Conditionally install icons for Linux as they may not be provided by the user theme
option(INSTALL_ICONS "Install icons" OFF)
if(INSTALL_ICONS)
    include(ECMInstallIcons)
    ecm_install_icons( ICONS ${ICONS_SRCS} DESTINATION ${KDE_INSTALL_ICONDIR} )
endif()

ecm_qt_install_logging_categories(
    EXPORT KONSOLE
    FILE konsole.categories
    DESTINATION "${KDE_INSTALL_LOGGINGCATEGORIESDIR}"
)

ki18n_install( po )
if(${KFDocTools_MODULE}_FOUND)
    kdoctools_install( po )
endif()

if(ECM_VERSION VERSION_GREATER_EQUAL 5.101.0)
  install(FILES completions/konsole.zsh RENAME _konsole DESTINATION ${KDE_INSTALL_ZSHAUTOCOMPLETEDIR})
endif()

feature_summary(WHAT ALL FATAL_ON_MISSING_REQUIRED_PACKAGES)

# add clang-format target for all our real source files
file(GLOB_RECURSE ALL_CLANG_FORMAT_SOURCE_FILES *.c *.cpp *.h *.hpp)
kde_clang_format(${ALL_CLANG_FORMAT_SOURCE_FILES})
if(ECM_VERSION VERSION_GREATER_EQUAL 5.79.0)
    kde_configure_git_pre_commit_hook(CHECKS CLANG_FORMAT)
endif()
