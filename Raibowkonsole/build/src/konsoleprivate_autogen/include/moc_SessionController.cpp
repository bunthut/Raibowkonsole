/****************************************************************************
** Meta object code from reading C++ file 'SessionController.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/session/SessionController.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SessionController.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole17SessionControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::SessionController::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole17SessionControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::SessionController",
        "viewFocused",
        "",
        "SessionController*",
        "controller",
        "rawTitleChanged",
        "requestSplitViewLeftRight",
        "requestSplitViewTopBottom",
        "currentDirectoryChanged",
        "dir",
        "tabRenamedByUser",
        "renamed",
        "tabColoredByUser",
        "set",
        "requestPrint",
        "viewDragAndDropped",
        "openUrl",
        "url",
        "setupPrimaryScreenSpecificActions",
        "use",
        "selectionChanged",
        "selectionEmpty",
        "closeSession",
        "increaseFontSize",
        "decreaseFontSize",
        "resetFontSize",
        "searchClosed",
        "copyInputToAllTabs",
        "copyInputToSelectedTabs",
        "QList<Session*>*",
        "sessions",
        "copyInputToNone",
        "openBrowser",
        "copy",
        "copyInput",
        "copyOutput",
        "copyInputOutput",
        "paste",
        "selectAll",
        "selectMode",
        "selectLine",
        "pasteFromX11Selection",
        "copyInputActionsTriggered",
        "QAction*",
        "action",
        "editCurrentProfile",
        "nextProfile",
        "prevProfile",
        "changeCodec",
        "codec",
        "enableSearchBar",
        "showSearchBar",
        "searchHistory",
        "searchBarEvent",
        "searchFrom",
        "findNextInHistory",
        "findPreviousInHistory",
        "updateMenuIconsAccordingToReverseSearchSetting",
        "changeSearchMatch",
        "autoSaveHistory",
        "stopAutoSaveHistory",
        "saveHistory",
        "showHistoryOptions",
        "clearHistory",
        "clearHistoryAndReset",
        "monitorOnce",
        "once",
        "monitorPrompt",
        "monitor",
        "monitorActivity",
        "monitorSilence",
        "monitorProcessFinish",
        "renameSession",
        "switchProfile",
        "QExplicitlySharedDataPointer<Profile>",
        "profile",
        "setEditProfileActionText",
        "handleWebShortcutAction",
        "configureWebShortcuts",
        "sendSignal",
        "sendForegroundColor",
        "terminator",
        "sendBackgroundColor",
        "toggleReadOnly",
        "toggleAllowMouseTracking",
        "setupSearchBar",
        "prepareSwitchProfileMenu",
        "updateCodecAction",
        "showDisplayContextMenu",
        "position",
        "movementKeyFromSearchBarReceived",
        "QKeyEvent*",
        "event",
        "sessionNotificationsChanged",
        "Session::Notification",
        "notification",
        "enabled",
        "sessionAttributeChanged",
        "sessionReadOnlyChanged",
        "searchTextChanged",
        "text",
        "searchCompleted",
        "success",
        "updateFilterList",
        "viewFocusChangeHandler",
        "focused",
        "interactionHandler",
        "snapshot",
        "highlightMatches",
        "highlight",
        "scrollBackOptionsChanged",
        "mode",
        "lines",
        "sessionResizeRequest",
        "size",
        "trackOutput",
        "updateSearchFilter",
        "zmodemDownload",
        "zmodemUpload",
        "updateCopyAction",
        "updateWebSearchMenu"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'viewFocused'
        QtMocHelpers::SignalData<void(SessionController *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'rawTitleChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestSplitViewLeftRight'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'requestSplitViewTopBottom'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentDirectoryChanged'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Signal 'tabRenamedByUser'
        QtMocHelpers::SignalData<void(bool) const>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 11 },
        }}),
        // Signal 'tabColoredByUser'
        QtMocHelpers::SignalData<void(bool) const>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 13 },
        }}),
        // Signal 'requestPrint'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'viewDragAndDropped'
        QtMocHelpers::SignalData<void(SessionController *)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'openUrl'
        QtMocHelpers::SlotData<void(const QUrl &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QUrl, 17 },
        }}),
        // Slot 'setupPrimaryScreenSpecificActions'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'selectionChanged'
        QtMocHelpers::SlotData<void(const bool)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'closeSession'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'increaseFontSize'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'decreaseFontSize'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resetFontSize'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'searchClosed'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copyInputToAllTabs'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'copyInputToSelectedTabs'
        QtMocHelpers::SlotData<void(QList<Session*> *)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 29, 30 },
        }}),
        // Slot 'copyInputToSelectedTabs'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Slot 'copyInputToNone'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openBrowser'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copy'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyInput'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyOutput'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyInputOutput'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'paste'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectAll'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectMode'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectLine'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pasteFromX11Selection'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'copyInputActionsTriggered'
        QtMocHelpers::SlotData<void(QAction *)>(42, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Slot 'editCurrentProfile'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'nextProfile'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'prevProfile'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeCodec'
        QtMocHelpers::SlotData<void(const QByteArray &)>(48, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QByteArray, 49 },
        }}),
        // Slot 'enableSearchBar'
        QtMocHelpers::SlotData<void(bool)>(50, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 51 },
        }}),
        // Slot 'searchHistory'
        QtMocHelpers::SlotData<void(bool)>(52, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 51 },
        }}),
        // Slot 'searchBarEvent'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'searchFrom'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'findNextInHistory'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'findPreviousInHistory'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateMenuIconsAccordingToReverseSearchSetting'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'changeSearchMatch'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'autoSaveHistory'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'stopAutoSaveHistory'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveHistory'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showHistoryOptions'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearHistory'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearHistoryAndReset'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'monitorOnce'
        QtMocHelpers::SlotData<void(bool)>(65, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 66 },
        }}),
        // Slot 'monitorPrompt'
        QtMocHelpers::SlotData<void(bool)>(67, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 68 },
        }}),
        // Slot 'monitorActivity'
        QtMocHelpers::SlotData<void(bool)>(69, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 68 },
        }}),
        // Slot 'monitorSilence'
        QtMocHelpers::SlotData<void(bool)>(70, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 68 },
        }}),
        // Slot 'monitorProcessFinish'
        QtMocHelpers::SlotData<void(bool)>(71, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 68 },
        }}),
        // Slot 'renameSession'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'switchProfile'
        QtMocHelpers::SlotData<void(const QExplicitlySharedDataPointer<Profile> &)>(73, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 74, 75 },
        }}),
        // Slot 'setEditProfileActionText'
        QtMocHelpers::SlotData<void(const QExplicitlySharedDataPointer<Profile> &)>(76, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 74, 75 },
        }}),
        // Slot 'handleWebShortcutAction'
        QtMocHelpers::SlotData<void(QAction *)>(77, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Slot 'configureWebShortcuts'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sendSignal'
        QtMocHelpers::SlotData<void(QAction *)>(79, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Slot 'sendForegroundColor'
        QtMocHelpers::SlotData<void(uint)>(80, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UInt, 81 },
        }}),
        // Slot 'sendBackgroundColor'
        QtMocHelpers::SlotData<void(uint)>(82, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::UInt, 81 },
        }}),
        // Slot 'toggleReadOnly'
        QtMocHelpers::SlotData<void(QAction *)>(83, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Slot 'toggleAllowMouseTracking'
        QtMocHelpers::SlotData<void(QAction *)>(84, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 43, 44 },
        }}),
        // Slot 'setupSearchBar'
        QtMocHelpers::SlotData<void()>(85, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'prepareSwitchProfileMenu'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateCodecAction'
        QtMocHelpers::SlotData<void(const QByteArray &)>(87, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QByteArray, 49 },
        }}),
        // Slot 'showDisplayContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(88, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 89 },
        }}),
        // Slot 'movementKeyFromSearchBarReceived'
        QtMocHelpers::SlotData<void(QKeyEvent *)>(90, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'sessionNotificationsChanged'
        QtMocHelpers::SlotData<void(Session::Notification, bool)>(93, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 94, 95 }, { QMetaType::Bool, 96 },
        }}),
        // Slot 'sessionAttributeChanged'
        QtMocHelpers::SlotData<void()>(97, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sessionReadOnlyChanged'
        QtMocHelpers::SlotData<void()>(98, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'searchTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(99, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 100 },
        }}),
        // Slot 'searchCompleted'
        QtMocHelpers::SlotData<void(bool)>(101, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 102 },
        }}),
        // Slot 'updateFilterList'
        QtMocHelpers::SlotData<void(const QExplicitlySharedDataPointer<Profile> &)>(103, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 74, 75 },
        }}),
        // Slot 'viewFocusChangeHandler'
        QtMocHelpers::SlotData<void(bool)>(104, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 105 },
        }}),
        // Slot 'interactionHandler'
        QtMocHelpers::SlotData<void()>(106, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'snapshot'
        QtMocHelpers::SlotData<void()>(107, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'highlightMatches'
        QtMocHelpers::SlotData<void(bool)>(108, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 109 },
        }}),
        // Slot 'scrollBackOptionsChanged'
        QtMocHelpers::SlotData<void(int, int)>(110, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 111 }, { QMetaType::Int, 112 },
        }}),
        // Slot 'sessionResizeRequest'
        QtMocHelpers::SlotData<void(const QSize &)>(113, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QSize, 114 },
        }}),
        // Slot 'trackOutput'
        QtMocHelpers::SlotData<void(QKeyEvent *)>(115, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 91, 92 },
        }}),
        // Slot 'updateSearchFilter'
        QtMocHelpers::SlotData<void()>(116, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zmodemDownload'
        QtMocHelpers::SlotData<void()>(117, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'zmodemUpload'
        QtMocHelpers::SlotData<void()>(118, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateCopyAction'
        QtMocHelpers::SlotData<void(const bool)>(119, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'updateWebSearchMenu'
        QtMocHelpers::SlotData<void()>(120, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SessionController, qt_meta_tag_ZN7Konsole17SessionControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::SessionController::staticMetaObject = { {
    QMetaObject::SuperData::link<ViewProperties::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17SessionControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17SessionControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole17SessionControllerE_t>.metaTypes,
    nullptr
} };

void Konsole::SessionController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SessionController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->viewFocused((*reinterpret_cast< std::add_pointer_t<SessionController*>>(_a[1]))); break;
        case 1: _t->rawTitleChanged(); break;
        case 2: _t->requestSplitViewLeftRight(); break;
        case 3: _t->requestSplitViewTopBottom(); break;
        case 4: _t->currentDirectoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->tabRenamedByUser((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->tabColoredByUser((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->requestPrint(); break;
        case 8: _t->viewDragAndDropped((*reinterpret_cast< std::add_pointer_t<SessionController*>>(_a[1]))); break;
        case 9: _t->openUrl((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 10: _t->setupPrimaryScreenSpecificActions((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->closeSession(); break;
        case 13: _t->increaseFontSize(); break;
        case 14: _t->decreaseFontSize(); break;
        case 15: _t->resetFontSize(); break;
        case 16: _t->searchClosed(); break;
        case 17: _t->copyInputToAllTabs(); break;
        case 18: _t->copyInputToSelectedTabs((*reinterpret_cast< std::add_pointer_t<QList<Session*>*>>(_a[1]))); break;
        case 19: _t->copyInputToSelectedTabs(); break;
        case 20: _t->copyInputToNone(); break;
        case 21: _t->openBrowser(); break;
        case 22: _t->copy(); break;
        case 23: _t->copyInput(); break;
        case 24: _t->copyOutput(); break;
        case 25: _t->copyInputOutput(); break;
        case 26: _t->paste(); break;
        case 27: _t->selectAll(); break;
        case 28: _t->selectMode(); break;
        case 29: _t->selectLine(); break;
        case 30: _t->pasteFromX11Selection(); break;
        case 31: _t->copyInputActionsTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 32: _t->editCurrentProfile(); break;
        case 33: _t->nextProfile(); break;
        case 34: _t->prevProfile(); break;
        case 35: _t->changeCodec((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 36: _t->enableSearchBar((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 37: _t->searchHistory((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 38: _t->searchBarEvent(); break;
        case 39: _t->searchFrom(); break;
        case 40: _t->findNextInHistory(); break;
        case 41: _t->findPreviousInHistory(); break;
        case 42: _t->updateMenuIconsAccordingToReverseSearchSetting(); break;
        case 43: _t->changeSearchMatch(); break;
        case 44: _t->autoSaveHistory(); break;
        case 45: _t->stopAutoSaveHistory(); break;
        case 46: _t->saveHistory(); break;
        case 47: _t->showHistoryOptions(); break;
        case 48: _t->clearHistory(); break;
        case 49: _t->clearHistoryAndReset(); break;
        case 50: _t->monitorOnce((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 51: _t->monitorPrompt((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 52: _t->monitorActivity((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 53: _t->monitorSilence((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 54: _t->monitorProcessFinish((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 55: _t->renameSession(); break;
        case 56: _t->switchProfile((*reinterpret_cast< std::add_pointer_t<QExplicitlySharedDataPointer<Profile>>>(_a[1]))); break;
        case 57: _t->setEditProfileActionText((*reinterpret_cast< std::add_pointer_t<QExplicitlySharedDataPointer<Profile>>>(_a[1]))); break;
        case 58: _t->handleWebShortcutAction((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 59: _t->configureWebShortcuts(); break;
        case 60: _t->sendSignal((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 61: _t->sendForegroundColor((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 62: _t->sendBackgroundColor((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 63: _t->toggleReadOnly((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 64: _t->toggleAllowMouseTracking((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 65: _t->setupSearchBar(); break;
        case 66: _t->prepareSwitchProfileMenu(); break;
        case 67: _t->updateCodecAction((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 68: _t->showDisplayContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 69: _t->movementKeyFromSearchBarReceived((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 70: _t->sessionNotificationsChanged((*reinterpret_cast< std::add_pointer_t<Session::Notification>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 71: _t->sessionAttributeChanged(); break;
        case 72: _t->sessionReadOnlyChanged(); break;
        case 73: _t->searchTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 74: _t->searchCompleted((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 75: _t->updateFilterList((*reinterpret_cast< std::add_pointer_t<QExplicitlySharedDataPointer<Profile>>>(_a[1]))); break;
        case 76: _t->viewFocusChangeHandler((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 77: _t->interactionHandler(); break;
        case 78: _t->snapshot(); break;
        case 79: _t->highlightMatches((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 80: _t->scrollBackOptionsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 81: _t->sessionResizeRequest((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 82: _t->trackOutput((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 83: _t->updateSearchFilter(); break;
        case 84: _t->zmodemDownload(); break;
        case 85: _t->zmodemUpload(); break;
        case 86: _t->updateCopyAction((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 87: _t->updateWebSearchMenu(); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SessionController* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SessionController* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 58:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SessionController::*)(SessionController * )>(_a, &SessionController::viewFocused, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionController::*)()>(_a, &SessionController::rawTitleChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionController::*)()>(_a, &SessionController::requestSplitViewLeftRight, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionController::*)()>(_a, &SessionController::requestSplitViewTopBottom, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionController::*)(const QString & )>(_a, &SessionController::currentDirectoryChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionController::*)(bool ) const>(_a, &SessionController::tabRenamedByUser, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionController::*)(bool ) const>(_a, &SessionController::tabColoredByUser, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionController::*)()>(_a, &SessionController::requestPrint, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (SessionController::*)(SessionController * )>(_a, &SessionController::viewDragAndDropped, 8))
            return;
    }
}

const QMetaObject *Konsole::SessionController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::SessionController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17SessionControllerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KXMLGUIClient"))
        return static_cast< KXMLGUIClient*>(this);
    return ViewProperties::qt_metacast(_clname);
}

int Konsole::SessionController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ViewProperties::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 88)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 88;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 88)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 88;
    }
    return _id;
}

// SIGNAL 0
void Konsole::SessionController::viewFocused(SessionController * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Konsole::SessionController::rawTitleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Konsole::SessionController::requestSplitViewLeftRight()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Konsole::SessionController::requestSplitViewTopBottom()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Konsole::SessionController::currentDirectoryChanged(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Konsole::SessionController::tabRenamedByUser(bool _t1)const
{
    QMetaObject::activate<void>(const_cast< Konsole::SessionController *>(this), &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Konsole::SessionController::tabColoredByUser(bool _t1)const
{
    QMetaObject::activate<void>(const_cast< Konsole::SessionController *>(this), &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Konsole::SessionController::requestPrint()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Konsole::SessionController::viewDragAndDropped(SessionController * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}
QT_WARNING_POP
