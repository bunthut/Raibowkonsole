#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'PluginSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINSETTINGS_H
#define UI_PLUGINSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "keditlistwidget.h"
#include "kpluginwidget.h"

QT_BEGIN_NAMESPACE

class Ui_PluginSettings
{
public:
    QVBoxLayout *verticalLayout;
    KPluginWidget *pluginWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    KEditListWidget *kcfg_CustomPluginPaths;
    QPushButton *addPathButton;

    void setupUi(QWidget *PluginSettings)
    {
        if (PluginSettings->objectName().isEmpty())
            PluginSettings->setObjectName("PluginSettings");
        verticalLayout = new QVBoxLayout(PluginSettings);
        verticalLayout->setObjectName("verticalLayout");
        pluginWidget = new KPluginWidget(PluginSettings);
        pluginWidget->setObjectName("pluginWidget");

        verticalLayout->addWidget(pluginWidget);

        groupBox = new QGroupBox(PluginSettings);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        kcfg_CustomPluginPaths = new KEditListWidget(groupBox);
        kcfg_CustomPluginPaths->setObjectName("kcfg_CustomPluginPaths");

        verticalLayout_2->addWidget(kcfg_CustomPluginPaths);

        addPathButton = new QPushButton(groupBox);
        addPathButton->setObjectName("addPathButton");

        verticalLayout_2->addWidget(addPathButton);


        verticalLayout->addWidget(groupBox);


        retranslateUi(PluginSettings);

        QMetaObject::connectSlotsByName(PluginSettings);
    } // setupUi

    void retranslateUi(QWidget *PluginSettings)
    {
        groupBox->setTitle(tr2i18n("Additional Plugin Directories", nullptr));
        addPathButton->setText(tr2i18n("Add Directory...", nullptr));
        (void)PluginSettings;
    } // retranslateUi

};

namespace Ui {
    class PluginSettings: public Ui_PluginSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PLUGINSETTINGS_H

