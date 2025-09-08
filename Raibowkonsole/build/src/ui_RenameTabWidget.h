#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'RenameTabWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMETABWIDGET_H
#define UI_RENAMETABWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>
#include "kcolorcombo.h"
#include "widgets/TabTitleFormatButton.h"

QT_BEGIN_NAMESPACE

class Ui_RenameTabWidget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *remoteTabTitleEdit;
    Konsole::TabTitleFormatButton *remoteTabTitleFormatButton;
    Konsole::TabTitleFormatButton *tabTitleFormatButton;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *tabTitleEdit;
    QLabel *label_3;
    KColorCombo *tabColorCombo;

    void setupUi(QWidget *RenameTabWidget)
    {
        if (RenameTabWidget->objectName().isEmpty())
            RenameTabWidget->setObjectName("RenameTabWidget");
        RenameTabWidget->resize(400, 119);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RenameTabWidget->sizePolicy().hasHeightForWidth());
        RenameTabWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(RenameTabWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        remoteTabTitleEdit = new QLineEdit(RenameTabWidget);
        remoteTabTitleEdit->setObjectName("remoteTabTitleEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(remoteTabTitleEdit->sizePolicy().hasHeightForWidth());
        remoteTabTitleEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(remoteTabTitleEdit, 1, 1, 1, 1);

        remoteTabTitleFormatButton = new Konsole::TabTitleFormatButton(RenameTabWidget);
        remoteTabTitleFormatButton->setObjectName("remoteTabTitleFormatButton");

        gridLayout->addWidget(remoteTabTitleFormatButton, 1, 2, 1, 1);

        tabTitleFormatButton = new Konsole::TabTitleFormatButton(RenameTabWidget);
        tabTitleFormatButton->setObjectName("tabTitleFormatButton");

        gridLayout->addWidget(tabTitleFormatButton, 0, 2, 1, 1);

        label_2 = new QLabel(RenameTabWidget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        label = new QLabel(RenameTabWidget);
        label->setObjectName("label");
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        tabTitleEdit = new QLineEdit(RenameTabWidget);
        tabTitleEdit->setObjectName("tabTitleEdit");
        sizePolicy1.setHeightForWidth(tabTitleEdit->sizePolicy().hasHeightForWidth());
        tabTitleEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(tabTitleEdit, 0, 1, 1, 1);

        label_3 = new QLabel(RenameTabWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        tabColorCombo = new KColorCombo(RenameTabWidget);
        tabColorCombo->setObjectName("tabColorCombo");
        tabColorCombo->setEditable(false);

        gridLayout->addWidget(tabColorCombo, 2, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);
#if QT_CONFIG(shortcut)
        label_2->setBuddy(remoteTabTitleEdit);
        label->setBuddy(tabTitleEdit);
        label_3->setBuddy(tabColorCombo);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabTitleEdit, tabTitleFormatButton);
        QWidget::setTabOrder(tabTitleFormatButton, remoteTabTitleEdit);
        QWidget::setTabOrder(remoteTabTitleEdit, remoteTabTitleFormatButton);

        retranslateUi(RenameTabWidget);

        tabColorCombo->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RenameTabWidget);
    } // setupUi

    void retranslateUi(QWidget *RenameTabWidget)
    {
#if QT_CONFIG(tooltip)
        remoteTabTitleEdit->setToolTip(tr2i18n("Tab title format used when a remote command (e.g. connection to another computer via SSH) is being executed", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(tr2i18n("Remote tab title format:", nullptr));
        label->setText(tr2i18n("&Tab title format:", nullptr));
#if QT_CONFIG(tooltip)
        tabTitleEdit->setToolTip(tr2i18n("Normal tab title format", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(tr2i18n("Tab Co&lor:", nullptr));
        (void)RenameTabWidget;
    } // retranslateUi

};

namespace Ui {
    class RenameTabWidget: public Ui_RenameTabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // RENAMETABWIDGET_H

