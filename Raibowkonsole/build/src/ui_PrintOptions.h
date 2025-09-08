#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'PrintOptions.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTOPTIONS_H
#define UI_PRINTOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrintOptions
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *OutputOptions;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QCheckBox *printerFriendly;
    QCheckBox *scaleOutput;

    void setupUi(QWidget *PrintOptions)
    {
        if (PrintOptions->objectName().isEmpty())
            PrintOptions->setObjectName("PrintOptions");
        PrintOptions->resize(573, 475);
        verticalLayout = new QVBoxLayout(PrintOptions);
        verticalLayout->setObjectName("verticalLayout");
        OutputOptions = new QGroupBox(PrintOptions);
        OutputOptions->setObjectName("OutputOptions");
        gridLayout_2 = new QGridLayout(OutputOptions);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalSpacer = new QSpacerItem(20, 223, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 0, 1, 1);

        printerFriendly = new QCheckBox(OutputOptions);
        printerFriendly->setObjectName("printerFriendly");

        gridLayout_2->addWidget(printerFriendly, 0, 0, 1, 1);

        scaleOutput = new QCheckBox(OutputOptions);
        scaleOutput->setObjectName("scaleOutput");

        gridLayout_2->addWidget(scaleOutput, 1, 0, 1, 1);


        verticalLayout->addWidget(OutputOptions);


        retranslateUi(PrintOptions);

        QMetaObject::connectSlotsByName(PrintOptions);
    } // setupUi

    void retranslateUi(QWidget *PrintOptions)
    {
        PrintOptions->setWindowTitle(tr2i18n("Output Options", nullptr));
        OutputOptions->setTitle(tr2i18n("Output Options", nullptr));
        printerFriendly->setText(tr2i18n("Printer &friendly mode (black text, no background)", nullptr));
        scaleOutput->setText(tr2i18n("&Scale output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrintOptions: public Ui_PrintOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PRINTOPTIONS_H

