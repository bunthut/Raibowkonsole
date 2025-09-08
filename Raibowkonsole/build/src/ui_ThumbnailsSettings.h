#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'ThumbnailsSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THUMBNAILSSETTINGS_H
#define UI_THUMBNAILSSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThumbnailsSettings
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *kcfg_ThumbnailSize;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_5;
    QCheckBox *kcfg_ThumbnailShift;
    QCheckBox *kcfg_ThumbnailAlt;
    QCheckBox *kcfg_ThumbnailCtrl;
    QHBoxLayout *horizontalLayout;
    QCheckBox *kcfg_EnableThumbnails;

    void setupUi(QWidget *ThumbnailsSettings)
    {
        if (ThumbnailsSettings->objectName().isEmpty())
            ThumbnailsSettings->setObjectName("ThumbnailsSettings");
        ThumbnailsSettings->resize(347, 347);
        formLayout = new QFormLayout(ThumbnailsSettings);
        formLayout->setObjectName("formLayout");
        label = new QLabel(ThumbnailsSettings);
        label->setObjectName("label");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        kcfg_ThumbnailSize = new QSpinBox(ThumbnailsSettings);
        kcfg_ThumbnailSize->setObjectName("kcfg_ThumbnailSize");
        kcfg_ThumbnailSize->setMinimum(16);
        kcfg_ThumbnailSize->setMaximum(1024);

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, kcfg_ThumbnailSize);

        label_3 = new QLabel(ThumbnailsSettings);
        label_3->setObjectName("label_3");
        label_3->setTextFormat(Qt::TextFormat::RichText);
        label_3->setWordWrap(true);
        label_3->setMargin(0);

        formLayout->setWidget(2, QFormLayout::ItemRole::SpanningRole, label_3);

        label_2 = new QLabel(ThumbnailsSettings);
        label_2->setObjectName("label_2");
        label_2->setMargin(0);

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_2);

        label_5 = new QLabel(ThumbnailsSettings);
        label_5->setObjectName("label_5");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, label_5);

        kcfg_ThumbnailShift = new QCheckBox(ThumbnailsSettings);
        kcfg_ThumbnailShift->setObjectName("kcfg_ThumbnailShift");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, kcfg_ThumbnailShift);

        kcfg_ThumbnailAlt = new QCheckBox(ThumbnailsSettings);
        kcfg_ThumbnailAlt->setObjectName("kcfg_ThumbnailAlt");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, kcfg_ThumbnailAlt);

        kcfg_ThumbnailCtrl = new QCheckBox(ThumbnailsSettings);
        kcfg_ThumbnailCtrl->setObjectName("kcfg_ThumbnailCtrl");

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, kcfg_ThumbnailCtrl);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        kcfg_EnableThumbnails = new QCheckBox(ThumbnailsSettings);
        kcfg_EnableThumbnails->setObjectName("kcfg_EnableThumbnails");

        horizontalLayout->addWidget(kcfg_EnableThumbnails);


        formLayout->setLayout(0, QFormLayout::ItemRole::SpanningRole, horizontalLayout);


        retranslateUi(ThumbnailsSettings);

        QMetaObject::connectSlotsByName(ThumbnailsSettings);
    } // setupUi

    void retranslateUi(QWidget *ThumbnailsSettings)
    {
        label->setText(tr2i18n("Size:", nullptr));
        kcfg_ThumbnailSize->setSuffix(tr2i18n("px", nullptr));
        label_3->setText(tr2i18n("<html><head/><body><p>To use this feature, enable <span style=\" font-weight:600;\">Mouse-&gt;Miscellaneous-&gt;Underline files</span> in your profile settings.</p></body></html>", nullptr));
        label_2->setText(tr2i18n("Activation:", nullptr));
        label_5->setText(tr2i18n("Mouse hover plus", nullptr));
        kcfg_ThumbnailShift->setText(tr2i18n("Shift", nullptr));
        kcfg_ThumbnailAlt->setText(tr2i18n("Alt", nullptr));
        kcfg_ThumbnailCtrl->setText(tr2i18n("Ctrl", nullptr));
        kcfg_EnableThumbnails->setText(tr2i18n("Enable thumbnails generation", nullptr));
        (void)ThumbnailsSettings;
    } // retranslateUi

};

namespace Ui {
    class ThumbnailsSettings: public Ui_ThumbnailsSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // THUMBNAILSSETTINGS_H

