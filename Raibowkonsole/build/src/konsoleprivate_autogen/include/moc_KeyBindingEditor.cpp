/****************************************************************************
** Meta object code from reading C++ file 'KeyBindingEditor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/KeyBindingEditor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KeyBindingEditor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole16KeyBindingEditorE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::KeyBindingEditor::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole16KeyBindingEditorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::KeyBindingEditor",
        "updateKeyBindingsListRequest",
        "",
        "translatorName",
        "updateTempProfileKeyBindingsRequest",
        "Profile::Property",
        "newTranslatorName",
        "accept",
        "setTranslatorDescription",
        "description",
        "bindingTableItemChanged",
        "QTableWidgetItem*",
        "item",
        "removeSelectedEntry",
        "addNewEntry"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updateKeyBindingsListRequest'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Signal 'updateTempProfileKeyBindingsRequest'
        QtMocHelpers::SignalData<void(Profile::Property, const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 2 }, { QMetaType::QString, 6 },
        }}),
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setTranslatorDescription'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'bindingTableItemChanged'
        QtMocHelpers::SlotData<void(QTableWidgetItem *)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'removeSelectedEntry'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'addNewEntry'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KeyBindingEditor, qt_meta_tag_ZN7Konsole16KeyBindingEditorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::KeyBindingEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole16KeyBindingEditorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole16KeyBindingEditorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole16KeyBindingEditorE_t>.metaTypes,
    nullptr
} };

void Konsole::KeyBindingEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KeyBindingEditor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateKeyBindingsListRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->updateTempProfileKeyBindingsRequest((*reinterpret_cast< std::add_pointer_t<Profile::Property>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->accept(); break;
        case 3: _t->setTranslatorDescription((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->bindingTableItemChanged((*reinterpret_cast< std::add_pointer_t<QTableWidgetItem*>>(_a[1]))); break;
        case 5: _t->removeSelectedEntry(); break;
        case 6: _t->addNewEntry(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (KeyBindingEditor::*)(const QString & )>(_a, &KeyBindingEditor::updateKeyBindingsListRequest, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (KeyBindingEditor::*)(Profile::Property , const QString & )>(_a, &KeyBindingEditor::updateTempProfileKeyBindingsRequest, 1))
            return;
    }
}

const QMetaObject *Konsole::KeyBindingEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::KeyBindingEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole16KeyBindingEditorE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Konsole::KeyBindingEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Konsole::KeyBindingEditor::updateKeyBindingsListRequest(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Konsole::KeyBindingEditor::updateTempProfileKeyBindingsRequest(Profile::Property _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
QT_WARNING_POP
