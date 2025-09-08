/****************************************************************************
** Meta object code from reading C++ file 'ViewManager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ViewManager.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewManager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole11ViewManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::ViewManager::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole11ViewManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::ViewManager",
        "D-Bus Interface",
        "org.kde.konsole.Window",
        "empty",
        "",
        "terminalsDetached",
        "ViewSplitter*",
        "splitter",
        "QHash<TerminalDisplay*,Session*>",
        "sessionsMap",
        "activeViewChanged",
        "SessionController*",
        "controller",
        "unplugController",
        "viewPropertiesChanged",
        "QList<ViewProperties*>",
        "propertiesList",
        "setMenuBarVisibleRequest",
        "updateWindowIcon",
        "blurSettingChanged",
        "newViewRequest",
        "newViewWithProfileRequest",
        "QExplicitlySharedDataPointer<Profile>",
        "profile",
        "activationRequest",
        "xdgActivationToken",
        "sessionCount",
        "sessionList",
        "currentSession",
        "setCurrentSession",
        "sessionId",
        "newSession",
        "directory",
        "defaultProfile",
        "setDefaultProfile",
        "profileList",
        "nextSession",
        "prevSession",
        "moveSessionLeft",
        "moveSessionRight",
        "setTabWidthToText",
        "saveLayoutFile",
        "saveLayout",
        "fileName",
        "loadLayoutFile",
        "loadLayout",
        "File",
        "viewHierarchy",
        "getSplitProportions",
        "QList<double>",
        "splitterId",
        "createSplit",
        "viewId",
        "horizontalSplit",
        "createSplitWithExisting",
        "targetSplitterId",
        "widgetInfos",
        "idx",
        "setCurrentView",
        "resizeSplits",
        "percentages",
        "moveSplitter",
        "moveView",
        "splitLeftRight",
        "splitTopBottom",
        "splitAuto",
        "fromNextTab",
        "splitLeftRightNextTab",
        "splitTopBottomNextTab",
        "splitAutoNextTab",
        "expandActiveContainer",
        "shrinkActiveContainer",
        "equalSizeAllContainers",
        "detachActiveView",
        "detachActiveTab",
        "sessionFinished",
        "Session*",
        "session",
        "viewDestroyed",
        "QWidget*",
        "view",
        "activateView",
        "TerminalDisplay*",
        "focusUp",
        "focusDown",
        "focusLeft",
        "focusRight",
        "nextView",
        "previousView",
        "lastView",
        "lastUsedView",
        "lastUsedViewReverse",
        "nextContainer",
        "toggleTwoViews",
        "containerViewsChanged",
        "TabbedViewContainer*",
        "container",
        "profileChanged",
        "updateViewsForSession",
        "moveActiveViewLeft",
        "moveActiveViewRight",
        "switchToView",
        "index",
        "switchToTerminalDisplay",
        "terminalDisplay",
        "controllerChanged",
        "forgetController",
        "detachTab",
        "tabIdx",
        "semanticSetupBash",
        "toggleSemanticHints",
        "toggleLineNumbers"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'empty'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'terminalsDetached'
        QtMocHelpers::SignalData<void(ViewSplitter *, QHash<TerminalDisplay*,Session*>)>(5, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 8, 9 },
        }}),
        // Signal 'activeViewChanged'
        QtMocHelpers::SignalData<void(SessionController *)>(10, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'unplugController'
        QtMocHelpers::SignalData<void(SessionController *)>(13, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Signal 'viewPropertiesChanged'
        QtMocHelpers::SignalData<void(const QList<ViewProperties*> &)>(14, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Signal 'setMenuBarVisibleRequest'
        QtMocHelpers::SignalData<void(bool)>(17, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'updateWindowIcon'
        QtMocHelpers::SignalData<void()>(18, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'blurSettingChanged'
        QtMocHelpers::SignalData<void(bool)>(19, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Signal 'newViewRequest'
        QtMocHelpers::SignalData<void()>(20, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'newViewWithProfileRequest'
        QtMocHelpers::SignalData<void(const QExplicitlySharedDataPointer<Profile> &)>(21, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Signal 'activationRequest'
        QtMocHelpers::SignalData<void(const QString &)>(24, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 25 },
        }}),
        // Slot 'sessionCount'
        QtMocHelpers::SlotData<int()>(26, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int),
        // Slot 'sessionList'
        QtMocHelpers::SlotData<QStringList()>(27, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QStringList),
        // Slot 'currentSession'
        QtMocHelpers::SlotData<int()>(28, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int),
        // Slot 'setCurrentSession'
        QtMocHelpers::SlotData<void(int)>(29, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Int, 30 },
        }}),
        // Slot 'newSession'
        QtMocHelpers::SlotData<int()>(31, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int),
        // Slot 'newSession'
        QtMocHelpers::SlotData<int(const QString &)>(31, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int, {{
            { QMetaType::QString, 23 },
        }}),
        // Slot 'newSession'
        QtMocHelpers::SlotData<int(const QString &, const QString &)>(31, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Int, {{
            { QMetaType::QString, 23 }, { QMetaType::QString, 32 },
        }}),
        // Slot 'defaultProfile'
        QtMocHelpers::SlotData<QString()>(33, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QString),
        // Slot 'setDefaultProfile'
        QtMocHelpers::SlotData<void(const QString &)>(34, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 23 },
        }}),
        // Slot 'profileList'
        QtMocHelpers::SlotData<QStringList()>(35, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QStringList),
        // Slot 'nextSession'
        QtMocHelpers::SlotData<void()>(36, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'prevSession'
        QtMocHelpers::SlotData<void()>(37, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'moveSessionLeft'
        QtMocHelpers::SlotData<void()>(38, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'moveSessionRight'
        QtMocHelpers::SlotData<void()>(39, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'setTabWidthToText'
        QtMocHelpers::SlotData<void(bool)>(40, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::Bool, 4 },
        }}),
        // Slot 'saveLayoutFile'
        QtMocHelpers::SlotData<void()>(41, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'saveLayout'
        QtMocHelpers::SlotData<void(QString)>(42, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 43 },
        }}),
        // Slot 'loadLayoutFile'
        QtMocHelpers::SlotData<void()>(44, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void),
        // Slot 'loadLayout'
        QtMocHelpers::SlotData<void(QString)>(45, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Void, {{
            { QMetaType::QString, 46 },
        }}),
        // Slot 'viewHierarchy'
        QtMocHelpers::SlotData<QStringList()>(47, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::QStringList),
        // Slot 'getSplitProportions'
        QtMocHelpers::SlotData<QList<double>(int)>(48, 4, QMC::AccessPublic | QMC::MethodScriptable, 0x80000000 | 49, {{
            { QMetaType::Int, 50 },
        }}),
        // Slot 'createSplit'
        QtMocHelpers::SlotData<bool(int, bool)>(51, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::Int, 52 }, { QMetaType::Bool, 53 },
        }}),
        // Slot 'createSplitWithExisting'
        QtMocHelpers::SlotData<bool(int, QStringList, int, bool)>(54, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::Int, 55 }, { QMetaType::QStringList, 56 }, { QMetaType::Int, 57 }, { QMetaType::Bool, 53 },
        }}),
        // Slot 'setCurrentView'
        QtMocHelpers::SlotData<bool(int)>(58, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::Int, 52 },
        }}),
        // Slot 'resizeSplits'
        QtMocHelpers::SlotData<bool(int, QList<double>)>(59, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::Int, 50 }, { 0x80000000 | 49, 60 },
        }}),
        // Slot 'moveSplitter'
        QtMocHelpers::SlotData<bool(int, int, int)>(61, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::Int, 50 }, { QMetaType::Int, 55 }, { QMetaType::Int, 57 },
        }}),
        // Slot 'moveView'
        QtMocHelpers::SlotData<bool(int, int, int)>(62, 4, QMC::AccessPublic | QMC::MethodScriptable, QMetaType::Bool, {{
            { QMetaType::Int, 52 }, { QMetaType::Int, 55 }, { QMetaType::Int, 57 },
        }}),
        // Slot 'splitLeftRight'
        QtMocHelpers::SlotData<void()>(63, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'splitTopBottom'
        QtMocHelpers::SlotData<void()>(64, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'splitAuto'
        QtMocHelpers::SlotData<void(bool)>(65, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 66 },
        }}),
        // Slot 'splitAuto'
        QtMocHelpers::SlotData<void()>(65, 4, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'splitLeftRightNextTab'
        QtMocHelpers::SlotData<void()>(67, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'splitTopBottomNextTab'
        QtMocHelpers::SlotData<void()>(68, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'splitAutoNextTab'
        QtMocHelpers::SlotData<void()>(69, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'expandActiveContainer'
        QtMocHelpers::SlotData<void()>(70, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'shrinkActiveContainer'
        QtMocHelpers::SlotData<void()>(71, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'equalSizeAllContainers'
        QtMocHelpers::SlotData<void()>(72, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'detachActiveView'
        QtMocHelpers::SlotData<void()>(73, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'detachActiveTab'
        QtMocHelpers::SlotData<void()>(74, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'sessionFinished'
        QtMocHelpers::SlotData<void(Session *)>(75, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 76, 77 },
        }}),
        // Slot 'viewDestroyed'
        QtMocHelpers::SlotData<void(QWidget *)>(78, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 79, 80 },
        }}),
        // Slot 'activateView'
        QtMocHelpers::SlotData<void(TerminalDisplay *)>(81, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 82, 80 },
        }}),
        // Slot 'focusUp'
        QtMocHelpers::SlotData<void()>(83, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'focusDown'
        QtMocHelpers::SlotData<void()>(84, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'focusLeft'
        QtMocHelpers::SlotData<void()>(85, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'focusRight'
        QtMocHelpers::SlotData<void()>(86, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'nextView'
        QtMocHelpers::SlotData<void()>(87, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'previousView'
        QtMocHelpers::SlotData<void()>(88, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'lastView'
        QtMocHelpers::SlotData<void()>(89, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'lastUsedView'
        QtMocHelpers::SlotData<void()>(90, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'lastUsedViewReverse'
        QtMocHelpers::SlotData<void()>(91, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'nextContainer'
        QtMocHelpers::SlotData<void()>(92, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleTwoViews'
        QtMocHelpers::SlotData<void()>(93, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'containerViewsChanged'
        QtMocHelpers::SlotData<void(TabbedViewContainer *)>(94, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 95, 96 },
        }}),
        // Slot 'profileChanged'
        QtMocHelpers::SlotData<void(const QExplicitlySharedDataPointer<Profile> &)>(97, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 22, 23 },
        }}),
        // Slot 'updateViewsForSession'
        QtMocHelpers::SlotData<void(Session *)>(98, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 76, 77 },
        }}),
        // Slot 'moveActiveViewLeft'
        QtMocHelpers::SlotData<void()>(99, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'moveActiveViewRight'
        QtMocHelpers::SlotData<void()>(100, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'switchToView'
        QtMocHelpers::SlotData<void(int)>(101, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 102 },
        }}),
        // Slot 'switchToTerminalDisplay'
        QtMocHelpers::SlotData<void(TerminalDisplay *)>(103, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 82, 104 },
        }}),
        // Slot 'controllerChanged'
        QtMocHelpers::SlotData<void(SessionController *)>(105, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'forgetController'
        QtMocHelpers::SlotData<void(SessionController *)>(106, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'detachTab'
        QtMocHelpers::SlotData<void(int)>(107, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 108 },
        }}),
        // Slot 'semanticSetupBash'
        QtMocHelpers::SlotData<void()>(109, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleSemanticHints'
        QtMocHelpers::SlotData<void()>(110, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleLineNumbers'
        QtMocHelpers::SlotData<void()>(111, 4, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<ViewManager, qt_meta_tag_ZN7Konsole11ViewManagerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject Konsole::ViewManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole11ViewManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole11ViewManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole11ViewManagerE_t>.metaTypes,
    nullptr
} };

void Konsole::ViewManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ViewManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->empty(); break;
        case 1: _t->terminalsDetached((*reinterpret_cast< std::add_pointer_t<ViewSplitter*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHash<TerminalDisplay*,Session*>>>(_a[2]))); break;
        case 2: _t->activeViewChanged((*reinterpret_cast< std::add_pointer_t<SessionController*>>(_a[1]))); break;
        case 3: _t->unplugController((*reinterpret_cast< std::add_pointer_t<SessionController*>>(_a[1]))); break;
        case 4: _t->viewPropertiesChanged((*reinterpret_cast< std::add_pointer_t<QList<ViewProperties*>>>(_a[1]))); break;
        case 5: _t->setMenuBarVisibleRequest((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->updateWindowIcon(); break;
        case 7: _t->blurSettingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->newViewRequest(); break;
        case 9: _t->newViewWithProfileRequest((*reinterpret_cast< std::add_pointer_t<QExplicitlySharedDataPointer<Profile>>>(_a[1]))); break;
        case 10: _t->activationRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: { int _r = _t->sessionCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { QStringList _r = _t->sessionList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 13: { int _r = _t->currentSession();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->setCurrentSession((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: { int _r = _t->newSession();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: { int _r = _t->newSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: { int _r = _t->newSession((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->defaultProfile();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->setDefaultProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: { QStringList _r = _t->profileList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->nextSession(); break;
        case 22: _t->prevSession(); break;
        case 23: _t->moveSessionLeft(); break;
        case 24: _t->moveSessionRight(); break;
        case 25: _t->setTabWidthToText((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->saveLayoutFile(); break;
        case 27: _t->saveLayout((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 28: _t->loadLayoutFile(); break;
        case 29: _t->loadLayout((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: { QStringList _r = _t->viewHierarchy();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 31: { QList<double> _r = _t->getSplitProportions((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<double>*>(_a[0]) = std::move(_r); }  break;
        case 32: { bool _r = _t->createSplit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 33: { bool _r = _t->createSplitWithExisting((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 34: { bool _r = _t->setCurrentView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 35: { bool _r = _t->resizeSplits((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<double>>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 36: { bool _r = _t->moveSplitter((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 37: { bool _r = _t->moveView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 38: _t->splitLeftRight(); break;
        case 39: _t->splitTopBottom(); break;
        case 40: _t->splitAuto((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 41: _t->splitAuto(); break;
        case 42: _t->splitLeftRightNextTab(); break;
        case 43: _t->splitTopBottomNextTab(); break;
        case 44: _t->splitAutoNextTab(); break;
        case 45: _t->expandActiveContainer(); break;
        case 46: _t->shrinkActiveContainer(); break;
        case 47: _t->equalSizeAllContainers(); break;
        case 48: _t->detachActiveView(); break;
        case 49: _t->detachActiveTab(); break;
        case 50: _t->sessionFinished((*reinterpret_cast< std::add_pointer_t<Session*>>(_a[1]))); break;
        case 51: _t->viewDestroyed((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 52: _t->activateView((*reinterpret_cast< std::add_pointer_t<TerminalDisplay*>>(_a[1]))); break;
        case 53: _t->focusUp(); break;
        case 54: _t->focusDown(); break;
        case 55: _t->focusLeft(); break;
        case 56: _t->focusRight(); break;
        case 57: _t->nextView(); break;
        case 58: _t->previousView(); break;
        case 59: _t->lastView(); break;
        case 60: _t->lastUsedView(); break;
        case 61: _t->lastUsedViewReverse(); break;
        case 62: _t->nextContainer(); break;
        case 63: _t->toggleTwoViews(); break;
        case 64: _t->containerViewsChanged((*reinterpret_cast< std::add_pointer_t<TabbedViewContainer*>>(_a[1]))); break;
        case 65: _t->profileChanged((*reinterpret_cast< std::add_pointer_t<QExplicitlySharedDataPointer<Profile>>>(_a[1]))); break;
        case 66: _t->updateViewsForSession((*reinterpret_cast< std::add_pointer_t<Session*>>(_a[1]))); break;
        case 67: _t->moveActiveViewLeft(); break;
        case 68: _t->moveActiveViewRight(); break;
        case 69: _t->switchToView((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 70: _t->switchToTerminalDisplay((*reinterpret_cast< std::add_pointer_t<TerminalDisplay*>>(_a[1]))); break;
        case 71: _t->controllerChanged((*reinterpret_cast< std::add_pointer_t<SessionController*>>(_a[1]))); break;
        case 72: _t->forgetController((*reinterpret_cast< std::add_pointer_t<SessionController*>>(_a[1]))); break;
        case 73: _t->detachTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 74: _t->semanticSetupBash(); break;
        case 75: _t->toggleSemanticHints(); break;
        case 76: _t->toggleLineNumbers(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)()>(_a, &ViewManager::empty, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(ViewSplitter * , QHash<TerminalDisplay*,Session*> )>(_a, &ViewManager::terminalsDetached, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(SessionController * )>(_a, &ViewManager::activeViewChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(SessionController * )>(_a, &ViewManager::unplugController, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(const QList<ViewProperties*> & )>(_a, &ViewManager::viewPropertiesChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(bool )>(_a, &ViewManager::setMenuBarVisibleRequest, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)()>(_a, &ViewManager::updateWindowIcon, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(bool )>(_a, &ViewManager::blurSettingChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)()>(_a, &ViewManager::newViewRequest, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(const QExplicitlySharedDataPointer<Profile> & )>(_a, &ViewManager::newViewWithProfileRequest, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ViewManager::*)(const QString & )>(_a, &ViewManager::activationRequest, 10))
            return;
    }
}

const QMetaObject *Konsole::ViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::ViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole11ViewManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Konsole::ViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 77)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 77;
    }
    return _id;
}

// SIGNAL 0
void Konsole::ViewManager::empty()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Konsole::ViewManager::terminalsDetached(ViewSplitter * _t1, QHash<TerminalDisplay*,Session*> _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void Konsole::ViewManager::activeViewChanged(SessionController * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Konsole::ViewManager::unplugController(SessionController * _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void Konsole::ViewManager::viewPropertiesChanged(const QList<ViewProperties*> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void Konsole::ViewManager::setMenuBarVisibleRequest(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void Konsole::ViewManager::updateWindowIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Konsole::ViewManager::blurSettingChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void Konsole::ViewManager::newViewRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Konsole::ViewManager::newViewWithProfileRequest(const QExplicitlySharedDataPointer<Profile> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Konsole::ViewManager::activationRequest(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1);
}
QT_WARNING_POP
