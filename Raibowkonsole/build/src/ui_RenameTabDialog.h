#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'RenameTabDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMETABDIALOG_H
#define UI_RENAMETABDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "widgets/RenameTabWidget.h"

QT_BEGIN_NAMESPACE

class Ui_RenameTabDialog
{
public:
    QGridLayout *gridLayout;
    Konsole::RenameTabWidget *renameTabWidget;

    void setupUi(QWidget *RenameTabDialog)
    {
        if (RenameTabDialog->objectName().isEmpty())
            RenameTabDialog->setObjectName("RenameTabDialog");
        RenameTabDialog->resize(325, 110);
        gridLayout = new QGridLayout(RenameTabDialog);
        gridLayout->setObjectName("gridLayout");
        renameTabWidget = new Konsole::RenameTabWidget(RenameTabDialog);
        renameTabWidget->setObjectName("renameTabWidget");

        gridLayout->addWidget(renameTabWidget, 0, 0, 1, 1);


        retranslateUi(RenameTabDialog);

        QMetaObject::connectSlotsByName(RenameTabDialog);
    } // setupUi

    void retranslateUi(QWidget *RenameTabDialog)
    {
        (void)RenameTabDialog;
    } // retranslateUi

};

namespace Ui {
    class RenameTabDialog: public Ui_RenameTabDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // RENAMETABDIALOG_H

