#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'TemporaryFilesSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPORARYFILESSETTINGS_H
#define UI_TEMPORARYFILESSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kurlrequester.h"

QT_BEGIN_NAMESPACE

class Ui_TemporaryFilesSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    KUrlRequester *kcfg_scrollbackUseSpecifiedLocationDirectory;
    QRadioButton *kcfg_scrollbackUseCacheLocation;
    QRadioButton *kcfg_scrollbackUseSpecifiedLocation;
    QSpacerItem *horizontalSpacer;
    QRadioButton *kcfg_scrollbackUseSystemLocation;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *TemporaryFilesSettings)
    {
        if (TemporaryFilesSettings->objectName().isEmpty())
            TemporaryFilesSettings->setObjectName("TemporaryFilesSettings");
        TemporaryFilesSettings->resize(384, 384);
        verticalLayout = new QVBoxLayout(TemporaryFilesSettings);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName("gridLayout_2");
        label_4 = new QLabel(TemporaryFilesSettings);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        kcfg_scrollbackUseSpecifiedLocationDirectory = new KUrlRequester(TemporaryFilesSettings);
        kcfg_scrollbackUseSpecifiedLocationDirectory->setObjectName("kcfg_scrollbackUseSpecifiedLocationDirectory");
        kcfg_scrollbackUseSpecifiedLocationDirectory->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(kcfg_scrollbackUseSpecifiedLocationDirectory->sizePolicy().hasHeightForWidth());
        kcfg_scrollbackUseSpecifiedLocationDirectory->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(kcfg_scrollbackUseSpecifiedLocationDirectory, 3, 2, 1, 1);

        kcfg_scrollbackUseCacheLocation = new QRadioButton(TemporaryFilesSettings);
        kcfg_scrollbackUseCacheLocation->setObjectName("kcfg_scrollbackUseCacheLocation");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(kcfg_scrollbackUseCacheLocation->sizePolicy().hasHeightForWidth());
        kcfg_scrollbackUseCacheLocation->setSizePolicy(sizePolicy1);
        kcfg_scrollbackUseCacheLocation->setText(QString::fromUtf8("&User cache directory (...)"));

        gridLayout_2->addWidget(kcfg_scrollbackUseCacheLocation, 1, 1, 1, 2);

        kcfg_scrollbackUseSpecifiedLocation = new QRadioButton(TemporaryFilesSettings);
        kcfg_scrollbackUseSpecifiedLocation->setObjectName("kcfg_scrollbackUseSpecifiedLocation");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(kcfg_scrollbackUseSpecifiedLocation->sizePolicy().hasHeightForWidth());
        kcfg_scrollbackUseSpecifiedLocation->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(kcfg_scrollbackUseSpecifiedLocation, 2, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(16, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 1, 1, 1);

        kcfg_scrollbackUseSystemLocation = new QRadioButton(TemporaryFilesSettings);
        kcfg_scrollbackUseSystemLocation->setObjectName("kcfg_scrollbackUseSystemLocation");
        sizePolicy1.setHeightForWidth(kcfg_scrollbackUseSystemLocation->sizePolicy().hasHeightForWidth());
        kcfg_scrollbackUseSystemLocation->setSizePolicy(sizePolicy1);
        kcfg_scrollbackUseSystemLocation->setText(QString::fromUtf8("System &temporary directory (...)"));
        kcfg_scrollbackUseSystemLocation->setChecked(true);

        gridLayout_2->addWidget(kcfg_scrollbackUseSystemLocation, 0, 1, 1, 2);

        gridLayout_2->setColumnStretch(2, 1);

        verticalLayout->addLayout(gridLayout_2);

        spacerItem = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(spacerItem);


        retranslateUi(TemporaryFilesSettings);
        QObject::connect(kcfg_scrollbackUseSpecifiedLocation, SIGNAL(toggled(bool)), kcfg_scrollbackUseSpecifiedLocationDirectory, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(TemporaryFilesSettings);
    } // setupUi

    void retranslateUi(QWidget *TemporaryFilesSettings)
    {
        label_4->setText(tr2i18n("Scrollback file location:", nullptr));
        kcfg_scrollbackUseSpecifiedLocation->setText(tr2i18n("Custom:", "@option:radio Custom (file location); followed by text entry field"));
        (void)TemporaryFilesSettings;
    } // retranslateUi

};

namespace Ui {
    class TemporaryFilesSettings: public Ui_TemporaryFilesSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TEMPORARYFILESSETTINGS_H

