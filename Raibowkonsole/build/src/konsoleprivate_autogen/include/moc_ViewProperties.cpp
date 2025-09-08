/****************************************************************************
** Meta object code from reading C++ file 'ViewProperties.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ViewProperties.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewProperties.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole14ViewPropertiesE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::ViewProperties::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole14ViewPropertiesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::ViewProperties",
        "iconChanged",
        "",
        "ViewProperties*",
        "properties",
        "titleChanged",
        "colorChanged",
        "activity",
        "item",
        "notificationChanged",
        "Session::Notification",
        "notification",
        "enabled",
        "readOnlyChanged",
        "copyInputChanged",
        "rename",
        "fireActivity"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'iconChanged'
        QtMocHelpers::SignalData<void(ViewProperties *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'titleChanged'
        QtMocHelpers::SignalData<void(ViewProperties *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'colorChanged'
        QtMocHelpers::SignalData<void(ViewProperties *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'activity'
        QtMocHelpers::SignalData<void(ViewProperties *)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 8 },
        }}),
        // Signal 'notificationChanged'
        QtMocHelpers::SignalData<void(ViewProperties *, Session::Notification, bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 8 }, { 0x80000000 | 10, 11 }, { QMetaType::Bool, 12 },
        }}),
        // Signal 'readOnlyChanged'
        QtMocHelpers::SignalData<void(ViewProperties *)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 8 },
        }}),
        // Signal 'copyInputChanged'
        QtMocHelpers::SignalData<void(ViewProperties *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 8 },
        }}),
        // Slot 'rename'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'fireActivity'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ViewProperties, qt_meta_tag_ZN7Konsole14ViewPropertiesE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::ViewProperties::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole14ViewPropertiesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole14ViewPropertiesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole14ViewPropertiesE_t>.metaTypes,
    nullptr
} };

void Konsole::ViewProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ViewProperties *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->iconChanged((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1]))); break;
        case 1: _t->titleChanged((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1]))); break;
        case 2: _t->colorChanged((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1]))); break;
        case 3: _t->activity((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1]))); break;
        case 4: _t->notificationChanged((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Session::Notification>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 5: _t->readOnlyChanged((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1]))); break;
        case 6: _t->copyInputChanged((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1]))); break;
        case 7: _t->rename(); break;
        case 8: _t->fireActivity(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ViewProperties* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ViewProperties* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ViewProperties* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ViewProperties* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ViewProperties* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ViewProperties* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ViewProperties* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ViewProperties::*)(ViewProperties * )>(_a, &ViewProperties::iconChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewProperties::*)(ViewProperties * )>(_a, &ViewProperties::titleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewProperties::*)(ViewProperties * )>(_a, &ViewProperties::colorChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewProperties::*)(ViewProperties * )>(_a, &ViewProperties::activity, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewProperties::*)(ViewProperties * , Session::Notification , bool )>(_a, &ViewProperties::notificationChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewProperties::*)(ViewProperties * )>(_a, &ViewProperties::readOnlyChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewProperties::*)(ViewProperties * )>(_a, &ViewProperties::copyInputChanged, 6))
            return;
    }
}

const QMetaObject *Konsole::ViewProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::ViewProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole14ViewPropertiesE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Konsole::ViewProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Konsole::ViewProperties::iconChanged(ViewProperties * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Konsole::ViewProperties::titleChanged(ViewProperties * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Konsole::ViewProperties::colorChanged(ViewProperties * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Konsole::ViewProperties::activity(ViewProperties * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Konsole::ViewProperties::notificationChanged(ViewProperties * _t1, Session::Notification _t2, bool _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2, _t3);
}

// SIGNAL 5
void Konsole::ViewProperties::readOnlyChanged(ViewProperties * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Konsole::ViewProperties::copyInputChanged(ViewProperties * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}
QT_WARNING_POP
