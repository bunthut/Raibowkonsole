#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'EditProfileKeyboardPage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILEKEYBOARDPAGE_H
#define UI_EDITPROFILEKEYBOARDPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditProfileKeyboardPage
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *note;
    QWidget *keyBindingsGroup;
    QGridLayout *gridLayout;
    QListView *keyBindingList;
    QVBoxLayout *vboxLayout1;
    QPushButton *newKeyBindingsButton;
    QPushButton *editKeyBindingsButton;
    QPushButton *removeKeyBindingsButton;
    QPushButton *resetKeyBindingsButton;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *EditProfileKeyboardPage)
    {
        if (EditProfileKeyboardPage->objectName().isEmpty())
            EditProfileKeyboardPage->setObjectName("EditProfileKeyboardPage");
        EditProfileKeyboardPage->resize(400, 400);
        vboxLayout = new QVBoxLayout(EditProfileKeyboardPage);
        vboxLayout->setObjectName("vboxLayout");
        note = new QLabel(EditProfileKeyboardPage);
        note->setObjectName("note");
        note->setWordWrap(true);

        vboxLayout->addWidget(note);

        keyBindingsGroup = new QWidget(EditProfileKeyboardPage);
        keyBindingsGroup->setObjectName("keyBindingsGroup");
        gridLayout = new QGridLayout(keyBindingsGroup);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        keyBindingList = new QListView(keyBindingsGroup);
        keyBindingList->setObjectName("keyBindingList");
        keyBindingList->setIconSize(QSize(32, 32));

        gridLayout->addWidget(keyBindingList, 0, 0, 2, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName("vboxLayout1");
        newKeyBindingsButton = new QPushButton(keyBindingsGroup);
        newKeyBindingsButton->setObjectName("newKeyBindingsButton");

        vboxLayout1->addWidget(newKeyBindingsButton);

        editKeyBindingsButton = new QPushButton(keyBindingsGroup);
        editKeyBindingsButton->setObjectName("editKeyBindingsButton");

        vboxLayout1->addWidget(editKeyBindingsButton);

        removeKeyBindingsButton = new QPushButton(keyBindingsGroup);
        removeKeyBindingsButton->setObjectName("removeKeyBindingsButton");

        vboxLayout1->addWidget(removeKeyBindingsButton);

        resetKeyBindingsButton = new QPushButton(keyBindingsGroup);
        resetKeyBindingsButton->setObjectName("resetKeyBindingsButton");

        vboxLayout1->addWidget(resetKeyBindingsButton);


        gridLayout->addLayout(vboxLayout1, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(spacerItem, 1, 1, 1, 1);

        gridLayout->setRowStretch(1, 1);

        vboxLayout->addWidget(keyBindingsGroup);

        QWidget::setTabOrder(keyBindingList, newKeyBindingsButton);
        QWidget::setTabOrder(newKeyBindingsButton, editKeyBindingsButton);
        QWidget::setTabOrder(editKeyBindingsButton, removeKeyBindingsButton);
        QWidget::setTabOrder(removeKeyBindingsButton, resetKeyBindingsButton);

        retranslateUi(EditProfileKeyboardPage);

        QMetaObject::connectSlotsByName(EditProfileKeyboardPage);
    } // setupUi

    void retranslateUi(QWidget *EditProfileKeyboardPage)
    {
        note->setText(tr2i18n("Key bindings control how combinations of keystrokes in the terminal window are converted into the stream of characters that is then sent to the current terminal program. For more information on how to customize the key bindings check the Konsole Handbook.", "@info"));
#if QT_CONFIG(tooltip)
        newKeyBindingsButton->setToolTip(tr2i18n("Create a new key bindings scheme based upon the selected bindings", nullptr));
#endif // QT_CONFIG(tooltip)
        newKeyBindingsButton->setText(tr2i18n("New...", "@action:button Create an alternate key binding"));
#if QT_CONFIG(tooltip)
        editKeyBindingsButton->setToolTip(tr2i18n("Edit the selected key bindings scheme", nullptr));
#endif // QT_CONFIG(tooltip)
        editKeyBindingsButton->setText(tr2i18n("Edit...", nullptr));
#if QT_CONFIG(tooltip)
        removeKeyBindingsButton->setToolTip(tr2i18n("Delete the selected key bindings scheme", nullptr));
#endif // QT_CONFIG(tooltip)
        removeKeyBindingsButton->setText(tr2i18n("Remove", nullptr));
#if QT_CONFIG(tooltip)
        resetKeyBindingsButton->setToolTip(tr2i18n("Reset the selected key bindings scheme to its default values", nullptr));
#endif // QT_CONFIG(tooltip)
        resetKeyBindingsButton->setText(tr2i18n("Defaults", nullptr));
        (void)EditProfileKeyboardPage;
    } // retranslateUi

};

namespace Ui {
    class EditProfileKeyboardPage: public Ui_EditProfileKeyboardPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // EDITPROFILEKEYBOARDPAGE_H

