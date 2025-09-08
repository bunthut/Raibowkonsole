#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'EditProfileMousePage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILEMOUSEPAGE_H
#define UI_EDITPROFILEMOUSEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProfileMousePage
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLineEdit *wordCharacterEdit;
    QSpacerItem *spacerItem;
    QLabel *label_17;
    QRadioButton *tripleClickSelectsTheWholeLine;
    QRadioButton *tripleClickSelectsFromMousePosition;
    QSpacerItem *spacerItem1;
    QLabel *label_13;
    QRadioButton *pasteFromClipboardButton;
    QRadioButton *pasteFromX11SelectionButton;
    QSpacerItem *spacerItem2;
    QLabel *label;
    QCheckBox *copyTextToClipboardButton;
    QCheckBox *copyTextAsHTMLButton;
    QCheckBox *trimLeadingSpacesButton;
    QCheckBox *trimTrailingSpacesButton;
    QSpacerItem *spacerItem3;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *underlineURILayout;
    QCheckBox *underlineLinksButton;
    QCheckBox *underlineFilesButton;
    QHBoxLayout *hboxLayout;
    QLabel *textEditorCommandLabel;
    QComboBox *textEditorCombo;
    QPushButton *textEditorCustomBtn;
    QCheckBox *openLinksByDirectClickButton;
    QVBoxLayout *vboxLayout1;
    QCheckBox *allowLinkEscapeSequenceButton;
    QLabel *allowLinkEscapeSequenceButtonWarning;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QLineEdit *linkEscapeSequenceTexts;
    QCheckBox *ctrlRequiredForDragButton;
    QCheckBox *enableAlternateScrollingButton;
    QCheckBox *dropUrlsAsText;
    QCheckBox *enableMouseWheelZoomButton;
    QCheckBox *allowColorFilters;
    QSpacerItem *spacerItem4;
    QCheckBox *allowMouseTrackingButton;
    QButtonGroup *tripleClickMode;
    QButtonGroup *pasteFrom;

    void setupUi(QWidget *EditProfileMousePage)
    {
        if (EditProfileMousePage->objectName().isEmpty())
            EditProfileMousePage->setObjectName("EditProfileMousePage");
        EditProfileMousePage->resize(993, 632);
        vboxLayout = new QVBoxLayout(EditProfileMousePage);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(EditProfileMousePage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setDocumentMode(true);
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        label_11 = new QLabel(tab);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        wordCharacterEdit = new QLineEdit(tab);
        wordCharacterEdit->setObjectName("wordCharacterEdit");
        QFont font;
        font.setFamilies({QString::fromUtf8("Monospace")});
        wordCharacterEdit->setFont(font);

        gridLayout->addWidget(wordCharacterEdit, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem, 1, 1, 1, 1);

        label_17 = new QLabel(tab);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_17, 2, 0, 1, 1);

        tripleClickSelectsTheWholeLine = new QRadioButton(tab);
        tripleClickMode = new QButtonGroup(EditProfileMousePage);
        tripleClickMode->setObjectName("tripleClickMode");
        tripleClickMode->addButton(tripleClickSelectsTheWholeLine);
        tripleClickSelectsTheWholeLine->setObjectName("tripleClickSelectsTheWholeLine");

        gridLayout->addWidget(tripleClickSelectsTheWholeLine, 2, 1, 1, 1);

        tripleClickSelectsFromMousePosition = new QRadioButton(tab);
        tripleClickMode->addButton(tripleClickSelectsFromMousePosition);
        tripleClickSelectsFromMousePosition->setObjectName("tripleClickSelectsFromMousePosition");

        gridLayout->addWidget(tripleClickSelectsFromMousePosition, 3, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem1, 4, 1, 1, 1);

        label_13 = new QLabel(tab);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        pasteFromClipboardButton = new QRadioButton(tab);
        pasteFrom = new QButtonGroup(EditProfileMousePage);
        pasteFrom->setObjectName("pasteFrom");
        pasteFrom->addButton(pasteFromClipboardButton);
        pasteFromClipboardButton->setObjectName("pasteFromClipboardButton");

        gridLayout->addWidget(pasteFromClipboardButton, 5, 1, 1, 1);

        pasteFromX11SelectionButton = new QRadioButton(tab);
        pasteFrom->addButton(pasteFromX11SelectionButton);
        pasteFromX11SelectionButton->setObjectName("pasteFromX11SelectionButton");

        gridLayout->addWidget(pasteFromX11SelectionButton, 6, 1, 1, 1);

        spacerItem2 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem2, 7, 1, 1, 1);

        label = new QLabel(tab);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label, 8, 0, 1, 1);

        copyTextToClipboardButton = new QCheckBox(tab);
        copyTextToClipboardButton->setObjectName("copyTextToClipboardButton");

        gridLayout->addWidget(copyTextToClipboardButton, 8, 1, 1, 1);

        copyTextAsHTMLButton = new QCheckBox(tab);
        copyTextAsHTMLButton->setObjectName("copyTextAsHTMLButton");

        gridLayout->addWidget(copyTextAsHTMLButton, 9, 1, 1, 1);

        trimLeadingSpacesButton = new QCheckBox(tab);
        trimLeadingSpacesButton->setObjectName("trimLeadingSpacesButton");

        gridLayout->addWidget(trimLeadingSpacesButton, 10, 1, 1, 1);

        trimTrailingSpacesButton = new QCheckBox(tab);
        trimTrailingSpacesButton->setObjectName("trimTrailingSpacesButton");

        gridLayout->addWidget(trimTrailingSpacesButton, 11, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        spacerItem3 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(spacerItem3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName("verticalLayout_2");
        underlineURILayout = new QVBoxLayout();
        underlineURILayout->setSpacing(10);
        underlineURILayout->setObjectName("underlineURILayout");
        underlineLinksButton = new QCheckBox(tab_2);
        underlineLinksButton->setObjectName("underlineLinksButton");

        underlineURILayout->addWidget(underlineLinksButton);

        underlineFilesButton = new QCheckBox(tab_2);
        underlineFilesButton->setObjectName("underlineFilesButton");

        underlineURILayout->addWidget(underlineFilesButton);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        textEditorCommandLabel = new QLabel(tab_2);
        textEditorCommandLabel->setObjectName("textEditorCommandLabel");

        hboxLayout->addWidget(textEditorCommandLabel);

        textEditorCombo = new QComboBox(tab_2);
        textEditorCombo->setObjectName("textEditorCombo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEditorCombo->sizePolicy().hasHeightForWidth());
        textEditorCombo->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(textEditorCombo);

        textEditorCustomBtn = new QPushButton(tab_2);
        textEditorCustomBtn->setObjectName("textEditorCustomBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEditorCustomBtn->sizePolicy().hasHeightForWidth());
        textEditorCustomBtn->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(textEditorCustomBtn);


        underlineURILayout->addLayout(hboxLayout);

        openLinksByDirectClickButton = new QCheckBox(tab_2);
        openLinksByDirectClickButton->setObjectName("openLinksByDirectClickButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(openLinksByDirectClickButton->sizePolicy().hasHeightForWidth());
        openLinksByDirectClickButton->setSizePolicy(sizePolicy2);

        underlineURILayout->addWidget(openLinksByDirectClickButton);


        verticalLayout_2->addLayout(underlineURILayout);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setObjectName("vboxLayout1");
        allowLinkEscapeSequenceButton = new QCheckBox(tab_2);
        allowLinkEscapeSequenceButton->setObjectName("allowLinkEscapeSequenceButton");

        vboxLayout1->addWidget(allowLinkEscapeSequenceButton);

        allowLinkEscapeSequenceButtonWarning = new QLabel(tab_2);
        allowLinkEscapeSequenceButtonWarning->setObjectName("allowLinkEscapeSequenceButtonWarning");
        allowLinkEscapeSequenceButtonWarning->setTextFormat(Qt::TextFormat::RichText);
        allowLinkEscapeSequenceButtonWarning->setWordWrap(true);
        allowLinkEscapeSequenceButtonWarning->setIndent(30);

        vboxLayout1->addWidget(allowLinkEscapeSequenceButtonWarning);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName("hboxLayout1");
        label_2 = new QLabel(tab_2);
        label_2->setObjectName("label_2");
        label_2->setIndent(30);

        hboxLayout1->addWidget(label_2);

        linkEscapeSequenceTexts = new QLineEdit(tab_2);
        linkEscapeSequenceTexts->setObjectName("linkEscapeSequenceTexts");

        hboxLayout1->addWidget(linkEscapeSequenceTexts);


        vboxLayout1->addLayout(hboxLayout1);


        verticalLayout_2->addLayout(vboxLayout1);

        ctrlRequiredForDragButton = new QCheckBox(tab_2);
        ctrlRequiredForDragButton->setObjectName("ctrlRequiredForDragButton");

        verticalLayout_2->addWidget(ctrlRequiredForDragButton);

        enableAlternateScrollingButton = new QCheckBox(tab_2);
        enableAlternateScrollingButton->setObjectName("enableAlternateScrollingButton");

        verticalLayout_2->addWidget(enableAlternateScrollingButton);

        dropUrlsAsText = new QCheckBox(tab_2);
        dropUrlsAsText->setObjectName("dropUrlsAsText");

        verticalLayout_2->addWidget(dropUrlsAsText);

        enableMouseWheelZoomButton = new QCheckBox(tab_2);
        enableMouseWheelZoomButton->setObjectName("enableMouseWheelZoomButton");

        verticalLayout_2->addWidget(enableMouseWheelZoomButton);

        allowColorFilters = new QCheckBox(tab_2);
        allowColorFilters->setObjectName("allowColorFilters");

        verticalLayout_2->addWidget(allowColorFilters);

        spacerItem4 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(spacerItem4);

        allowMouseTrackingButton = new QCheckBox(tab_2);
        allowMouseTrackingButton->setObjectName("allowMouseTrackingButton");

        verticalLayout_2->addWidget(allowMouseTrackingButton);

        tabWidget->addTab(tab_2, QString());

        vboxLayout->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        label_11->setBuddy(wordCharacterEdit);
        textEditorCommandLabel->setBuddy(textEditorCombo);
#endif // QT_CONFIG(shortcut)

        retranslateUi(EditProfileMousePage);
        QObject::connect(allowLinkEscapeSequenceButton, &QCheckBox::clicked, linkEscapeSequenceTexts, &QLineEdit::setEnabled);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditProfileMousePage);
    } // setupUi

    void retranslateUi(QWidget *EditProfileMousePage)
    {
#if QT_CONFIG(tooltip)
        label_11->setToolTip(tr2i18n("Characters which are considered part of a word when double-clicking to select whole words in the terminal.", "@info:tooltip"));
#endif // QT_CONFIG(tooltip)
        label_11->setText(tr2i18n("Word characters:", nullptr));
#if QT_CONFIG(tooltip)
        wordCharacterEdit->setToolTip(tr2i18n("Characters which are considered part of a word when double-clicking to select whole words in the terminal.", "@info:tooltip"));
#endif // QT_CONFIG(tooltip)
        label_17->setText(tr2i18n("Triple-click selects:", nullptr));
        tripleClickSelectsTheWholeLine->setText(tr2i18n("&The whole line", nullptr));
        tripleClickSelectsFromMousePosition->setText(tr2i18n("From mouse position to the end of &line", nullptr));
        label_13->setText(tr2i18n("Middle-click pastes:", nullptr));
        pasteFromClipboardButton->setText(tr2i18n("From clipboard", nullptr));
        pasteFromX11SelectionButton->setText(tr2i18n("From selection", nullptr));
        label->setText(tr2i18n("Copy options:", nullptr));
#if QT_CONFIG(tooltip)
        copyTextToClipboardButton->setToolTip(tr2i18n("Automatically copy selected text into clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        copyTextToClipboardButton->setText(tr2i18n("Copy on select", nullptr));
#if QT_CONFIG(tooltip)
        copyTextAsHTMLButton->setToolTip(tr2i18n("Copy text as HTML (including formatting, font faces, colors... etc)", nullptr));
#endif // QT_CONFIG(tooltip)
        copyTextAsHTMLButton->setText(tr2i18n("Copy text as HTML", nullptr));
#if QT_CONFIG(tooltip)
        trimLeadingSpacesButton->setToolTip(tr2i18n("Trim leading spaces in selected text, useful in some instances", nullptr));
#endif // QT_CONFIG(tooltip)
        trimLeadingSpacesButton->setText(tr2i18n("Trim leading spaces", nullptr));
#if QT_CONFIG(tooltip)
        trimTrailingSpacesButton->setToolTip(tr2i18n("Trim trailing spaces in selected text, useful in some instances", nullptr));
#endif // QT_CONFIG(tooltip)
        trimTrailingSpacesButton->setText(tr2i18n("Trim trailing spaces", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("Text interaction", nullptr));
#if QT_CONFIG(tooltip)
        underlineLinksButton->setToolTip(tr2i18n("Text recognized as a link or an email address will be underlined when hovered by the mouse pointer.", nullptr));
#endif // QT_CONFIG(tooltip)
        underlineLinksButton->setText(tr2i18n("Underline links", nullptr));
#if QT_CONFIG(tooltip)
        underlineFilesButton->setToolTip(tr2i18n("Text recognized as a file will be underlined when hovered by the mouse pointer.", nullptr));
#endif // QT_CONFIG(tooltip)
        underlineFilesButton->setText(tr2i18n("Underline files", nullptr));
#if QT_CONFIG(tooltip)
        textEditorCommandLabel->setToolTip(tr2i18n("Text editor to use when opening text file URLs at a given line/column.", "@info:tooltip"));
#endif // QT_CONFIG(tooltip)
        textEditorCommandLabel->setText(tr2i18n("Text Editor Command: ", nullptr));
#if QT_CONFIG(tooltip)
        textEditorCombo->setToolTip(tr2i18n("Text editor to use when opening text file URLs at a given line/column.", "@info:tooltip"));
#endif // QT_CONFIG(tooltip)
        textEditorCustomBtn->setText(tr2i18n("Edit...", nullptr));
#if QT_CONFIG(tooltip)
        openLinksByDirectClickButton->setToolTip(tr2i18n("Text recognized as a file, link or an email address can be opened by direct mouse click.", nullptr));
#endif // QT_CONFIG(tooltip)
        openLinksByDirectClickButton->setText(tr2i18n("Open files/links by direct click", nullptr));
        allowLinkEscapeSequenceButton->setText(tr2i18n("Allow escape sequences for links", nullptr));
        allowLinkEscapeSequenceButtonWarning->setText(tr2i18n("<b>WARNING</b>: This has security implications as it allows malicious URLs to be shown as another URL or hidden.<br>Make sure you understand the implications before turning this on.", nullptr));
        label_2->setText(tr2i18n("Allowed link formats: ", nullptr));
#if QT_CONFIG(tooltip)
        linkEscapeSequenceTexts->setToolTip(tr2i18n("The formats of possible links, like http://, https:// and file://", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        ctrlRequiredForDragButton->setToolTip(tr2i18n("Selected text will require control key plus click to drag.", nullptr));
#endif // QT_CONFIG(tooltip)
        ctrlRequiredForDragButton->setText(tr2i18n("Require Ctrl key for drag && drop", nullptr));
#if QT_CONFIG(tooltip)
        enableAlternateScrollingButton->setToolTip(tr2i18n("Mouse scroll wheel will emulate up/down key presses in programs that use the Alternate Screen buffer (e.g. less)", nullptr));
#endif // QT_CONFIG(tooltip)
        enableAlternateScrollingButton->setText(tr2i18n("Enable Alternate Screen buffer scrolling", nullptr));
#if QT_CONFIG(tooltip)
        dropUrlsAsText->setToolTip(tr2i18n("Always paste dropped files and URLs as text without offering move, copy and link actions.", nullptr));
#endif // QT_CONFIG(tooltip)
        dropUrlsAsText->setText(tr2i18n("Disable drag && drop menu for files && URLs", nullptr));
#if QT_CONFIG(tooltip)
        enableMouseWheelZoomButton->setToolTip(tr2i18n("Pressing Ctrl+scrollwheel will increase/decrease the text size.", nullptr));
#endif // QT_CONFIG(tooltip)
        enableMouseWheelZoomButton->setText(tr2i18n("Allow Ctrl+scrollwheel to zoom text size", nullptr));
#if QT_CONFIG(tooltip)
        allowColorFilters->setToolTip(tr2i18n("When positioning the mouse over a hexadecimal color it will be displayed in a frame next to the mouse pointer", nullptr));
#endif // QT_CONFIG(tooltip)
        allowColorFilters->setText(tr2i18n("Preview Colors on hover", nullptr));
#if QT_CONFIG(tooltip)
        allowMouseTrackingButton->setToolTip(tr2i18n("Some terminal applications have mouse support, this allows them to get it by default. It can be toggled on/off while running as well.", nullptr));
#endif // QT_CONFIG(tooltip)
        allowMouseTrackingButton->setText(tr2i18n("Allow terminal applications to handle clicks and drags", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), tr2i18n("Miscellaneous", "Items that do not fit in other categories"));
        (void)EditProfileMousePage;
    } // retranslateUi

};

namespace Ui {
    class EditProfileMousePage: public Ui_EditProfileMousePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDITPROFILEMOUSEPAGE_H

