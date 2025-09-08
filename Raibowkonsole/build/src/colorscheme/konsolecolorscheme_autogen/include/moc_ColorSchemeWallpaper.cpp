/****************************************************************************
** Meta object code from reading C++ file 'ColorSchemeWallpaper.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/colorscheme/ColorSchemeWallpaper.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorSchemeWallpaper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN7Konsole20ColorSchemeWallpaperE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::ColorSchemeWallpaper::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole20ColorSchemeWallpaperE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::ColorSchemeWallpaper",
        "FillStyle",
        "Tile",
        "Stretch",
        "Crop",
        "Adapt",
        "NoScaling",
        "FlipType",
        "NoFlip",
        "Horizontal",
        "Vertical",
        "Both"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'FillStyle'
        QtMocHelpers::EnumData<enum FillStyle>(1, 1, QMC::EnumFlags{}).add({
            {    2, FillStyle::Tile },
            {    3, FillStyle::Stretch },
            {    4, FillStyle::Crop },
            {    5, FillStyle::Adapt },
            {    6, FillStyle::NoScaling },
        }),
        // enum 'FlipType'
        QtMocHelpers::EnumData<enum FlipType>(7, 7, QMC::EnumFlags{}).add({
            {    8, FlipType::NoFlip },
            {    9, FlipType::Horizontal },
            {   10, FlipType::Vertical },
            {   11, FlipType::Both },
        }),
    };
    return QtMocHelpers::metaObjectData<ColorSchemeWallpaper, qt_meta_tag_ZN7Konsole20ColorSchemeWallpaperE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::ColorSchemeWallpaper::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSharedData>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole20ColorSchemeWallpaperE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole20ColorSchemeWallpaperE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole20ColorSchemeWallpaperE_t>.metaTypes,
    nullptr
} };

QT_WARNING_POP
