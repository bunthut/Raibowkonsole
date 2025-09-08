/****************************************************************************
** Meta object code from reading C++ file 'sshmanagerpluginwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/plugins/SSHManager/sshmanagerpluginwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sshmanagerpluginwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20SSHManagerTreeWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto SSHManagerTreeWidget::qt_create_metaobjectdata<qt_meta_tag_ZN20SSHManagerTreeWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SSHManagerTreeWidget",
        "requestNewTab",
        "",
        "quickAccessShortcutChanged",
        "QKeySequence",
        "shortcut",
        "showInfoPane",
        "hideInfoPane",
        "addSshInfo",
        "clearSshInfo",
        "saveEdit",
        "editSshInfo",
        "requestImport",
        "handleTreeClick",
        "Qt::MouseButton",
        "btn",
        "QModelIndex",
        "idx"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'requestNewTab'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'quickAccessShortcutChanged'
        QtMocHelpers::SignalData<void(QKeySequence)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'showInfoPane'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'hideInfoPane'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'addSshInfo'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'clearSshInfo'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'saveEdit'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'editSshInfo'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestImport'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handleTreeClick'
        QtMocHelpers::SlotData<void(Qt::MouseButton, const QModelIndex)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 }, { 0x80000000 | 16, 17 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SSHManagerTreeWidget, qt_meta_tag_ZN20SSHManagerTreeWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SSHManagerTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SSHManagerTreeWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SSHManagerTreeWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20SSHManagerTreeWidgetE_t>.metaTypes,
    nullptr
} };

void SSHManagerTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SSHManagerTreeWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->requestNewTab(); break;
        case 1: _t->quickAccessShortcutChanged((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 2: _t->showInfoPane(); break;
        case 3: _t->hideInfoPane(); break;
        case 4: _t->addSshInfo(); break;
        case 5: _t->clearSshInfo(); break;
        case 6: _t->saveEdit(); break;
        case 7: _t->editSshInfo(); break;
        case 8: _t->requestImport(); break;
        case 9: _t->handleTreeClick((*reinterpret_cast< std::add_pointer_t<Qt::MouseButton>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SSHManagerTreeWidget::*)()>(_a, &SSHManagerTreeWidget::requestNewTab, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SSHManagerTreeWidget::*)(QKeySequence )>(_a, &SSHManagerTreeWidget::quickAccessShortcutChanged, 1))
            return;
    }
}

const QMetaObject *SSHManagerTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SSHManagerTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SSHManagerTreeWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SSHManagerTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void SSHManagerTreeWidget::requestNewTab()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SSHManagerTreeWidget::quickAccessShortcutChanged(QKeySequence _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
