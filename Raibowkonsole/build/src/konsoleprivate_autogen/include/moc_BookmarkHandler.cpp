/****************************************************************************
** Meta object code from reading C++ file 'BookmarkHandler.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/BookmarkHandler.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BookmarkHandler.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole15BookmarkHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::BookmarkHandler::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole15BookmarkHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::BookmarkHandler",
        "openUrl",
        "",
        "url",
        "openUrls",
        "QList<QUrl>",
        "urls",
        "setViews",
        "QList<ViewProperties*>",
        "views",
        "setActiveView",
        "ViewProperties*",
        "view",
        "openBookmark",
        "KBookmark",
        "bm",
        "Qt::MouseButtons",
        "Qt::KeyboardModifiers"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'openUrl'
        QtMocHelpers::SignalData<void(const QUrl &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QUrl, 3 },
        }}),
        // Signal 'openUrls'
        QtMocHelpers::SignalData<void(const QList<QUrl> &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Slot 'setViews'
        QtMocHelpers::SlotData<void(const QList<ViewProperties*> &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 },
        }}),
        // Slot 'setActiveView'
        QtMocHelpers::SlotData<void(ViewProperties *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 11, 12 },
        }}),
        // Slot 'openBookmark'
        QtMocHelpers::SlotData<void(const KBookmark &, Qt::MouseButtons, Qt::KeyboardModifiers)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 14, 15 }, { 0x80000000 | 16, 2 }, { 0x80000000 | 17, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BookmarkHandler, qt_meta_tag_ZN7Konsole15BookmarkHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::BookmarkHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole15BookmarkHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole15BookmarkHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole15BookmarkHandlerE_t>.metaTypes,
    nullptr
} };

void Konsole::BookmarkHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BookmarkHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->openUrl((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 1: _t->openUrls((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1]))); break;
        case 2: _t->setViews((*reinterpret_cast< std::add_pointer_t<QList<ViewProperties*>>>(_a[1]))); break;
        case 3: _t->setActiveView((*reinterpret_cast< std::add_pointer_t<ViewProperties*>>(_a[1]))); break;
        case 4: _t->openBookmark((*reinterpret_cast< std::add_pointer_t<KBookmark>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Qt::MouseButtons>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<Qt::KeyboardModifiers>>(_a[3]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<ViewProperties*> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ViewProperties* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KBookmark >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BookmarkHandler::*)(const QUrl & )>(_a, &BookmarkHandler::openUrl, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BookmarkHandler::*)(const QList<QUrl> & )>(_a, &BookmarkHandler::openUrls, 1))
            return;
    }
}

const QMetaObject *Konsole::BookmarkHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::BookmarkHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole15BookmarkHandlerE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "KBookmarkOwner"))
        return static_cast< KBookmarkOwner*>(this);
    return QObject::qt_metacast(_clname);
}

int Konsole::BookmarkHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Konsole::BookmarkHandler::openUrl(const QUrl & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Konsole::BookmarkHandler::openUrls(const QList<QUrl> & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
