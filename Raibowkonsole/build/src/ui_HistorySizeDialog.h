#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'HistorySizeDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYSIZEDIALOG_H
#define UI_HISTORYSIZEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kmessagewidget.h"
#include "widgets/HistorySizeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_HistorySizeDialog
{
public:
    QVBoxLayout *vboxLayout;
    KMessageWidget *tempWarningWidget;
    Konsole::HistorySizeWidget *historySizeWidget;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *HistorySizeDialog)
    {
        if (HistorySizeDialog->objectName().isEmpty())
            HistorySizeDialog->setObjectName("HistorySizeDialog");
        HistorySizeDialog->resize(400, 48);
        vboxLayout = new QVBoxLayout(HistorySizeDialog);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        tempWarningWidget = new KMessageWidget(HistorySizeDialog);
        tempWarningWidget->setObjectName("tempWarningWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tempWarningWidget->sizePolicy().hasHeightForWidth());
        tempWarningWidget->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(tempWarningWidget);

        historySizeWidget = new Konsole::HistorySizeWidget(HistorySizeDialog);
        historySizeWidget->setObjectName("historySizeWidget");
        sizePolicy.setHeightForWidth(historySizeWidget->sizePolicy().hasHeightForWidth());
        historySizeWidget->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(historySizeWidget);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        vboxLayout->addItem(spacerItem);


        retranslateUi(HistorySizeDialog);

        QMetaObject::connectSlotsByName(HistorySizeDialog);
    } // setupUi

    void retranslateUi(QWidget *HistorySizeDialog)
    {
        (void)HistorySizeDialog;
    } // retranslateUi

};

namespace Ui {
    class HistorySizeDialog: public Ui_HistorySizeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HISTORYSIZEDIALOG_H

