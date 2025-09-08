#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'GeneralSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALSETTINGS_H
#define UI_GENERALSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QCheckBox *kcfg_AllowMenuAccelerators;
    QCheckBox *kcfg_RememberWindowSize;
    QCheckBox *kcfg_ShowWindowTitleOnTitleBar;
    QCheckBox *kcfg_FocusFollowsMouse;
    QCheckBox *kcfg_SearchRegExpression;
    QCheckBox *kcfg_UseSingleInstance;
    QCheckBox *kcfg_SearchHighlightMatches;
    QSpacerItem *spacerItem;
    QCheckBox *kcfg_SearchCaseSensitive;
    QCheckBox *kcfg_RemoveWindowTitleBarAndFrame;
    QSpacerItem *spacerItem1;
    QLabel *label;
    QLabel *label_3;
    QHBoxLayout *hboxLayout;
    QPushButton *enableAllMessagesButton;
    QSpacerItem *spacerItem2;
    QCheckBox *kcfg_SearchReverseSearch;
    QCheckBox *kcfg_SearchNoWrap;
    QSpacerItem *spacerItem3;

    void setupUi(QWidget *GeneralSettings)
    {
        if (GeneralSettings->objectName().isEmpty())
            GeneralSettings->setObjectName("GeneralSettings");
        GeneralSettings->resize(654, 483);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GeneralSettings->sizePolicy().hasHeightForWidth());
        GeneralSettings->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(GeneralSettings);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(GeneralSettings);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 7, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        kcfg_AllowMenuAccelerators = new QCheckBox(GeneralSettings);
        kcfg_AllowMenuAccelerators->setObjectName("kcfg_AllowMenuAccelerators");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(kcfg_AllowMenuAccelerators->sizePolicy().hasHeightForWidth());
        kcfg_AllowMenuAccelerators->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_AllowMenuAccelerators, 2, 1, 1, 1);

        kcfg_RememberWindowSize = new QCheckBox(GeneralSettings);
        kcfg_RememberWindowSize->setObjectName("kcfg_RememberWindowSize");
        sizePolicy1.setHeightForWidth(kcfg_RememberWindowSize->sizePolicy().hasHeightForWidth());
        kcfg_RememberWindowSize->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_RememberWindowSize, 0, 1, 1, 1);

        kcfg_ShowWindowTitleOnTitleBar = new QCheckBox(GeneralSettings);
        kcfg_ShowWindowTitleOnTitleBar->setObjectName("kcfg_ShowWindowTitleOnTitleBar");
        sizePolicy1.setHeightForWidth(kcfg_ShowWindowTitleOnTitleBar->sizePolicy().hasHeightForWidth());
        kcfg_ShowWindowTitleOnTitleBar->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_ShowWindowTitleOnTitleBar, 3, 1, 1, 1);

        kcfg_FocusFollowsMouse = new QCheckBox(GeneralSettings);
        kcfg_FocusFollowsMouse->setObjectName("kcfg_FocusFollowsMouse");

        gridLayout->addWidget(kcfg_FocusFollowsMouse, 5, 1, 1, 1);

        kcfg_SearchRegExpression = new QCheckBox(GeneralSettings);
        kcfg_SearchRegExpression->setObjectName("kcfg_SearchRegExpression");
        sizePolicy1.setHeightForWidth(kcfg_SearchRegExpression->sizePolicy().hasHeightForWidth());
        kcfg_SearchRegExpression->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_SearchRegExpression, 8, 1, 1, 1);

        kcfg_UseSingleInstance = new QCheckBox(GeneralSettings);
        kcfg_UseSingleInstance->setObjectName("kcfg_UseSingleInstance");
        sizePolicy1.setHeightForWidth(kcfg_UseSingleInstance->sizePolicy().hasHeightForWidth());
        kcfg_UseSingleInstance->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_UseSingleInstance, 1, 1, 1, 1);

        kcfg_SearchHighlightMatches = new QCheckBox(GeneralSettings);
        kcfg_SearchHighlightMatches->setObjectName("kcfg_SearchHighlightMatches");
        sizePolicy1.setHeightForWidth(kcfg_SearchHighlightMatches->sizePolicy().hasHeightForWidth());
        kcfg_SearchHighlightMatches->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_SearchHighlightMatches, 9, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem, 6, 1, 1, 1);

        kcfg_SearchCaseSensitive = new QCheckBox(GeneralSettings);
        kcfg_SearchCaseSensitive->setObjectName("kcfg_SearchCaseSensitive");
        sizePolicy1.setHeightForWidth(kcfg_SearchCaseSensitive->sizePolicy().hasHeightForWidth());
        kcfg_SearchCaseSensitive->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_SearchCaseSensitive, 7, 1, 1, 1);

        kcfg_RemoveWindowTitleBarAndFrame = new QCheckBox(GeneralSettings);
        kcfg_RemoveWindowTitleBarAndFrame->setObjectName("kcfg_RemoveWindowTitleBarAndFrame");

        gridLayout->addWidget(kcfg_RemoveWindowTitleBarAndFrame, 4, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem1, 12, 1, 1, 1);

        label = new QLabel(GeneralSettings);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(GeneralSettings);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 13, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName("hboxLayout");
        enableAllMessagesButton = new QPushButton(GeneralSettings);
        enableAllMessagesButton->setObjectName("enableAllMessagesButton");
        sizePolicy1.setHeightForWidth(enableAllMessagesButton->sizePolicy().hasHeightForWidth());
        enableAllMessagesButton->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(enableAllMessagesButton);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem2);

        hboxLayout->setStretch(1, 1);

        gridLayout->addLayout(hboxLayout, 13, 1, 1, 1);

        kcfg_SearchReverseSearch = new QCheckBox(GeneralSettings);
        kcfg_SearchReverseSearch->setObjectName("kcfg_SearchReverseSearch");
        sizePolicy1.setHeightForWidth(kcfg_SearchReverseSearch->sizePolicy().hasHeightForWidth());
        kcfg_SearchReverseSearch->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_SearchReverseSearch, 10, 1, 1, 1);

        kcfg_SearchNoWrap = new QCheckBox(GeneralSettings);
        kcfg_SearchNoWrap->setObjectName("kcfg_SearchNoWrap");
        sizePolicy1.setHeightForWidth(kcfg_SearchNoWrap->sizePolicy().hasHeightForWidth());
        kcfg_SearchNoWrap->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(kcfg_SearchNoWrap, 11, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(spacerItem3);


        retranslateUi(GeneralSettings);

        QMetaObject::connectSlotsByName(GeneralSettings);
    } // setupUi

    void retranslateUi(QWidget *GeneralSettings)
    {
        label_2->setText(tr2i18n("Search:", "@item:intext Search options"));
        kcfg_AllowMenuAccelerators->setText(tr2i18n("Enable menu accelerators", nullptr));
#if QT_CONFIG(tooltip)
        kcfg_RememberWindowSize->setToolTip(tr2i18n("If enabled, profile settings will be ignored", nullptr));
#endif // QT_CONFIG(tooltip)
        kcfg_RememberWindowSize->setText(tr2i18n("Remember window size", nullptr));
        kcfg_ShowWindowTitleOnTitleBar->setText(tr2i18n("Show window title on the titlebar", nullptr));
        kcfg_FocusFollowsMouse->setText(tr2i18n("Focus terminals when the mouse pointer is moved over them", nullptr));
        kcfg_SearchRegExpression->setText(tr2i18n("Match using regular expressions", nullptr));
#if QT_CONFIG(tooltip)
        kcfg_UseSingleInstance->setToolTip(tr2i18n("When launching Konsole re-use existing process if possible", nullptr));
#endif // QT_CONFIG(tooltip)
        kcfg_UseSingleInstance->setText(tr2i18n("Run all Konsole windows in a single process", nullptr));
        kcfg_SearchHighlightMatches->setText(tr2i18n("Highlight all matches", nullptr));
#if QT_CONFIG(tooltip)
        kcfg_SearchCaseSensitive->setToolTip(tr2i18n("Sets whether the search is case sensitive", nullptr));
#endif // QT_CONFIG(tooltip)
        kcfg_SearchCaseSensitive->setText(tr2i18n("Case sensitive", nullptr));
        kcfg_RemoveWindowTitleBarAndFrame->setText(tr2i18n("Remove window titlebar and frame", nullptr));
        label->setText(tr2i18n("Process and window:", nullptr));
        label_3->setText(tr2i18n("Notifications:", nullptr));
#if QT_CONFIG(tooltip)
        enableAllMessagesButton->setToolTip(tr2i18n("All dialogs will be shown again", nullptr));
#endif // QT_CONFIG(tooltip)
        enableAllMessagesButton->setText(tr2i18n("Enable all \"Don't Ask Again\" messages", nullptr));
#if QT_CONFIG(tooltip)
        kcfg_SearchReverseSearch->setToolTip(tr2i18n("Sets whether search should start from the bottom", nullptr));
#endif // QT_CONFIG(tooltip)
        kcfg_SearchReverseSearch->setText(tr2i18n("Search backwards", nullptr));
#if QT_CONFIG(tooltip)
        kcfg_SearchNoWrap->setToolTip(tr2i18n("Sets whether search should stop instead of wrapping", nullptr));
#endif // QT_CONFIG(tooltip)
        kcfg_SearchNoWrap->setText(tr2i18n("No wrap", nullptr));
        (void)GeneralSettings;
    } // retranslateUi

};

namespace Ui {
    class GeneralSettings: public Ui_GeneralSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // GENERALSETTINGS_H

