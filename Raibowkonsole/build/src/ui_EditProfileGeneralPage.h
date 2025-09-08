#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'EditProfileGeneralPage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILEGENERALPAGE_H
#define UI_EDITPROFILEGENERALPAGE_H

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
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kmessagewidget.h"
#include "kpluralhandlingspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_EditProfileGeneralPage
{
public:
    QVBoxLayout *verticalLayout;
    KMessageWidget *generalPageMessageWidget;
    QTabWidget *tabWidget;
    QWidget *general;
    QGridLayout *gridLayout;
    QPushButton *iconSelectButton;
    QVBoxLayout *profileNameLayout;
    QLineEdit *profileNameEdit;
    QCheckBox *setAsDefaultButton;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QLineEdit *commandEdit;
    QLabel *label_9;
    QLineEdit *initialDirEdit;
    QToolButton *dirSelectButton;
    QCheckBox *startInSameDirButton;
    QLabel *label_4;
    QHBoxLayout *hboxLayout;
    QPushButton *environmentEditButton;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QLabel *label_5;
    QHBoxLayout *hboxLayout1;
    QHBoxLayout *hboxLayout2;
    KPluralHandlingSpinBox *terminalColumnsEntry;
    KPluralHandlingSpinBox *terminalRowsEntry;
    QSpacerItem *spacerItem3;
    QLabel *useCurrentWindowSizeNote;
    QLabel *terminalBellLabel;
    QHBoxLayout *terminalBellLayout;
    QComboBox *terminalBellCombo;
    QWidget *semantic;
    QGridLayout *gridLayout1;
    QCheckBox *semanticUpDown;
    QCheckBox *semanticInputClick;
    QLabel *label_8;
    QRadioButton *semanticHintsNever;
    QRadioButton *semanticHintsURL;
    QRadioButton *semanticHintsAlways;
    QLabel *label_20;
    QRadioButton *errorBarsNever;
    QRadioButton *errorBarsURL;
    QRadioButton *errorBarsAlways;
    QLabel *label_30;
    QRadioButton *errorBackgroundNever;
    QRadioButton *errorBackgroundURL;
    QRadioButton *errorBackgroundAlways;
    QLabel *label_40;
    QRadioButton *alternatingBarsNever;
    QRadioButton *alternatingBarsURL;
    QRadioButton *alternatingBarsAlways;
    QLabel *label_50;
    QRadioButton *alternatingBackgroundNever;
    QRadioButton *alternatingBackgroundURL;
    QRadioButton *alternatingBackgroundAlways;
    QSpacerItem *verticalSpacer;
    QSpacerItem *spacerItem4;
    QButtonGroup *errorBars;
    QButtonGroup *errorBackground;
    QButtonGroup *alternatingBars;
    QButtonGroup *semanticHints;
    QButtonGroup *alternatingBackground;

    void setupUi(QWidget *EditProfileGeneralPage)
    {
        if (EditProfileGeneralPage->objectName().isEmpty())
            EditProfileGeneralPage->setObjectName("EditProfileGeneralPage");
        EditProfileGeneralPage->resize(642, 498);
        verticalLayout = new QVBoxLayout(EditProfileGeneralPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        generalPageMessageWidget = new KMessageWidget(EditProfileGeneralPage);
        generalPageMessageWidget->setObjectName("generalPageMessageWidget");

        verticalLayout->addWidget(generalPageMessageWidget);

        tabWidget = new QTabWidget(EditProfileGeneralPage);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setDocumentMode(true);
        general = new QWidget();
        general->setObjectName("general");
        gridLayout = new QGridLayout(general);
        gridLayout->setObjectName("gridLayout");
        iconSelectButton = new QPushButton(general);
        iconSelectButton->setObjectName("iconSelectButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconSelectButton->sizePolicy().hasHeightForWidth());
        iconSelectButton->setSizePolicy(sizePolicy);
        iconSelectButton->setMinimumSize(QSize(48, 48));
        iconSelectButton->setBaseSize(QSize(0, 0));
        iconSelectButton->setIconSize(QSize(32, 32));

        gridLayout->addWidget(iconSelectButton, 1, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        profileNameLayout = new QVBoxLayout();
        profileNameLayout->setObjectName("profileNameLayout");
        profileNameEdit = new QLineEdit(general);
        profileNameEdit->setObjectName("profileNameEdit");

        profileNameLayout->addWidget(profileNameEdit);

        setAsDefaultButton = new QCheckBox(general);
        setAsDefaultButton->setObjectName("setAsDefaultButton");

        profileNameLayout->addWidget(setAsDefaultButton);


        gridLayout->addLayout(profileNameLayout, 1, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem, 2, 0, 1, 1);

        label_3 = new QLabel(general);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_3, 3, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        commandEdit = new QLineEdit(general);
        commandEdit->setObjectName("commandEdit");
        commandEdit->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        gridLayout->addWidget(commandEdit, 3, 1, 1, 1);

        label_9 = new QLabel(general);
        label_9->setObjectName("label_9");
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_9, 4, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        initialDirEdit = new QLineEdit(general);
        initialDirEdit->setObjectName("initialDirEdit");
        initialDirEdit->setLayoutDirection(Qt::LayoutDirection::LeftToRight);

        gridLayout->addWidget(initialDirEdit, 4, 1, 1, 1);

        dirSelectButton = new QToolButton(general);
        dirSelectButton->setObjectName("dirSelectButton");

        gridLayout->addWidget(dirSelectButton, 4, 2, 1, 1);

        startInSameDirButton = new QCheckBox(general);
        startInSameDirButton->setObjectName("startInSameDirButton");

        gridLayout->addWidget(startInSameDirButton, 5, 1, 1, 2);

        label_4 = new QLabel(general);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_4, 6, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName("hboxLayout");
        environmentEditButton = new QPushButton(general);
        environmentEditButton->setObjectName("environmentEditButton");

        hboxLayout->addWidget(environmentEditButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout, 6, 1, 1, 2);

        spacerItem2 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem2, 7, 1, 1, 1);

        label_5 = new QLabel(general);
        label_5->setObjectName("label_5");
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_5, 8, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setObjectName("hboxLayout1");
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName("hboxLayout2");
        terminalColumnsEntry = new KPluralHandlingSpinBox(general);
        terminalColumnsEntry->setObjectName("terminalColumnsEntry");
        sizePolicy.setHeightForWidth(terminalColumnsEntry->sizePolicy().hasHeightForWidth());
        terminalColumnsEntry->setSizePolicy(sizePolicy);
        terminalColumnsEntry->setMinimum(1);
        terminalColumnsEntry->setMaximum(999);

        hboxLayout2->addWidget(terminalColumnsEntry);

        terminalRowsEntry = new KPluralHandlingSpinBox(general);
        terminalRowsEntry->setObjectName("terminalRowsEntry");
        sizePolicy.setHeightForWidth(terminalRowsEntry->sizePolicy().hasHeightForWidth());
        terminalRowsEntry->setSizePolicy(sizePolicy);
        terminalRowsEntry->setMinimum(1);
        terminalRowsEntry->setMaximum(999);

        hboxLayout2->addWidget(terminalRowsEntry);


        hboxLayout1->addLayout(hboxLayout2);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout1->addItem(spacerItem3);


        gridLayout->addLayout(hboxLayout1, 8, 1, 1, 2);

        useCurrentWindowSizeNote = new QLabel(general);
        useCurrentWindowSizeNote->setObjectName("useCurrentWindowSizeNote");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(useCurrentWindowSizeNote->sizePolicy().hasHeightForWidth());
        useCurrentWindowSizeNote->setSizePolicy(sizePolicy2);
        useCurrentWindowSizeNote->setTextFormat(Qt::TextFormat::RichText);
        useCurrentWindowSizeNote->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        useCurrentWindowSizeNote->setWordWrap(true);

        gridLayout->addWidget(useCurrentWindowSizeNote, 9, 1, 1, 2);

        terminalBellLabel = new QLabel(general);
        terminalBellLabel->setObjectName("terminalBellLabel");

        gridLayout->addWidget(terminalBellLabel, 10, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        terminalBellLayout = new QHBoxLayout();
        terminalBellLayout->setObjectName("terminalBellLayout");
        terminalBellCombo = new QComboBox(general);
        terminalBellCombo->setObjectName("terminalBellCombo");

        terminalBellLayout->addWidget(terminalBellCombo);


        gridLayout->addLayout(terminalBellLayout, 10, 1, 1, 1);

        tabWidget->addTab(general, QString());
        semantic = new QWidget();
        semantic->setObjectName("semantic");
        gridLayout1 = new QGridLayout(semantic);
        gridLayout1->setObjectName("gridLayout1");
        semanticUpDown = new QCheckBox(semantic);
        semanticUpDown->setObjectName("semanticUpDown");

        gridLayout1->addWidget(semanticUpDown, 4, 0, 1, 2);

        semanticInputClick = new QCheckBox(semantic);
        semanticInputClick->setObjectName("semanticInputClick");

        gridLayout1->addWidget(semanticInputClick, 5, 0, 1, 1);

        label_8 = new QLabel(semantic);
        label_8->setObjectName("label_8");
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout1->addWidget(label_8, 10, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        semanticHintsNever = new QRadioButton(semantic);
        semanticHints = new QButtonGroup(EditProfileGeneralPage);
        semanticHints->setObjectName("semanticHints");
        semanticHints->addButton(semanticHintsNever);
        semanticHintsNever->setObjectName("semanticHintsNever");

        gridLayout1->addWidget(semanticHintsNever, 10, 1, 1, 1);

        semanticHintsURL = new QRadioButton(semantic);
        semanticHints->addButton(semanticHintsURL);
        semanticHintsURL->setObjectName("semanticHintsURL");

        gridLayout1->addWidget(semanticHintsURL, 11, 1, 1, 1);

        semanticHintsAlways = new QRadioButton(semantic);
        semanticHints->addButton(semanticHintsAlways);
        semanticHintsAlways->setObjectName("semanticHintsAlways");

        gridLayout1->addWidget(semanticHintsAlways, 12, 1, 1, 1);

        label_20 = new QLabel(semantic);
        label_20->setObjectName("label_20");
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);
        label_20->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout1->addWidget(label_20, 20, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        errorBarsNever = new QRadioButton(semantic);
        errorBars = new QButtonGroup(EditProfileGeneralPage);
        errorBars->setObjectName("errorBars");
        errorBars->addButton(errorBarsNever);
        errorBarsNever->setObjectName("errorBarsNever");

        gridLayout1->addWidget(errorBarsNever, 20, 1, 1, 1);

        errorBarsURL = new QRadioButton(semantic);
        errorBars->addButton(errorBarsURL);
        errorBarsURL->setObjectName("errorBarsURL");

        gridLayout1->addWidget(errorBarsURL, 21, 1, 1, 1);

        errorBarsAlways = new QRadioButton(semantic);
        errorBars->addButton(errorBarsAlways);
        errorBarsAlways->setObjectName("errorBarsAlways");

        gridLayout1->addWidget(errorBarsAlways, 22, 1, 1, 1);

        label_30 = new QLabel(semantic);
        label_30->setObjectName("label_30");
        sizePolicy1.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy1);
        label_30->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout1->addWidget(label_30, 30, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        errorBackgroundNever = new QRadioButton(semantic);
        errorBackground = new QButtonGroup(EditProfileGeneralPage);
        errorBackground->setObjectName("errorBackground");
        errorBackground->addButton(errorBackgroundNever);
        errorBackgroundNever->setObjectName("errorBackgroundNever");

        gridLayout1->addWidget(errorBackgroundNever, 30, 1, 1, 1);

        errorBackgroundURL = new QRadioButton(semantic);
        errorBackground->addButton(errorBackgroundURL);
        errorBackgroundURL->setObjectName("errorBackgroundURL");

        gridLayout1->addWidget(errorBackgroundURL, 31, 1, 1, 1);

        errorBackgroundAlways = new QRadioButton(semantic);
        errorBackground->addButton(errorBackgroundAlways);
        errorBackgroundAlways->setObjectName("errorBackgroundAlways");

        gridLayout1->addWidget(errorBackgroundAlways, 32, 1, 1, 1);

        label_40 = new QLabel(semantic);
        label_40->setObjectName("label_40");
        sizePolicy1.setHeightForWidth(label_40->sizePolicy().hasHeightForWidth());
        label_40->setSizePolicy(sizePolicy1);
        label_40->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout1->addWidget(label_40, 40, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        alternatingBarsNever = new QRadioButton(semantic);
        alternatingBars = new QButtonGroup(EditProfileGeneralPage);
        alternatingBars->setObjectName("alternatingBars");
        alternatingBars->addButton(alternatingBarsNever);
        alternatingBarsNever->setObjectName("alternatingBarsNever");

        gridLayout1->addWidget(alternatingBarsNever, 40, 1, 1, 1);

        alternatingBarsURL = new QRadioButton(semantic);
        alternatingBars->addButton(alternatingBarsURL);
        alternatingBarsURL->setObjectName("alternatingBarsURL");

        gridLayout1->addWidget(alternatingBarsURL, 41, 1, 1, 1);

        alternatingBarsAlways = new QRadioButton(semantic);
        alternatingBars->addButton(alternatingBarsAlways);
        alternatingBarsAlways->setObjectName("alternatingBarsAlways");

        gridLayout1->addWidget(alternatingBarsAlways, 42, 1, 1, 1);

        label_50 = new QLabel(semantic);
        label_50->setObjectName("label_50");
        sizePolicy1.setHeightForWidth(label_50->sizePolicy().hasHeightForWidth());
        label_50->setSizePolicy(sizePolicy1);
        label_50->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout1->addWidget(label_50, 50, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        alternatingBackgroundNever = new QRadioButton(semantic);
        alternatingBackground = new QButtonGroup(EditProfileGeneralPage);
        alternatingBackground->setObjectName("alternatingBackground");
        alternatingBackground->addButton(alternatingBackgroundNever);
        alternatingBackgroundNever->setObjectName("alternatingBackgroundNever");

        gridLayout1->addWidget(alternatingBackgroundNever, 50, 1, 1, 1);

        alternatingBackgroundURL = new QRadioButton(semantic);
        alternatingBackground->addButton(alternatingBackgroundURL);
        alternatingBackgroundURL->setObjectName("alternatingBackgroundURL");

        gridLayout1->addWidget(alternatingBackgroundURL, 51, 1, 1, 1);

        alternatingBackgroundAlways = new QRadioButton(semantic);
        alternatingBackground->addButton(alternatingBackgroundAlways);
        alternatingBackgroundAlways->setObjectName("alternatingBackgroundAlways");

        gridLayout1->addWidget(alternatingBackgroundAlways, 52, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout1->addItem(verticalSpacer, 99, 0, 1, 1);

        tabWidget->addTab(semantic, QString());

        verticalLayout->addWidget(tabWidget);

        spacerItem4 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(spacerItem4);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(commandEdit);
        label_9->setBuddy(initialDirEdit);
        label_4->setBuddy(environmentEditButton);
        label_5->setBuddy(terminalColumnsEntry);
        terminalBellLabel->setBuddy(terminalBellCombo);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(environmentEditButton, terminalColumnsEntry);
        QWidget::setTabOrder(terminalColumnsEntry, terminalRowsEntry);
        QWidget::setTabOrder(terminalRowsEntry, semanticHintsNever);
        QWidget::setTabOrder(semanticHintsNever, semanticHintsURL);
        QWidget::setTabOrder(semanticHintsURL, semanticHintsAlways);
        QWidget::setTabOrder(semanticHintsAlways, errorBarsNever);
        QWidget::setTabOrder(errorBarsNever, errorBarsURL);
        QWidget::setTabOrder(errorBarsURL, errorBarsAlways);
        QWidget::setTabOrder(errorBarsAlways, errorBackgroundNever);
        QWidget::setTabOrder(errorBackgroundNever, errorBackgroundURL);
        QWidget::setTabOrder(errorBackgroundURL, errorBackgroundAlways);
        QWidget::setTabOrder(errorBackgroundAlways, alternatingBarsNever);
        QWidget::setTabOrder(alternatingBarsNever, alternatingBarsURL);
        QWidget::setTabOrder(alternatingBarsURL, alternatingBarsAlways);
        QWidget::setTabOrder(alternatingBarsAlways, alternatingBackgroundNever);
        QWidget::setTabOrder(alternatingBackgroundNever, alternatingBackgroundURL);
        QWidget::setTabOrder(alternatingBackgroundURL, alternatingBackgroundAlways);

        retranslateUi(EditProfileGeneralPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditProfileGeneralPage);
    } // setupUi

    void retranslateUi(QWidget *EditProfileGeneralPage)
    {
#if QT_CONFIG(tooltip)
        iconSelectButton->setToolTip(tr2i18n("Select the icon displayed on tabs using this profile", nullptr));
#endif // QT_CONFIG(tooltip)
        iconSelectButton->setText(QString());
#if QT_CONFIG(tooltip)
        profileNameEdit->setToolTip(tr2i18n("A descriptive name for the profile", nullptr));
#endif // QT_CONFIG(tooltip)
        profileNameEdit->setPlaceholderText(tr2i18n("Profile name", "@label:textbox"));
        setAsDefaultButton->setText(tr2i18n("Default Profile", nullptr));
        label_3->setText(tr2i18n("Command:", nullptr));
#if QT_CONFIG(tooltip)
        commandEdit->setToolTip(tr2i18n("The command to execute when new terminal sessions are created using this profile", nullptr));
#endif // QT_CONFIG(tooltip)
        commandEdit->setPlaceholderText(tr2i18n("/bin/sh", nullptr));
        label_9->setText(tr2i18n("I&nitial directory:", nullptr));
#if QT_CONFIG(tooltip)
        initialDirEdit->setToolTip(tr2i18n("The initial working directory for new terminal sessions using this profile", nullptr));
#endif // QT_CONFIG(tooltip)
        initialDirEdit->setPlaceholderText(tr2i18n("/home/username", nullptr));
#if QT_CONFIG(tooltip)
        dirSelectButton->setToolTip(tr2i18n("Choose the initial directory", nullptr));
#endif // QT_CONFIG(tooltip)
        dirSelectButton->setText(tr2i18n("...", nullptr));
        startInSameDirButton->setText(tr2i18n("Start in same directory as current session", nullptr));
        label_4->setText(tr2i18n("Environment:", nullptr));
#if QT_CONFIG(tooltip)
        environmentEditButton->setToolTip(tr2i18n("Edit the list of environment variables and associated values", nullptr));
#endif // QT_CONFIG(tooltip)
        environmentEditButton->setText(tr2i18n("Edit...", nullptr));
        label_5->setText(tr2i18n("Initial terminal si&ze:", nullptr));
        useCurrentWindowSizeNote->setText(tr2i18n("<html><head/><body><p><span style=\" font-style:italic;\">Settings \342\206\222 Configure Konsole \342\206\222 General \342\206\222 Remember window size</span> must be disabled for these entries to work.</p></body></html>", "@info"));
        terminalBellLabel->setText(tr2i18n("&Terminal bell mode:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(general), tr2i18n("General Settings", nullptr));
        semanticUpDown->setText(tr2i18n("Up/Down Arrows emulation", nullptr));
        semanticInputClick->setText(tr2i18n("Mouse click in input line moves cursor", nullptr));
        label_8->setText(tr2i18n("Semantic hints:", nullptr));
        semanticHintsNever->setText(tr2i18n("Never", "Never"));
        semanticHintsURL->setText(tr2i18n("When URL hints show", "When showing URL hints"));
        semanticHintsAlways->setText(tr2i18n("Always", "Always"));
        label_20->setText(tr2i18n("Red error bars:", nullptr));
        errorBarsNever->setText(tr2i18n("Never", "Never"));
        errorBarsURL->setText(tr2i18n("When URL hints show", "When showing URL hints"));
        errorBarsAlways->setText(tr2i18n("Always", "Always"));
        label_30->setText(tr2i18n("Red error background:", nullptr));
        errorBackgroundNever->setText(tr2i18n("Never", "Never"));
        errorBackgroundURL->setText(tr2i18n("When URL hints show", "When showing URL hints"));
        errorBackgroundAlways->setText(tr2i18n("Always", "Always"));
        label_40->setText(tr2i18n("Alternating bars:", nullptr));
        alternatingBarsNever->setText(tr2i18n("Never", "Never"));
        alternatingBarsURL->setText(tr2i18n("When URL hints show", "When showing URL hints"));
        alternatingBarsAlways->setText(tr2i18n("Always", "Always"));
        label_50->setText(tr2i18n("Alternating background:", nullptr));
        alternatingBackgroundNever->setText(tr2i18n("Never", "Never"));
        alternatingBackgroundURL->setText(tr2i18n("When URL hints show", "When showing URL hints"));
        alternatingBackgroundAlways->setText(tr2i18n("Always", "Always"));
        tabWidget->setTabText(tabWidget->indexOf(semantic), tr2i18n("Semantic Integration", nullptr));
        (void)EditProfileGeneralPage;
    } // retranslateUi

};

namespace Ui {
    class EditProfileGeneralPage: public Ui_EditProfileGeneralPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDITPROFILEGENERALPAGE_H

