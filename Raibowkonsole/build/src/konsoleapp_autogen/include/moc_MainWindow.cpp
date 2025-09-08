/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/MainWindow.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::MainWindow",
        "newWindowRequest",
        "",
        "QExplicitlySharedDataPointer<Profile>",
        "profile",
        "directory",
        "terminalsDetached",
        "ViewSplitter*",
        "splitter",
        "QHash<TerminalDisplay*,Session*>",
        "sessionsMap",
        "saveNewToolbarConfig",
        "cloneTab",
        "newWindow",
        "showManageProfilesDialog",
        "activateMenuBar",
        "showSettingsDialog",
        "showProfilePage",
        "showShortcutsDialog",
        "newFromProfile",
        "activeViewChanged",
        "SessionController*",
        "controller",
        "disconnectController",
        "activeViewTitleChanged",
        "ViewProperties*",
        "profileListChanged",
        "QList<QAction*>",
        "sessionActions",
        "configureNotifications",
        "setBlur",
        "blur",
        "updateWindowIcon",
        "updateWindowCaption",
        "openUrls",
        "QList<QUrl>",
        "urls",
        "setProfileList",
        "ProfileList*",
        "list",
        "applyKonsoleSettings",
        "activationRequest",
        "xdgActivationToken",
        "updateUseTransparency",
        "viewFullScreen",
        "fullScreen"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'newWindowRequest'
        QtMocHelpers::SignalData<void(const QExplicitlySharedDataPointer<Profile> &, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { QMetaType::QString, 5 },
        }}),
        // Signal 'terminalsDetached'
        QtMocHelpers::SignalData<void(ViewSplitter *, QHash<TerminalDisplay*,Session*>)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Slot 'saveNewToolbarConfig'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'cloneTab'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newWindow'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showManageProfilesDialog'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'activateMenuBar'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showSettingsDialog'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 17 },
        }}),
        // Slot 'showSettingsDialog'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'showShortcutsDialog'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newFromProfile'
        QtMocHelpers::SlotData<void(const QExplicitlySharedDataPointer<Profile> &)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'activeViewChanged'
        QtMocHelpers::SlotData<void(SessionController *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'disconnectController'
        QtMocHelpers::SlotData<void(SessionController *)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'activeViewTitleChanged'
        QtMocHelpers::SlotData<void(ViewProperties *)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 25, 2 },
        }}),
        // Slot 'profileListChanged'
        QtMocHelpers::SlotData<void(const QList<QAction*> &)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 27, 28 },
        }}),
        // Slot 'configureNotifications'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setBlur'
        QtMocHelpers::SlotData<void(bool)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 31 },
        }}),
        // Slot 'updateWindowIcon'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateWindowCaption'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openUrls'
        QtMocHelpers::SlotData<void(const QList<QUrl> &)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 35, 36 },
        }}),
        // Slot 'setProfileList'
        QtMocHelpers::SlotData<void(ProfileList *)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 38, 39 },
        }}),
        // Slot 'applyKonsoleSettings'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'activationRequest'
        QtMocHelpers::SlotData<void(const QString &)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 42 },
        }}),
        // Slot 'updateUseTransparency'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'viewFullScreen'
        QtMocHelpers::SlotData<void(bool)>(44, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN7Konsole10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<KXmlGuiWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole10MainWindowE_t>.metaTypes,
    nullptr
} };

void Konsole::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->newWindowRequest((*reinterpret_cast< std::add_pointer_t<QExplicitlySharedDataPointer<Profile>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->terminalsDetached((*reinterpret_cast< std::add_pointer_t<ViewSplitter*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QHash<TerminalDisplay*,Session*>>>(_a[2]))); break;
        case 2: _t->saveNewToolbarConfig(); break;
        case 3: _t->cloneTab(); break;
        case 4: _t->newWindow(); break;
        case 5: _t->showManageProfilesDialog(); break;
        case 6: _t->activateMenuBar(); break;
        case 7: _t->showSettingsDialog((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->showSettingsDialog(); break;
        case 9: _t->showShortcutsDialog(); break;
        case 10: _t->newFromProfile((*reinterpret_cast< std::add_pointer_t<QExplicitlySharedDataPointer<Profile>>>(_a[1]))); break;
        case 11: _t->activeViewChanged((*reinterpret_cast< std::add_pointer_t<SessionController*>>(_a[1]))); break;
        case 12: _t->disconnectController((*reinterpret_cast< std::add_pointer_t<SessionController*>>(_a[1]))); break;
        case 13: _t->activeViewTitleChanged((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1]))); break;
        case 14: _t->profileListChanged((*reinterpret_cast< std::add_pointer_t<QList<QAction*>>>(_a[1]))); break;
        case 15: _t->configureNotifications(); break;
        case 16: _t->setBlur((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->updateWindowIcon(); break;
        case 18: _t->updateWindowCaption(); break;
        case 19: _t->openUrls((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1]))); break;
        case 20: _t->setProfileList((*reinterpret_cast< std::add_pointer_t<ProfileList*>>(_a[1]))); break;
        case 21: _t->applyKonsoleSettings(); break;
        case 22: _t->activationRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->updateUseTransparency(); break;
        case 24: _t->viewFullScreen((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ViewSplitter* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QAction*> >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(const QExplicitlySharedDataPointer<Profile> & , const QString & )>(_a, &MainWindow::newWindowRequest, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(ViewSplitter * , QHash<TerminalDisplay*,Session*> )>(_a, &MainWindow::terminalsDetached, 1))
            return;
    }
}

const QMetaObject *Konsole::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return KXmlGuiWindow::qt_metacast(_clname);
}

int Konsole::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KXmlGuiWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void Konsole::MainWindow::newWindowRequest(const QExplicitlySharedDataPointer<Profile> & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void Konsole::MainWindow::terminalsDetached(ViewSplitter * _t1, QHash<TerminalDisplay*,Session*> _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}
QT_WARNING_POP
