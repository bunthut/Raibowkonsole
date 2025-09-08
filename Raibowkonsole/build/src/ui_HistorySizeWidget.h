#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'HistorySizeWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYSIZEWIDGET_H
#define UI_HISTORYSIZEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kpluralhandlingspinbox.h"

QT_BEGIN_NAMESPACE

class Ui_HistorySizeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hboxLayout;
    QWidget *fixedSizeHistoryWrapper;
    QHBoxLayout *horizontalLayout;
    QRadioButton *fixedSizeHistoryButton;
    KPluralHandlingSpinBox *historyLineSpinner;
    QToolButton *fixedSizeHistoryWarningButton;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QWidget *unlimitedHistoryWrapper;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *unlimitedHistoryButton;
    QToolButton *unlimitedHistoryWarningButton;
    QSpacerItem *spacerItem1;
    QRadioButton *noHistoryButton;

    void setupUi(QWidget *HistorySizeWidget)
    {
        if (HistorySizeWidget->objectName().isEmpty())
            HistorySizeWidget->setObjectName("HistorySizeWidget");
        HistorySizeWidget->resize(320, 84);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HistorySizeWidget->sizePolicy().hasHeightForWidth());
        HistorySizeWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(HistorySizeWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName("hboxLayout");
        fixedSizeHistoryWrapper = new QWidget(HistorySizeWidget);
        fixedSizeHistoryWrapper->setObjectName("fixedSizeHistoryWrapper");
        horizontalLayout = new QHBoxLayout(fixedSizeHistoryWrapper);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fixedSizeHistoryButton = new QRadioButton(fixedSizeHistoryWrapper);
        fixedSizeHistoryButton->setObjectName("fixedSizeHistoryButton");

        horizontalLayout->addWidget(fixedSizeHistoryButton);

        historyLineSpinner = new KPluralHandlingSpinBox(fixedSizeHistoryWrapper);
        historyLineSpinner->setObjectName("historyLineSpinner");
        historyLineSpinner->setEnabled(false);
        historyLineSpinner->setMinimum(1);
        historyLineSpinner->setMaximum(1000000);

        horizontalLayout->addWidget(historyLineSpinner);

        fixedSizeHistoryWarningButton = new QToolButton(fixedSizeHistoryWrapper);
        fixedSizeHistoryWarningButton->setObjectName("fixedSizeHistoryWarningButton");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("emblem-warning")));
        fixedSizeHistoryWarningButton->setIcon(icon);
        fixedSizeHistoryWarningButton->setAutoRaise(true);

        horizontalLayout->addWidget(fixedSizeHistoryWarningButton);


        hboxLayout->addWidget(fixedSizeHistoryWrapper);

        spacerItem = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout->addItem(spacerItem);


        verticalLayout_2->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setObjectName("hboxLayout1");
        unlimitedHistoryWrapper = new QWidget(HistorySizeWidget);
        unlimitedHistoryWrapper->setObjectName("unlimitedHistoryWrapper");
        horizontalLayout_2 = new QHBoxLayout(unlimitedHistoryWrapper);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        unlimitedHistoryButton = new QRadioButton(unlimitedHistoryWrapper);
        unlimitedHistoryButton->setObjectName("unlimitedHistoryButton");

        horizontalLayout_2->addWidget(unlimitedHistoryButton, 0, Qt::AlignmentFlag::AlignVCenter);

        unlimitedHistoryWarningButton = new QToolButton(unlimitedHistoryWrapper);
        unlimitedHistoryWarningButton->setObjectName("unlimitedHistoryWarningButton");
        unlimitedHistoryWarningButton->setIcon(icon);
        unlimitedHistoryWarningButton->setAutoRaise(true);

        horizontalLayout_2->addWidget(unlimitedHistoryWarningButton, 0, Qt::AlignmentFlag::AlignVCenter);


        hboxLayout1->addWidget(unlimitedHistoryWrapper);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        verticalLayout_2->addLayout(hboxLayout1);

        noHistoryButton = new QRadioButton(HistorySizeWidget);
        noHistoryButton->setObjectName("noHistoryButton");

        verticalLayout_2->addWidget(noHistoryButton);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(HistorySizeWidget);

        QMetaObject::connectSlotsByName(HistorySizeWidget);
    } // setupUi

    void retranslateUi(QWidget *HistorySizeWidget)
    {
#if QT_CONFIG(tooltip)
        fixedSizeHistoryButton->setToolTip(tr2i18n("Limit the remembered output to a fixed number of lines", nullptr));
#endif // QT_CONFIG(tooltip)
        fixedSizeHistoryButton->setText(tr2i18n("Fi&xed size:", nullptr));
#if QT_CONFIG(tooltip)
        historyLineSpinner->setToolTip(tr2i18n("Number of lines of output to remember", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        unlimitedHistoryButton->setToolTip(tr2i18n("Remember all output produced by the terminal", nullptr));
#endif // QT_CONFIG(tooltip)
        unlimitedHistoryButton->setText(tr2i18n("&Unlimited", "Save all lines to the scrollback history"));
#if QT_CONFIG(tooltip)
        noHistoryButton->setToolTip(tr2i18n("Do not remember previous output", nullptr));
#endif // QT_CONFIG(tooltip)
        noHistoryButton->setText(tr2i18n("&None", "Do not save any lines to the scrollback history"));
        (void)HistorySizeWidget;
    } // retranslateUi

};

namespace Ui {
    class HistorySizeWidget: public Ui_HistorySizeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // HISTORYSIZEWIDGET_H

