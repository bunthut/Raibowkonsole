#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'EditProfileScrollingPage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILESCROLLINGPAGE_H
#define UI_EDITPROFILESCROLLINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kcolorbutton.h"
#include "widgets/HistorySizeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_EditProfileScrollingPage
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *historySizeLabel;
    QLabel *label_2;
    QCheckBox *highlightScrolledLinesButton;
    QDoubleSpinBox *markerSizeWidget;
    QRadioButton *scrollBarHiddenButton;
    QLabel *labelMarkerSize;
    QLabel *label;
    QSpacerItem *spacerItem;
    QRadioButton *scrollHalfPage;
    QLabel *labelMarkerColor;
    QSpacerItem *spacerItem1;
    KColorButton *markerColorButton;
    QLabel *labelSearhcHighlighterColor;
    QLabel *labelReflowLines;
    QRadioButton *scrollFullPage;
    KColorButton *searchHighligheterColorButton;
    QRadioButton *scrollBarRightButton;
    Konsole::HistorySizeWidget *historySizeWidget;
    QRadioButton *scrollBarLeftButton;
    QCheckBox *reflowLinesButton;
    QSpacerItem *spacerItem2;
    QLabel *labelSize;
    QLabel *lableSearchHighlighterOpacity;
    QSlider *labelSearchHighlighterOpacitySlider;
    QSpacerItem *spacerItem3;
    QButtonGroup *scrollAmount;
    QButtonGroup *scrollBarPosition;

    void setupUi(QWidget *EditProfileScrollingPage)
    {
        if (EditProfileScrollingPage->objectName().isEmpty())
            EditProfileScrollingPage->setObjectName("EditProfileScrollingPage");
        EditProfileScrollingPage->resize(574, 425);
        verticalLayout = new QVBoxLayout(EditProfileScrollingPage);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        historySizeLabel = new QLabel(EditProfileScrollingPage);
        historySizeLabel->setObjectName("historySizeLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(historySizeLabel->sizePolicy().hasHeightForWidth());
        historySizeLabel->setSizePolicy(sizePolicy);
        historySizeLabel->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(historySizeLabel, 0, 0, 1, 1, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTop);

        label_2 = new QLabel(EditProfileScrollingPage);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1, Qt::AlignmentFlag::AlignRight);

        highlightScrolledLinesButton = new QCheckBox(EditProfileScrollingPage);
        highlightScrolledLinesButton->setObjectName("highlightScrolledLinesButton");

        gridLayout->addWidget(highlightScrolledLinesButton, 9, 1, 1, 1);

        markerSizeWidget = new QDoubleSpinBox(EditProfileScrollingPage);
        markerSizeWidget->setObjectName("markerSizeWidget");
        markerSizeWidget->setDecimals(1);
        markerSizeWidget->setMinimum(0.000000000000000);
        markerSizeWidget->setMaximum(100.000000000000000);

        gridLayout->addWidget(markerSizeWidget, 13, 1, 1, 1);

        scrollBarHiddenButton = new QRadioButton(EditProfileScrollingPage);
        scrollBarPosition = new QButtonGroup(EditProfileScrollingPage);
        scrollBarPosition->setObjectName("scrollBarPosition");
        scrollBarPosition->addButton(scrollBarHiddenButton);
        scrollBarHiddenButton->setObjectName("scrollBarHiddenButton");

        gridLayout->addWidget(scrollBarHiddenButton, 7, 1, 1, 1);

        labelMarkerSize = new QLabel(EditProfileScrollingPage);
        labelMarkerSize->setObjectName("labelMarkerSize");

        gridLayout->addWidget(labelMarkerSize, 13, 0, 1, 1);

        label = new QLabel(EditProfileScrollingPage);
        label->setObjectName("label");
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label, 9, 0, 1, 1, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignVCenter);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem, 1, 1, 1, 1);

        scrollHalfPage = new QRadioButton(EditProfileScrollingPage);
        scrollAmount = new QButtonGroup(EditProfileScrollingPage);
        scrollAmount->setObjectName("scrollAmount");
        scrollAmount->addButton(scrollHalfPage);
        scrollHalfPage->setObjectName("scrollHalfPage");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollHalfPage->sizePolicy().hasHeightForWidth());
        scrollHalfPage->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(scrollHalfPage, 2, 1, 1, 1);

        labelMarkerColor = new QLabel(EditProfileScrollingPage);
        labelMarkerColor->setObjectName("labelMarkerColor");

        gridLayout->addWidget(labelMarkerColor, 11, 0, 1, 1);

        spacerItem1 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem1, 8, 1, 1, 1);

        markerColorButton = new KColorButton(EditProfileScrollingPage);
        markerColorButton->setObjectName("markerColorButton");

        gridLayout->addWidget(markerColorButton, 11, 1, 1, 1);

        labelSearhcHighlighterColor = new QLabel(EditProfileScrollingPage);
        labelSearhcHighlighterColor->setObjectName("labelSearhcHighlighterColor");

        gridLayout->addWidget(labelSearhcHighlighterColor, 14, 0, 1, 1);

        labelReflowLines = new QLabel(EditProfileScrollingPage);
        labelReflowLines->setObjectName("labelReflowLines");
        sizePolicy1.setHeightForWidth(labelReflowLines->sizePolicy().hasHeightForWidth());
        labelReflowLines->setSizePolicy(sizePolicy1);
        labelReflowLines->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(labelReflowLines, 10, 0, 1, 1, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignVCenter);

        scrollFullPage = new QRadioButton(EditProfileScrollingPage);
        scrollAmount->addButton(scrollFullPage);
        scrollFullPage->setObjectName("scrollFullPage");

        gridLayout->addWidget(scrollFullPage, 3, 1, 1, 1);

        searchHighligheterColorButton = new KColorButton(EditProfileScrollingPage);
        searchHighligheterColorButton->setObjectName("searchHighligheterColorButton");
        searchHighligheterColorButton->setColor(QColor(0, 0, 0));

        gridLayout->addWidget(searchHighligheterColorButton, 14, 1, 1, 1);

        scrollBarRightButton = new QRadioButton(EditProfileScrollingPage);
        scrollBarPosition->addButton(scrollBarRightButton);
        scrollBarRightButton->setObjectName("scrollBarRightButton");

        gridLayout->addWidget(scrollBarRightButton, 5, 1, 1, 1);

        historySizeWidget = new Konsole::HistorySizeWidget(EditProfileScrollingPage);
        historySizeWidget->setObjectName("historySizeWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(historySizeWidget->sizePolicy().hasHeightForWidth());
        historySizeWidget->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(historySizeWidget, 0, 1, 1, 1);

        scrollBarLeftButton = new QRadioButton(EditProfileScrollingPage);
        scrollBarPosition->addButton(scrollBarLeftButton);
        scrollBarLeftButton->setObjectName("scrollBarLeftButton");

        gridLayout->addWidget(scrollBarLeftButton, 6, 1, 1, 1);

        reflowLinesButton = new QCheckBox(EditProfileScrollingPage);
        reflowLinesButton->setObjectName("reflowLinesButton");

        gridLayout->addWidget(reflowLinesButton, 10, 1, 1, 1);

        spacerItem2 = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        gridLayout->addItem(spacerItem2, 4, 1, 1, 1);

        labelSize = new QLabel(EditProfileScrollingPage);
        labelSize->setObjectName("labelSize");
        sizePolicy1.setHeightForWidth(labelSize->sizePolicy().hasHeightForWidth());
        labelSize->setSizePolicy(sizePolicy1);
        labelSize->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(labelSize, 5, 0, 1, 1, Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignVCenter);

        lableSearchHighlighterOpacity = new QLabel(EditProfileScrollingPage);
        lableSearchHighlighterOpacity->setObjectName("lableSearchHighlighterOpacity");

        gridLayout->addWidget(lableSearchHighlighterOpacity, 15, 0, 1, 1);

        labelSearchHighlighterOpacitySlider = new QSlider(EditProfileScrollingPage);
        labelSearchHighlighterOpacitySlider->setObjectName("labelSearchHighlighterOpacitySlider");
        labelSearchHighlighterOpacitySlider->setMaximum(200);
        labelSearchHighlighterOpacitySlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout->addWidget(labelSearchHighlighterOpacitySlider, 15, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        spacerItem3 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(spacerItem3);


        retranslateUi(EditProfileScrollingPage);

        QMetaObject::connectSlotsByName(EditProfileScrollingPage);
    } // setupUi

    void retranslateUi(QWidget *EditProfileScrollingPage)
    {
        historySizeLabel->setText(tr2i18n("Scrollback:", nullptr));
        label_2->setText(tr2i18n("Scroll Page Up/Down:", nullptr));
        highlightScrolledLinesButton->setText(tr2i18n("Highlight the lines coming into view", nullptr));
        markerSizeWidget->setSuffix(tr2i18n(" %", nullptr));
        scrollBarHiddenButton->setText(tr2i18n("Hidden", "@option:radio Hide the scroll bar"));
        labelMarkerSize->setText(tr2i18n("Size of each marker (as a percentage of scrollbar length):", nullptr));
        label->setText(tr2i18n("Highlighting:", nullptr));
#if QT_CONFIG(tooltip)
        scrollHalfPage->setToolTip(tr2i18n("Scroll the page the half height of window", nullptr));
#endif // QT_CONFIG(tooltip)
        scrollHalfPage->setText(tr2i18n("Half screen heigh&t", nullptr));
        labelMarkerColor->setText(tr2i18n("Color of scrollbar markers:", nullptr));
        labelSearhcHighlighterColor->setText(tr2i18n("Color of scrollbar search highlighting lines:", nullptr));
        labelReflowLines->setText(tr2i18n("Reflow Lines:", nullptr));
#if QT_CONFIG(tooltip)
        scrollFullPage->setToolTip(tr2i18n("Scroll the page the full height of window", nullptr));
#endif // QT_CONFIG(tooltip)
        scrollFullPage->setText(tr2i18n("F&ull screen height", nullptr));
#if QT_CONFIG(tooltip)
        scrollBarRightButton->setToolTip(tr2i18n("Show the scroll bar on the right side of the terminal window", nullptr));
#endif // QT_CONFIG(tooltip)
        scrollBarRightButton->setText(tr2i18n("Ri&ght side", "@option:radio Show scrollbar on the right side"));
#if QT_CONFIG(tooltip)
        scrollBarLeftButton->setToolTip(tr2i18n("Show the scroll bar on the left side of the terminal window", nullptr));
#endif // QT_CONFIG(tooltip)
        scrollBarLeftButton->setText(tr2i18n("&Left side", "@option:radio Show scrollbar on the left side"));
        reflowLinesButton->setText(tr2i18n("Reflow lines when terminal resizes", nullptr));
        labelSize->setText(tr2i18n("Scrollbar position:", nullptr));
        lableSearchHighlighterOpacity->setText(tr2i18n("Search highlighting line opacity:", nullptr));
        (void)EditProfileScrollingPage;
    } // retranslateUi

};

namespace Ui {
    class EditProfileScrollingPage: public Ui_EditProfileScrollingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDITPROFILESCROLLINGPAGE_H

