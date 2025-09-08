#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'EditProfileAppearancePage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILEAPPEARANCEPAGE_H
#define UI_EDITPROFILEAPPEARANCEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kcolorbutton.h"
#include "kmessagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditProfileAppearancePage
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *colorSchemeTab;
    QGridLayout *gridLayout;
    KMessageWidget *colorSchemeMessageWidget;
    QListView *colorSchemeList;
    QVBoxLayout *vboxLayout;
    QVBoxLayout *colorSchemesBtnLayout;
    QPushButton *newColorSchemeButton;
    QPushButton *editColorSchemeButton;
    QPushButton *removeColorSchemeButton;
    QPushButton *resetColorSchemeButton;
    QSpacerItem *spacerItem;
    KMessageWidget *transparencyWarningWidget;
    QLabel *label_7;
    QLabel *fontPreview;
    QPushButton *chooseFontButton;
    QCheckBox *antialiasTextButton;
    QCheckBox *boldIntenseButton;
    QCheckBox *useFontLineCharactersButton;
    QCheckBox *useFontBrailleCharactersButton;
    QWidget *cursorTab;
    QGridLayout *gridLayout1;
    QGridLayout *gridLayout2;
    QLabel *label_8;
    QRadioButton *cursorShapeBlock;
    QRadioButton *cursorShapeIBeam;
    QRadioButton *cursorShapeUnderline;
    QSpacerItem *spacerItem1;
    QLabel *label_3;
    QRadioButton *autoCursorColorButton;
    QRadioButton *customCursorColorButton;
    QGridLayout *customColorLayout;
    QSpacerItem *spacerItem2;
    QLabel *customCursorColorLabel;
    KColorButton *customColorSelectButton;
    QSpacerItem *spacerItem3;
    QLabel *customCursorTextColorLabel;
    KColorButton *customTextColorSelectButton;
    QSpacerItem *spacerItem4;
    QLabel *label_2;
    QCheckBox *enableBlinkingCursorButton;
    QSpacerItem *spacerItem5;
    QWidget *miscTab;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *miscTabLayout;
    QLabel *label;
    QCheckBox *showTerminalSizeHintButton;
    QCheckBox *invertSelectionColorsCheckbox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *dimLabel;
    QSlider *dimValue;
    QHBoxLayout *horizontalLayout_4;
    QLabel *borderLabel;
    KColorButton *focusBorderColor;
    QSpacerItem *spacerItem6;
    QLabel *label_10;
    QLabel *label_11;
    QGroupBox *contentsGroup;
    QGridLayout *gridLayout3;
    QLabel *lineSpacingLabel;
    QHBoxLayout *hboxLayout;
    QSpinBox *lineSpacingSpinner;
    QSpacerItem *spacerItem7;
    QLabel *label_4;
    QHBoxLayout *hboxLayout1;
    QSpinBox *marginsSpinner;
    QSpacerItem *spacerItem8;
    QLabel *label_5;
    QCheckBox *alignToCenterButton;
    QCheckBox *dimWhenInactiveCheckbox;
    QCheckBox *borderWhenActiveCheckbox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *spacerItem9;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *displayVerticalLine;
    QSpinBox *displayVerticalLineAtColumn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *spacerItem10;
    QWidget *CTLtab;
    QGridLayout *CTL_2;
    QCheckBox *wordMode;
    QCheckBox *wordModeAttr;
    QCheckBox *wordModeAscii;
    QCheckBox *wordModeBrahmic;
    QLabel *label_17;
    QPushButton *emojiFontPreview;
    QCheckBox *enableBidiRenderingButton;
    QCheckBox *bidiLineLTR;
    QCheckBox *enableBidiTableDirOverrideButton;
    QCheckBox *ignoreWcWidth;
    QSpacerItem *spacerItem11;
    QButtonGroup *cursorColor;
    QButtonGroup *cursorShape;

    void setupUi(QWidget *EditProfileAppearancePage)
    {
        if (EditProfileAppearancePage->objectName().isEmpty())
            EditProfileAppearancePage->setObjectName("EditProfileAppearancePage");
        EditProfileAppearancePage->resize(622, 476);
        verticalLayout = new QVBoxLayout(EditProfileAppearancePage);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(EditProfileAppearancePage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setDocumentMode(true);
        colorSchemeTab = new QWidget();
        colorSchemeTab->setObjectName("colorSchemeTab");
        gridLayout = new QGridLayout(colorSchemeTab);
        gridLayout->setObjectName("gridLayout");
        colorSchemeMessageWidget = new KMessageWidget(colorSchemeTab);
        colorSchemeMessageWidget->setObjectName("colorSchemeMessageWidget");
        colorSchemeMessageWidget->setFrameShape(QFrame::Shape::StyledPanel);
        colorSchemeMessageWidget->setFrameShadow(QFrame::Shadow::Raised);

        gridLayout->addWidget(colorSchemeMessageWidget, 0, 0, 1, 3);

        colorSchemeList = new QListView(colorSchemeTab);
        colorSchemeList->setObjectName("colorSchemeList");
        colorSchemeList->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerPixel);

        gridLayout->addWidget(colorSchemeList, 1, 0, 1, 2);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName("vboxLayout");
        colorSchemesBtnLayout = new QVBoxLayout();
        colorSchemesBtnLayout->setSpacing(6);
        colorSchemesBtnLayout->setObjectName("colorSchemesBtnLayout");
        newColorSchemeButton = new QPushButton(colorSchemeTab);
        newColorSchemeButton->setObjectName("newColorSchemeButton");

        colorSchemesBtnLayout->addWidget(newColorSchemeButton);

        editColorSchemeButton = new QPushButton(colorSchemeTab);
        editColorSchemeButton->setObjectName("editColorSchemeButton");

        colorSchemesBtnLayout->addWidget(editColorSchemeButton);

        removeColorSchemeButton = new QPushButton(colorSchemeTab);
        removeColorSchemeButton->setObjectName("removeColorSchemeButton");

        colorSchemesBtnLayout->addWidget(removeColorSchemeButton);

        resetColorSchemeButton = new QPushButton(colorSchemeTab);
        resetColorSchemeButton->setObjectName("resetColorSchemeButton");

        colorSchemesBtnLayout->addWidget(resetColorSchemeButton);


        vboxLayout->addLayout(colorSchemesBtnLayout);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout->addItem(spacerItem);


        gridLayout->addLayout(vboxLayout, 1, 2, 1, 1);

        transparencyWarningWidget = new KMessageWidget(colorSchemeTab);
        transparencyWarningWidget->setObjectName("transparencyWarningWidget");

        gridLayout->addWidget(transparencyWarningWidget, 2, 0, 1, 3);

        label_7 = new QLabel(colorSchemeTab);
        label_7->setObjectName("label_7");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        fontPreview = new QLabel(colorSchemeTab);
        fontPreview->setObjectName("fontPreview");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(fontPreview->sizePolicy().hasHeightForWidth());
        fontPreview->setSizePolicy(sizePolicy1);
        fontPreview->setFrameShape(QFrame::Shape::StyledPanel);
        fontPreview->setFrameShadow(QFrame::Shadow::Sunken);
        fontPreview->setText(QString::fromUtf8(""));
        fontPreview->setTextFormat(Qt::TextFormat::PlainText);

        gridLayout->addWidget(fontPreview, 3, 1, 1, 1);

        chooseFontButton = new QPushButton(colorSchemeTab);
        chooseFontButton->setObjectName("chooseFontButton");

        gridLayout->addWidget(chooseFontButton, 3, 2, 1, 1);

        antialiasTextButton = new QCheckBox(colorSchemeTab);
        antialiasTextButton->setObjectName("antialiasTextButton");

        gridLayout->addWidget(antialiasTextButton, 4, 1, 1, 2);

        boldIntenseButton = new QCheckBox(colorSchemeTab);
        boldIntenseButton->setObjectName("boldIntenseButton");

        gridLayout->addWidget(boldIntenseButton, 5, 1, 1, 2);

        useFontLineCharactersButton = new QCheckBox(colorSchemeTab);
        useFontLineCharactersButton->setObjectName("useFontLineCharactersButton");

        gridLayout->addWidget(useFontLineCharactersButton, 6, 1, 1, 2);

        useFontBrailleCharactersButton = new QCheckBox(colorSchemeTab);
        useFontBrailleCharactersButton->setObjectName("useFontBrailleCharactersButton");

        gridLayout->addWidget(useFontBrailleCharactersButton, 7, 1, 1, 2);

        tabWidget->addTab(colorSchemeTab, QString());
        cursorTab = new QWidget();
        cursorTab->setObjectName("cursorTab");
        gridLayout1 = new QGridLayout(cursorTab);
        gridLayout1->setSpacing(0);
        gridLayout1->setObjectName("gridLayout1");
        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(6);
        gridLayout2->setObjectName("gridLayout2");
        label_8 = new QLabel(cursorTab);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout2->addWidget(label_8, 0, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        cursorShapeBlock = new QRadioButton(cursorTab);
        cursorShape = new QButtonGroup(EditProfileAppearancePage);
        cursorShape->setObjectName("cursorShape");
        cursorShape->addButton(cursorShapeBlock);
        cursorShapeBlock->setObjectName("cursorShapeBlock");

        gridLayout2->addWidget(cursorShapeBlock, 0, 1, 1, 1);

        cursorShapeIBeam = new QRadioButton(cursorTab);
        cursorShape->addButton(cursorShapeIBeam);
        cursorShapeIBeam->setObjectName("cursorShapeIBeam");

        gridLayout2->addWidget(cursorShapeIBeam, 1, 1, 1, 1);

        cursorShapeUnderline = new QRadioButton(cursorTab);
        cursorShape->addButton(cursorShapeUnderline);
        cursorShapeUnderline->setObjectName("cursorShapeUnderline");

        gridLayout2->addWidget(cursorShapeUnderline, 2, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout2->addItem(spacerItem1, 3, 1, 1, 1);

        label_3 = new QLabel(cursorTab);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout2->addWidget(label_3, 4, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        autoCursorColorButton = new QRadioButton(cursorTab);
        cursorColor = new QButtonGroup(EditProfileAppearancePage);
        cursorColor->setObjectName("cursorColor");
        cursorColor->addButton(autoCursorColorButton);
        autoCursorColorButton->setObjectName("autoCursorColorButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(autoCursorColorButton->sizePolicy().hasHeightForWidth());
        autoCursorColorButton->setSizePolicy(sizePolicy2);

        gridLayout2->addWidget(autoCursorColorButton, 4, 1, 1, 1);

        customCursorColorButton = new QRadioButton(cursorTab);
        cursorColor->addButton(customCursorColorButton);
        customCursorColorButton->setObjectName("customCursorColorButton");
        sizePolicy2.setHeightForWidth(customCursorColorButton->sizePolicy().hasHeightForWidth());
        customCursorColorButton->setSizePolicy(sizePolicy2);

        gridLayout2->addWidget(customCursorColorButton, 5, 1, 1, 1);

        customColorLayout = new QGridLayout();
        customColorLayout->setSpacing(6);
        customColorLayout->setObjectName("customColorLayout");
        spacerItem2 = new QSpacerItem(24, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        customColorLayout->addItem(spacerItem2, 0, 0, 1, 1);

        customCursorColorLabel = new QLabel(cursorTab);
        customCursorColorLabel->setObjectName("customCursorColorLabel");
        customCursorColorLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        customColorLayout->addWidget(customCursorColorLabel, 0, 1, 1, 1);

        customColorSelectButton = new KColorButton(cursorTab);
        customColorSelectButton->setObjectName("customColorSelectButton");

        customColorLayout->addWidget(customColorSelectButton, 0, 2, 1, 1);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        customColorLayout->addItem(spacerItem3, 0, 3, 1, 1);

        customCursorTextColorLabel = new QLabel(cursorTab);
        customCursorTextColorLabel->setObjectName("customCursorTextColorLabel");
        customCursorTextColorLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        customColorLayout->addWidget(customCursorTextColorLabel, 1, 1, 1, 1);

        customTextColorSelectButton = new KColorButton(cursorTab);
        customTextColorSelectButton->setObjectName("customTextColorSelectButton");

        customColorLayout->addWidget(customTextColorSelectButton, 1, 2, 1, 1);


        gridLayout2->addLayout(customColorLayout, 6, 1, 1, 1);

        spacerItem4 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout2->addItem(spacerItem4, 8, 1, 1, 1);

        label_2 = new QLabel(cursorTab);
        label_2->setObjectName("label_2");

        gridLayout2->addWidget(label_2, 8, 0, 1, 1, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignVCenter);

        enableBlinkingCursorButton = new QCheckBox(cursorTab);
        enableBlinkingCursorButton->setObjectName("enableBlinkingCursorButton");
        sizePolicy2.setHeightForWidth(enableBlinkingCursorButton->sizePolicy().hasHeightForWidth());
        enableBlinkingCursorButton->setSizePolicy(sizePolicy2);

        gridLayout2->addWidget(enableBlinkingCursorButton, 8, 1, 1, 1);


        gridLayout1->addLayout(gridLayout2, 0, 0, 1, 2);

        spacerItem5 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout1->addItem(spacerItem5, 1, 0, 1, 2);

        tabWidget->addTab(cursorTab, QString());
        miscTab = new QWidget();
        miscTab->setObjectName("miscTab");
        verticalLayout_2 = new QVBoxLayout(miscTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        miscTabLayout = new QGridLayout();
        miscTabLayout->setSpacing(6);
        miscTabLayout->setObjectName("miscTabLayout");
        label = new QLabel(miscTab);
        label->setObjectName("label");

        miscTabLayout->addWidget(label, 2, 0, 1, 1, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignVCenter);

        showTerminalSizeHintButton = new QCheckBox(miscTab);
        showTerminalSizeHintButton->setObjectName("showTerminalSizeHintButton");

        miscTabLayout->addWidget(showTerminalSizeHintButton, 2, 1, 1, 2);

        invertSelectionColorsCheckbox = new QCheckBox(miscTab);
        invertSelectionColorsCheckbox->setObjectName("invertSelectionColorsCheckbox");

        miscTabLayout->addWidget(invertSelectionColorsCheckbox, 9, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        dimLabel = new QLabel(miscTab);
        dimLabel->setObjectName("dimLabel");
        dimLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(dimLabel);

        dimValue = new QSlider(miscTab);
        dimValue->setObjectName("dimValue");
        dimValue->setMaximum(255);
        dimValue->setOrientation(Qt::Orientation::Horizontal);
        dimValue->setTickPosition(QSlider::TickPosition::NoTicks);

        horizontalLayout_2->addWidget(dimValue);


        miscTabLayout->addLayout(horizontalLayout_2, 5, 1, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        borderLabel = new QLabel(miscTab);
        borderLabel->setObjectName("borderLabel");
        sizePolicy.setHeightForWidth(borderLabel->sizePolicy().hasHeightForWidth());
        borderLabel->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(borderLabel);

        focusBorderColor = new KColorButton(miscTab);
        focusBorderColor->setObjectName("focusBorderColor");
        sizePolicy.setHeightForWidth(focusBorderColor->sizePolicy().hasHeightForWidth());
        focusBorderColor->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(focusBorderColor);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(spacerItem6);


        miscTabLayout->addLayout(horizontalLayout_4, 8, 1, 1, 2);

        label_10 = new QLabel(miscTab);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        miscTabLayout->addWidget(label_10, 4, 0, 1, 1);

        label_11 = new QLabel(miscTab);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        miscTabLayout->addWidget(label_11, 7, 0, 1, 1);

        contentsGroup = new QGroupBox(miscTab);
        contentsGroup->setObjectName("contentsGroup");
        gridLayout3 = new QGridLayout(contentsGroup);
        gridLayout3->setObjectName("gridLayout3");
        lineSpacingLabel = new QLabel(contentsGroup);
        lineSpacingLabel->setObjectName("lineSpacingLabel");
        sizePolicy.setHeightForWidth(lineSpacingLabel->sizePolicy().hasHeightForWidth());
        lineSpacingLabel->setSizePolicy(sizePolicy);
        lineSpacingLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout3->addWidget(lineSpacingLabel, 0, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName("hboxLayout");
        lineSpacingSpinner = new QSpinBox(contentsGroup);
        lineSpacingSpinner->setObjectName("lineSpacingSpinner");
        lineSpacingSpinner->setMinimum(0);
        lineSpacingSpinner->setMaximum(20);

        hboxLayout->addWidget(lineSpacingSpinner);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem7);


        gridLayout3->addLayout(hboxLayout, 0, 1, 1, 1);

        label_4 = new QLabel(contentsGroup);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout3->addWidget(label_4, 1, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setObjectName("hboxLayout1");
        marginsSpinner = new QSpinBox(contentsGroup);
        marginsSpinner->setObjectName("marginsSpinner");
        marginsSpinner->setMaximum(99);
        marginsSpinner->setValue(1);

        hboxLayout1->addWidget(marginsSpinner);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout1->addItem(spacerItem8);


        gridLayout3->addLayout(hboxLayout1, 1, 1, 1, 1);

        label_5 = new QLabel(contentsGroup);
        label_5->setObjectName("label_5");
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout3->addWidget(label_5, 2, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        alignToCenterButton = new QCheckBox(contentsGroup);
        alignToCenterButton->setObjectName("alignToCenterButton");

        gridLayout3->addWidget(alignToCenterButton, 2, 1, 1, 1);

        gridLayout3->setColumnStretch(1, 1);

        miscTabLayout->addWidget(contentsGroup, 0, 0, 1, 3);

        dimWhenInactiveCheckbox = new QCheckBox(miscTab);
        dimWhenInactiveCheckbox->setObjectName("dimWhenInactiveCheckbox");

        miscTabLayout->addWidget(dimWhenInactiveCheckbox, 4, 1, 1, 2);

        borderWhenActiveCheckbox = new QCheckBox(miscTab);
        borderWhenActiveCheckbox->setObjectName("borderWhenActiveCheckbox");

        miscTabLayout->addWidget(borderWhenActiveCheckbox, 7, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        miscTabLayout->addLayout(horizontalLayout, 10, 1, 1, 1);

        spacerItem9 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        miscTabLayout->addItem(spacerItem9, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        displayVerticalLine = new QCheckBox(miscTab);
        displayVerticalLine->setObjectName("displayVerticalLine");

        horizontalLayout_3->addWidget(displayVerticalLine);

        displayVerticalLineAtColumn = new QSpinBox(miscTab);
        displayVerticalLineAtColumn->setObjectName("displayVerticalLineAtColumn");
        displayVerticalLineAtColumn->setMaximum(999);

        horizontalLayout_3->addWidget(displayVerticalLineAtColumn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        miscTabLayout->addLayout(horizontalLayout_3, 3, 1, 1, 1);


        verticalLayout_2->addLayout(miscTabLayout);

        spacerItem10 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(spacerItem10);

        tabWidget->addTab(miscTab, QString());
        CTLtab = new QWidget();
        CTLtab->setObjectName("CTLtab");
        CTL_2 = new QGridLayout(CTLtab);
        CTL_2->setSpacing(6);
        CTL_2->setObjectName("CTL_2");
        wordMode = new QCheckBox(CTLtab);
        wordMode->setObjectName("wordMode");
        sizePolicy2.setHeightForWidth(wordMode->sizePolicy().hasHeightForWidth());
        wordMode->setSizePolicy(sizePolicy2);

        CTL_2->addWidget(wordMode, 31, 1, 1, 1);

        wordModeAttr = new QCheckBox(CTLtab);
        wordModeAttr->setObjectName("wordModeAttr");
        sizePolicy2.setHeightForWidth(wordModeAttr->sizePolicy().hasHeightForWidth());
        wordModeAttr->setSizePolicy(sizePolicy2);

        CTL_2->addWidget(wordModeAttr, 32, 1, 1, 1);

        wordModeAscii = new QCheckBox(CTLtab);
        wordModeAscii->setObjectName("wordModeAscii");
        sizePolicy2.setHeightForWidth(wordModeAscii->sizePolicy().hasHeightForWidth());
        wordModeAscii->setSizePolicy(sizePolicy2);

        CTL_2->addWidget(wordModeAscii, 33, 1, 1, 1);

        wordModeBrahmic = new QCheckBox(CTLtab);
        wordModeBrahmic->setObjectName("wordModeBrahmic");
        sizePolicy2.setHeightForWidth(wordModeBrahmic->sizePolicy().hasHeightForWidth());
        wordModeBrahmic->setSizePolicy(sizePolicy2);

        CTL_2->addWidget(wordModeBrahmic, 34, 1, 1, 1);

        label_17 = new QLabel(CTLtab);
        label_17->setObjectName("label_17");
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);
        label_17->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        CTL_2->addWidget(label_17, 61, 0, 1, 1);

        emojiFontPreview = new QPushButton(CTLtab);
        emojiFontPreview->setObjectName("emojiFontPreview");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(emojiFontPreview->sizePolicy().hasHeightForWidth());
        emojiFontPreview->setSizePolicy(sizePolicy3);

        CTL_2->addWidget(emojiFontPreview, 61, 1, 1, 1);

        enableBidiRenderingButton = new QCheckBox(CTLtab);
        enableBidiRenderingButton->setObjectName("enableBidiRenderingButton");
        sizePolicy2.setHeightForWidth(enableBidiRenderingButton->sizePolicy().hasHeightForWidth());
        enableBidiRenderingButton->setSizePolicy(sizePolicy2);

        CTL_2->addWidget(enableBidiRenderingButton, 102, 1, 1, 1);

        bidiLineLTR = new QCheckBox(CTLtab);
        bidiLineLTR->setObjectName("bidiLineLTR");
        sizePolicy2.setHeightForWidth(bidiLineLTR->sizePolicy().hasHeightForWidth());
        bidiLineLTR->setSizePolicy(sizePolicy2);

        CTL_2->addWidget(bidiLineLTR, 103, 1, 1, 1);

        enableBidiTableDirOverrideButton = new QCheckBox(CTLtab);
        enableBidiTableDirOverrideButton->setObjectName("enableBidiTableDirOverrideButton");
        sizePolicy2.setHeightForWidth(enableBidiTableDirOverrideButton->sizePolicy().hasHeightForWidth());
        enableBidiTableDirOverrideButton->setSizePolicy(sizePolicy2);

        CTL_2->addWidget(enableBidiTableDirOverrideButton, 104, 1, 1, 1);

        ignoreWcWidth = new QCheckBox(CTLtab);
        ignoreWcWidth->setObjectName("ignoreWcWidth");
        sizePolicy2.setHeightForWidth(ignoreWcWidth->sizePolicy().hasHeightForWidth());
        ignoreWcWidth->setSizePolicy(sizePolicy2);

        CTL_2->addWidget(ignoreWcWidth, 110, 1, 1, 1);

        spacerItem11 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        CTL_2->addItem(spacerItem11, 1000, 0, 1, 2);

        tabWidget->addTab(CTLtab, QString());

        verticalLayout->addWidget(tabWidget);

#if QT_CONFIG(shortcut)
        customCursorColorLabel->setBuddy(customColorSelectButton);
        customCursorTextColorLabel->setBuddy(customTextColorSelectButton);
        label_2->setBuddy(enableBlinkingCursorButton);
        borderLabel->setBuddy(focusBorderColor);
        lineSpacingLabel->setBuddy(lineSpacingSpinner);
        label_4->setBuddy(marginsSpinner);
        label_5->setBuddy(alignToCenterButton);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, colorSchemeList);
        QWidget::setTabOrder(colorSchemeList, newColorSchemeButton);
        QWidget::setTabOrder(newColorSchemeButton, editColorSchemeButton);
        QWidget::setTabOrder(editColorSchemeButton, removeColorSchemeButton);
        QWidget::setTabOrder(removeColorSchemeButton, resetColorSchemeButton);
        QWidget::setTabOrder(resetColorSchemeButton, chooseFontButton);
        QWidget::setTabOrder(chooseFontButton, antialiasTextButton);
        QWidget::setTabOrder(antialiasTextButton, boldIntenseButton);
        QWidget::setTabOrder(boldIntenseButton, useFontLineCharactersButton);
        QWidget::setTabOrder(useFontLineCharactersButton, useFontBrailleCharactersButton);
        QWidget::setTabOrder(useFontBrailleCharactersButton, cursorShapeBlock);
        QWidget::setTabOrder(cursorShapeBlock, cursorShapeIBeam);
        QWidget::setTabOrder(cursorShapeIBeam, cursorShapeUnderline);
        QWidget::setTabOrder(cursorShapeUnderline, autoCursorColorButton);
        QWidget::setTabOrder(autoCursorColorButton, customCursorColorButton);
        QWidget::setTabOrder(customCursorColorButton, customColorSelectButton);
        QWidget::setTabOrder(customColorSelectButton, customTextColorSelectButton);
        QWidget::setTabOrder(customTextColorSelectButton, enableBlinkingCursorButton);
        QWidget::setTabOrder(enableBlinkingCursorButton, lineSpacingSpinner);
        QWidget::setTabOrder(lineSpacingSpinner, marginsSpinner);
        QWidget::setTabOrder(marginsSpinner, alignToCenterButton);
        QWidget::setTabOrder(alignToCenterButton, showTerminalSizeHintButton);
        QWidget::setTabOrder(showTerminalSizeHintButton, dimWhenInactiveCheckbox);

        retranslateUi(EditProfileAppearancePage);
        QObject::connect(dimWhenInactiveCheckbox, &QCheckBox::clicked, dimValue, &QSlider::setEnabled);
        QObject::connect(dimWhenInactiveCheckbox, &QCheckBox::clicked, dimLabel, &QLabel::setEnabled);
        QObject::connect(borderWhenActiveCheckbox, &QCheckBox::clicked, borderLabel, &QLabel::setEnabled);
        QObject::connect(borderWhenActiveCheckbox, SIGNAL(clicked(bool)), focusBorderColor, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditProfileAppearancePage);
    } // setupUi

    void retranslateUi(QWidget *EditProfileAppearancePage)
    {
#if QT_CONFIG(tooltip)
        newColorSchemeButton->setToolTip(tr2i18n("Create a new color scheme based upon the selected scheme", nullptr));
#endif // QT_CONFIG(tooltip)
        newColorSchemeButton->setText(tr2i18n("New...", "@action:button Create an alternate color scheme"));
#if QT_CONFIG(tooltip)
        editColorSchemeButton->setToolTip(tr2i18n("Edit the selected color scheme", nullptr));
#endif // QT_CONFIG(tooltip)
        editColorSchemeButton->setText(tr2i18n("Edit...", nullptr));
#if QT_CONFIG(tooltip)
        removeColorSchemeButton->setToolTip(tr2i18n("Delete the selected color scheme", nullptr));
#endif // QT_CONFIG(tooltip)
        removeColorSchemeButton->setText(tr2i18n("Remove", nullptr));
#if QT_CONFIG(tooltip)
        resetColorSchemeButton->setToolTip(tr2i18n("Reset the selected color scheme settings to the default values", nullptr));
#endif // QT_CONFIG(tooltip)
        resetColorSchemeButton->setText(tr2i18n("Defaults", nullptr));
        label_7->setText(tr2i18n("Font:", nullptr));
        chooseFontButton->setText(tr2i18n("Choose...", "@action:button open a dialog with list of fonts"));
        antialiasTextButton->setText(tr2i18n("Smooth fonts", nullptr));
        boldIntenseButton->setText(tr2i18n("Draw intense colors in bold font", nullptr));
#if QT_CONFIG(tooltip)
        useFontLineCharactersButton->setToolTip(tr2i18n("Use the selected font for line characters instead of the builtin code", "Characters for drawing lines for a frame or box in TUI programs. Not a row of characters."));
#endif // QT_CONFIG(tooltip)
        useFontLineCharactersButton->setText(tr2i18n("Use line characters contained in font", "Characters for drawing lines for a frame or box in TUI programs. Not a row of characters."));
#if QT_CONFIG(tooltip)
        useFontBrailleCharactersButton->setToolTip(tr2i18n("Use the selected font for unicode Braille characters instead of the builtin code", nullptr));
#endif // QT_CONFIG(tooltip)
        useFontBrailleCharactersButton->setText(tr2i18n("Use unicode Braille characters contained in font", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(colorSchemeTab), tr2i18n("Color scheme && font", nullptr));
        label_8->setText(tr2i18n("Shape:", nullptr));
        cursorShapeBlock->setText(tr2i18n("Block", "A solid rectangular"));
        cursorShapeIBeam->setText(tr2i18n("I-Beam", "A vertical line on the left edge"));
        cursorShapeUnderline->setText(tr2i18n("Underline", "A hortizonal line on the bottom edge"));
        label_3->setText(tr2i18n("Color:", "Cursor color options"));
#if QT_CONFIG(tooltip)
        autoCursorColorButton->setToolTip(tr2i18n("Set the cursor to match the color of the character underneath it.", nullptr));
#endif // QT_CONFIG(tooltip)
        autoCursorColorButton->setText(tr2i18n("Match current character", nullptr));
#if QT_CONFIG(tooltip)
        customCursorColorButton->setToolTip(tr2i18n("Use a custom, fixed color for the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
        customCursorColorButton->setText(tr2i18n("Custom cursor color", nullptr));
        customCursorColorLabel->setText(tr2i18n("Cursor:", nullptr));
#if QT_CONFIG(tooltip)
        customColorSelectButton->setToolTip(tr2i18n("Select the color used to draw the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
        customCursorTextColorLabel->setText(tr2i18n("Text:", nullptr));
#if QT_CONFIG(tooltip)
        customTextColorSelectButton->setToolTip(tr2i18n("Select the color used to draw the character underneath the cursor", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(tr2i18n("Blinking:", nullptr));
#if QT_CONFIG(tooltip)
        enableBlinkingCursorButton->setToolTip(tr2i18n("Make the cursor blink regularly", nullptr));
#endif // QT_CONFIG(tooltip)
        enableBlinkingCursorButton->setText(tr2i18n("Enabled", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(cursorTab), tr2i18n("Cursor", nullptr));
        label->setText(tr2i18n("Window:", nullptr));
#if QT_CONFIG(tooltip)
        showTerminalSizeHintButton->setToolTip(tr2i18n("Show terminal size in columns and lines in the center of window after resizing", nullptr));
#endif // QT_CONFIG(tooltip)
        showTerminalSizeHintButton->setText(tr2i18n("Show hint for terminal size after resizing", nullptr));
        invertSelectionColorsCheckbox->setText(tr2i18n("Always invert the colors of selected text", nullptr));
        dimLabel->setText(tr2i18n("Darkening strength:", nullptr));
        borderLabel->setText(tr2i18n("Color:", "Border color options"));
#if QT_CONFIG(tooltip)
        focusBorderColor->setToolTip(tr2i18n("Select the color used to draw the border", nullptr));
#endif // QT_CONFIG(tooltip)
        label_10->setText(tr2i18n("Inactive Terminals:", nullptr));
        label_11->setText(tr2i18n("Active Terminals:", nullptr));
        contentsGroup->setTitle(tr2i18n("Terminal contents", "@title:group"));
        lineSpacingLabel->setText(tr2i18n("Line spacing:", nullptr));
#if QT_CONFIG(tooltip)
        lineSpacingSpinner->setToolTip(tr2i18n("The number of pixels between two lines", nullptr));
#endif // QT_CONFIG(tooltip)
        lineSpacingSpinner->setSuffix(tr2i18n(" px", "(pixels) visual size unit"));
        label_4->setText(tr2i18n("Margins:", nullptr));
        marginsSpinner->setSuffix(tr2i18n(" px", "(pixels) visual size unit"));
        label_5->setText(tr2i18n("Align to center:", nullptr));
        alignToCenterButton->setText(tr2i18n("Enabled", nullptr));
#if QT_CONFIG(tooltip)
        dimWhenInactiveCheckbox->setToolTip(tr2i18n("Indicate whether the window is active by dimming the colors", nullptr));
#endif // QT_CONFIG(tooltip)
        dimWhenInactiveCheckbox->setText(tr2i18n("Darken", nullptr));
#if QT_CONFIG(tooltip)
        borderWhenActiveCheckbox->setToolTip(tr2i18n("Indicate whether the window is active by drawing a border", nullptr));
#endif // QT_CONFIG(tooltip)
        borderWhenActiveCheckbox->setText(tr2i18n("Border", nullptr));
        displayVerticalLine->setText(tr2i18n("Display Vertical line at column:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(miscTab), tr2i18n("Miscellaneous", "Items that do not fit in other categories"));
#if QT_CONFIG(tooltip)
        CTLtab->setToolTip(tr2i18n("<html><head/><body><p>Complex Text Layout</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        wordMode->setToolTip(tr2i18n("Enable word mode text rendering", nullptr));
#endif // QT_CONFIG(tooltip)
        wordMode->setText(tr2i18n("Word mode", nullptr));
#if QT_CONFIG(tooltip)
        wordModeAttr->setToolTip(tr2i18n("Ignore attribute changes mid-word (otherwise, attribute changes break word when rendering)", nullptr));
#endif // QT_CONFIG(tooltip)
        wordModeAttr->setText(tr2i18n("Use the same attributes for whole word", nullptr));
#if QT_CONFIG(tooltip)
        wordModeAscii->setToolTip(tr2i18n("Render words of ASCII characters together", nullptr));
#endif // QT_CONFIG(tooltip)
        wordModeAscii->setText(tr2i18n("ASCII characters ", nullptr));
#if QT_CONFIG(tooltip)
        wordModeBrahmic->setToolTip(tr2i18n("Render words of Brahmic scripts characters together", nullptr));
#endif // QT_CONFIG(tooltip)
        wordModeBrahmic->setText(tr2i18n("Brahmic scripts characters", nullptr));
        label_17->setText(tr2i18n("Emoji Font:", nullptr));
#if QT_CONFIG(tooltip)
        enableBidiRenderingButton->setToolTip(tr2i18n("Enable Bi-Directional display on terminals (valid for Arabic, Farsi or Hebrew only)", nullptr));
#endif // QT_CONFIG(tooltip)
        enableBidiRenderingButton->setText(tr2i18n("Bi-Directional text rendering", nullptr));
#if QT_CONFIG(tooltip)
        bidiLineLTR->setToolTip(tr2i18n("Lines are always LTR, rather than determined by first strong character", nullptr));
#endif // QT_CONFIG(tooltip)
        bidiLineLTR->setText(tr2i18n("force LTR line direction", nullptr));
#if QT_CONFIG(tooltip)
        enableBidiTableDirOverrideButton->setToolTip(tr2i18n("Treat table drawing characters as strong LTR.", nullptr));
#endif // QT_CONFIG(tooltip)
        enableBidiTableDirOverrideButton->setText(tr2i18n("Table characters BiDi mode override", nullptr));
#if QT_CONFIG(tooltip)
        ignoreWcWidth->setToolTip(tr2i18n("Ignore wcwidth of problematic characters", nullptr));
#endif // QT_CONFIG(tooltip)
        ignoreWcWidth->setText(tr2i18n("Override wcwidth", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(CTLtab), tr2i18n("Complex Text Layout", nullptr));
        (void)EditProfileAppearancePage;
    } // retranslateUi

};

namespace Ui {
    class EditProfileAppearancePage: public Ui_EditProfileAppearancePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDITPROFILEAPPEARANCEPAGE_H

