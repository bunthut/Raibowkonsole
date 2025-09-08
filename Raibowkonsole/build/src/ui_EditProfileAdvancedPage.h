#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'EditProfileAdvancedPage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILEADVANCEDPAGE_H
#define UI_EDITPROFILEADVANCEDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProfileAdvancedPage
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *urlHintsLabel;
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QToolButton *urlHintsModifierShift;
    QToolButton *urlHintsModifierCtrl;
    QToolButton *urlHintsModifierAlt;
    QToolButton *urlHintsModifierMeta;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QLabel *label;
    QCheckBox *enableReverseUrlHints;
    QCheckBox *enableBlinkingTextButton;
    QCheckBox *enableFlowControlButton;
    QSpacerItem *spacerItem2;
    QLabel *label_14;
    QPushButton *selectEncodingButton;
    QLabel *peekPrimaryLabel;
    QKeySequenceEdit *peekPrimaryWidget;
    QLabel *autoSaveIntervalLabel;
    QSpinBox *autoSaveIntervalWidget;
    QLabel *label_linenums;
    QRadioButton *lineNumsNever;
    QRadioButton *lineNumsURL;
    QRadioButton *lineNumsAlways;
    QSpacerItem *spacerItem3;
    QButtonGroup *lineNums;

    void setupUi(QWidget *EditProfileAdvancedPage)
    {
        if (EditProfileAdvancedPage->objectName().isEmpty())
            EditProfileAdvancedPage->setObjectName("EditProfileAdvancedPage");
        EditProfileAdvancedPage->resize(477, 400);
        verticalLayout = new QVBoxLayout(EditProfileAdvancedPage);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        urlHintsLabel = new QLabel(EditProfileAdvancedPage);
        urlHintsLabel->setObjectName("urlHintsLabel");
        urlHintsLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(urlHintsLabel, 0, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName("hboxLayout");
        hboxLayout->setContentsMargins(0, 0, -1, -1);
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName("hboxLayout1");
        urlHintsModifierShift = new QToolButton(EditProfileAdvancedPage);
        urlHintsModifierShift->setObjectName("urlHintsModifierShift");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(urlHintsModifierShift->sizePolicy().hasHeightForWidth());
        urlHintsModifierShift->setSizePolicy(sizePolicy);
        urlHintsModifierShift->setCheckable(true);
        urlHintsModifierShift->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonFollowStyle);

        hboxLayout1->addWidget(urlHintsModifierShift);

        urlHintsModifierCtrl = new QToolButton(EditProfileAdvancedPage);
        urlHintsModifierCtrl->setObjectName("urlHintsModifierCtrl");
        sizePolicy.setHeightForWidth(urlHintsModifierCtrl->sizePolicy().hasHeightForWidth());
        urlHintsModifierCtrl->setSizePolicy(sizePolicy);
        urlHintsModifierCtrl->setCheckable(true);
        urlHintsModifierCtrl->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonFollowStyle);

        hboxLayout1->addWidget(urlHintsModifierCtrl);

        urlHintsModifierAlt = new QToolButton(EditProfileAdvancedPage);
        urlHintsModifierAlt->setObjectName("urlHintsModifierAlt");
        sizePolicy.setHeightForWidth(urlHintsModifierAlt->sizePolicy().hasHeightForWidth());
        urlHintsModifierAlt->setSizePolicy(sizePolicy);
        urlHintsModifierAlt->setCheckable(true);
        urlHintsModifierAlt->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonFollowStyle);

        hboxLayout1->addWidget(urlHintsModifierAlt);

        urlHintsModifierMeta = new QToolButton(EditProfileAdvancedPage);
        urlHintsModifierMeta->setObjectName("urlHintsModifierMeta");
        sizePolicy.setHeightForWidth(urlHintsModifierMeta->sizePolicy().hasHeightForWidth());
        urlHintsModifierMeta->setSizePolicy(sizePolicy);
        urlHintsModifierMeta->setCheckable(true);
        urlHintsModifierMeta->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonFollowStyle);

        hboxLayout1->addWidget(urlHintsModifierMeta);


        hboxLayout->addLayout(hboxLayout1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem);

        hboxLayout->setStretch(1, 1);

        gridLayout->addLayout(hboxLayout, 0, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem1, 1, 1, 1, 1);

        label = new QLabel(EditProfileAdvancedPage);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label, 2, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        enableReverseUrlHints = new QCheckBox(EditProfileAdvancedPage);
        enableReverseUrlHints->setObjectName("enableReverseUrlHints");

        gridLayout->addWidget(enableReverseUrlHints, 2, 1, 1, 1);

        enableBlinkingTextButton = new QCheckBox(EditProfileAdvancedPage);
        enableBlinkingTextButton->setObjectName("enableBlinkingTextButton");
        sizePolicy.setHeightForWidth(enableBlinkingTextButton->sizePolicy().hasHeightForWidth());
        enableBlinkingTextButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(enableBlinkingTextButton, 3, 1, 1, 1);

        enableFlowControlButton = new QCheckBox(EditProfileAdvancedPage);
        enableFlowControlButton->setObjectName("enableFlowControlButton");
        sizePolicy.setHeightForWidth(enableFlowControlButton->sizePolicy().hasHeightForWidth());
        enableFlowControlButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(enableFlowControlButton, 4, 1, 1, 1);

        spacerItem2 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem2, 6, 1, 1, 1);

        label_14 = new QLabel(EditProfileAdvancedPage);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_14, 7, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        selectEncodingButton = new QPushButton(EditProfileAdvancedPage);
        selectEncodingButton->setObjectName("selectEncodingButton");
        selectEncodingButton->setText(QString::fromUtf8("DEFAULTENCODING"));

        gridLayout->addWidget(selectEncodingButton, 7, 1, 1, 1);

        peekPrimaryLabel = new QLabel(EditProfileAdvancedPage);
        peekPrimaryLabel->setObjectName("peekPrimaryLabel");
        peekPrimaryLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(peekPrimaryLabel, 8, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        peekPrimaryWidget = new QKeySequenceEdit(EditProfileAdvancedPage);
        peekPrimaryWidget->setObjectName("peekPrimaryWidget");

        gridLayout->addWidget(peekPrimaryWidget, 8, 1, 1, 1, Qt::AlignmentFlag::AlignRight);

        autoSaveIntervalLabel = new QLabel(EditProfileAdvancedPage);
        autoSaveIntervalLabel->setObjectName("autoSaveIntervalLabel");

        gridLayout->addWidget(autoSaveIntervalLabel, 9, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        autoSaveIntervalWidget = new QSpinBox(EditProfileAdvancedPage);
        autoSaveIntervalWidget->setObjectName("autoSaveIntervalWidget");
        autoSaveIntervalWidget->setMinimum(0);
        autoSaveIntervalWidget->setMaximum(3600000);

        gridLayout->addWidget(autoSaveIntervalWidget, 9, 1, 1, 1, Qt::AlignmentFlag::AlignRight);

        label_linenums = new QLabel(EditProfileAdvancedPage);
        label_linenums->setObjectName("label_linenums");
        label_linenums->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_linenums, 10, 0, 1, 1);

        lineNumsNever = new QRadioButton(EditProfileAdvancedPage);
        lineNums = new QButtonGroup(EditProfileAdvancedPage);
        lineNums->setObjectName("lineNums");
        lineNums->addButton(lineNumsNever);
        lineNumsNever->setObjectName("lineNumsNever");

        gridLayout->addWidget(lineNumsNever, 10, 1, 1, 1);

        lineNumsURL = new QRadioButton(EditProfileAdvancedPage);
        lineNums->addButton(lineNumsURL);
        lineNumsURL->setObjectName("lineNumsURL");

        gridLayout->addWidget(lineNumsURL, 11, 1, 1, 1);

        lineNumsAlways = new QRadioButton(EditProfileAdvancedPage);
        lineNums->addButton(lineNumsAlways);
        lineNumsAlways->setObjectName("lineNumsAlways");

        gridLayout->addWidget(lineNumsAlways, 12, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        spacerItem3 = new QSpacerItem(20, 111, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(spacerItem3);

#if QT_CONFIG(shortcut)
        label_14->setBuddy(selectEncodingButton);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(urlHintsModifierShift, urlHintsModifierCtrl);
        QWidget::setTabOrder(urlHintsModifierCtrl, urlHintsModifierAlt);
        QWidget::setTabOrder(urlHintsModifierAlt, urlHintsModifierMeta);

        retranslateUi(EditProfileAdvancedPage);

        QMetaObject::connectSlotsByName(EditProfileAdvancedPage);
    } // setupUi

    void retranslateUi(QWidget *EditProfileAdvancedPage)
    {
        urlHintsLabel->setText(tr2i18n("Key combination to show URL hints:", nullptr));
        urlHintsModifierShift->setText(tr2i18n("Shift", "key on keyboard"));
        urlHintsModifierCtrl->setText(tr2i18n("Ctrl", "key on keyboard"));
        urlHintsModifierAlt->setText(tr2i18n("Alt", "key on keyboard"));
        urlHintsModifierMeta->setText(tr2i18n("Meta", "key on keyboard"));
        label->setText(tr2i18n("Miscellaneous:", "Items that do not fit in other categories"));
#if QT_CONFIG(tooltip)
        enableReverseUrlHints->setToolTip(tr2i18n("Number URL hints in reverse, starting from the bottom", nullptr));
#endif // QT_CONFIG(tooltip)
        enableReverseUrlHints->setText(tr2i18n("Reverse URL hint numbering", nullptr));
#if QT_CONFIG(tooltip)
        enableBlinkingTextButton->setToolTip(tr2i18n("Allow terminal programs to create blinking sections of text", nullptr));
#endif // QT_CONFIG(tooltip)
        enableBlinkingTextButton->setText(tr2i18n("Allow blinking text", nullptr));
#if QT_CONFIG(tooltip)
        enableFlowControlButton->setToolTip(tr2i18n("Allow the output to be suspended by pressing Ctrl+S", nullptr));
#endif // QT_CONFIG(tooltip)
        enableFlowControlButton->setText(tr2i18n("Flow control", nullptr));
        label_14->setText(tr2i18n("&Default character encoding:", nullptr));
        peekPrimaryLabel->setText(tr2i18n("Shortcut for peeking the primary screen:", nullptr));
        autoSaveIntervalLabel->setText(tr2i18n("Set interval between autosaves:", nullptr));
        autoSaveIntervalWidget->setSuffix(tr2i18n(" ms", nullptr));
        label_linenums->setText(tr2i18n("Line Numbers:", nullptr));
        lineNumsNever->setText(tr2i18n("&Never", "Never"));
        lineNumsURL->setText(tr2i18n("When &URL hints show", "When showing URL hints"));
        lineNumsAlways->setText(tr2i18n("A&lways", "Always"));
        (void)EditProfileAdvancedPage;
    } // retranslateUi

};

namespace Ui {
    class EditProfileAdvancedPage: public Ui_EditProfileAdvancedPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDITPROFILEADVANCEDPAGE_H

