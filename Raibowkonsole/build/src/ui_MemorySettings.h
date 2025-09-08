#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'MemorySettings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMORYSETTINGS_H
#define UI_MEMORYSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemorySettings
{
public:
    QFormLayout *formLayout;
    QCheckBox *kcfg_EnableMemoryMonitoring;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *kcfg_MemoryLimitValue;

    void setupUi(QWidget *MemorySettings)
    {
        if (MemorySettings->objectName().isEmpty())
            MemorySettings->setObjectName("MemorySettings");
        MemorySettings->resize(347, 347);
        formLayout = new QFormLayout(MemorySettings);
        formLayout->setObjectName("formLayout");
        kcfg_EnableMemoryMonitoring = new QCheckBox(MemorySettings);
        kcfg_EnableMemoryMonitoring->setObjectName("kcfg_EnableMemoryMonitoring");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, kcfg_EnableMemoryMonitoring);

        label = new QLabel(MemorySettings);
        label->setObjectName("label");
        label->setWordWrap(true);
        label->setMargin(0);

        formLayout->setWidget(1, QFormLayout::ItemRole::SpanningRole, label);

        label_2 = new QLabel(MemorySettings);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_2);

        kcfg_MemoryLimitValue = new QSpinBox(MemorySettings);
        kcfg_MemoryLimitValue->setObjectName("kcfg_MemoryLimitValue");
        kcfg_MemoryLimitValue->setMinimum(1);
        kcfg_MemoryLimitValue->setMaximum(999999);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, kcfg_MemoryLimitValue);


        retranslateUi(MemorySettings);

        QMetaObject::connectSlotsByName(MemorySettings);
    } // setupUi

    void retranslateUi(QWidget *MemorySettings)
    {
        kcfg_EnableMemoryMonitoring->setText(tr2i18n("Enable memory monitoring:", nullptr));
        label->setText(tr2i18n("Changes will take effect upon restart. If enabled, sustained memory consumption by Konsole exceeding the specified value will cause systemd-oomd to eliminate the tab(s) containing the memory-intensive process(es). Note: enabling might cause greater slowdowns during high memory consumption and specifying excessively low values might still cause Konsole to be killed.", nullptr));
        label_2->setText(tr2i18n("Memory limit:", nullptr));
        kcfg_MemoryLimitValue->setSuffix(tr2i18n(" MB", nullptr));
        (void)MemorySettings;
    } // retranslateUi

};

namespace Ui {
    class MemorySettings: public Ui_MemorySettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MEMORYSETTINGS_H

