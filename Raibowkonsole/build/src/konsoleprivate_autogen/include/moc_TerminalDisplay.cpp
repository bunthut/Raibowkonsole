/****************************************************************************
** Meta object code from reading C++ file 'TerminalDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/terminalDisplay/TerminalDisplay.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerminalDisplay.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole15TerminalDisplayE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::TerminalDisplay::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole15TerminalDisplayE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::TerminalDisplay",
        "requestToggleExpansion",
        "",
        "requestMoveToNewTab",
        "TerminalDisplay*",
        "display",
        "keyPressedSignal",
        "QKeyEvent*",
        "event",
        "mouseSignal",
        "button",
        "column",
        "line",
        "eventType",
        "changedContentSizeSignal",
        "height",
        "width",
        "configureRequest",
        "position",
        "overrideShortcutCheck",
        "keyEvent",
        "bool&",
        "override",
        "activationRequest",
        "xdgActivationToken",
        "sendStringToEmu",
        "local8BitString",
        "compositeFocusChanged",
        "focused",
        "peekPrimaryRequested",
        "doPeek",
        "updateImage",
        "copyToX11Selection",
        "useSavedText",
        "copyToClipboard",
        "Screen::DecodingOptions",
        "options",
        "pasteFromClipboard",
        "appendEnter",
        "pasteFromX11Selection",
        "setFlowControlWarningEnabled",
        "enable",
        "setUsesMouseTracking",
        "on",
        "setBracketedPasteMode",
        "bell",
        "message",
        "printScreen",
        "notificationClicked",
        "blinkTextEvent",
        "blinkCursorEvent",
        "viewScrolledByUser"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestToggleExpansion'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestMoveToNewTab'
        QtMocHelpers::SignalData<void(TerminalDisplay *)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Signal 'keyPressedSignal'
        QtMocHelpers::SignalData<void(QKeyEvent *)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'mouseSignal'
        QtMocHelpers::SignalData<void(int, int, int, int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 }, { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Signal 'changedContentSizeSignal'
        QtMocHelpers::SignalData<void(int, int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 15 }, { QMetaType::Int, 16 },
        }}),
        // Signal 'configureRequest'
        QtMocHelpers::SignalData<void(const QPoint &)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 18 },
        }}),
        // Signal 'overrideShortcutCheck'
        QtMocHelpers::SignalData<void(QKeyEvent *, bool &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 20 }, { 0x80000000 | 21, 22 },
        }}),
        // Signal 'activationRequest'
        QtMocHelpers::SignalData<void(const QString &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 24 },
        }}),
        // Signal 'sendStringToEmu'
        QtMocHelpers::SignalData<void(const QByteArray &)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 26 },
        }}),
        // Signal 'compositeFocusChanged'
        QtMocHelpers::SignalData<void(bool)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 28 },
        }}),
        // Signal 'peekPrimaryRequested'
        QtMocHelpers::SignalData<void(bool)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Slot 'updateImage'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copyToX11Selection'
        QtMocHelpers::SlotData<void(bool)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 33 },
        }}),
        // Slot 'copyToX11Selection'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'copyToClipboard'
        QtMocHelpers::SlotData<void(Screen::DecodingOptions)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'copyToClipboard'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'pasteFromClipboard'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Slot 'pasteFromClipboard'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'pasteFromX11Selection'
        QtMocHelpers::SlotData<void(bool)>(39, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 },
        }}),
        // Slot 'pasteFromX11Selection'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'setFlowControlWarningEnabled'
        QtMocHelpers::SlotData<void(bool)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 41 },
        }}),
        // Slot 'setUsesMouseTracking'
        QtMocHelpers::SlotData<void(bool)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 43 },
        }}),
        // Slot 'setBracketedPasteMode'
        QtMocHelpers::SlotData<void(bool)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 43 },
        }}),
        // Slot 'bell'
        QtMocHelpers::SlotData<void(const QString &)>(45, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 46 },
        }}),
        // Slot 'printScreen'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'notificationClicked'
        QtMocHelpers::SlotData<void(const QString &)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 24 },
        }}),
        // Slot 'blinkTextEvent'
        QtMocHelpers::SlotData<void()>(49, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'blinkCursorEvent'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'viewScrolledByUser'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TerminalDisplay, qt_meta_tag_ZN7Konsole15TerminalDisplayE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::TerminalDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole15TerminalDisplayE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole15TerminalDisplayE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole15TerminalDisplayE_t>.metaTypes,
    nullptr
} };

void Konsole::TerminalDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TerminalDisplay *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestToggleExpansion(); break;
        case 1: _t->requestMoveToNewTab((*reinterpret_cast< std::add_pointer_t<TerminalDisplay*>>(_a[1]))); break;
        case 2: _t->keyPressedSignal((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 3: _t->mouseSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 4: _t->changedContentSizeSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->configureRequest((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 6: _t->overrideShortcutCheck((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[2]))); break;
        case 7: _t->activationRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->sendStringToEmu((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 9: _t->compositeFocusChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->peekPrimaryRequested((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->updateImage(); break;
        case 12: _t->copyToX11Selection((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->copyToX11Selection(); break;
        case 14: _t->copyToClipboard((*reinterpret_cast< std::add_pointer_t<Screen::DecodingOptions>>(_a[1]))); break;
        case 15: _t->copyToClipboard(); break;
        case 16: _t->pasteFromClipboard((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->pasteFromClipboard(); break;
        case 18: _t->pasteFromX11Selection((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 19: _t->pasteFromX11Selection(); break;
        case 20: _t->setFlowControlWarningEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->setUsesMouseTracking((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->setBracketedPasteMode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 23: _t->bell((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->printScreen(); break;
        case 25: _t->notificationClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->blinkTextEvent(); break;
        case 27: _t->blinkCursorEvent(); break;
        case 28: _t->viewScrolledByUser(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TerminalDisplay* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TerminalDisplay::*)()>(_a, &TerminalDisplay::requestToggleExpansion, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TerminalDisplay::*)(TerminalDisplay * )>(_a, &TerminalDisplay::requestMoveToNewTab, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TerminalDisplay::*)(QKeyEvent * )>(_a, &TerminalDisplay::keyPressedSignal, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TerminalDisplay::*)(int , int , int , int )>(_a, &TerminalDisplay::mouseSignal, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TerminalDisplay::*)(int , int )>(_a, &TerminalDisplay::changedContentSizeSignal, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TerminalDisplay::*)(const QPoint & )>(_a, &TerminalDisplay::configureRequest, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TerminalDisplay::*)(QKeyEvent * , bool & )>(_a, &TerminalDisplay::overrideShortcutCheck, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TerminalDisplay::*)(const QString & )>(_a, &TerminalDisplay::activationRequest, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TerminalDisplay::*)(const QByteArray & )>(_a, &TerminalDisplay::sendStringToEmu, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (TerminalDisplay::*)(bool )>(_a, &TerminalDisplay::compositeFocusChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (TerminalDisplay::*)(bool )>(_a, &TerminalDisplay::peekPrimaryRequested, 10))
            return;
    }
}

const QMetaObject *Konsole::TerminalDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::TerminalDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole15TerminalDisplayE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Konsole::TerminalDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
void Konsole::TerminalDisplay::requestToggleExpansion()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Konsole::TerminalDisplay::requestMoveToNewTab(TerminalDisplay * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Konsole::TerminalDisplay::keyPressedSignal(QKeyEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Konsole::TerminalDisplay::mouseSignal(int _t1, int _t2, int _t3, int _t4)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2, _t3, _t4);
}

// SIGNAL 4
void Konsole::TerminalDisplay::changedContentSizeSignal(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void Konsole::TerminalDisplay::configureRequest(const QPoint & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Konsole::TerminalDisplay::overrideShortcutCheck(QKeyEvent * _t1, bool & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}

// SIGNAL 7
void Konsole::TerminalDisplay::activationRequest(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Konsole::TerminalDisplay::sendStringToEmu(const QByteArray & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Konsole::TerminalDisplay::compositeFocusChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Konsole::TerminalDisplay::peekPrimaryRequested(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}
QT_WARNING_POP
