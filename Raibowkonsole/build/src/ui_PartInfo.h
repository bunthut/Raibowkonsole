#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'PartInfo.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTINFO_H
#define UI_PARTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PartInfoSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *PartInfoSettings)
    {
        if (PartInfoSettings->objectName().isEmpty())
            PartInfoSettings->setObjectName("PartInfoSettings");
        PartInfoSettings->resize(494, 354);
        verticalLayout_2 = new QVBoxLayout(PartInfoSettings);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(PartInfoSettings);
        label->setObjectName("label");
        label->setWordWrap(true);

        verticalLayout_2->addWidget(label);

        spacerItem = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(spacerItem);


        retranslateUi(PartInfoSettings);

        QMetaObject::connectSlotsByName(PartInfoSettings);
    } // setupUi

    void retranslateUi(QWidget *PartInfoSettings)
    {
        label->setText(tr2i18n("<html><head/><body><p>Applications that use KonsolePart share profiles.</p><p>They do not share with Konsole or other applications:<ul><li>default profile</li><li>show in menu</li><li>shortcuts</li></ul></p><p>Feel free to open a Konsole <a href=\"https://bugs.kde.org/enter_bug.cgi?format=guided&product=konsole&component=kpart\">bug report</a> if you desire a change to how these are handled.</body></html>", nullptr));
        (void)PartInfoSettings;
    } // retranslateUi

};

namespace Ui {
    class PartInfoSettings: public Ui_PartInfoSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PARTINFO_H

