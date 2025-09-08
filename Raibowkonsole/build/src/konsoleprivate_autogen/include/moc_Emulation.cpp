/****************************************************************************
** Meta object code from reading C++ file 'Emulation.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/Emulation.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Emulation.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole9EmulationE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::Emulation::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole9EmulationE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::Emulation",
        "sendData",
        "",
        "data",
        "useUtf8Request",
        "bell",
        "zmodemDownloadDetected",
        "zmodemUploadDetected",
        "programRequestsMouseTracking",
        "usesMouseTracking",
        "enableAlternateScrolling",
        "enable",
        "programBracketedPasteModeChanged",
        "bracketedPasteMode",
        "outputChanged",
        "sessionAttributeChanged",
        "attribute",
        "newValue",
        "imageSizeChanged",
        "lineCount",
        "columnCount",
        "imageSizeInitialized",
        "imageResizeRequest",
        "sizz",
        "profileChangeCommandReceived",
        "text",
        "flowControlKeyPressed",
        "suspendKeyPressed",
        "primaryScreenInUse",
        "use",
        "selectionChanged",
        "selectionEmpty",
        "sessionAttributeRequest",
        "id",
        "terminator",
        "setCursorStyleRequest",
        "Enum::CursorShapeEnum",
        "shape",
        "isBlinking",
        "customColor",
        "resetCursorStyleRequest",
        "toggleUrlExtractionRequest",
        "updateDroppedLines",
        "droppedLines",
        "setImageSize",
        "lines",
        "columns",
        "sendText",
        "sendKeyEvent",
        "QKeyEvent*",
        "sendMouseEvent",
        "buttons",
        "column",
        "line",
        "eventType",
        "sendString",
        "string",
        "receiveData",
        "const char*",
        "length",
        "focusChanged",
        "focused",
        "setPeekPrimary",
        "doPeek",
        "bufferedUpdate",
        "checkScreenInUse",
        "checkSelectedText",
        "showBulk",
        "setUsesMouseTracking",
        "bracketedPasteModeChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sendData'
        QtMocHelpers::SignalData<void(const QByteArray &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 3 },
        }}),
        // Signal 'useUtf8Request'
        QtMocHelpers::SignalData<void(bool)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'bell'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'zmodemDownloadDetected'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'zmodemUploadDetected'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'programRequestsMouseTracking'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Signal 'enableAlternateScrolling'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'programBracketedPasteModeChanged'
        QtMocHelpers::SignalData<void(bool)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Signal 'outputChanged'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sessionAttributeChanged'
        QtMocHelpers::SignalData<void(int, const QString &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 16 }, { QMetaType::QString, 17 },
        }}),
        // Signal 'imageSizeChanged'
        QtMocHelpers::SignalData<void(int, int)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 19 }, { QMetaType::Int, 20 },
        }}),
        // Signal 'imageSizeInitialized'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'imageResizeRequest'
        QtMocHelpers::SignalData<void(const QSize &)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QSize, 23 },
        }}),
        // Signal 'profileChangeCommandReceived'
        QtMocHelpers::SignalData<void(const QString &)>(24, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Signal 'flowControlKeyPressed'
        QtMocHelpers::SignalData<void(bool)>(26, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 27 },
        }}),
        // Signal 'primaryScreenInUse'
        QtMocHelpers::SignalData<void(bool)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 29 },
        }}),
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void(const bool)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 31 },
        }}),
        // Signal 'sessionAttributeRequest'
        QtMocHelpers::SignalData<void(int, uint)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 33 }, { QMetaType::UInt, 34 },
        }}),
        // Signal 'setCursorStyleRequest'
        QtMocHelpers::SignalData<void(Enum::CursorShapeEnum, bool, const QColor &)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 36, 37 }, { QMetaType::Bool, 38 }, { QMetaType::QColor, 39 },
        }}),
        // Signal 'setCursorStyleRequest'
        QtMocHelpers::SignalData<void(Enum::CursorShapeEnum, bool)>(35, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 36, 37 }, { QMetaType::Bool, 38 },
        }}),
        // Signal 'setCursorStyleRequest'
        QtMocHelpers::SignalData<void(Enum::CursorShapeEnum)>(35, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 36, 37 },
        }}),
        // Signal 'setCursorStyleRequest'
        QtMocHelpers::SignalData<void()>(35, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Signal 'resetCursorStyleRequest'
        QtMocHelpers::SignalData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'toggleUrlExtractionRequest'
        QtMocHelpers::SignalData<void()>(41, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updateDroppedLines'
        QtMocHelpers::SignalData<void(int)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 43 },
        }}),
        // Slot 'setImageSize'
        QtMocHelpers::SlotData<void(int, int)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 45 }, { QMetaType::Int, 46 },
        }}),
        // Slot 'sendText'
        QtMocHelpers::SlotData<void(const QString &)>(47, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Slot 'sendKeyEvent'
        QtMocHelpers::SlotData<void(QKeyEvent *)>(48, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 49, 2 },
        }}),
        // Slot 'sendMouseEvent'
        QtMocHelpers::SlotData<void(int, int, int, int)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 51 }, { QMetaType::Int, 52 }, { QMetaType::Int, 53 }, { QMetaType::Int, 54 },
        }}),
        // Slot 'sendString'
        QtMocHelpers::SlotData<void(const QByteArray &)>(55, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 56 },
        }}),
        // Slot 'receiveData'
        QtMocHelpers::SlotData<void(const char *, int)>(57, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 58, 25 }, { QMetaType::Int, 59 },
        }}),
        // Slot 'focusChanged'
        QtMocHelpers::SlotData<void(bool)>(60, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 61 },
        }}),
        // Slot 'setPeekPrimary'
        QtMocHelpers::SlotData<void(const bool)>(62, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 63 },
        }}),
        // Slot 'bufferedUpdate'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'checkScreenInUse'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'checkSelectedText'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'showBulk'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setUsesMouseTracking'
        QtMocHelpers::SlotData<void(bool)>(68, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'bracketedPasteModeChanged'
        QtMocHelpers::SlotData<void(bool)>(69, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Emulation, qt_meta_tag_ZN7Konsole9EmulationE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::Emulation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole9EmulationE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole9EmulationE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole9EmulationE_t>.metaTypes,
    nullptr
} };

void Konsole::Emulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Emulation *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->useUtf8Request((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->bell(); break;
        case 3: _t->zmodemDownloadDetected(); break;
        case 4: _t->zmodemUploadDetected(); break;
        case 5: _t->programRequestsMouseTracking((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->enableAlternateScrolling((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->programBracketedPasteModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->outputChanged(); break;
        case 9: _t->sessionAttributeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->imageSizeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 11: _t->imageSizeInitialized(); break;
        case 12: _t->imageResizeRequest((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 13: _t->profileChangeCommandReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->flowControlKeyPressed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->primaryScreenInUse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->sessionAttributeRequest((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
        case 18: _t->setCursorStyleRequest((*reinterpret_cast< std::add_pointer_t<Enum::CursorShapeEnum>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[3]))); break;
        case 19: _t->setCursorStyleRequest((*reinterpret_cast< std::add_pointer_t<Enum::CursorShapeEnum>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 20: _t->setCursorStyleRequest((*reinterpret_cast< std::add_pointer_t<Enum::CursorShapeEnum>>(_a[1]))); break;
        case 21: _t->setCursorStyleRequest(); break;
        case 22: _t->resetCursorStyleRequest(); break;
        case 23: _t->toggleUrlExtractionRequest(); break;
        case 24: _t->updateDroppedLines((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->setImageSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 26: _t->sendText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->sendKeyEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 28: _t->sendMouseEvent((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 29: _t->sendString((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 30: _t->receiveData((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 31: _t->focusChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->setPeekPrimary((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->bufferedUpdate(); break;
        case 34: _t->checkScreenInUse(); break;
        case 35: _t->checkSelectedText(); break;
        case 36: _t->showBulk(); break;
        case 37: _t->setUsesMouseTracking((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 38: _t->bracketedPasteModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(const QByteArray & )>(_a, &Emulation::sendData, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(bool )>(_a, &Emulation::useUtf8Request, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)()>(_a, &Emulation::bell, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)()>(_a, &Emulation::zmodemDownloadDetected, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)()>(_a, &Emulation::zmodemUploadDetected, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(bool )>(_a, &Emulation::programRequestsMouseTracking, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(bool )>(_a, &Emulation::enableAlternateScrolling, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(bool )>(_a, &Emulation::programBracketedPasteModeChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)()>(_a, &Emulation::outputChanged, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(int , const QString & )>(_a, &Emulation::sessionAttributeChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(int , int )>(_a, &Emulation::imageSizeChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)()>(_a, &Emulation::imageSizeInitialized, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(const QSize & )>(_a, &Emulation::imageResizeRequest, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(const QString & )>(_a, &Emulation::profileChangeCommandReceived, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(bool )>(_a, &Emulation::flowControlKeyPressed, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(bool )>(_a, &Emulation::primaryScreenInUse, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(const bool )>(_a, &Emulation::selectionChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(int , uint )>(_a, &Emulation::sessionAttributeRequest, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(Enum::CursorShapeEnum , bool , const QColor & )>(_a, &Emulation::setCursorStyleRequest, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)()>(_a, &Emulation::resetCursorStyleRequest, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)()>(_a, &Emulation::toggleUrlExtractionRequest, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (Emulation::*)(int )>(_a, &Emulation::updateDroppedLines, 24))
            return;
    }
}

const QMetaObject *Konsole::Emulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::Emulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole9EmulationE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Konsole::Emulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void Konsole::Emulation::sendData(const QByteArray & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Konsole::Emulation::useUtf8Request(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Konsole::Emulation::bell()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Konsole::Emulation::zmodemDownloadDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Konsole::Emulation::zmodemUploadDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Konsole::Emulation::programRequestsMouseTracking(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Konsole::Emulation::enableAlternateScrolling(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Konsole::Emulation::programBracketedPasteModeChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Konsole::Emulation::outputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Konsole::Emulation::sessionAttributeChanged(int _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1, _t2);
}

// SIGNAL 10
void Konsole::Emulation::imageSizeChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1, _t2);
}

// SIGNAL 11
void Konsole::Emulation::imageSizeInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Konsole::Emulation::imageResizeRequest(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void Konsole::Emulation::profileChangeCommandReceived(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void Konsole::Emulation::flowControlKeyPressed(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void Konsole::Emulation::primaryScreenInUse(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void Konsole::Emulation::selectionChanged(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void Konsole::Emulation::sessionAttributeRequest(int _t1, uint _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1, _t2);
}

// SIGNAL 18
void Konsole::Emulation::setCursorStyleRequest(Enum::CursorShapeEnum _t1, bool _t2, const QColor & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1, _t2, _t3);
}

// SIGNAL 22
void Konsole::Emulation::resetCursorStyleRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void Konsole::Emulation::toggleUrlExtractionRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void Konsole::Emulation::updateDroppedLines(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 24, nullptr, _t1);
}
QT_WARNING_POP
