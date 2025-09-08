/****************************************************************************
** Meta object code from reading C++ file 'Profile.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/profile/Profile.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Profile.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole7ProfileE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::Profile::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole7ProfileE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::Profile",
        "Property",
        "Path",
        "Name",
        "UntranslatedName",
        "Icon",
        "Command",
        "Arguments",
        "Environment",
        "Directory",
        "LocalTabTitleFormat",
        "RemoteTabTitleFormat",
        "ShowTerminalSizeHint",
        "DimWhenInactive",
        "BorderWhenActive",
        "InvertSelectionColors",
        "Font",
        "ColorScheme",
        "KeyBindings",
        "HistoryMode",
        "HistorySize",
        "ScrollBarPosition",
        "ScrollFullPage",
        "HighlightScrolledLines",
        "ReflowLines",
        "BidiRenderingEnabled",
        "BidiLineLTR",
        "BidiTableDirOverride",
        "BlinkingTextEnabled",
        "FlowControlEnabled",
        "LineSpacing",
        "BlinkingCursorEnabled",
        "UseCustomCursorColor",
        "CursorShape",
        "CustomCursorColor",
        "CustomCursorTextColor",
        "WordCharacters",
        "TripleClickMode",
        "UnderlineLinksEnabled",
        "UnderlineFilesEnabled",
        "TextEditorCmd",
        "TextEditorCmdCustom",
        "OpenLinksByDirectClickEnabled",
        "CtrlRequiredForDrag",
        "AutoCopySelectedText",
        "CopyTextAsHTML",
        "TrimLeadingSpacesInSelectedText",
        "TrimTrailingSpacesInSelectedText",
        "DropUrlsAsText",
        "PasteFromSelectionEnabled",
        "PasteFromClipboardEnabled",
        "MiddleClickPasteMode",
        "DefaultEncoding",
        "AntiAliasFonts",
        "BoldIntense",
        "UseFontLineCharacters",
        "UseFontBrailleCharacters",
        "StartInCurrentSessionDir",
        "SilenceSeconds",
        "BellMode",
        "TerminalColumns",
        "TerminalRows",
        "MenuIndex",
        "TerminalMargin",
        "TerminalCenter",
        "MouseWheelZoomEnabled",
        "AlternateScrolling",
        "UrlHintsModifiers",
        "ReverseUrlHints",
        "TabColor",
        "DimValue",
        "FocusBorderColor",
        "AllowEscapedLinks",
        "EscapedLinksSchema",
        "VerticalLine",
        "VerticalLineAtChar",
        "PeekPrimaryKeySequence",
        "ColorFilterEnabled",
        "AllowMouseTracking",
        "SemanticHints",
        "SemanticUpDown",
        "SemanticInputClick",
        "EmojiFont",
        "MarkerColor",
        "MarkerSize",
        "SearchLineColor",
        "SearchLineOpacity",
        "LineNumbers",
        "ErrorBars",
        "ErrorBackground",
        "AlternatingBars",
        "AlternatingBackground",
        "WordMode",
        "WordModeAttr",
        "WordModeAscii",
        "WordModeBrahmic",
        "IgnoreWcWidth",
        "AutoSaveInterval"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'Property'
        QtMocHelpers::EnumData<enum Property>(1, 1, QMC::EnumFlags{}).add({
            {    2, Property::Path },
            {    3, Property::Name },
            {    4, Property::UntranslatedName },
            {    5, Property::Icon },
            {    6, Property::Command },
            {    7, Property::Arguments },
            {    8, Property::Environment },
            {    9, Property::Directory },
            {   10, Property::LocalTabTitleFormat },
            {   11, Property::RemoteTabTitleFormat },
            {   12, Property::ShowTerminalSizeHint },
            {   13, Property::DimWhenInactive },
            {   14, Property::BorderWhenActive },
            {   15, Property::InvertSelectionColors },
            {   16, Property::Font },
            {   17, Property::ColorScheme },
            {   18, Property::KeyBindings },
            {   19, Property::HistoryMode },
            {   20, Property::HistorySize },
            {   21, Property::ScrollBarPosition },
            {   22, Property::ScrollFullPage },
            {   23, Property::HighlightScrolledLines },
            {   24, Property::ReflowLines },
            {   25, Property::BidiRenderingEnabled },
            {   26, Property::BidiLineLTR },
            {   27, Property::BidiTableDirOverride },
            {   28, Property::BlinkingTextEnabled },
            {   29, Property::FlowControlEnabled },
            {   30, Property::LineSpacing },
            {   31, Property::BlinkingCursorEnabled },
            {   32, Property::UseCustomCursorColor },
            {   33, Property::CursorShape },
            {   34, Property::CustomCursorColor },
            {   35, Property::CustomCursorTextColor },
            {   36, Property::WordCharacters },
            {   37, Property::TripleClickMode },
            {   38, Property::UnderlineLinksEnabled },
            {   39, Property::UnderlineFilesEnabled },
            {   40, Property::TextEditorCmd },
            {   41, Property::TextEditorCmdCustom },
            {   42, Property::OpenLinksByDirectClickEnabled },
            {   43, Property::CtrlRequiredForDrag },
            {   44, Property::AutoCopySelectedText },
            {   45, Property::CopyTextAsHTML },
            {   46, Property::TrimLeadingSpacesInSelectedText },
            {   47, Property::TrimTrailingSpacesInSelectedText },
            {   48, Property::DropUrlsAsText },
            {   49, Property::PasteFromSelectionEnabled },
            {   50, Property::PasteFromClipboardEnabled },
            {   51, Property::MiddleClickPasteMode },
            {   52, Property::DefaultEncoding },
            {   53, Property::AntiAliasFonts },
            {   54, Property::BoldIntense },
            {   55, Property::UseFontLineCharacters },
            {   56, Property::UseFontBrailleCharacters },
            {   57, Property::StartInCurrentSessionDir },
            {   58, Property::SilenceSeconds },
            {   59, Property::BellMode },
            {   60, Property::TerminalColumns },
            {   61, Property::TerminalRows },
            {   62, Property::MenuIndex },
            {   63, Property::TerminalMargin },
            {   64, Property::TerminalCenter },
            {   65, Property::MouseWheelZoomEnabled },
            {   66, Property::AlternateScrolling },
            {   67, Property::UrlHintsModifiers },
            {   68, Property::ReverseUrlHints },
            {   69, Property::TabColor },
            {   70, Property::DimValue },
            {   71, Property::FocusBorderColor },
            {   72, Property::AllowEscapedLinks },
            {   73, Property::EscapedLinksSchema },
            {   74, Property::VerticalLine },
            {   75, Property::VerticalLineAtChar },
            {   76, Property::PeekPrimaryKeySequence },
            {   77, Property::ColorFilterEnabled },
            {   78, Property::AllowMouseTracking },
            {   79, Property::SemanticHints },
            {   80, Property::SemanticUpDown },
            {   81, Property::SemanticInputClick },
            {   82, Property::EmojiFont },
            {   83, Property::MarkerColor },
            {   84, Property::MarkerSize },
            {   85, Property::SearchLineColor },
            {   86, Property::SearchLineOpacity },
            {   87, Property::LineNumbers },
            {   88, Property::ErrorBars },
            {   89, Property::ErrorBackground },
            {   90, Property::AlternatingBars },
            {   91, Property::AlternatingBackground },
            {   92, Property::WordMode },
            {   93, Property::WordModeAttr },
            {   94, Property::WordModeAscii },
            {   95, Property::WordModeBrahmic },
            {   96, Property::IgnoreWcWidth },
            {   97, Property::AutoSaveInterval },
        }),
    };
    return QtMocHelpers::metaObjectData<Profile, qt_meta_tag_ZN7Konsole7ProfileE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::Profile::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QSharedData>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole7ProfileE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole7ProfileE_t>.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole7ProfileE_t>.metaTypes,
    nullptr
} };

QT_WARNING_POP
