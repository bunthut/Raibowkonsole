/****************************************************************************
** Meta object code from reading C++ file 'EditProfileDialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/widgets/EditProfileDialog.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditProfileDialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7Konsole17EditProfileDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto Konsole::EditProfileDialog::qt_create_metaobjectdata<qt_meta_tag_ZN7Konsole17EditProfileDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Konsole::EditProfileDialog",
        "accept",
        "",
        "reject",
        "sizeHint",
        "preparePage",
        "KPageWidgetItem*",
        "current",
        "before",
        "save",
        "selectInitialDir",
        "selectIcon",
        "profileNameChanged",
        "name",
        "initialDirChanged",
        "dir",
        "startInSameDir",
        "commandChanged",
        "command",
        "semanticUpDown",
        "semanticInputClick",
        "enable",
        "tabTitleFormatChanged",
        "format",
        "remoteTabTitleFormatChanged",
        "tabColorChanged",
        "color",
        "silenceSecondsChanged",
        "terminalColumnsEntryChanged",
        "terminalRowsEntryChanged",
        "showTerminalSizeHint",
        "setDimWhenInactive",
        "setDimValue",
        "value",
        "setBorderWhenActive",
        "setFocusBorderColor",
        "showEnvironmentEditor",
        "setAntialiasText",
        "setBoldIntense",
        "useFontLineCharacters",
        "useFontBrailleCharacters",
        "newColorScheme",
        "editColorScheme",
        "saveColorScheme",
        "ColorScheme",
        "scheme",
        "isNewScheme",
        "removeColorScheme",
        "setVerticalLine",
        "setVerticalLineColumn",
        "focusBorderColorChanged",
        "toggleBlinkingCursor",
        "setCursorShape",
        "autoCursorColor",
        "customCursorColor",
        "customCursorColorChanged",
        "customCursorTextColorChanged",
        "terminalMarginChanged",
        "margin",
        "lineSpacingChanged",
        "setTerminalCenter",
        "togglebidiRendering",
        "togglebidiTableDirOverride",
        "togglebidiLineLTR",
        "gotNewColorSchemes",
        "QList<KNSCore::Entry>",
        "changedEntries",
        "resetColorScheme",
        "colorSchemeSelected",
        "previewColorScheme",
        "QModelIndex",
        "index",
        "showFontDialog",
        "showEmojiFontDialog",
        "toggleMouseWheelZoom",
        "historyModeChanged",
        "Enum::HistoryModeEnum",
        "mode",
        "historySizeChanged",
        "scrollFullPage",
        "scrollHalfPage",
        "toggleHighlightScrolledLines",
        "toggleReflowLines",
        "toggleScrollbarMarkerColor",
        "toggleScrollbarMarkerSize",
        "pSize",
        "toggleScrollbarSearchLineColor",
        "toggleScrollbarSearchLineOpacity",
        "opacity",
        "editKeyBinding",
        "newKeyBinding",
        "keyBindingSelected",
        "removeKeyBinding",
        "resetKeyBindings",
        "toggleUnderlineFiles",
        "toggleUnderlineLinks",
        "toggleOpenLinksByDirectClick",
        "textEditorCmdEditLineChanged",
        "text",
        "toggleCtrlRequiredForDrag",
        "toggleDropUrlsAsText",
        "toggleCopyTextToClipboard",
        "toggleCopyTextAsHTML",
        "toggleTrimLeadingSpacesInSelectedText",
        "toggleTrimTrailingSpacesInSelectedText",
        "pasteFromX11Selection",
        "pasteFromClipboard",
        "toggleAlternateScrolling",
        "toggleAllowColorFilter",
        "toggleAllowMouseTracking",
        "allow",
        "TripleClickModeChanged",
        "wordCharactersChanged",
        "toggleBlinkingText",
        "toggleFlowControl",
        "updateUrlHintsModifier",
        "toggleReverseUrlHints",
        "setAutoSaveInterval",
        "setDefaultCodec",
        "codec",
        "setTextEditorCombo",
        "Profile::Ptr",
        "profile",
        "toggleAllowLinkEscapeSequence",
        "linkEscapeSequenceTextsChanged",
        "peekPrimaryKeySequenceChanged",
        "toggleWordMode",
        "toggleWordModeAttr",
        "toggleWordModeAscii",
        "toggleWordModeBrahmic",
        "toggleIgnoreWcWidth",
        "ignore"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reject'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'sizeHint'
        QtMocHelpers::SlotData<QSize() const>(4, 2, QMC::AccessPrivate, QMetaType::QSize),
        // Slot 'preparePage'
        QtMocHelpers::SlotData<void(KPageWidgetItem *, KPageWidgetItem *)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { 0x80000000 | 6, 8 },
        }}),
        // Slot 'preparePage'
        QtMocHelpers::SlotData<void(KPageWidgetItem *)>(5, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'save'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectInitialDir'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectIcon'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'profileNameChanged'
        QtMocHelpers::SlotData<void(const QString &)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Slot 'initialDirChanged'
        QtMocHelpers::SlotData<void(const QString &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Slot 'startInSameDir'
        QtMocHelpers::SlotData<void(bool)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'commandChanged'
        QtMocHelpers::SlotData<void(const QString &)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 18 },
        }}),
        // Slot 'semanticUpDown'
        QtMocHelpers::SlotData<void(bool)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'semanticInputClick'
        QtMocHelpers::SlotData<void(bool)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'tabTitleFormatChanged'
        QtMocHelpers::SlotData<void(const QString &)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 23 },
        }}),
        // Slot 'remoteTabTitleFormatChanged'
        QtMocHelpers::SlotData<void(const QString &)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 23 },
        }}),
        // Slot 'tabColorChanged'
        QtMocHelpers::SlotData<void(const QColor &)>(25, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QColor, 26 },
        }}),
        // Slot 'silenceSecondsChanged'
        QtMocHelpers::SlotData<void(int)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'terminalColumnsEntryChanged'
        QtMocHelpers::SlotData<void(int)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'terminalRowsEntryChanged'
        QtMocHelpers::SlotData<void(int)>(29, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'showTerminalSizeHint'
        QtMocHelpers::SlotData<void(bool)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setDimWhenInactive'
        QtMocHelpers::SlotData<void(bool)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setDimValue'
        QtMocHelpers::SlotData<void(int)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 33 },
        }}),
        // Slot 'setBorderWhenActive'
        QtMocHelpers::SlotData<void(bool)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setFocusBorderColor'
        QtMocHelpers::SlotData<void(const QColor &)>(35, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QColor, 26 },
        }}),
        // Slot 'showEnvironmentEditor'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setAntialiasText'
        QtMocHelpers::SlotData<void(bool)>(37, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'setBoldIntense'
        QtMocHelpers::SlotData<void(bool)>(38, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'useFontLineCharacters'
        QtMocHelpers::SlotData<void(bool)>(39, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'useFontBrailleCharacters'
        QtMocHelpers::SlotData<void(bool)>(40, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'newColorScheme'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'editColorScheme'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'saveColorScheme'
        QtMocHelpers::SlotData<void(const ColorScheme &, bool)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 44, 45 }, { QMetaType::Bool, 46 },
        }}),
        // Slot 'removeColorScheme'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setVerticalLine'
        QtMocHelpers::SlotData<void(bool)>(48, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setVerticalLineColumn'
        QtMocHelpers::SlotData<void(int)>(49, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'focusBorderColorChanged'
        QtMocHelpers::SlotData<void(const QColor &)>(50, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QColor, 26 },
        }}),
        // Slot 'toggleBlinkingCursor'
        QtMocHelpers::SlotData<void(bool)>(51, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setCursorShape'
        QtMocHelpers::SlotData<void(int)>(52, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'autoCursorColor'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'customCursorColor'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'customCursorColorChanged'
        QtMocHelpers::SlotData<void(const QColor &)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QColor, 2 },
        }}),
        // Slot 'customCursorTextColorChanged'
        QtMocHelpers::SlotData<void(const QColor &)>(56, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QColor, 2 },
        }}),
        // Slot 'terminalMarginChanged'
        QtMocHelpers::SlotData<void(int)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 58 },
        }}),
        // Slot 'lineSpacingChanged'
        QtMocHelpers::SlotData<void(int)>(59, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setTerminalCenter'
        QtMocHelpers::SlotData<void(bool)>(60, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'togglebidiRendering'
        QtMocHelpers::SlotData<void(bool)>(61, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'togglebidiTableDirOverride'
        QtMocHelpers::SlotData<void(bool)>(62, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'togglebidiLineLTR'
        QtMocHelpers::SlotData<void(bool)>(63, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'gotNewColorSchemes'
        QtMocHelpers::SlotData<void(const QList<KNSCore::Entry> &)>(64, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 65, 66 },
        }}),
        // Slot 'resetColorScheme'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'colorSchemeSelected'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'previewColorScheme'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(69, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 70, 71 },
        }}),
        // Slot 'showFontDialog'
        QtMocHelpers::SlotData<void()>(72, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showEmojiFontDialog'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleMouseWheelZoom'
        QtMocHelpers::SlotData<void(bool)>(74, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'historyModeChanged'
        QtMocHelpers::SlotData<void(Enum::HistoryModeEnum)>(75, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 76, 77 },
        }}),
        // Slot 'historySizeChanged'
        QtMocHelpers::SlotData<void(int)>(78, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'scrollFullPage'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'scrollHalfPage'
        QtMocHelpers::SlotData<void()>(80, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleHighlightScrolledLines'
        QtMocHelpers::SlotData<void(bool)>(81, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'toggleReflowLines'
        QtMocHelpers::SlotData<void(bool)>(82, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'toggleScrollbarMarkerColor'
        QtMocHelpers::SlotData<void(QColor)>(83, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QColor, 26 },
        }}),
        // Slot 'toggleScrollbarMarkerSize'
        QtMocHelpers::SlotData<void(double)>(84, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Double, 85 },
        }}),
        // Slot 'toggleScrollbarSearchLineColor'
        QtMocHelpers::SlotData<void(QColor)>(86, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QColor, 26 },
        }}),
        // Slot 'toggleScrollbarSearchLineOpacity'
        QtMocHelpers::SlotData<void(int)>(87, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 88 },
        }}),
        // Slot 'editKeyBinding'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'newKeyBinding'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'keyBindingSelected'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeKeyBinding'
        QtMocHelpers::SlotData<void()>(92, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'resetKeyBindings'
        QtMocHelpers::SlotData<void()>(93, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleUnderlineFiles'
        QtMocHelpers::SlotData<void(bool)>(94, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'toggleUnderlineLinks'
        QtMocHelpers::SlotData<void(bool)>(95, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'toggleOpenLinksByDirectClick'
        QtMocHelpers::SlotData<void(bool)>(96, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'textEditorCmdEditLineChanged'
        QtMocHelpers::SlotData<void(const QString &)>(97, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 98 },
        }}),
        // Slot 'toggleCtrlRequiredForDrag'
        QtMocHelpers::SlotData<void(bool)>(99, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'toggleDropUrlsAsText'
        QtMocHelpers::SlotData<void(bool)>(100, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'toggleCopyTextToClipboard'
        QtMocHelpers::SlotData<void(bool)>(101, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'toggleCopyTextAsHTML'
        QtMocHelpers::SlotData<void(bool)>(102, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'toggleTrimLeadingSpacesInSelectedText'
        QtMocHelpers::SlotData<void(bool)>(103, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'toggleTrimTrailingSpacesInSelectedText'
        QtMocHelpers::SlotData<void(bool)>(104, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'pasteFromX11Selection'
        QtMocHelpers::SlotData<void()>(105, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pasteFromClipboard'
        QtMocHelpers::SlotData<void()>(106, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleAlternateScrolling'
        QtMocHelpers::SlotData<void(bool)>(107, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'toggleAllowColorFilter'
        QtMocHelpers::SlotData<void(bool)>(108, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 21 },
        }}),
        // Slot 'toggleAllowMouseTracking'
        QtMocHelpers::SlotData<void(bool)>(109, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 110 },
        }}),
        // Slot 'TripleClickModeChanged'
        QtMocHelpers::SlotData<void(int)>(111, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'wordCharactersChanged'
        QtMocHelpers::SlotData<void(const QString &)>(112, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 2 },
        }}),
        // Slot 'toggleBlinkingText'
        QtMocHelpers::SlotData<void(bool)>(113, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'toggleFlowControl'
        QtMocHelpers::SlotData<void(bool)>(114, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'updateUrlHintsModifier'
        QtMocHelpers::SlotData<void(bool)>(115, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'toggleReverseUrlHints'
        QtMocHelpers::SlotData<void(bool)>(116, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'setAutoSaveInterval'
        QtMocHelpers::SlotData<void(int)>(117, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'setDefaultCodec'
        QtMocHelpers::SlotData<void(const QByteArray &)>(118, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QByteArray, 119 },
        }}),
        // Slot 'setTextEditorCombo'
        QtMocHelpers::SlotData<void(const Profile::Ptr &)>(120, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 121, 122 },
        }}),
        // Slot 'toggleAllowLinkEscapeSequence'
        QtMocHelpers::SlotData<void(bool)>(123, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 2 },
        }}),
        // Slot 'linkEscapeSequenceTextsChanged'
        QtMocHelpers::SlotData<void()>(124, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'peekPrimaryKeySequenceChanged'
        QtMocHelpers::SlotData<void()>(125, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleWordMode'
        QtMocHelpers::SlotData<void(bool)>(126, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 77 },
        }}),
        // Slot 'toggleWordModeAttr'
        QtMocHelpers::SlotData<void(bool)>(127, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 77 },
        }}),
        // Slot 'toggleWordModeAscii'
        QtMocHelpers::SlotData<void(bool)>(128, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 77 },
        }}),
        // Slot 'toggleWordModeBrahmic'
        QtMocHelpers::SlotData<void(bool)>(129, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 77 },
        }}),
        // Slot 'toggleIgnoreWcWidth'
        QtMocHelpers::SlotData<void(bool)>(130, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 131 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditProfileDialog, qt_meta_tag_ZN7Konsole17EditProfileDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Konsole::EditProfileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<KPageDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17EditProfileDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17EditProfileDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7Konsole17EditProfileDialogE_t>.metaTypes,
    nullptr
} };

void Konsole::EditProfileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditProfileDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: { QSize _r = _t->sizeHint();
            if (_a[0]) *reinterpret_cast< QSize*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->preparePage((*reinterpret_cast< std::add_pointer_t<KPageWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<KPageWidgetItem*>>(_a[2]))); break;
        case 4: _t->preparePage((*reinterpret_cast< std::add_pointer_t<KPageWidgetItem*>>(_a[1]))); break;
        case 5: _t->save(); break;
        case 6: _t->selectInitialDir(); break;
        case 7: _t->selectIcon(); break;
        case 8: _t->profileNameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->initialDirChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->startInSameDir((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->commandChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->semanticUpDown((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->semanticInputClick((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->tabTitleFormatChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->remoteTabTitleFormatChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->tabColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 17: _t->silenceSecondsChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->terminalColumnsEntryChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->terminalRowsEntryChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->showTerminalSizeHint((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->setDimWhenInactive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 22: _t->setDimValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->setBorderWhenActive((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->setFocusBorderColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 25: _t->showEnvironmentEditor(); break;
        case 26: _t->setAntialiasText((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->setBoldIntense((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->useFontLineCharacters((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 29: _t->useFontBrailleCharacters((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->newColorScheme(); break;
        case 31: _t->editColorScheme(); break;
        case 32: _t->saveColorScheme((*reinterpret_cast< std::add_pointer_t<ColorScheme>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 33: _t->removeColorScheme(); break;
        case 34: _t->setVerticalLine((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 35: _t->setVerticalLineColumn((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 36: _t->focusBorderColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 37: _t->toggleBlinkingCursor((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 38: _t->setCursorShape((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 39: _t->autoCursorColor(); break;
        case 40: _t->customCursorColor(); break;
        case 41: _t->customCursorColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 42: _t->customCursorTextColorChanged((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 43: _t->terminalMarginChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 44: _t->lineSpacingChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 45: _t->setTerminalCenter((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 46: _t->togglebidiRendering((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 47: _t->togglebidiTableDirOverride((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 48: _t->togglebidiLineLTR((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 49: _t->gotNewColorSchemes((*reinterpret_cast< std::add_pointer_t<QList<KNSCore::Entry>>>(_a[1]))); break;
        case 50: _t->resetColorScheme(); break;
        case 51: _t->colorSchemeSelected(); break;
        case 52: _t->previewColorScheme((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 53: _t->showFontDialog(); break;
        case 54: _t->showEmojiFontDialog(); break;
        case 55: _t->toggleMouseWheelZoom((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 56: _t->historyModeChanged((*reinterpret_cast< std::add_pointer_t<Enum::HistoryModeEnum>>(_a[1]))); break;
        case 57: _t->historySizeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 58: _t->scrollFullPage(); break;
        case 59: _t->scrollHalfPage(); break;
        case 60: _t->toggleHighlightScrolledLines((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 61: _t->toggleReflowLines((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 62: _t->toggleScrollbarMarkerColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 63: _t->toggleScrollbarMarkerSize((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 64: _t->toggleScrollbarSearchLineColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 65: _t->toggleScrollbarSearchLineOpacity((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 66: _t->editKeyBinding(); break;
        case 67: _t->newKeyBinding(); break;
        case 68: _t->keyBindingSelected(); break;
        case 69: _t->removeKeyBinding(); break;
        case 70: _t->resetKeyBindings(); break;
        case 71: _t->toggleUnderlineFiles((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 72: _t->toggleUnderlineLinks((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 73: _t->toggleOpenLinksByDirectClick((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 74: _t->textEditorCmdEditLineChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 75: _t->toggleCtrlRequiredForDrag((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 76: _t->toggleDropUrlsAsText((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 77: _t->toggleCopyTextToClipboard((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 78: _t->toggleCopyTextAsHTML((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 79: _t->toggleTrimLeadingSpacesInSelectedText((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 80: _t->toggleTrimTrailingSpacesInSelectedText((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 81: _t->pasteFromX11Selection(); break;
        case 82: _t->pasteFromClipboard(); break;
        case 83: _t->toggleAlternateScrolling((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 84: _t->toggleAllowColorFilter((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 85: _t->toggleAllowMouseTracking((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 86: _t->TripleClickModeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 87: _t->wordCharactersChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 88: _t->toggleBlinkingText((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 89: _t->toggleFlowControl((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 90: _t->updateUrlHintsModifier((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 91: _t->toggleReverseUrlHints((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 92: _t->setAutoSaveInterval((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 93: _t->setDefaultCodec((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 94: _t->setTextEditorCombo((*reinterpret_cast< std::add_pointer_t<Profile::Ptr>>(_a[1]))); break;
        case 95: _t->toggleAllowLinkEscapeSequence((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 96: _t->linkEscapeSequenceTextsChanged(); break;
        case 97: _t->peekPrimaryKeySequenceChanged(); break;
        case 98: _t->toggleWordMode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 99: _t->toggleWordModeAttr((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 100: _t->toggleWordModeAscii((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 101: _t->toggleWordModeBrahmic((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 102: _t->toggleIgnoreWcWidth((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KPageWidgetItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KPageWidgetItem* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Konsole::EditProfileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Konsole::EditProfileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7Konsole17EditProfileDialogE_t>.strings))
        return static_cast<void*>(this);
    return KPageDialog::qt_metacast(_clname);
}

int Konsole::EditProfileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KPageDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 103)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 103;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 103)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 103;
    }
    return _id;
}
QT_WARNING_POP
