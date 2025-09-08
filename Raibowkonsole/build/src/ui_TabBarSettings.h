#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'TabBarSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABBARSETTINGS_H
#define UI_TABBARSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_TabBarSettings
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabs;
    QWidget *appearanceTab;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *appearanceTabLayout;
    QLabel *showTabBarLabel;
    QRadioButton *ShowTabBarWhenNeeded;
    QRadioButton *AlwaysShowTabBar;
    QRadioButton *AlwaysHideTabBar;
    QSpacerItem *spacerItem;
    QLabel *positionLabel;
    QRadioButton *Top;
    QRadioButton *Bottom;
    QRadioButton *Left;
    QRadioButton *Right;
    QSpacerItem *spacerItem1;
    QLabel *showCloseTabButtonLabel;
    QRadioButton *OnEachTab;
    QRadioButton *OnTabBar;
    QRadioButton *None;
    QSpacerItem *spacerItem2;
    QLabel *showSearchTabsButtonLabel;
    QRadioButton *ShowSearchTabsButton;
    QRadioButton *HideSearchTabsButton;
    QSpacerItem *spacerItem3;
    QLabel *miscellaneousAppearanceLabel;
    QCheckBox *kcfg_NewTabButton;
    QCheckBox *kcfg_ExpandTabWidth;
    QCheckBox *kcfg_TabBarUseUserStyleSheet;
    QSpacerItem *spacerItem4;
    KUrlRequester *kcfg_TabBarUserStyleSheetFile;
    QSpacerItem *spacerItem5;
    QWidget *behaviorTab;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *behaviorTabLayout;
    QLabel *putNewTabsLabel;
    QRadioButton *PutNewTabAtTheEnd;
    QRadioButton *PutNewTabAfterCurrentTab;
    QSpacerItem *spacerItem6;
    QLabel *miscellaneousBehaviorLabel;
    QCheckBox *kcfg_CloseTabOnMiddleMouseButton;
    QSpacerItem *spacerItem7;
    QWidget *splitTab;
    QFormLayout *formLayout;
    QLabel *label;
    QRadioButton *ShowSplitHeaderWhenNeeded;
    QRadioButton *AlwaysHideSplitHeader;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QRadioButton *SplitDragHandleSmall;
    QRadioButton *SplitDragHandleMedium;
    QRadioButton *SplitDragHandleLarge;
    QSpacerItem *verticalSpacer;
    QRadioButton *AlwaysShowSplitHeader;
    QButtonGroup *kcfg_SplitViewVisibility;
    QButtonGroup *kcfg_SearchTabsButton;
    QButtonGroup *kcfg_CloseTabButton;
    QButtonGroup *kcfg_NewTabBehavior;
    QButtonGroup *kcfg_SplitDragHandleSize;
    QButtonGroup *kcfg_TabBarVisibility;
    QButtonGroup *kcfg_TabBarPosition;

    void setupUi(QWidget *TabBarSettings)
    {
        if (TabBarSettings->objectName().isEmpty())
            TabBarSettings->setObjectName("TabBarSettings");
        TabBarSettings->resize(507, 618);
        verticalLayout = new QVBoxLayout(TabBarSettings);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabs = new QTabWidget(TabBarSettings);
        tabs->setObjectName("tabs");
        tabs->setDocumentMode(true);
        appearanceTab = new QWidget();
        appearanceTab->setObjectName("appearanceTab");
        verticalLayout_2 = new QVBoxLayout(appearanceTab);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        appearanceTabLayout = new QGridLayout();
        appearanceTabLayout->setSpacing(6);
        appearanceTabLayout->setObjectName("appearanceTabLayout");
        showTabBarLabel = new QLabel(appearanceTab);
        showTabBarLabel->setObjectName("showTabBarLabel");
        showTabBarLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        appearanceTabLayout->addWidget(showTabBarLabel, 0, 0, 1, 1);

        ShowTabBarWhenNeeded = new QRadioButton(appearanceTab);
        kcfg_TabBarVisibility = new QButtonGroup(TabBarSettings);
        kcfg_TabBarVisibility->setObjectName("kcfg_TabBarVisibility");
        kcfg_TabBarVisibility->addButton(ShowTabBarWhenNeeded);
        ShowTabBarWhenNeeded->setObjectName("ShowTabBarWhenNeeded");

        appearanceTabLayout->addWidget(ShowTabBarWhenNeeded, 0, 1, 1, 2);

        AlwaysShowTabBar = new QRadioButton(appearanceTab);
        kcfg_TabBarVisibility->addButton(AlwaysShowTabBar);
        AlwaysShowTabBar->setObjectName("AlwaysShowTabBar");

        appearanceTabLayout->addWidget(AlwaysShowTabBar, 1, 1, 1, 2);

        AlwaysHideTabBar = new QRadioButton(appearanceTab);
        kcfg_TabBarVisibility->addButton(AlwaysHideTabBar);
        AlwaysHideTabBar->setObjectName("AlwaysHideTabBar");

        appearanceTabLayout->addWidget(AlwaysHideTabBar, 2, 1, 1, 2);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        appearanceTabLayout->addItem(spacerItem, 3, 1, 1, 2);

        positionLabel = new QLabel(appearanceTab);
        positionLabel->setObjectName("positionLabel");
        positionLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        appearanceTabLayout->addWidget(positionLabel, 4, 0, 1, 1);

        Top = new QRadioButton(appearanceTab);
        kcfg_TabBarPosition = new QButtonGroup(TabBarSettings);
        kcfg_TabBarPosition->setObjectName("kcfg_TabBarPosition");
        kcfg_TabBarPosition->addButton(Top);
        Top->setObjectName("Top");

        appearanceTabLayout->addWidget(Top, 4, 1, 1, 2);

        Bottom = new QRadioButton(appearanceTab);
        kcfg_TabBarPosition->addButton(Bottom);
        Bottom->setObjectName("Bottom");

        appearanceTabLayout->addWidget(Bottom, 5, 1, 1, 2);

        Left = new QRadioButton(appearanceTab);
        kcfg_TabBarPosition->addButton(Left);
        Left->setObjectName("Left");

        appearanceTabLayout->addWidget(Left, 6, 1, 1, 2);

        Right = new QRadioButton(appearanceTab);
        kcfg_TabBarPosition->addButton(Right);
        Right->setObjectName("Right");

        appearanceTabLayout->addWidget(Right, 7, 1, 1, 2);

        spacerItem1 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        appearanceTabLayout->addItem(spacerItem1, 8, 1, 1, 2);

        showCloseTabButtonLabel = new QLabel(appearanceTab);
        showCloseTabButtonLabel->setObjectName("showCloseTabButtonLabel");
        showCloseTabButtonLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        appearanceTabLayout->addWidget(showCloseTabButtonLabel, 9, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        OnEachTab = new QRadioButton(appearanceTab);
        kcfg_CloseTabButton = new QButtonGroup(TabBarSettings);
        kcfg_CloseTabButton->setObjectName("kcfg_CloseTabButton");
        kcfg_CloseTabButton->addButton(OnEachTab);
        OnEachTab->setObjectName("OnEachTab");

        appearanceTabLayout->addWidget(OnEachTab, 9, 1, 1, 2);

        OnTabBar = new QRadioButton(appearanceTab);
        kcfg_CloseTabButton->addButton(OnTabBar);
        OnTabBar->setObjectName("OnTabBar");

        appearanceTabLayout->addWidget(OnTabBar, 10, 1, 1, 2);

        None = new QRadioButton(appearanceTab);
        kcfg_CloseTabButton->addButton(None);
        None->setObjectName("None");

        appearanceTabLayout->addWidget(None, 11, 1, 1, 2);

        spacerItem2 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        appearanceTabLayout->addItem(spacerItem2, 12, 1, 1, 2);

        showSearchTabsButtonLabel = new QLabel(appearanceTab);
        showSearchTabsButtonLabel->setObjectName("showSearchTabsButtonLabel");
        showSearchTabsButtonLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        appearanceTabLayout->addWidget(showSearchTabsButtonLabel, 13, 0, 1, 1);

        ShowSearchTabsButton = new QRadioButton(appearanceTab);
        kcfg_SearchTabsButton = new QButtonGroup(TabBarSettings);
        kcfg_SearchTabsButton->setObjectName("kcfg_SearchTabsButton");
        kcfg_SearchTabsButton->addButton(ShowSearchTabsButton);
        ShowSearchTabsButton->setObjectName("ShowSearchTabsButton");

        appearanceTabLayout->addWidget(ShowSearchTabsButton, 13, 1, 1, 2);

        HideSearchTabsButton = new QRadioButton(appearanceTab);
        kcfg_SearchTabsButton->addButton(HideSearchTabsButton);
        HideSearchTabsButton->setObjectName("HideSearchTabsButton");

        appearanceTabLayout->addWidget(HideSearchTabsButton, 14, 1, 1, 2);

        spacerItem3 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        appearanceTabLayout->addItem(spacerItem3, 15, 1, 1, 2);

        miscellaneousAppearanceLabel = new QLabel(appearanceTab);
        miscellaneousAppearanceLabel->setObjectName("miscellaneousAppearanceLabel");
        miscellaneousAppearanceLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        appearanceTabLayout->addWidget(miscellaneousAppearanceLabel, 16, 0, 1, 1);

        kcfg_NewTabButton = new QCheckBox(appearanceTab);
        kcfg_NewTabButton->setObjectName("kcfg_NewTabButton");

        appearanceTabLayout->addWidget(kcfg_NewTabButton, 16, 1, 1, 2);

        kcfg_ExpandTabWidth = new QCheckBox(appearanceTab);
        kcfg_ExpandTabWidth->setObjectName("kcfg_ExpandTabWidth");

        appearanceTabLayout->addWidget(kcfg_ExpandTabWidth, 17, 1, 1, 2);

        kcfg_TabBarUseUserStyleSheet = new QCheckBox(appearanceTab);
        kcfg_TabBarUseUserStyleSheet->setObjectName("kcfg_TabBarUseUserStyleSheet");

        appearanceTabLayout->addWidget(kcfg_TabBarUseUserStyleSheet, 18, 1, 1, 2);

        spacerItem4 = new QSpacerItem(16, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        appearanceTabLayout->addItem(spacerItem4, 19, 1, 1, 1);

        kcfg_TabBarUserStyleSheetFile = new KUrlRequester(appearanceTab);
        kcfg_TabBarUserStyleSheetFile->setObjectName("kcfg_TabBarUserStyleSheetFile");
        kcfg_TabBarUserStyleSheetFile->setEnabled(false);

        appearanceTabLayout->addWidget(kcfg_TabBarUserStyleSheetFile, 19, 2, 1, 1);

        appearanceTabLayout->setColumnStretch(2, 1);

        verticalLayout_2->addLayout(appearanceTabLayout);

        spacerItem5 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(spacerItem5);

        tabs->addTab(appearanceTab, QString());
        behaviorTab = new QWidget();
        behaviorTab->setObjectName("behaviorTab");
        verticalLayout_3 = new QVBoxLayout(behaviorTab);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        behaviorTabLayout = new QGridLayout();
        behaviorTabLayout->setSpacing(6);
        behaviorTabLayout->setObjectName("behaviorTabLayout");
        putNewTabsLabel = new QLabel(behaviorTab);
        putNewTabsLabel->setObjectName("putNewTabsLabel");
        putNewTabsLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        behaviorTabLayout->addWidget(putNewTabsLabel, 0, 0, 1, 1);

        PutNewTabAtTheEnd = new QRadioButton(behaviorTab);
        kcfg_NewTabBehavior = new QButtonGroup(TabBarSettings);
        kcfg_NewTabBehavior->setObjectName("kcfg_NewTabBehavior");
        kcfg_NewTabBehavior->addButton(PutNewTabAtTheEnd);
        PutNewTabAtTheEnd->setObjectName("PutNewTabAtTheEnd");

        behaviorTabLayout->addWidget(PutNewTabAtTheEnd, 0, 1, 1, 2);

        PutNewTabAfterCurrentTab = new QRadioButton(behaviorTab);
        kcfg_NewTabBehavior->addButton(PutNewTabAfterCurrentTab);
        PutNewTabAfterCurrentTab->setObjectName("PutNewTabAfterCurrentTab");

        behaviorTabLayout->addWidget(PutNewTabAfterCurrentTab, 1, 1, 1, 2);

        spacerItem6 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        behaviorTabLayout->addItem(spacerItem6, 2, 1, 1, 2);

        miscellaneousBehaviorLabel = new QLabel(behaviorTab);
        miscellaneousBehaviorLabel->setObjectName("miscellaneousBehaviorLabel");
        miscellaneousBehaviorLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        behaviorTabLayout->addWidget(miscellaneousBehaviorLabel, 3, 0, 1, 1);

        kcfg_CloseTabOnMiddleMouseButton = new QCheckBox(behaviorTab);
        kcfg_CloseTabOnMiddleMouseButton->setObjectName("kcfg_CloseTabOnMiddleMouseButton");

        behaviorTabLayout->addWidget(kcfg_CloseTabOnMiddleMouseButton, 3, 1, 1, 2);

        behaviorTabLayout->setColumnStretch(2, 1);

        verticalLayout_3->addLayout(behaviorTabLayout);

        spacerItem7 = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(spacerItem7);

        tabs->addTab(behaviorTab, QString());
        splitTab = new QWidget();
        splitTab->setObjectName("splitTab");
        formLayout = new QFormLayout(splitTab);
        formLayout->setObjectName("formLayout");
        label = new QLabel(splitTab);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        ShowSplitHeaderWhenNeeded = new QRadioButton(splitTab);
        kcfg_SplitViewVisibility = new QButtonGroup(TabBarSettings);
        kcfg_SplitViewVisibility->setObjectName("kcfg_SplitViewVisibility");
        kcfg_SplitViewVisibility->addButton(ShowSplitHeaderWhenNeeded);
        ShowSplitHeaderWhenNeeded->setObjectName("ShowSplitHeaderWhenNeeded");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, ShowSplitHeaderWhenNeeded);

        AlwaysHideSplitHeader = new QRadioButton(splitTab);
        kcfg_SplitViewVisibility->addButton(AlwaysHideSplitHeader);
        AlwaysHideSplitHeader->setObjectName("AlwaysHideSplitHeader");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, AlwaysHideSplitHeader);

        verticalSpacer_2 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        formLayout->setItem(3, QFormLayout::ItemRole::FieldRole, verticalSpacer_2);

        label_2 = new QLabel(splitTab);
        label_2->setObjectName("label_2");
        label_2->setMargin(0);

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_2);

        SplitDragHandleSmall = new QRadioButton(splitTab);
        kcfg_SplitDragHandleSize = new QButtonGroup(TabBarSettings);
        kcfg_SplitDragHandleSize->setObjectName("kcfg_SplitDragHandleSize");
        kcfg_SplitDragHandleSize->addButton(SplitDragHandleSmall);
        SplitDragHandleSmall->setObjectName("SplitDragHandleSmall");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, SplitDragHandleSmall);

        SplitDragHandleMedium = new QRadioButton(splitTab);
        kcfg_SplitDragHandleSize->addButton(SplitDragHandleMedium);
        SplitDragHandleMedium->setObjectName("SplitDragHandleMedium");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, SplitDragHandleMedium);

        SplitDragHandleLarge = new QRadioButton(splitTab);
        kcfg_SplitDragHandleSize->addButton(SplitDragHandleLarge);
        SplitDragHandleLarge->setObjectName("SplitDragHandleLarge");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, SplitDragHandleLarge);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(7, QFormLayout::ItemRole::FieldRole, verticalSpacer);

        AlwaysShowSplitHeader = new QRadioButton(splitTab);
        kcfg_SplitViewVisibility->addButton(AlwaysShowSplitHeader);
        AlwaysShowSplitHeader->setObjectName("AlwaysShowSplitHeader");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, AlwaysShowSplitHeader);

        tabs->addTab(splitTab, QString());

        verticalLayout->addWidget(tabs);

        QWidget::setTabOrder(tabs, ShowTabBarWhenNeeded);
        QWidget::setTabOrder(ShowTabBarWhenNeeded, AlwaysShowTabBar);
        QWidget::setTabOrder(AlwaysShowTabBar, AlwaysHideTabBar);
        QWidget::setTabOrder(AlwaysHideTabBar, Top);
        QWidget::setTabOrder(Top, Bottom);
        QWidget::setTabOrder(Bottom, Left);
        QWidget::setTabOrder(Left, Right);
        QWidget::setTabOrder(Right, OnEachTab);
        QWidget::setTabOrder(OnEachTab, OnTabBar);
        QWidget::setTabOrder(OnTabBar, None);
        QWidget::setTabOrder(None, ShowSearchTabsButton);
        QWidget::setTabOrder(ShowSearchTabsButton, HideSearchTabsButton);
        QWidget::setTabOrder(HideSearchTabsButton, kcfg_NewTabButton);
        QWidget::setTabOrder(kcfg_NewTabButton, kcfg_ExpandTabWidth);
        QWidget::setTabOrder(kcfg_ExpandTabWidth, kcfg_TabBarUseUserStyleSheet);
        QWidget::setTabOrder(kcfg_TabBarUseUserStyleSheet, kcfg_TabBarUserStyleSheetFile);
        QWidget::setTabOrder(kcfg_TabBarUserStyleSheetFile, kcfg_CloseTabOnMiddleMouseButton);
        QWidget::setTabOrder(kcfg_CloseTabOnMiddleMouseButton, PutNewTabAtTheEnd);
        QWidget::setTabOrder(PutNewTabAtTheEnd, PutNewTabAfterCurrentTab);
        QWidget::setTabOrder(PutNewTabAfterCurrentTab, ShowSplitHeaderWhenNeeded);
        QWidget::setTabOrder(ShowSplitHeaderWhenNeeded, AlwaysHideSplitHeader);
        QWidget::setTabOrder(AlwaysHideSplitHeader, SplitDragHandleSmall);
        QWidget::setTabOrder(SplitDragHandleSmall, SplitDragHandleMedium);
        QWidget::setTabOrder(SplitDragHandleMedium, SplitDragHandleLarge);
        QWidget::setTabOrder(SplitDragHandleLarge, AlwaysShowSplitHeader);

        retranslateUi(TabBarSettings);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, Bottom, &QRadioButton::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, kcfg_TabBarUseUserStyleSheet, &QCheckBox::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, miscellaneousAppearanceLabel, &QLabel::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, kcfg_ExpandTabWidth, &QCheckBox::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, OnEachTab, &QRadioButton::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, positionLabel, &QLabel::setDisabled);
        QObject::connect(kcfg_TabBarUseUserStyleSheet, SIGNAL(toggled(bool)), kcfg_TabBarUserStyleSheetFile, SLOT(setEnabled(bool)));
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, Top, &QRadioButton::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, Left, &QRadioButton::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, Right, &QRadioButton::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, showCloseTabButtonLabel, &QLabel::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, OnTabBar, &QRadioButton::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, None, &QRadioButton::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, kcfg_CloseTabOnMiddleMouseButton, &QCheckBox::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, miscellaneousBehaviorLabel, &QLabel::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, showSearchTabsButtonLabel, &QLabel::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, ShowSearchTabsButton, &QRadioButton::setDisabled);
        QObject::connect(AlwaysHideTabBar, &QRadioButton::toggled, HideSearchTabsButton, &QRadioButton::setDisabled);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabBarSettings);
    } // setupUi

    void retranslateUi(QWidget *TabBarSettings)
    {
        showTabBarLabel->setText(tr2i18n("Show:", nullptr));
        ShowTabBarWhenNeeded->setText(tr2i18n("When needed", nullptr));
        AlwaysShowTabBar->setText(tr2i18n("Alwa&ys", nullptr));
        AlwaysHideTabBar->setText(tr2i18n("&Never", nullptr));
        positionLabel->setText(tr2i18n("Position:", nullptr));
        Top->setText(tr2i18n("Above terminal area", nullptr));
        Bottom->setText(tr2i18n("Be&low terminal area", nullptr));
        Left->setText(tr2i18n("To the left of terminal area", nullptr));
        Right->setText(tr2i18n("To the &right of terminal area", nullptr));
        showCloseTabButtonLabel->setText(tr2i18n("Show Close Tab button:", nullptr));
        OnEachTab->setText(tr2i18n("On ea&ch tab", nullptr));
        OnTabBar->setText(tr2i18n("On &the tab bar", nullptr));
        None->setText(tr2i18n("None", "Do not show a close button"));
        showSearchTabsButtonLabel->setText(tr2i18n("Show Search Tabs button:", nullptr));
        ShowSearchTabsButton->setText(tr2i18n("Always", nullptr));
        HideSearchTabsButton->setText(tr2i18n("Never", nullptr));
        miscellaneousAppearanceLabel->setText(tr2i18n("Miscellaneous:", "@item:intext Miscellaneous Options"));
        kcfg_NewTabButton->setText(tr2i18n("Show 'New Tab' button", nullptr));
        kcfg_ExpandTabWidth->setText(tr2i18n("Expand individual tab widths to full window", nullptr));
        kcfg_TabBarUseUserStyleSheet->setText(tr2i18n("Use user-defined stylesheet:", nullptr));
        kcfg_TabBarUserStyleSheetFile->setPlaceholderText(tr2i18n("(none)", "@item:intext Optional file path is empty"));
        tabs->setTabText(tabs->indexOf(appearanceTab), tr2i18n("Appearance", "@title:tab Tab bar settings"));
        putNewTabsLabel->setText(tr2i18n("Put new tabs:", nullptr));
        PutNewTabAtTheEnd->setText(tr2i18n("At &the end", nullptr));
        PutNewTabAfterCurrentTab->setText(tr2i18n("After current &tab", nullptr));
        miscellaneousBehaviorLabel->setText(tr2i18n("Miscellaneous:", "@item:intext Miscellaneous Options"));
        kcfg_CloseTabOnMiddleMouseButton->setText(tr2i18n("Close tab on middle-click", nullptr));
        tabs->setTabText(tabs->indexOf(behaviorTab), tr2i18n("Behavior", "@title:tab Tab bar settings"));
        label->setText(tr2i18n("Show Header:", nullptr));
        ShowSplitHeaderWhenNeeded->setText(tr2i18n("When needed", "@option:radio When needed show the split header"));
        AlwaysHideSplitHeader->setText(tr2i18n("Never", "@option:radio Never show the split header"));
        label_2->setText(tr2i18n("Drag Handle Size:", nullptr));
        SplitDragHandleSmall->setText(tr2i18n("Small", "@option:radio Small height/width of splitter widget"));
        SplitDragHandleMedium->setText(tr2i18n("Medium", "@option:radio Medium height/width of splitter widget"));
        SplitDragHandleLarge->setText(tr2i18n("Large", "@option:radio Large height/width of splitter widget"));
        AlwaysShowSplitHeader->setText(tr2i18n("Always", "@option:radio Always show the split header"));
        tabs->setTabText(tabs->indexOf(splitTab), tr2i18n("Splits", nullptr));
        (void)TabBarSettings;
    } // retranslateUi

};

namespace Ui {
    class TabBarSettings: public Ui_TabBarSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TABBARSETTINGS_H

