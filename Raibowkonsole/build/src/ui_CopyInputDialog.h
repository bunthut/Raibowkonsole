#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'CopyInputDialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COPYINPUTDIALOG_H
#define UI_COPYINPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CopyInputDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *filterEdit;
    QTreeView *sessionList;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *selectAllButton;
    QPushButton *deselectAllButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *CopyInputDialog)
    {
        if (CopyInputDialog->objectName().isEmpty())
            CopyInputDialog->setObjectName("CopyInputDialog");
        CopyInputDialog->resize(363, 223);
        verticalLayout = new QVBoxLayout(CopyInputDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(CopyInputDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        filterEdit = new QLineEdit(CopyInputDialog);
        filterEdit->setObjectName("filterEdit");

        verticalLayout->addWidget(filterEdit);

        sessionList = new QTreeView(CopyInputDialog);
        sessionList->setObjectName("sessionList");
        sessionList->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        sessionList->setRootIsDecorated(false);
        sessionList->setUniformRowHeights(true);

        verticalLayout->addWidget(sessionList);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        selectAllButton = new QPushButton(CopyInputDialog);
        selectAllButton->setObjectName("selectAllButton");

        horizontalLayout_2->addWidget(selectAllButton);

        deselectAllButton = new QPushButton(CopyInputDialog);
        deselectAllButton->setObjectName("deselectAllButton");

        horizontalLayout_2->addWidget(deselectAllButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CopyInputDialog);

        QMetaObject::connectSlotsByName(CopyInputDialog);
    } // setupUi

    void retranslateUi(QWidget *CopyInputDialog)
    {
        label->setText(tr2i18n("Filter:", nullptr));
        selectAllButton->setText(tr2i18n("Select All", nullptr));
        deselectAllButton->setText(tr2i18n("Deselect All", nullptr));
        (void)CopyInputDialog;
    } // retranslateUi

};

namespace Ui {
    class CopyInputDialog: public Ui_CopyInputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // COPYINPUTDIALOG_H

