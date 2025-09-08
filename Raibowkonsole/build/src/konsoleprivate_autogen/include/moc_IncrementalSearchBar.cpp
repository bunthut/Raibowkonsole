/****************************************************************************
** Meta object code from reading C++ file 'IncrementalSearchBar.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/widgets/IncrementalSearchBar.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IncrementalSearchBar.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole20IncrementalSearchBarE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::IncrementalSearchBar::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole20IncrementalSearchBarE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::IncrementalSearchBar",
        "searchChanged",
        "",
        "text",
        "findNextClicked",
        "findPreviousClicked",
        "searchFromClicked",
        "highlightMatchesToggled",
        "reverseSearchToggled",
        "matchCaseToggled",
        "matchRegExpToggled",
        "noWrapToggled",
        "closeClicked",
        "searchReturnPressed",
        "searchShiftPlusReturnPressed",
        "unhandledMovementKeyPressed",
        "QKeyEvent*",
        "event",
        "clearLineEdit",
        "notifySearchChanged",
        "updateButtonsAccordingToReverseSearchSetting"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'searchChanged'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'findNextClicked'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'findPreviousClicked'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchFromClicked'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'highlightMatchesToggled'
        QtMocHelpers::SignalData<void(bool)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'reverseSearchToggled'
        QtMocHelpers::SignalData<void(bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'matchCaseToggled'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'matchRegExpToggled'
        QtMocHelpers::SignalData<void(bool)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'noWrapToggled'
        QtMocHelpers::SignalData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Signal 'closeClicked'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchReturnPressed'
        QtMocHelpers::SignalData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'searchShiftPlusReturnPressed'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'unhandledMovementKeyPressed'
        QtMocHelpers::SignalData<void(QKeyEvent *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Slot 'clearLineEdit'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'notifySearchChanged'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateButtonsAccordingToReverseSearchSetting'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IncrementalSearchBar, qt_meta_tag_ZN7Konsole20IncrementalSearchBarE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::IncrementalSearchBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole20IncrementalSearchBarE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole20IncrementalSearchBarE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole20IncrementalSearchBarE_t>.metaTypes,
    nullptr
} };

void Konsole::IncrementalSearchBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IncrementalSearchBar *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->searchChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->findNextClicked(); break;
        case 2: _t->findPreviousClicked(); break;
        case 3: _t->searchFromClicked(); break;
        case 4: _t->highlightMatchesToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->reverseSearchToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->matchCaseToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->matchRegExpToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->noWrapToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->closeClicked(); break;
        case 10: _t->searchReturnPressed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->searchShiftPlusReturnPressed(); break;
        case 12: _t->unhandledMovementKeyPressed((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 13: _t->clearLineEdit(); break;
        case 14: _t->notifySearchChanged(); break;
        case 15: _t->updateButtonsAccordingToReverseSearchSetting(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)(const QString & )>(_a, &IncrementalSearchBar::searchChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)()>(_a, &IncrementalSearchBar::findNextClicked, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)()>(_a, &IncrementalSearchBar::findPreviousClicked, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)()>(_a, &IncrementalSearchBar::searchFromClicked, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)(bool )>(_a, &IncrementalSearchBar::highlightMatchesToggled, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)(bool )>(_a, &IncrementalSearchBar::reverseSearchToggled, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)(bool )>(_a, &IncrementalSearchBar::matchCaseToggled, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)(bool )>(_a, &IncrementalSearchBar::matchRegExpToggled, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)(bool )>(_a, &IncrementalSearchBar::noWrapToggled, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)()>(_a, &IncrementalSearchBar::closeClicked, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)(const QString & )>(_a, &IncrementalSearchBar::searchReturnPressed, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)()>(_a, &IncrementalSearchBar::searchShiftPlusReturnPressed, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (IncrementalSearchBar::*)(QKeyEvent * )>(_a, &IncrementalSearchBar::unhandledMovementKeyPressed, 12))
            return;
    }
}

const QMetaObject *Konsole::IncrementalSearchBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::IncrementalSearchBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole20IncrementalSearchBarE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Konsole::IncrementalSearchBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Konsole::IncrementalSearchBar::searchChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Konsole::IncrementalSearchBar::findNextClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Konsole::IncrementalSearchBar::findPreviousClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Konsole::IncrementalSearchBar::searchFromClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Konsole::IncrementalSearchBar::highlightMatchesToggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Konsole::IncrementalSearchBar::reverseSearchToggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Konsole::IncrementalSearchBar::matchCaseToggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Konsole::IncrementalSearchBar::matchRegExpToggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Konsole::IncrementalSearchBar::noWrapToggled(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Konsole::IncrementalSearchBar::closeClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Konsole::IncrementalSearchBar::searchReturnPressed(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}

// SIGNAL 11
void Konsole::IncrementalSearchBar::searchShiftPlusReturnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Konsole::IncrementalSearchBar::unhandledMovementKeyPressed(QKeyEvent * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}
QT_WARNING_POP
