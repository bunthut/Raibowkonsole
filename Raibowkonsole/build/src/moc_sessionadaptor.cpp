/****************************************************************************
** Meta object code from reading C++ file 'sessionadaptor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sessionadaptor.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessionadaptor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14SessionAdaptorE_t {};
} // unnamed namespace

template <> constexpr inline auto SessionAdaptor::qt_create_metaobjectdata<qt_meta_tag_ZN14SessionAdaptorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SessionAdaptor",
        "D-Bus Interface",
        "org.kde.konsole.Session",
        "D-Bus Introspection",
        "  <interface name=\"org.kde.konsole.Session\">\n    <method name=\""
        "environment\">\n      <arg direction=\"out\" type=\"as\"/>\n    </"
        "method>\n    <method name=\"setEnvironment\">\n      <arg directio"
        "n=\"in\" type=\"as\" name=\"environment\"/>\n    </method>\n    <m"
        "ethod name=\"setMonitorPrompt\">\n      <arg direction=\"in\" type"
        "=\"b\"/>\n    </method>\n    <method name=\"isMonitorPrompt\">\n  "
        "    <arg direction=\"out\" type=\"b\"/>\n    </method>\n    <metho"
        "d name=\"setMonitorActivity\">\n      <arg direction=\"in\" type=\""
        "b\"/>\n    </method>\n    <method name=\"isMonitorActivity\">\n   "
        "   <arg direction=\"out\" type=\"b\"/>\n    </method>\n    <method"
        " name=\"setMonitorSilence\">\n      <arg direction=\"in\" type=\"b"
        "\"/>\n    </method>\n    <method name=\"isMonitorSilence\">\n     "
        " <arg direction=\"out\" type=\"b\"/>\n    </method>\n    <method n"
        "ame=\"setMonitorSilenceSeconds\">\n      <arg direction=\"in\" typ"
        "e=\"i\" name=\"seconds\"/>\n    </method>\n    <method name=\"setF"
        "lowControlEnabled\">\n      <arg direction=\"in\" type=\"b\" name="
        "\"enabled\"/>\n    </method>\n    <method name=\"flowControlEnable"
        "d\">\n      <arg direction=\"out\" type=\"b\"/>\n    </method>\n  "
        "  <method name=\"sendText\">\n      <arg direction=\"in\" type=\"s"
        "\" name=\"text\"/>\n    </method>\n    <method name=\"runCommand\""
        ">\n      <arg direction=\"in\" type=\"s\" name=\"command\"/>\n    "
        "</method>\n    <method name=\"sendMouseEvent\">\n      <arg direct"
        "ion=\"in\" type=\"i\" name=\"buttons\"/>\n      <arg direction=\"i"
        "n\" type=\"i\" name=\"column\"/>\n      <arg direction=\"in\" type"
        "=\"i\" name=\"line\"/>\n      <arg direction=\"in\" type=\"i\" nam"
        "e=\"eventType\"/>\n    </method>\n    <method name=\"processId\">\n"
        "      <arg direction=\"out\" type=\"i\"/>\n    </method>\n    <met"
        "hod name=\"foregroundProcessId\">\n      <arg direction=\"out\" ty"
        "pe=\"i\"/>\n    </method>\n    <method name=\"setCodec\">\n      <"
        "arg direction=\"out\" type=\"b\"/>\n      <arg direction=\"in\" ty"
        "pe=\"ay\" name=\"name\"/>\n    </method>\n    <method name=\"codec"
        "\">\n      <arg direction=\"out\" type=\"ay\"/>\n    </method>\n  "
        "  <method name=\"setTitle\">\n      <arg direction=\"in\" type=\"i"
        "\" name=\"role\"/>\n      <arg direction=\"in\" type=\"s\" name=\""
        "title\"/>\n    </method>\n    <method name=\"title\">\n      <arg "
        "direction=\"out\" type=\"s\"/>\n      <arg direction=\"in\" type=\""
        "i\" name=\"role\"/>\n    </method>\n    <method name=\"shellSessio"
        "nId\">\n      <arg direction=\"out\" type=\"s\"/>\n    </method>\n"
        "    <method name=\"setTabTitleFormat\">\n      <arg direction=\"in"
        "\" type=\"i\" name=\"context\"/>\n      <arg direction=\"in\" type"
        "=\"s\" name=\"format\"/>\n    </method>\n    <method name=\"tabTit"
        "leFormat\">\n      <arg direction=\"out\" type=\"s\"/>\n      <arg"
        " direction=\"in\" type=\"i\" name=\"context\"/>\n    </method>\n  "
        "  <method name=\"setHistorySize\">\n      <arg direction=\"in\" ty"
        "pe=\"i\" name=\"lines\"/>\n    </method>\n    <method name=\"histo"
        "rySize\">\n      <arg direction=\"out\" type=\"i\"/>\n    </method"
        ">\n    <method name=\"setProfile\">\n      <arg direction=\"in\" t"
        "ype=\"s\" name=\"profileName\"/>\n    </method>\n    <method name="
        "\"profile\">\n      <arg direction=\"out\" type=\"s\"/>\n    </met"
        "hod>\n    <method name=\"copyInputToAllSessions\">\n      <arg dir"
        "ection=\"out\" type=\"b\"/>\n    </method>\n    <method name=\"cop"
        "yInputToSessions\">\n      <arg direction=\"out\" type=\"b\"/>\n  "
        "    <arg direction=\"in\" type=\"ai\" name=\"sessions\"/>\n      <"
        "annotation value=\"QList&lt;int&gt;\" name=\"org.qtproject.QtDBus."
        "QtTypeName.In0\"/>\n    </method>\n    <method name=\"copyInputToN"
        "one\">\n      <arg direction=\"out\" type=\"b\"/>\n    </method>\n"
        "    <method name=\"copyingSessions\">\n      <arg direction=\"out\""
        " type=\"ai\"/>\n      <annotation value=\"QList&lt;int&gt;\" name="
        "\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n    </method>\n    <me"
        "thod name=\"feederSessions\">\n      <arg direction=\"out\" type=\""
        "ai\"/>\n      <annotation value=\"QList&lt;int&gt;\" name=\"org.qt"
        "project.QtDBus.QtTypeName.Out0\"/>\n    </method>\n    <method nam"
        "e=\"getAllDisplayedText\">\n      <arg direction=\"out\" type=\"s\""
        "/>\n      <arg direction=\"in\" type=\"b\" name=\"removeTrailingEm"
        "ptyLines\"/>\n    </method>\n    <method name=\"getAllDisplayedTex"
        "t\">\n      <arg direction=\"out\" type=\"s\"/>\n    </method>\n  "
        "  <method name=\"getAllDisplayedTextList\">\n      <arg direction="
        "\"out\" type=\"as\"/>\n      <arg direction=\"in\" type=\"b\" name"
        "=\"removeTrailingEmptyLines\"/>\n    </method>\n    <method name=\""
        "getAllDisplayedTextList\">\n      <arg direction=\"out\" type=\"as"
        "\"/>\n    </method>\n    <method name=\"getDisplayedText\">\n     "
        " <arg direction=\"out\" type=\"s\"/>\n      <arg direction=\"in\" "
        "type=\"i\" name=\"startLineOffset\"/>\n      <arg direction=\"in\""
        " type=\"i\" name=\"endLineOffset\"/>\n    </method>\n    <method n"
        "ame=\"getDisplayedTextList\">\n      <arg direction=\"out\" type=\""
        "as\"/>\n      <arg direction=\"in\" type=\"i\" name=\"startLineOff"
        "set\"/>\n      <arg direction=\"in\" type=\"i\" name=\"endLineOffs"
        "et\"/>\n    </method>\n    <method name=\"activationToken\">\n    "
        "  <arg direction=\"out\" type=\"s\"/>\n      <arg direction=\"in\""
        " type=\"s\" name=\"cookieForRequest\"/>\n    </method>\n  </interf"
        "ace>\n",
        "activationToken",
        "",
        "cookieForRequest",
        "codec",
        "copyInputToAllSessions",
        "copyInputToNone",
        "copyInputToSessions",
        "QList<int>",
        "sessions",
        "copyingSessions",
        "environment",
        "feederSessions",
        "flowControlEnabled",
        "foregroundProcessId",
        "getAllDisplayedText",
        "removeTrailingEmptyLines",
        "getAllDisplayedTextList",
        "getDisplayedText",
        "startLineOffset",
        "endLineOffset",
        "getDisplayedTextList",
        "historySize",
        "isMonitorActivity",
        "isMonitorPrompt",
        "isMonitorSilence",
        "processId",
        "profile",
        "runCommand",
        "command",
        "sendMouseEvent",
        "buttons",
        "column",
        "line",
        "eventType",
        "sendText",
        "text",
        "setCodec",
        "name",
        "setEnvironment",
        "setFlowControlEnabled",
        "enabled",
        "setHistorySize",
        "lines",
        "setMonitorActivity",
        "in0",
        "setMonitorPrompt",
        "setMonitorSilence",
        "setMonitorSilenceSeconds",
        "seconds",
        "setProfile",
        "profileName",
        "setTabTitleFormat",
        "context",
        "format",
        "setTitle",
        "role",
        "title",
        "shellSessionId",
        "tabTitleFormat"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'activationToken'
        QtMocHelpers::SlotData<QString(const QString &)>(5, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'codec'
        QtMocHelpers::SlotData<QByteArray()>(8, 6, QMC::AccessPublic, QMetaType::QByteArray),
        // Slot 'copyInputToAllSessions'
        QtMocHelpers::SlotData<bool()>(9, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'copyInputToNone'
        QtMocHelpers::SlotData<bool()>(10, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'copyInputToSessions'
        QtMocHelpers::SlotData<bool(const QList<int> &)>(11, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'copyingSessions'
        QtMocHelpers::SlotData<QList<int>()>(14, 6, QMC::AccessPublic, 0x80000000 | 12),
        // Slot 'environment'
        QtMocHelpers::SlotData<QStringList()>(15, 6, QMC::AccessPublic, QMetaType::QStringList),
        // Slot 'feederSessions'
        QtMocHelpers::SlotData<QList<int>()>(16, 6, QMC::AccessPublic, 0x80000000 | 12),
        // Slot 'flowControlEnabled'
        QtMocHelpers::SlotData<bool()>(17, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'foregroundProcessId'
        QtMocHelpers::SlotData<int()>(18, 6, QMC::AccessPublic, QMetaType::Int),
        // Slot 'getAllDisplayedText'
        QtMocHelpers::SlotData<QString()>(19, 6, QMC::AccessPublic, QMetaType::QString),
        // Slot 'getAllDisplayedText'
        QtMocHelpers::SlotData<QString(bool)>(19, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'getAllDisplayedTextList'
        QtMocHelpers::SlotData<QStringList()>(21, 6, QMC::AccessPublic, QMetaType::QStringList),
        // Slot 'getAllDisplayedTextList'
        QtMocHelpers::SlotData<QStringList(bool)>(21, 6, QMC::AccessPublic, QMetaType::QStringList, {{
            { QMetaType::Bool, 20 },
        }}),
        // Slot 'getDisplayedText'
        QtMocHelpers::SlotData<QString(int, int)>(22, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 23 }, { QMetaType::Int, 24 },
        }}),
        // Slot 'getDisplayedTextList'
        QtMocHelpers::SlotData<QStringList(int, int)>(25, 6, QMC::AccessPublic, QMetaType::QStringList, {{
            { QMetaType::Int, 23 }, { QMetaType::Int, 24 },
        }}),
        // Slot 'historySize'
        QtMocHelpers::SlotData<int()>(26, 6, QMC::AccessPublic, QMetaType::Int),
        // Slot 'isMonitorActivity'
        QtMocHelpers::SlotData<bool()>(27, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isMonitorPrompt'
        QtMocHelpers::SlotData<bool()>(28, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'isMonitorSilence'
        QtMocHelpers::SlotData<bool()>(29, 6, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'processId'
        QtMocHelpers::SlotData<int()>(30, 6, QMC::AccessPublic, QMetaType::Int),
        // Slot 'profile'
        QtMocHelpers::SlotData<QString()>(31, 6, QMC::AccessPublic, QMetaType::QString),
        // Slot 'runCommand'
        QtMocHelpers::SlotData<void(const QString &)>(32, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 33 },
        }}),
        // Slot 'sendMouseEvent'
        QtMocHelpers::SlotData<void(int, int, int, int)>(34, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 35 }, { QMetaType::Int, 36 }, { QMetaType::Int, 37 }, { QMetaType::Int, 38 },
        }}),
        // Slot 'sendText'
        QtMocHelpers::SlotData<void(const QString &)>(39, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 40 },
        }}),
        // Slot 'setCodec'
        QtMocHelpers::SlotData<bool(const QByteArray &)>(41, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QByteArray, 42 },
        }}),
        // Slot 'setEnvironment'
        QtMocHelpers::SlotData<void(const QStringList &)>(43, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 15 },
        }}),
        // Slot 'setFlowControlEnabled'
        QtMocHelpers::SlotData<void(bool)>(44, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
        // Slot 'setHistorySize'
        QtMocHelpers::SlotData<void(int)>(46, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 47 },
        }}),
        // Slot 'setMonitorActivity'
        QtMocHelpers::SlotData<void(bool)>(48, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 49 },
        }}),
        // Slot 'setMonitorPrompt'
        QtMocHelpers::SlotData<void(bool)>(50, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 49 },
        }}),
        // Slot 'setMonitorSilence'
        QtMocHelpers::SlotData<void(bool)>(51, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 49 },
        }}),
        // Slot 'setMonitorSilenceSeconds'
        QtMocHelpers::SlotData<void(int)>(52, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 53 },
        }}),
        // Slot 'setProfile'
        QtMocHelpers::SlotData<void(const QString &)>(54, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 55 },
        }}),
        // Slot 'setTabTitleFormat'
        QtMocHelpers::SlotData<void(int, const QString &)>(56, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 57 }, { QMetaType::QString, 58 },
        }}),
        // Slot 'setTitle'
        QtMocHelpers::SlotData<void(int, const QString &)>(59, 6, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 60 }, { QMetaType::QString, 61 },
        }}),
        // Slot 'shellSessionId'
        QtMocHelpers::SlotData<QString()>(62, 6, QMC::AccessPublic, QMetaType::QString),
        // Slot 'tabTitleFormat'
        QtMocHelpers::SlotData<QString(int)>(63, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 57 },
        }}),
        // Slot 'title'
        QtMocHelpers::SlotData<QString(int)>(61, 6, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 60 },
        }}),
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
    return QtMocHelpers::metaObjectData<SessionAdaptor, qt_meta_tag_ZN14SessionAdaptorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject SessionAdaptor::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractAdaptor::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SessionAdaptorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SessionAdaptorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14SessionAdaptorE_t>.metaTypes,
    nullptr
} };

void SessionAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SessionAdaptor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QString _r = _t->activationToken((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QByteArray _r = _t->codec();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->copyInputToAllSessions();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->copyInputToNone();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->copyInputToSessions((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { QList<int> _r = _t->copyingSessions();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QStringList _r = _t->environment();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 7: { QList<int> _r = _t->feederSessions();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->flowControlEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->foregroundProcessId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->getAllDisplayedText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->getAllDisplayedText((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QStringList _r = _t->getAllDisplayedTextList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 13: { QStringList _r = _t->getAllDisplayedTextList((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->getDisplayedText((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QStringList _r = _t->getDisplayedTextList((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 16: { int _r = _t->historySize();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: { bool _r = _t->isMonitorActivity();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 18: { bool _r = _t->isMonitorPrompt();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: { bool _r = _t->isMonitorSilence();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { int _r = _t->processId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 21: { QString _r = _t->profile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->runCommand((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->sendMouseEvent((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 24: _t->sendText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: { bool _r = _t->setCodec((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->setEnvironment((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 27: _t->setFlowControlEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->setHistorySize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->setMonitorActivity((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->setMonitorPrompt((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->setMonitorSilence((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->setMonitorSilenceSeconds((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 33: _t->setProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 34: _t->setTabTitleFormat((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 35: _t->setTitle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 36: { QString _r = _t->shellSessionId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 37: { QString _r = _t->tabTitleFormat((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 38: { QString _r = _t->title((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *SessionAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SessionAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14SessionAdaptorE_t>.strings))
        return static_cast<void*>(this);
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int SessionAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    }
    return _id;
}
QT_WARNING_POP
