/****************************************************************************
** Meta object code from reading C++ file 'Session.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/session/Session.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Session.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole7SessionE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::Session::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole7SessionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::Session",
        "D-Bus Interface",
        "org.kde.konsole.Session",
        "started",
        "",
        "finished",
        "Session*",
        "session",
        "sessionAttributeChanged",
        "readOnlyChanged",
        "currentDirectoryChanged",
        "dir",
        "sessionCodecChanged",
        "codec",
        "bellRequest",
        "message",
        "notificationsChanged",
        "Notification",
        "notification",
        "enabled",
        "changeBackgroundColorRequest",
        "changeForegroundColorRequest",
        "zmodemDownloadDetected",
        "zmodemUploadDetected",
        "resizeRequest",
        "size",
        "profileChangeCommandReceived",
        "text",
        "flowControlEnabledChanged",
        "primaryScreenInUse",
        "use",
        "selectionChanged",
        "getForegroundColor",
        "terminator",
        "getBackgroundColor",
        "hostnameChanged",
        "hostname",
        "run",
        "environment",
        "setEnvironment",
        "addEnvironmentEntry",
        "entry",
        "close",
        "closeInNormalWay",
        "closeInForceWay",
        "setSessionAttribute",
        "what",
        "caption",
        "setMonitorPrompt",
        "isMonitorPrompt",
        "setMonitorActivity",
        "isMonitorActivity",
        "setMonitorSilence",
        "isMonitorSilence",
        "setMonitorSilenceSeconds",
        "seconds",
        "setFlowControlEnabled",
        "flowControlEnabled",
        "sendTextToTerminal",
        "eol",
        "sendText",
        "runCommand",
        "command",
        "sendMouseEvent",
        "buttons",
        "column",
        "line",
        "eventType",
        "processId",
        "foregroundProcessId",
        "setCodec",
        "name",
        "setTitle",
        "role",
        "title",
        "shellSessionId",
        "setTabTitleFormat",
        "context",
        "format",
        "tabTitleFormat",
        "setHistorySize",
        "lines",
        "historySize",
        "setProfile",
        "profileName",
        "profile",
        "copyInputToAllSessions",
        "copyInputToSessions",
        "QList<int>",
        "sessions",
        "copyInputToNone",
        "copyingSessions",
        "feederSessions",
        "getAllDisplayedText",
        "removeTrailingEmptyLines",
        "getAllDisplayedTextList",
        "getDisplayedText",
        "startLineOffset",
        "endLineOffset",
        "getDisplayedTextList",
        "activationToken",
        "cookieForRequest",
        "done",
        "QProcess::ExitStatus",
        "fireZModemDownloadDetected",
        "fireZModemUploadDetected",
        "onReceiveBlock",
        "const char*",
        "buf",
        "len",
        "silenceTimerDone",
        "activityTimerDone",
        "resetNotifications",
        "onViewSizeChange",
        "height",
        "width",
        "viewDestroyed",
        "view",
        "zmodemReadStatus",
        "zmodemReadAndSendBlock",
        "zmodemReceiveBlock",
        "data",
        "zmodemFinished",
        "updateFlowControlState",
        "suspended",
        "updateWindowSize",
        "columns",
        "onPrimaryScreenInUse",
        "sessionAttributeRequest",
        "id",
        "keyBindings"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'started'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'finished'
        QtMocHelpers::SignalData<void(Session *)>(5, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Signal 'sessionAttributeChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'readOnlyChanged'
        QtMocHelpers::SignalData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentDirectoryChanged'
        QtMocHelpers::SignalData<void(const QString &)>(10, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Signal 'sessionCodecChanged'
        QtMocHelpers::SignalData<void(const QByteArray &)>(12, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 13 },
        }}),
        // Signal 'bellRequest'
        QtMocHelpers::SignalData<void(const QString &)>(14, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Signal 'notificationsChanged'
        QtMocHelpers::SignalData<void(enum Notification, bool)>(16, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 }, { QMetaType::Bool, 19 },
        }}),
        // Signal 'changeBackgroundColorRequest'
        QtMocHelpers::SignalData<void(const QColor &)>(20, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QColor, 4 },
        }}),
        // Signal 'changeForegroundColorRequest'
        QtMocHelpers::SignalData<void(const QColor &)>(21, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QColor, 4 },
        }}),
        // Signal 'zmodemDownloadDetected'
        QtMocHelpers::SignalData<void()>(22, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'zmodemUploadDetected'
        QtMocHelpers::SignalData<void()>(23, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resizeRequest'
        QtMocHelpers::SignalData<void(const QSize &)>(24, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QSize, 25 },
        }}),
        // Signal 'profileChangeCommandReceived'
        QtMocHelpers::SignalData<void(const QString &)>(26, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Signal 'flowControlEnabledChanged'
        QtMocHelpers::SignalData<void(bool)>(28, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Signal 'primaryScreenInUse'
        QtMocHelpers::SignalData<void(bool)>(29, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Signal 'selectionChanged'
        QtMocHelpers::SignalData<void(const bool)>(31, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 31 },
        }}),
        // Signal 'getForegroundColor'
        QtMocHelpers::SignalData<void(uint)>(32, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 33 },
        }}),
        // Signal 'getBackgroundColor'
        QtMocHelpers::SignalData<void(uint)>(34, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 33 },
        }}),
        // Signal 'hostnameChanged'
        QtMocHelpers::SignalData<void(const QString &)>(35, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 36 },
        }}),
        // Slot 'run'
        QtMocHelpers::SlotData<void()>(37, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'environment'
        QtMocHelpers::SlotData<QStringList() const>(38, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QStringList),
        // Slot 'setEnvironment'
        QtMocHelpers::SlotData<void(const QStringList &)>(39, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QStringList, 38 },
        }}),
        // Slot 'addEnvironmentEntry'
        QtMocHelpers::SlotData<void(const QString &)>(40, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 41 },
        }}),
        // Slot 'close'
        QtMocHelpers::SlotData<void()>(42, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'closeInNormalWay'
        QtMocHelpers::SlotData<bool()>(43, 4, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'closeInForceWay'
        QtMocHelpers::SlotData<bool()>(44, 4, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setSessionAttribute'
        QtMocHelpers::SlotData<void(int, const QString &)>(45, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 46 }, { QMetaType::QString, 47 },
        }}),
        // Slot 'setMonitorPrompt'
        QtMocHelpers::SlotData<void(bool)>(48, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Slot 'isMonitorPrompt'
        QtMocHelpers::SlotData<bool() const>(49, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'setMonitorActivity'
        QtMocHelpers::SlotData<void(bool)>(50, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Slot 'isMonitorActivity'
        QtMocHelpers::SlotData<bool() const>(51, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'setMonitorSilence'
        QtMocHelpers::SlotData<void(bool)>(52, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Slot 'isMonitorSilence'
        QtMocHelpers::SlotData<bool() const>(53, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'setMonitorSilenceSeconds'
        QtMocHelpers::SlotData<void(int)>(54, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 55 },
        }}),
        // Slot 'setFlowControlEnabled'
        QtMocHelpers::SlotData<void(bool)>(56, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'flowControlEnabled'
        QtMocHelpers::SlotData<bool() const>(57, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'sendTextToTerminal'
        QtMocHelpers::SlotData<void(const QString &, const QChar &) const>(58, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 27 }, { QMetaType::QChar, 59 },
        }}),
        // Slot 'sendTextToTerminal'
        QtMocHelpers::SlotData<void(const QString &) const>(58, 4, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'sendText'
        QtMocHelpers::SlotData<void(const QString &) const>(60, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'runCommand'
        QtMocHelpers::SlotData<void(const QString &) const>(61, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 62 },
        }}),
        // Slot 'sendMouseEvent'
        QtMocHelpers::SlotData<void(int, int, int, int)>(63, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 64 }, { QMetaType::Int, 65 }, { QMetaType::Int, 66 }, { QMetaType::Int, 67 },
        }}),
        // Slot 'processId'
        QtMocHelpers::SlotData<int() const>(68, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int),
        // Slot 'foregroundProcessId'
        QtMocHelpers::SlotData<int()>(69, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int),
        // Slot 'setCodec'
        QtMocHelpers::SlotData<bool(const QByteArray &)>(70, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::QByteArray, 71 },
        }}),
        // Slot 'codec'
        QtMocHelpers::SlotData<QByteArray()>(13, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QByteArray),
        // Slot 'setTitle'
        QtMocHelpers::SlotData<void(int, const QString &)>(72, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 73 }, { QMetaType::QString, 74 },
        }}),
        // Slot 'title'
        QtMocHelpers::SlotData<QString(int) const>(74, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString, {{
            { QMetaType::Int, 73 },
        }}),
        // Slot 'shellSessionId'
        QtMocHelpers::SlotData<QString() const>(75, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString),
        // Slot 'setTabTitleFormat'
        QtMocHelpers::SlotData<void(int, const QString &)>(76, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 77 }, { QMetaType::QString, 78 },
        }}),
        // Slot 'tabTitleFormat'
        QtMocHelpers::SlotData<QString(int) const>(79, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString, {{
            { QMetaType::Int, 77 },
        }}),
        // Slot 'setHistorySize'
        QtMocHelpers::SlotData<void(int)>(80, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 81 },
        }}),
        // Slot 'historySize'
        QtMocHelpers::SlotData<int() const>(82, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int),
        // Slot 'setProfile'
        QtMocHelpers::SlotData<void(const QString &)>(83, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 84 },
        }}),
        // Slot 'profile'
        QtMocHelpers::SlotData<QString()>(85, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString),
        // Slot 'copyInputToAllSessions'
        QtMocHelpers::SlotData<bool()>(86, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'copyInputToSessions'
        QtMocHelpers::SlotData<bool(QList<int>)>(87, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { 0x80000000 | 88, 89 },
        }}),
        // Slot 'copyInputToNone'
        QtMocHelpers::SlotData<bool()>(90, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool),
        // Slot 'copyingSessions'
        QtMocHelpers::SlotData<QList<int>()>(91, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 88),
        // Slot 'feederSessions'
        QtMocHelpers::SlotData<QList<int>()>(92, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 88),
        // Slot 'getAllDisplayedText'
        QtMocHelpers::SlotData<QString(bool)>(93, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString, {{
            { QMetaType::Bool, 94 },
        }}),
        // Slot 'getAllDisplayedText'
        QtMocHelpers::SlotData<QString()>(93, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::QString),
        // Slot 'getAllDisplayedTextList'
        QtMocHelpers::SlotData<QStringList(bool)>(95, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QStringList, {{
            { QMetaType::Bool, 94 },
        }}),
        // Slot 'getAllDisplayedTextList'
        QtMocHelpers::SlotData<QStringList()>(95, 4, QMC::AccessPublic | QMC::MethodCloned | QMC::MethodScriptable, QMetaType::QStringList),
        // Slot 'getDisplayedText'
        QtMocHelpers::SlotData<QString(int, int)>(96, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString, {{
            { QMetaType::Int, 97 }, { QMetaType::Int, 98 },
        }}),
        // Slot 'getDisplayedTextList'
        QtMocHelpers::SlotData<QStringList(int, int)>(99, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QStringList, {{
            { QMetaType::Int, 97 }, { QMetaType::Int, 98 },
        }}),
        // Slot 'activationToken'
        QtMocHelpers::SlotData<QString(const QString &) const>(100, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString, {{
            { QMetaType::QString, 101 },
        }}),
        // Slot 'done'
        QtMocHelpers::SlotData<void(int, QProcess::ExitStatus)>(102, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { 0x80000000 | 103, 4 },
        }}),
        // Slot 'fireZModemDownloadDetected'
        QtMocHelpers::SlotData<void()>(104, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'fireZModemUploadDetected'
        QtMocHelpers::SlotData<void()>(105, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onReceiveBlock'
        QtMocHelpers::SlotData<void(const char *, int)>(106, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 107, 108 }, { QMetaType::Int, 109 },
        }}),
        // Slot 'silenceTimerDone'
        QtMocHelpers::SlotData<void()>(110, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'activityTimerDone'
        QtMocHelpers::SlotData<void()>(111, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetNotifications'
        QtMocHelpers::SlotData<void()>(112, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onViewSizeChange'
        QtMocHelpers::SlotData<void(int, int)>(113, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 114 }, { QMetaType::Int, 115 },
        }}),
        // Slot 'viewDestroyed'
        QtMocHelpers::SlotData<void(QObject *)>(116, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QObjectStar, 117 },
        }}),
        // Slot 'zmodemReadStatus'
        QtMocHelpers::SlotData<void()>(118, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zmodemReadAndSendBlock'
        QtMocHelpers::SlotData<void()>(119, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zmodemReceiveBlock'
        QtMocHelpers::SlotData<void(const char *, int)>(120, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 107, 121 }, { QMetaType::Int, 109 },
        }}),
        // Slot 'zmodemFinished'
        QtMocHelpers::SlotData<void()>(122, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateFlowControlState'
        QtMocHelpers::SlotData<void(bool)>(123, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 124 },
        }}),
        // Slot 'updateWindowSize'
        QtMocHelpers::SlotData<void(int, int)>(125, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 81 }, { QMetaType::Int, 126 },
        }}),
        // Slot 'onPrimaryScreenInUse'
        QtMocHelpers::SlotData<void(bool)>(127, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 30 },
        }}),
        // Slot 'sessionAttributeRequest'
        QtMocHelpers::SlotData<void(int, uint)>(128, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 129 }, { QMetaType::UInt, 33 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'name'
        QtMocHelpers::PropertyData<QString>(71, QMetaType::QString, QMC::DefaultPropertyFlags),
        // property 'processId'
        QtMocHelpers::PropertyData<int>(68, QMetaType::Int, QMC::DefaultPropertyFlags),
        // property 'keyBindings'
        QtMocHelpers::PropertyData<QString>(130, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'size'
        QtMocHelpers::PropertyData<QSize>(25, QMetaType::QSize, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<Session, qt_meta_tag_ZN7Konsole7SessionE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject Konsole::Session::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole7SessionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole7SessionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole7SessionE_t>.metaTypes,
    nullptr
} };

void Konsole::Session::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Session *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->finished((*reinterpret_cast< std::add_pointer_t<Session*>>(_a[1]))); break;
        case 2: _t->sessionAttributeChanged(); break;
        case 3: _t->readOnlyChanged(); break;
        case 4: _t->currentDirectoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->sessionCodecChanged((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 6: _t->bellRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->notificationsChanged((*reinterpret_cast< std::add_pointer_t<enum Notification>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 8: _t->changeBackgroundColorRequest((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 9: _t->changeForegroundColorRequest((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 10: _t->zmodemDownloadDetected(); break;
        case 11: _t->zmodemUploadDetected(); break;
        case 12: _t->resizeRequest((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 13: _t->profileChangeCommandReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->flowControlEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->primaryScreenInUse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 16: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->getForegroundColor((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 18: _t->getBackgroundColor((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 19: _t->hostnameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->run(); break;
        case 21: { QStringList _r = _t->environment();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->setEnvironment((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 23: _t->addEnvironmentEntry((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->close(); break;
        case 25: { bool _r = _t->closeInNormalWay();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->closeInForceWay();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->setSessionAttribute((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 28: _t->setMonitorPrompt((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 29: { bool _r = _t->isMonitorPrompt();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->setMonitorActivity((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: { bool _r = _t->isMonitorActivity();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->setMonitorSilence((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: { bool _r = _t->isMonitorSilence();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: _t->setMonitorSilenceSeconds((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 35: _t->setFlowControlEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 36: { bool _r = _t->flowControlEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->sendTextToTerminal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QChar>>(_a[2]))); break;
        case 38: _t->sendTextToTerminal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 39: _t->sendText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 40: _t->runCommand((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 41: _t->sendMouseEvent((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 42: { int _r = _t->processId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 43: { int _r = _t->foregroundProcessId();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 44: { bool _r = _t->setCodec((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { QByteArray _r = _t->codec();
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 46: _t->setTitle((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 47: { QString _r = _t->title((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 48: { QString _r = _t->shellSessionId();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 49: _t->setTabTitleFormat((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 50: { QString _r = _t->tabTitleFormat((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 51: _t->setHistorySize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 52: { int _r = _t->historySize();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 53: _t->setProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 54: { QString _r = _t->profile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 55: { bool _r = _t->copyInputToAllSessions();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 56: { bool _r = _t->copyInputToSessions((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 57: { bool _r = _t->copyInputToNone();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 58: { QList<int> _r = _t->copyingSessions();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 59: { QList<int> _r = _t->feederSessions();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 60: { QString _r = _t->getAllDisplayedText((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 61: { QString _r = _t->getAllDisplayedText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 62: { QStringList _r = _t->getAllDisplayedTextList((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 63: { QStringList _r = _t->getAllDisplayedTextList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 64: { QString _r = _t->getDisplayedText((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 65: { QStringList _r = _t->getDisplayedTextList((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 66: { QString _r = _t->activationToken((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 67: _t->done((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 68: _t->fireZModemDownloadDetected(); break;
        case 69: _t->fireZModemUploadDetected(); break;
        case 70: _t->onReceiveBlock((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 71: _t->silenceTimerDone(); break;
        case 72: _t->activityTimerDone(); break;
        case 73: _t->resetNotifications(); break;
        case 74: _t->onViewSizeChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 75: _t->viewDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 76: _t->zmodemReadStatus(); break;
        case 77: _t->zmodemReadAndSendBlock(); break;
        case 78: _t->zmodemReceiveBlock((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 79: _t->zmodemFinished(); break;
        case 80: _t->updateFlowControlState((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 81: _t->updateWindowSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 82: _t->onPrimaryScreenInUse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 83: _t->sessionAttributeRequest((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Session* >(); break;
            }
            break;
        case 56:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Session::*)()>(_a, &Session::started, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(Session * )>(_a, &Session::finished, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)()>(_a, &Session::sessionAttributeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)()>(_a, &Session::readOnlyChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(const QString & )>(_a, &Session::currentDirectoryChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(const QByteArray & )>(_a, &Session::sessionCodecChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(const QString & )>(_a, &Session::bellRequest, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(Notification , bool )>(_a, &Session::notificationsChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(const QColor & )>(_a, &Session::changeBackgroundColorRequest, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(const QColor & )>(_a, &Session::changeForegroundColorRequest, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)()>(_a, &Session::zmodemDownloadDetected, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)()>(_a, &Session::zmodemUploadDetected, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(const QSize & )>(_a, &Session::resizeRequest, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(const QString & )>(_a, &Session::profileChangeCommandReceived, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(bool )>(_a, &Session::flowControlEnabledChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(bool )>(_a, &Session::primaryScreenInUse, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(const bool )>(_a, &Session::selectionChanged, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(uint )>(_a, &Session::getForegroundColor, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(uint )>(_a, &Session::getBackgroundColor, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (Session::*)(const QString & )>(_a, &Session::hostnameChanged, 19))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->nameTitle(); break;
        case 1: *reinterpret_cast<int*>(_v) = _t->processId(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->keyBindings(); break;
        case 3: *reinterpret_cast<QSize*>(_v) = _t->size(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setKeyBindings(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSize(*reinterpret_cast<QSize*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Konsole::Session::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::Session::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole7SessionE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(this);
    return QObject::qt_metacast(_clname);
}

int Konsole::Session::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 84)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 84;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 84)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 84;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Konsole::Session::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Konsole::Session::finished(Session * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Konsole::Session::sessionAttributeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Konsole::Session::readOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Konsole::Session::currentDirectoryChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Konsole::Session::sessionCodecChanged(const QByteArray & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Konsole::Session::bellRequest(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Konsole::Session::notificationsChanged(Notification _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}

// SIGNAL 8
void Konsole::Session::changeBackgroundColorRequest(const QColor & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Konsole::Session::changeForegroundColorRequest(const QColor & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Konsole::Session::zmodemDownloadDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Konsole::Session::zmodemUploadDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Konsole::Session::resizeRequest(const QSize & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 12, nullptr, _t1);
}

// SIGNAL 13
void Konsole::Session::profileChangeCommandReceived(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void Konsole::Session::flowControlEnabledChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void Konsole::Session::primaryScreenInUse(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void Konsole::Session::selectionChanged(const bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 16, nullptr, _t1);
}

// SIGNAL 17
void Konsole::Session::getForegroundColor(uint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 17, nullptr, _t1);
}

// SIGNAL 18
void Konsole::Session::getBackgroundColor(uint _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void Konsole::Session::hostnameChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}
QT_WARNING_POP
