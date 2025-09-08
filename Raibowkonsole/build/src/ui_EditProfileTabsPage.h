#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'EditProfileTabsPage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILETABSPAGE_H
#define UI_EDITPROFILETABSPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "KPluralHandlingSpinBox"
#include "widgets/RenameTabWidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditProfileTabsPage
{
public:
    QVBoxLayout *vboxLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_5;
    QVBoxLayout *vboxLayout1;
    Konsole::RenameTabWidget *renameTabWidget;
    QGroupBox *tabMonitoringGroup;
    QGridLayout *gridLayout;
    QLabel *silenceSecondsLabel;
    KPluralHandlingSpinBox *silenceSecondsSpinner;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *EditProfileTabsPage)
    {
        if (EditProfileTabsPage->objectName().isEmpty())
            EditProfileTabsPage->setObjectName("EditProfileTabsPage");
        EditProfileTabsPage->resize(400, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditProfileTabsPage->sizePolicy().hasHeightForWidth());
        EditProfileTabsPage->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(EditProfileTabsPage);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_5 = new QGroupBox(EditProfileTabsPage);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setFlat(true);
        vboxLayout1 = new QVBoxLayout(groupBox_5);
        vboxLayout1->setObjectName("vboxLayout1");
        renameTabWidget = new Konsole::RenameTabWidget(groupBox_5);
        renameTabWidget->setObjectName("renameTabWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(renameTabWidget->sizePolicy().hasHeightForWidth());
        renameTabWidget->setSizePolicy(sizePolicy1);

        vboxLayout1->addWidget(renameTabWidget);


        verticalLayout->addWidget(groupBox_5);

        tabMonitoringGroup = new QGroupBox(EditProfileTabsPage);
        tabMonitoringGroup->setObjectName("tabMonitoringGroup");
        tabMonitoringGroup->setFlat(true);
        gridLayout = new QGridLayout(tabMonitoringGroup);
        gridLayout->setObjectName("gridLayout");
        silenceSecondsLabel = new QLabel(tabMonitoringGroup);
        silenceSecondsLabel->setObjectName("silenceSecondsLabel");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(silenceSecondsLabel->sizePolicy().hasHeightForWidth());
        silenceSecondsLabel->setSizePolicy(sizePolicy2);
        silenceSecondsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(silenceSecondsLabel, 0, 0, 1, 1, Qt::AlignRight);

        silenceSecondsSpinner = new KPluralHandlingSpinBox(tabMonitoringGroup);
        silenceSecondsSpinner->setObjectName("silenceSecondsSpinner");
        silenceSecondsSpinner->setMinimum(1);
        silenceSecondsSpinner->setMaximum(3600);

        gridLayout->addWidget(silenceSecondsSpinner, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);


        verticalLayout->addWidget(tabMonitoringGroup);


        vboxLayout->addLayout(verticalLayout);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout->addItem(spacerItem1);

        vboxLayout->setStretch(1, 1);
#if QT_CONFIG(shortcut)
        silenceSecondsLabel->setBuddy(silenceSecondsSpinner);
#endif // QT_CONFIG(shortcut)

        retranslateUi(EditProfileTabsPage);

        QMetaObject::connectSlotsByName(EditProfileTabsPage);
    } // setupUi

    void retranslateUi(QWidget *EditProfileTabsPage)
    {
        groupBox_5->setTitle(tr2i18n("Tab Titles", nullptr));
        tabMonitoringGroup->setTitle(tr2i18n("Tab Monitoring", nullptr));
        silenceSecondsLabel->setText(tr2i18n("Threshold for continuous silence:", nullptr));
#if QT_CONFIG(tooltip)
        silenceSecondsSpinner->setToolTip(tr2i18n("The threshold for continuous silence to be detected by Konsole", nullptr));
#endif // QT_CONFIG(tooltip)
        (void)EditProfileTabsPage;
    } // retranslateUi

};

namespace Ui {
    class EditProfileTabsPage: public Ui_EditProfileTabsPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDITPROFILETABSPAGE_H

