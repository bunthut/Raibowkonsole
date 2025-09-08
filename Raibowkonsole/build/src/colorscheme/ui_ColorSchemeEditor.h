#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'ColorSchemeEditor.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORSCHEMEEDITOR_H
#define UI_COLORSCHEMEEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kmessagewidget.h"

QT_BEGIN_NAMESPACE

class Ui_ColorSchemeEditor
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *discriptionLabel;
    QLineEdit *descriptionEdit;
    QTableWidget *colorTable;
    QCheckBox *randomizedBackgroundCheck;
    QCheckBox *blurCheckBox;
    QHBoxLayout *hboxLayout1;
    QLabel *transparencyLabel;
    QSlider *transparencySlider;
    QLabel *transparencyPercentLabel;
    QHBoxLayout *hboxLayout2;
    QLabel *wallpaperTransparencyLabel;
    QSlider *wallpaperTransparencySlider;
    QLabel *wallpaperTransparencyPercentLabel;
    QHBoxLayout *hboxLayout3;
    QLabel *wallpaperLabel;
    QLineEdit *wallpaperPath;
    QToolButton *wallpaperSelectButton;
    QHBoxLayout *hboxLayout4;
    QLabel *wallpaperScalingLabel;
    QComboBox *wallpaperScalingType;
    QHBoxLayout *hboxLayout5;
    QLabel *wallpaperFlipLabel;
    QComboBox *wallpaperFlipType;
    QHBoxLayout *hboxLayout6;
    QLabel *wallpaperHorizontalAnchorLabel;
    QSlider *wallpaperHorizontalAnchorSlider;
    QLabel *wallpaperHorizontalAnchorPosition;
    QHBoxLayout *hboxLayout7;
    QLabel *wallpaperVerticalAnchorLabel;
    QSlider *wallpaperVerticalAnchorSlider;
    QLabel *wallpaperVerticalAnchorPosition;
    QSpacerItem *spacerItem;
    KMessageWidget *transparencyWarningWidget;

    void setupUi(QWidget *ColorSchemeEditor)
    {
        if (ColorSchemeEditor->objectName().isEmpty())
            ColorSchemeEditor->setObjectName("ColorSchemeEditor");
        ColorSchemeEditor->resize(364, 460);
        vboxLayout = new QVBoxLayout(ColorSchemeEditor);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        discriptionLabel = new QLabel(ColorSchemeEditor);
        discriptionLabel->setObjectName("discriptionLabel");
        discriptionLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        hboxLayout->addWidget(discriptionLabel);

        descriptionEdit = new QLineEdit(ColorSchemeEditor);
        descriptionEdit->setObjectName("descriptionEdit");

        hboxLayout->addWidget(descriptionEdit);


        vboxLayout->addLayout(hboxLayout);

        colorTable = new QTableWidget(ColorSchemeEditor);
        colorTable->setObjectName("colorTable");

        vboxLayout->addWidget(colorTable);

        randomizedBackgroundCheck = new QCheckBox(ColorSchemeEditor);
        randomizedBackgroundCheck->setObjectName("randomizedBackgroundCheck");

        vboxLayout->addWidget(randomizedBackgroundCheck);

        blurCheckBox = new QCheckBox(ColorSchemeEditor);
        blurCheckBox->setObjectName("blurCheckBox");

        vboxLayout->addWidget(blurCheckBox);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName("hboxLayout1");
        transparencyLabel = new QLabel(ColorSchemeEditor);
        transparencyLabel->setObjectName("transparencyLabel");
        transparencyLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        hboxLayout1->addWidget(transparencyLabel);

        transparencySlider = new QSlider(ColorSchemeEditor);
        transparencySlider->setObjectName("transparencySlider");
        transparencySlider->setMaximum(100);
        transparencySlider->setOrientation(Qt::Orientation::Horizontal);

        hboxLayout1->addWidget(transparencySlider);

        transparencyPercentLabel = new QLabel(ColorSchemeEditor);
        transparencyPercentLabel->setObjectName("transparencyPercentLabel");
        transparencyPercentLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        hboxLayout1->addWidget(transparencyPercentLabel);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName("hboxLayout2");
        wallpaperTransparencyLabel = new QLabel(ColorSchemeEditor);
        wallpaperTransparencyLabel->setObjectName("wallpaperTransparencyLabel");
        wallpaperTransparencyLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        hboxLayout2->addWidget(wallpaperTransparencyLabel);

        wallpaperTransparencySlider = new QSlider(ColorSchemeEditor);
        wallpaperTransparencySlider->setObjectName("wallpaperTransparencySlider");
        wallpaperTransparencySlider->setMaximum(100);
        wallpaperTransparencySlider->setOrientation(Qt::Orientation::Horizontal);

        hboxLayout2->addWidget(wallpaperTransparencySlider);

        wallpaperTransparencyPercentLabel = new QLabel(ColorSchemeEditor);
        wallpaperTransparencyPercentLabel->setObjectName("wallpaperTransparencyPercentLabel");
        wallpaperTransparencyPercentLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        hboxLayout2->addWidget(wallpaperTransparencyPercentLabel);


        vboxLayout->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName("hboxLayout3");
        wallpaperLabel = new QLabel(ColorSchemeEditor);
        wallpaperLabel->setObjectName("wallpaperLabel");

        hboxLayout3->addWidget(wallpaperLabel);

        wallpaperPath = new QLineEdit(ColorSchemeEditor);
        wallpaperPath->setObjectName("wallpaperPath");

        hboxLayout3->addWidget(wallpaperPath);

        wallpaperSelectButton = new QToolButton(ColorSchemeEditor);
        wallpaperSelectButton->setObjectName("wallpaperSelectButton");

        hboxLayout3->addWidget(wallpaperSelectButton);


        vboxLayout->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName("hboxLayout4");
        wallpaperScalingLabel = new QLabel(ColorSchemeEditor);
        wallpaperScalingLabel->setObjectName("wallpaperScalingLabel");

        hboxLayout4->addWidget(wallpaperScalingLabel);

        wallpaperScalingType = new QComboBox(ColorSchemeEditor);
        wallpaperScalingType->addItem(QString());
        wallpaperScalingType->addItem(QString());
        wallpaperScalingType->addItem(QString());
        wallpaperScalingType->addItem(QString());
        wallpaperScalingType->addItem(QString());
        wallpaperScalingType->setObjectName("wallpaperScalingType");

        hboxLayout4->addWidget(wallpaperScalingType);


        vboxLayout->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName("hboxLayout5");
        wallpaperFlipLabel = new QLabel(ColorSchemeEditor);
        wallpaperFlipLabel->setObjectName("wallpaperFlipLabel");

        hboxLayout5->addWidget(wallpaperFlipLabel);

        wallpaperFlipType = new QComboBox(ColorSchemeEditor);
        wallpaperFlipType->addItem(QString());
        wallpaperFlipType->addItem(QString());
        wallpaperFlipType->addItem(QString());
        wallpaperFlipType->addItem(QString());
        wallpaperFlipType->setObjectName("wallpaperFlipType");

        hboxLayout5->addWidget(wallpaperFlipType);


        vboxLayout->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
        hboxLayout6->setObjectName("hboxLayout6");
        wallpaperHorizontalAnchorLabel = new QLabel(ColorSchemeEditor);
        wallpaperHorizontalAnchorLabel->setObjectName("wallpaperHorizontalAnchorLabel");

        hboxLayout6->addWidget(wallpaperHorizontalAnchorLabel);

        wallpaperHorizontalAnchorSlider = new QSlider(ColorSchemeEditor);
        wallpaperHorizontalAnchorSlider->setObjectName("wallpaperHorizontalAnchorSlider");
        wallpaperHorizontalAnchorSlider->setMaximum(2);
        wallpaperHorizontalAnchorSlider->setSingleStep(1);
        wallpaperHorizontalAnchorSlider->setOrientation(Qt::Orientation::Horizontal);
        wallpaperHorizontalAnchorSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        wallpaperHorizontalAnchorSlider->setTickInterval(1);

        hboxLayout6->addWidget(wallpaperHorizontalAnchorSlider);

        wallpaperHorizontalAnchorPosition = new QLabel(ColorSchemeEditor);
        wallpaperHorizontalAnchorPosition->setObjectName("wallpaperHorizontalAnchorPosition");

        hboxLayout6->addWidget(wallpaperHorizontalAnchorPosition);


        vboxLayout->addLayout(hboxLayout6);

        hboxLayout7 = new QHBoxLayout();
        hboxLayout7->setObjectName("hboxLayout7");
        wallpaperVerticalAnchorLabel = new QLabel(ColorSchemeEditor);
        wallpaperVerticalAnchorLabel->setObjectName("wallpaperVerticalAnchorLabel");

        hboxLayout7->addWidget(wallpaperVerticalAnchorLabel);

        wallpaperVerticalAnchorSlider = new QSlider(ColorSchemeEditor);
        wallpaperVerticalAnchorSlider->setObjectName("wallpaperVerticalAnchorSlider");
        wallpaperVerticalAnchorSlider->setMaximum(2);
        wallpaperVerticalAnchorSlider->setSingleStep(1);
        wallpaperVerticalAnchorSlider->setOrientation(Qt::Orientation::Horizontal);
        wallpaperVerticalAnchorSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        wallpaperVerticalAnchorSlider->setTickInterval(1);

        hboxLayout7->addWidget(wallpaperVerticalAnchorSlider);

        wallpaperVerticalAnchorPosition = new QLabel(ColorSchemeEditor);
        wallpaperVerticalAnchorPosition->setObjectName("wallpaperVerticalAnchorPosition");

        hboxLayout7->addWidget(wallpaperVerticalAnchorPosition);


        vboxLayout->addLayout(hboxLayout7);

        spacerItem = new QSpacerItem(364, 5, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        vboxLayout->addItem(spacerItem);

        transparencyWarningWidget = new KMessageWidget(ColorSchemeEditor);
        transparencyWarningWidget->setObjectName("transparencyWarningWidget");

        vboxLayout->addWidget(transparencyWarningWidget);


        retranslateUi(ColorSchemeEditor);

        QMetaObject::connectSlotsByName(ColorSchemeEditor);
    } // setupUi

    void retranslateUi(QWidget *ColorSchemeEditor)
    {
        discriptionLabel->setText(tr2i18n("Description:", nullptr));
#if QT_CONFIG(tooltip)
        randomizedBackgroundCheck->setToolTip(tr2i18n("Hue and saturation values of default foreground and background colors are randomized by default. Some color schemes might use different randomization settings.\n"
"To see any effect, set colors with saturation value greater than 0.", nullptr));
#endif // QT_CONFIG(tooltip)
        randomizedBackgroundCheck->setText(tr2i18n("Randomly adjust colors for each session", nullptr));
        blurCheckBox->setText(tr2i18n("Blur background", nullptr));
        transparencyLabel->setText(tr2i18n("Background color transparency:", nullptr));
        transparencyPercentLabel->setText(tr2i18n("Percent", nullptr));
        wallpaperTransparencyLabel->setText(tr2i18n("Wallpaper transparency:", nullptr));
        wallpaperTransparencyPercentLabel->setText(tr2i18n("Percent", nullptr));
        wallpaperLabel->setText(tr2i18n("Background image:", nullptr));
#if QT_CONFIG(tooltip)
        wallpaperPath->setToolTip(tr2i18n("Edit the path of the background image", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        wallpaperSelectButton->setToolTip(tr2i18n("Choose the background image", nullptr));
#endif // QT_CONFIG(tooltip)
        wallpaperSelectButton->setText(tr2i18n("...", nullptr));
        wallpaperScalingLabel->setText(tr2i18n("Wallpaper scaling:", nullptr));
        wallpaperScalingType->setItemText(0, tr2i18n("Tile", nullptr));
        wallpaperScalingType->setItemText(1, tr2i18n("Stretch", nullptr));
        wallpaperScalingType->setItemText(2, tr2i18n("Crop", nullptr));
        wallpaperScalingType->setItemText(3, tr2i18n("Adapt", nullptr));
        wallpaperScalingType->setItemText(4, tr2i18n("NoScaling", nullptr));

        wallpaperFlipLabel->setText(tr2i18n("Wallpaper flip:", nullptr));
        wallpaperFlipType->setItemText(0, tr2i18n("NoFlip", nullptr));
        wallpaperFlipType->setItemText(1, tr2i18n("Horizontal", nullptr));
        wallpaperFlipType->setItemText(2, tr2i18n("Vertical", nullptr));
        wallpaperFlipType->setItemText(3, tr2i18n("Both", nullptr));

        wallpaperHorizontalAnchorLabel->setText(tr2i18n("Horizontal Anchor:", nullptr));
        wallpaperHorizontalAnchorPosition->setText(tr2i18n("Left", nullptr));
        wallpaperVerticalAnchorLabel->setText(tr2i18n("Vertical Anchor:", nullptr));
        wallpaperVerticalAnchorPosition->setText(tr2i18n("Top", nullptr));
        (void)ColorSchemeEditor;
    } // retranslateUi

};

namespace Ui {
    class ColorSchemeEditor: public Ui_ColorSchemeEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // COLORSCHEMEEDITOR_H

