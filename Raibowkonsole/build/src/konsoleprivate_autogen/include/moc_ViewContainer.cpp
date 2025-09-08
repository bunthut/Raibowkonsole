/****************************************************************************
** Meta object code from reading C++ file 'ViewContainer.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/widgets/ViewContainer.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewContainer.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole19TabbedViewContainerE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::TabbedViewContainer::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole19TabbedViewContainerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::TabbedViewContainer",
        "empty",
        "",
        "TabbedViewContainer*",
        "container",
        "newViewRequest",
        "newViewWithProfileRequest",
        "QExplicitlySharedDataPointer<Profile>",
        "profile",
        "moveViewRequest",
        "index",
        "sessionControllerId",
        "activeViewChanged",
        "TerminalDisplay*",
        "view",
        "viewAdded",
        "viewRemoved",
        "detachTab",
        "tabIdx",
        "setColor",
        "color",
        "removeColor",
        "idx",
        "viewDestroyed",
        "konsoleConfigChanged",
        "activateView",
        "xdgActivationToken"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'empty'
        QtMocHelpers::SignalData<void(TabbedViewContainer *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'newViewRequest'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'newViewWithProfileRequest'
        QtMocHelpers::SignalData<void(const QExplicitlySharedDataPointer<Profile> &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 },
        }}),
        // Signal 'moveViewRequest'
        QtMocHelpers::SignalData<void(int, int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 },
        }}),
        // Signal 'activeViewChanged'
        QtMocHelpers::SignalData<void(TerminalDisplay *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'viewAdded'
        QtMocHelpers::SignalData<void(TerminalDisplay *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'viewRemoved'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'detachTab'
        QtMocHelpers::SignalData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Signal 'setColor'
        QtMocHelpers::SignalData<void(int, const QColor &)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::QColor, 20 },
        }}),
        // Signal 'removeColor'
        QtMocHelpers::SignalData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 22 },
        }}),
        // Slot 'viewDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 14 },
        }}),
        // Slot 'konsoleConfigChanged'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'activateView'
        QtMocHelpers::SlotData<void(const QString &)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 26 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TabbedViewContainer, qt_meta_tag_ZN7Konsole19TabbedViewContainerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::TabbedViewContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QTabWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole19TabbedViewContainerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole19TabbedViewContainerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole19TabbedViewContainerE_t>.metaTypes,
    nullptr
} };

void Konsole::TabbedViewContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TabbedViewContainer *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->empty((*reinterpret_cast< std::add_pointer_t<TabbedViewContainer*>>(_a[1]))); break;
        case 1: _t->newViewRequest(); break;
        case 2: _t->newViewWithProfileRequest((*reinterpret_cast< std::add_pointer_t<QExplicitlySharedDataPointer<Profile>>>(_a[1]))); break;
        case 3: _t->moveViewRequest((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->activeViewChanged((*reinterpret_cast< std::add_pointer_t<TerminalDisplay*>>(_a[1]))); break;
        case 5: _t->viewAdded((*reinterpret_cast< std::add_pointer_t<TerminalDisplay*>>(_a[1]))); break;
        case 6: _t->viewRemoved(); break;
        case 7: _t->detachTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setColor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 9: _t->removeColor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->viewDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 11: _t->konsoleConfigChanged(); break;
        case 12: _t->activateView((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< TabbedViewContainer* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (TabbedViewContainer::*)(TabbedViewContainer * )>(_a, &TabbedViewContainer::empty, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabbedViewContainer::*)()>(_a, &TabbedViewContainer::newViewRequest, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabbedViewContainer::*)(const QExplicitlySharedDataPointer<Profile> & )>(_a, &TabbedViewContainer::newViewWithProfileRequest, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabbedViewContainer::*)(int , int )>(_a, &TabbedViewContainer::moveViewRequest, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabbedViewContainer::*)(TerminalDisplay * )>(_a, &TabbedViewContainer::activeViewChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabbedViewContainer::*)(TerminalDisplay * )>(_a, &TabbedViewContainer::viewAdded, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabbedViewContainer::*)()>(_a, &TabbedViewContainer::viewRemoved, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabbedViewContainer::*)(int )>(_a, &TabbedViewContainer::detachTab, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabbedViewContainer::*)(int , const QColor & )>(_a, &TabbedViewContainer::setColor, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (TabbedViewContainer::*)(int )>(_a, &TabbedViewContainer::removeColor, 9))
            return;
    }
}

const QMetaObject *Konsole::TabbedViewContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::TabbedViewContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole19TabbedViewContainerE_t>.strings))
        return static_cast<void*>(this);
    return QTabWidget::qt_metacast(_clname);
}

int Konsole::TabbedViewContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTabWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Konsole::TabbedViewContainer::empty(TabbedViewContainer * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Konsole::TabbedViewContainer::newViewRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Konsole::TabbedViewContainer::newViewWithProfileRequest(const QExplicitlySharedDataPointer<Profile> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Konsole::TabbedViewContainer::moveViewRequest(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void Konsole::TabbedViewContainer::activeViewChanged(TerminalDisplay * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Konsole::TabbedViewContainer::viewAdded(TerminalDisplay * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Konsole::TabbedViewContainer::viewRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Konsole::TabbedViewContainer::detachTab(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Konsole::TabbedViewContainer::setColor(int _t1, const QColor & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1, _t2);
}

// SIGNAL 9
void Konsole::TabbedViewContainer::removeColor(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}
QT_WARNING_POP
