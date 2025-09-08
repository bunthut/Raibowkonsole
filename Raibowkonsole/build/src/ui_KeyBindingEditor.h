#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'KeyBindingEditor.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBINDINGEDITOR_H
#define UI_KEYBINDINGEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyBindingEditor
{
public:
    QVBoxLayout *vboxLayout;
    QFormLayout *formLayout;
    QLabel *descriptionLabel;
    QLineEdit *descriptionEdit;
    QLabel *filterLabel;
    QLineEdit *filterEdit;
    QTableWidget *keyBindingTable;
    QHBoxLayout *hboxLayout;
    QPushButton *addEntryButton;
    QPushButton *removeEntryButton;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *testAreaInputEdit;
    QLabel *label_2;
    QLineEdit *testAreaOutputEdit;

    void setupUi(QWidget *KeyBindingEditor)
    {
        if (KeyBindingEditor->objectName().isEmpty())
            KeyBindingEditor->setObjectName("KeyBindingEditor");
        KeyBindingEditor->resize(374, 530);
        vboxLayout = new QVBoxLayout(KeyBindingEditor);
        vboxLayout->setObjectName("vboxLayout");
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        descriptionLabel = new QLabel(KeyBindingEditor);
        descriptionLabel->setObjectName("descriptionLabel");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, descriptionLabel);

        descriptionEdit = new QLineEdit(KeyBindingEditor);
        descriptionEdit->setObjectName("descriptionEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, descriptionEdit);

        filterLabel = new QLabel(KeyBindingEditor);
        filterLabel->setObjectName("filterLabel");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, filterLabel);

        filterEdit = new QLineEdit(KeyBindingEditor);
        filterEdit->setObjectName("filterEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, filterEdit);


        vboxLayout->addLayout(formLayout);

        keyBindingTable = new QTableWidget(KeyBindingEditor);
        keyBindingTable->setObjectName("keyBindingTable");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(keyBindingTable->sizePolicy().hasHeightForWidth());
        keyBindingTable->setSizePolicy(sizePolicy);

        vboxLayout->addWidget(keyBindingTable);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName("hboxLayout");
        addEntryButton = new QPushButton(KeyBindingEditor);
        addEntryButton->setObjectName("addEntryButton");

        hboxLayout->addWidget(addEntryButton);

        removeEntryButton = new QPushButton(KeyBindingEditor);
        removeEntryButton->setObjectName("removeEntryButton");

        hboxLayout->addWidget(removeEntryButton);


        vboxLayout->addLayout(hboxLayout);

        spacerItem = new QSpacerItem(20, 16, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vboxLayout->addItem(spacerItem);

        groupBox = new QGroupBox(KeyBindingEditor);
        groupBox->setObjectName("groupBox");
        groupBox->setFlat(true);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        testAreaInputEdit = new QLineEdit(groupBox);
        testAreaInputEdit->setObjectName("testAreaInputEdit");

        gridLayout->addWidget(testAreaInputEdit, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        testAreaOutputEdit = new QLineEdit(groupBox);
        testAreaOutputEdit->setObjectName("testAreaOutputEdit");
        testAreaOutputEdit->setReadOnly(true);

        gridLayout->addWidget(testAreaOutputEdit, 1, 1, 1, 1);


        vboxLayout->addWidget(groupBox);


        retranslateUi(KeyBindingEditor);

        QMetaObject::connectSlotsByName(KeyBindingEditor);
    } // setupUi

    void retranslateUi(QWidget *KeyBindingEditor)
    {
        descriptionLabel->setText(tr2i18n("Description:", nullptr));
        filterLabel->setText(tr2i18n("Filter:", nullptr));
        addEntryButton->setText(tr2i18n("Add", nullptr));
        removeEntryButton->setText(tr2i18n("Remove", nullptr));
        groupBox->setTitle(tr2i18n("Test Area", "Title of the area where you test your keys are properly configured"));
        label->setText(tr2i18n("Input:", nullptr));
        label_2->setText(tr2i18n("Output:", nullptr));
        (void)KeyBindingEditor;
    } // retranslateUi

};

namespace Ui {
    class KeyBindingEditor: public Ui_KeyBindingEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // KEYBINDINGEDITOR_H

