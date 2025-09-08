/****************************************************************************
** Meta object code from reading C++ file 'windowadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "windowadaptor.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowadaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13WindowAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto WindowAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN13WindowAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "WindowAdaptor",
        "D-Bus Interface",
        "org.kde.konsole.Window",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.konsole.Window\">\n    <method name=\""
        "sessionCount\">\n      <arg direction=\"out\" type=\"i\"/>\n    </"
        "method>\n    <method name=\"sessionList\">\n      <arg direction=\""
        "out\" type=\"as\"/>\n    </method>\n    <method name=\"currentSess"
        "ion\">\n      <arg direction=\"out\" type=\"i\"/>\n    </method>\n"
        "    <method name=\"setCurrentSession\">\n      <arg direction=\"in"
        "\" type=\"i\" name=\"sessionId\"/>\n    </method>\n    <method nam"
        "e=\"newSession\">\n      <arg direction=\"out\" type=\"i\"/>\n    "
        "</method>\n    <method name=\"newSession\">\n      <arg direction="
        "\"out\" type=\"i\"/>\n      <arg direction=\"in\" type=\"s\" name="
        "\"profile\"/>\n    </method>\n    <method name=\"newSession\">\n  "
        "    <arg direction=\"out\" type=\"i\"/>\n      <arg direction=\"in"
        "\" type=\"s\" name=\"profile\"/>\n      <arg direction=\"in\" type"
        "=\"s\" name=\"directory\"/>\n    </method>\n    <method name=\"def"
        "aultProfile\">\n      <arg direction=\"out\" type=\"s\"/>\n    </m"
        "ethod>\n    <method name=\"setDefaultProfile\">\n      <arg direct"
        "ion=\"in\" type=\"s\" name=\"profile\"/>\n    </method>\n    <meth"
        "od name=\"profileList\">\n      <arg direction=\"out\" type=\"as\""
        "/>\n    </method>\n    <method name=\"nextSession\"/>\n    <method"
        " name=\"prevSession\"/>\n    <method name=\"moveSessionLeft\"/>\n "
        "   <method name=\"moveSessionRight\"/>\n    <method name=\"setTabW"
        "idthToText\">\n      <arg direction=\"in\" type=\"b\"/>\n    </met"
        "hod>\n    <method name=\"saveLayoutFile\"/>\n    <method name=\"lo"
        "adLayoutFile\"/>\n    <method name=\"loadLayout\">\n      <arg dir"
        "ection=\"in\" type=\"s\" name=\"File\"/>\n    </method>\n    <meth"
        "od name=\"viewHierarchy\">\n      <arg direction=\"out\" type=\"as"
        "\"/>\n    </method>\n    <method name=\"getSplitProportions\">\n  "
        "    <arg direction=\"out\" type=\"ad\"/>\n      <annotation value="
        "\"QList&lt;double&gt;\" name=\"org.qtproject.QtDBus.QtTypeName.Out"
        "0\"/>\n      <arg direction=\"in\" type=\"i\" name=\"splitterId\"/"
        ">\n    </method>\n    <method name=\"createSplit\">\n      <arg di"
        "rection=\"out\" type=\"b\"/>\n      <arg direction=\"in\" type=\"i"
        "\" name=\"viewId\"/>\n      <arg direction=\"in\" type=\"b\" name="
        "\"horizontalSplit\"/>\n    </method>\n    <method name=\"createSpl"
        "itWithExisting\">\n      <arg direction=\"out\" type=\"b\"/>\n    "
        "  <arg direction=\"in\" type=\"i\" name=\"targetSplitterId\"/>\n  "
        "    <arg direction=\"in\" type=\"as\" name=\"widgetInfos\"/>\n    "
        "  <arg direction=\"in\" type=\"i\" name=\"idx\"/>\n      <arg dire"
        "ction=\"in\" type=\"b\" name=\"horizontalSplit\"/>\n    </method>\n"
        "    <method name=\"setCurrentView\">\n      <arg direction=\"out\""
        " type=\"b\"/>\n      <arg direction=\"in\" type=\"i\" name=\"viewI"
        "d\"/>\n    </method>\n    <method name=\"resizeSplits\">\n      <a"
        "rg direction=\"out\" type=\"b\"/>\n      <arg direction=\"in\" typ"
        "e=\"i\" name=\"splitterId\"/>\n      <arg direction=\"in\" type=\""
        "ad\" name=\"percentages\"/>\n      <annotation value=\"QList&lt;do"
        "uble&gt;\" name=\"org.qtproject.QtDBus.QtTypeName.In1\"/>\n    </m"
        "ethod>\n    <method name=\"moveSplitter\">\n      <arg direction=\""
        "out\" type=\"b\"/>\n      <arg direction=\"in\" type=\"i\" name=\""
        "splitterId\"/>\n      <arg direction=\"in\" type=\"i\" name=\"targ"
        "etSplitterId\"/>\n      <arg direction=\"in\" type=\"i\" name=\"id"
        "x\"/>\n    </method>\n    <method name=\"moveView\">\n      <arg d"
        "irection=\"out\" type=\"b\"/>\n      <arg direction=\"in\" type=\""
        "i\" name=\"viewId\"/>\n      <arg direction=\"in\" type=\"i\" name"
        "=\"targetSplitterId\"/>\n      <arg direction=\"in\" type=\"i\" na"
        "me=\"idx\"/>\n    </method>\n  </interface>\n",
        "createSplit",
        "",
        "viewId",
        "horizontalSplit",
        "createSplitWithExisting",
        "targetSplitterId",
        "widgetInfos",
        "idx",
        "currentSession",
        "defaultProfile",
        "getSplitProportions",
        "QList<double>",
        "splitterId",
        "loadLayout",
        "File",
        "loadLayoutFile",
        "moveSessionLeft",
        "moveSessionRight",
        "moveSplitter",
        "moveView",
        "newSession",
        "profile",
        "directory",
        "nextSession",
        "prevSession",
        "profileList",
        "resizeSplits",
        "percentages",
        "saveLayoutFile",
        "sessionCount",
        "sessionList",
        "setCurrentSession",
        "sessionId",
        "setCurrentView",
        "setDefaultProfile",
        "setTabWidthToText",
        "in0",
        "viewHierarchy"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'createSplit'
        QtMocHelpers::SlotData<bool(int, bool)>(5, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 7 }, { QMetaType::Bool, 8 },
        }}),
        // Slot 'createSplitWithExisting'
        QtMocHelpers::SlotData<bool(int, const QStringList &, int, bool)>(9, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 10 }, { QMetaType::QStringList, 11 }, { QMetaType::Int, 12 }, { QMetaType::Bool, 8 },
        }}),
        // Slot 'currentSession'
        QtMocHelpers::SlotData<int()>(13, 6, QMC::AccessPublic, QMetaType::Int),
        // Slot 'defaultProfile'
        QtMocHelpers::SlotData<QString()>(14, 6, QMC::AccessPublic, QMetaType::QString),
        // Slot 'getSplitProportions'
        QtMocHelpers::SlotData<QList<double>(int)>(15, 6, QMC::AccessPublic, 0x80000000 | 16, {{
            { QMetaType::Int, 17 },
        }}),
        // Slot 'loadLayout'
        QtMocHelpers::SlotData<void(const QString &)>(18, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Slot 'loadLayoutFile'
        QtMocHelpers::SlotData<void()>(20, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'moveSessionLeft'
        QtMocHelpers::SlotData<void()>(21, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'moveSessionRight'
        QtMocHelpers::SlotData<void()>(22, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'moveSplitter'
        QtMocHelpers::SlotData<bool(int, int, int)>(23, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 17 }, { QMetaType::Int, 10 }, { QMetaType::Int, 12 },
        }}),
        // Slot 'moveView'
        QtMocHelpers::SlotData<bool(int, int, int)>(24, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 10 }, { QMetaType::Int, 12 },
        }}),
        // Slot 'newSession'
        QtMocHelpers::SlotData<int(const QString &, const QString &)>(25, 6, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QString, 26 }, { QMetaType::QString, 27 },
        }}),
        // Slot 'newSession'
        QtMocHelpers::SlotData<int(const QString &)>(25, 6, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QString, 26 },
        }}),
        // Slot 'newSession'
        QtMocHelpers::SlotData<int()>(25, 6, QMC::AccessPublic, QMetaType::Int),
        // Slot 'nextSession'
        QtMocHelpers::SlotData<void()>(28, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'prevSession'
        QtMocHelpers::SlotData<void()>(29, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'profileList'
        QtMocHelpers::SlotData<QStringList()>(30, 6, QMC::AccessPublic, QMetaType::QStringList),
        // Slot 'resizeSplits'
        QtMocHelpers::SlotData<bool(int, const QList<double> &)>(31, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 17 }, { 0x80000000 | 16, 32 },
        }}),
        // Slot 'saveLayoutFile'
        QtMocHelpers::SlotData<void()>(33, 6, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sessionCount'
        QtMocHelpers::SlotData<int()>(34, 6, QMC::AccessPublic, QMetaType::Int),
        // Slot 'sessionList'
        QtMocHelpers::SlotData<QStringList()>(35, 6, QMC::AccessPublic, QMetaType::QStringList),
        // Slot 'setCurrentSession'
        QtMocHelpers::SlotData<void(int)>(36, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 37 },
        }}),
        // Slot 'setCurrentView'
        QtMocHelpers::SlotData<bool(int)>(38, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'setDefaultProfile'
        QtMocHelpers::SlotData<void(const QString &)>(39, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 26 },
        }}),
        // Slot 'setTabWidthToText'
        QtMocHelpers::SlotData<void(bool)>(40, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 41 },
        }}),
        // Slot 'viewHierarchy'
        QtMocHelpers::SlotData<QStringList()>(42, 6, QMC::AccessPublic, QMetaType::QStringList),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<WindowAdaptor, qt_meta_tag_ZN13WindowAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject WindowAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WindowAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WindowAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13WindowAdaptorE_t>.metaTypes,
    nullptr
} };

void WindowAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WindowAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = _t->createSplit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->createSplitWithExisting((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->currentSession();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->defaultProfile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QList<double> _r = _t->getSplitProportions((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->loadLayout((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->loadLayoutFile(); break;
        case 7: _t->moveSessionLeft(); break;
        case 8: _t->moveSessionRight(); break;
        case 9: { bool _r = _t->moveSplitter((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->moveView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->newSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->newSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->newSession();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->nextSession(); break;
        case 15: _t->prevSession(); break;
        case 16: { QStringList _r = _t->profileList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->resizeSplits((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->saveLayoutFile(); break;
        case 19: { int _r = _t->sessionCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 20: { QStringList _r = _t->sessionList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->setCurrentSession((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: { bool _r = _t->setCurrentView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: _t->setDefaultProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->setTabWidthToText((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: { QStringList _r = _t->viewHierarchy();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *WindowAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WindowAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13WindowAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int WindowAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
