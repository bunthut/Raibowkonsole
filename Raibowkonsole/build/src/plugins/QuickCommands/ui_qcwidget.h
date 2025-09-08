#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'qcwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCWIDGET_H
#define UI_QCWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuickCommandsWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QKeySequenceEdit *keySequenceEdit;
    QWidget *filterWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *filterLine;
    QCheckBox *invertFilter;
    QTreeView *commandsTreeView;
    QWidget *commandsWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_3;
    QLineEdit *tooltip;
    QLabel *labelGroup;
    QComboBox *group;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *command;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QPlainTextEdit *warning;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRun;
    QPushButton *btnAdd;
    QPushButton *btnSave;
    QPushButton *btnUpdate;
    QPushButton *btnCancel;

    void setupUi(QWidget *QuickCommandsWidget)
    {
        if (QuickCommandsWidget->objectName().isEmpty())
            QuickCommandsWidget->setObjectName("QuickCommandsWidget");
        QuickCommandsWidget->resize(482, 602);
        verticalLayout_2 = new QVBoxLayout(QuickCommandsWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(QuickCommandsWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        keySequenceEdit = new QKeySequenceEdit(QuickCommandsWidget);
        keySequenceEdit->setObjectName("keySequenceEdit");

        horizontalLayout_3->addWidget(keySequenceEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);

        filterWidget = new QWidget(QuickCommandsWidget);
        filterWidget->setObjectName("filterWidget");
        horizontalLayout_2 = new QHBoxLayout(filterWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        filterLine = new QLineEdit(filterWidget);
        filterLine->setObjectName("filterLine");

        horizontalLayout_2->addWidget(filterLine);

        invertFilter = new QCheckBox(filterWidget);
        invertFilter->setObjectName("invertFilter");

        horizontalLayout_2->addWidget(invertFilter);


        verticalLayout_2->addWidget(filterWidget);

        commandsTreeView = new QTreeView(QuickCommandsWidget);
        commandsTreeView->setObjectName("commandsTreeView");
        commandsTreeView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        commandsTreeView->setHeaderHidden(true);

        verticalLayout_2->addWidget(commandsTreeView);

        commandsWidget = new QWidget(QuickCommandsWidget);
        commandsWidget->setObjectName("commandsWidget");
        formLayout = new QFormLayout(commandsWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setHorizontalSpacing(6);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(commandsWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        name = new QLineEdit(commandsWidget);
        name->setObjectName("name");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, name);

        label_3 = new QLabel(commandsWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        tooltip = new QLineEdit(commandsWidget);
        tooltip->setObjectName("tooltip");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, tooltip);

        labelGroup = new QLabel(commandsWidget);
        labelGroup->setObjectName("labelGroup");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, labelGroup);

        group = new QComboBox(commandsWidget);
        group->addItem(QString());
        group->setObjectName("group");
        group->setEditable(true);

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, group);


        verticalLayout_2->addWidget(commandsWidget);

        tabWidget = new QTabWidget(QuickCommandsWidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(tab);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        command = new QPlainTextEdit(widget);
        command->setObjectName("command");
        command->setPlainText(QString::fromUtf8(""));

        verticalLayout->addWidget(command);


        verticalLayout_3->addWidget(widget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        warning = new QPlainTextEdit(tab_2);
        warning->setObjectName("warning");

        verticalLayout_4->addWidget(warning);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnRun = new QPushButton(QuickCommandsWidget);
        btnRun->setObjectName("btnRun");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("system-run")));
        btnRun->setIcon(icon);

        horizontalLayout->addWidget(btnRun);

        btnAdd = new QPushButton(QuickCommandsWidget);
        btnAdd->setObjectName("btnAdd");
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("list-add")));
        btnAdd->setIcon(icon1);

        horizontalLayout->addWidget(btnAdd);

        btnSave = new QPushButton(QuickCommandsWidget);
        btnSave->setObjectName("btnSave");
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("document-save")));
        btnSave->setIcon(icon2);

        horizontalLayout->addWidget(btnSave);

        btnUpdate = new QPushButton(QuickCommandsWidget);
        btnUpdate->setObjectName("btnUpdate");
        QIcon icon3(QIcon::fromTheme(QString::fromUtf8("view-refresh")));
        btnUpdate->setIcon(icon3);

        horizontalLayout->addWidget(btnUpdate);

        btnCancel = new QPushButton(QuickCommandsWidget);
        btnCancel->setObjectName("btnCancel");
        QIcon icon4(QIcon::fromTheme(QString::fromUtf8("dialog-cancel")));
        btnCancel->setIcon(icon4);

        horizontalLayout->addWidget(btnCancel);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(QuickCommandsWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QuickCommandsWidget);
    } // setupUi

    void retranslateUi(QWidget *QuickCommandsWidget)
    {
        QuickCommandsWidget->setWindowTitle(tr2i18n("Form", nullptr));
        label_2->setText(tr2i18n("Shortcut:", nullptr));
        filterLine->setPlaceholderText(tr2i18n("Filter...", nullptr));
        invertFilter->setText(tr2i18n("Invert", nullptr));
        label->setText(tr2i18n("Title", nullptr));
        label_3->setText(tr2i18n("Tooltip", nullptr));
        labelGroup->setText(tr2i18n("Group", nullptr));
        group->setItemText(0, tr2i18n("Default", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab), tr2i18n("Command", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), tr2i18n("Warnings", nullptr));
        btnRun->setText(tr2i18n("Run", nullptr));
        btnAdd->setText(tr2i18n("Add", nullptr));
        btnSave->setText(tr2i18n("Save", nullptr));
        btnUpdate->setText(tr2i18n("Update", nullptr));
        btnCancel->setText(tr2i18n("Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuickCommandsWidget: public Ui_QuickCommandsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // QCWIDGET_H

