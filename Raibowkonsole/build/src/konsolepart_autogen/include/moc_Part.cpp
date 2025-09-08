/****************************************************************************
** Meta object code from reading C++ file 'Part.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/Part.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Part.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole4PartE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::Part::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole4PartE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::Part",
        "overrideShortcut",
        "",
        "QKeyEvent*",
        "event",
        "bool&",
        "override",
        "silenceDetected",
        "activityDetected",
        "currentDirectoryChanged",
        "dir",
        "createSession",
        "profileName",
        "directory",
        "showManageProfilesDialog",
        "QWidget*",
        "parent",
        "showEditCurrentProfileDialog",
        "changeSessionSettings",
        "text",
        "openTeletype",
        "ptyMasterFd",
        "runShell",
        "setMonitorSilenceEnabled",
        "enabled",
        "setMonitorActivityEnabled",
        "isBlurEnabled",
        "activeViewChanged",
        "SessionController*",
        "controller",
        "activeViewTitleChanged",
        "ViewProperties*",
        "properties",
        "terminalExited",
        "newTab",
        "overrideTerminalShortcut",
        "notificationChanged",
        "Session::Notification",
        "notification"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'overrideShortcut'
        QtMocHelpers::SignalData<void(QKeyEvent *, bool &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'silenceDetected'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activityDetected'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentDirectoryChanged'
        QtMocHelpers::SignalData<void(const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
        // Slot 'createSession'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 12 }, { QMetaType::QString, 13 },
        }}),
        // Slot 'createSession'
        QtMocHelpers::SlotData<void(const QString &)>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 12 },
        }}),
        // Slot 'createSession'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'showManageProfilesDialog'
        QtMocHelpers::SlotData<void(QWidget *)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Slot 'showEditCurrentProfileDialog'
        QtMocHelpers::SlotData<void(QWidget *)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Slot 'changeSessionSettings'
        QtMocHelpers::SlotData<void(const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Slot 'openTeletype'
        QtMocHelpers::SlotData<void(int, bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 21 }, { QMetaType::Bool, 22 },
        }}),
        // Slot 'openTeletype'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 21 },
        }}),
        // Slot 'setMonitorSilenceEnabled'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'setMonitorActivityEnabled'
        QtMocHelpers::SlotData<void(bool)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'isBlurEnabled'
        QtMocHelpers::SlotData<bool()>(26, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'activeViewChanged'
        QtMocHelpers::SlotData<void(SessionController *)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 28, 29 },
        }}),
        // Slot 'activeViewTitleChanged'
        QtMocHelpers::SlotData<void(ViewProperties *)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 31, 32 },
        }}),
        // Slot 'terminalExited'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newTab'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'overrideTerminalShortcut'
        QtMocHelpers::SlotData<void(QKeyEvent *, bool &)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'notificationChanged'
        QtMocHelpers::SlotData<void(Session::Notification, bool)>(36, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 37, 38 }, { QMetaType::Bool, 24 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Part, qt_meta_tag_ZN7Konsole4PartE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::Part::staticMetaObject = { {
    QMetaObject::SuperData::link<KParts::ReadOnlyPart::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole4PartE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole4PartE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole4PartE_t>.metaTypes,
    nullptr
} };

void Konsole::Part::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Part *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->overrideShortcut((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[2]))); break;
        case 1: _t->silenceDetected(); break;
        case 2: _t->activityDetected(); break;
        case 3: _t->currentDirectoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->createSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->createSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->createSession(); break;
        case 7: _t->showManageProfilesDialog((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 8: _t->showEditCurrentProfileDialog((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 9: _t->changeSessionSettings((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->openTeletype((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 11: _t->openTeletype((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->setMonitorSilenceEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->setMonitorActivityEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: { bool _r = _t->isBlurEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->activeViewChanged((*reinterpret_cast< std::add_pointer_t<SessionController*>>(_a[1]))); break;
        case 16: _t->activeViewTitleChanged((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1]))); break;
        case 17: _t->terminalExited(); break;
        case 18: _t->newTab(); break;
        case 19: _t->overrideTerminalShortcut((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[2]))); break;
        case 20: _t->notificationChanged((*reinterpret_cast< std::add_pointer_t<Session::Notification>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Part::*)(QKeyEvent * , bool & )>(_a, &Part::overrideShortcut, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Part::*)()>(_a, &Part::silenceDetected, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Part::*)()>(_a, &Part::activityDetected, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Part::*)(const QString & )>(_a, &Part::currentDirectoryChanged, 3))
            return;
    }
}

const QMetaObject *Konsole::Part::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::Part::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole4PartE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TerminalInterface"))
        return static_cast< TerminalInterface*>(this);
    if (!strcmp(_clname, "org.kde.TerminalInterface"))
        return static_cast< TerminalInterface*>(this);
    return KParts::ReadOnlyPart::qt_metacast(_clname);
}

int Konsole::Part::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KParts::ReadOnlyPart::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void Konsole::Part::overrideShortcut(QKeyEvent * _t1, bool & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void Konsole::Part::silenceDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Konsole::Part::activityDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Konsole::Part::currentDirectoryChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}
QT_WARNING_POP
