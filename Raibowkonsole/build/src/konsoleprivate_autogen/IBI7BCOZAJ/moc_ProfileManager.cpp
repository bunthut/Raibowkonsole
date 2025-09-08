/****************************************************************************
** Meta object code from reading C++ file 'ProfileManager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/profile/ProfileManager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProfileManager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole14ProfileManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::ProfileManager::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole14ProfileManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::ProfileManager",
        "profileAdded",
        "",
        "Profile::Ptr",
        "ptr",
        "profileRemoved",
        "profileChanged",
        "shortcutChanged",
        "profile",
        "QKeySequence",
        "newShortcut",
        "saveSettings"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'profileAdded'
        QtMocHelpers::SignalData<void(const Profile::Ptr &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'profileRemoved'
        QtMocHelpers::SignalData<void(const Profile::Ptr &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'profileChanged'
        QtMocHelpers::SignalData<void(const Profile::Ptr &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'shortcutChanged'
        QtMocHelpers::SignalData<void(const Profile::Ptr &, const QKeySequence &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Slot 'saveSettings'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ProfileManager, qt_meta_tag_ZN7Konsole14ProfileManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::ProfileManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole14ProfileManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole14ProfileManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole14ProfileManagerE_t>.metaTypes,
    nullptr
} };

void Konsole::ProfileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ProfileManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->profileAdded((*reinterpret_cast< std::add_pointer_t<Profile::Ptr>>(_a[1]))); break;
        case 1: _t->profileRemoved((*reinterpret_cast< std::add_pointer_t<Profile::Ptr>>(_a[1]))); break;
        case 2: _t->profileChanged((*reinterpret_cast< std::add_pointer_t<Profile::Ptr>>(_a[1]))); break;
        case 3: _t->shortcutChanged((*reinterpret_cast< std::add_pointer_t<Profile::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[2]))); break;
        case 4: _t->saveSettings(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ProfileManager::*)(const Profile::Ptr & )>(_a, &ProfileManager::profileAdded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProfileManager::*)(const Profile::Ptr & )>(_a, &ProfileManager::profileRemoved, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProfileManager::*)(const Profile::Ptr & )>(_a, &ProfileManager::profileChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ProfileManager::*)(const Profile::Ptr & , const QKeySequence & )>(_a, &ProfileManager::shortcutChanged, 3))
            return;
    }
}

const QMetaObject *Konsole::ProfileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::ProfileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole14ProfileManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Konsole::ProfileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Konsole::ProfileManager::profileAdded(const Profile::Ptr & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Konsole::ProfileManager::profileRemoved(const Profile::Ptr & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Konsole::ProfileManager::profileChanged(const Profile::Ptr & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Konsole::ProfileManager::shortcutChanged(const Profile::Ptr & _t1, const QKeySequence & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}
QT_WARNING_POP
