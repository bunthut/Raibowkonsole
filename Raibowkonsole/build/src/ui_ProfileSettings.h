#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'ProfileSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILESETTINGS_H
#define UI_PROFILESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProfileSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *newProfileButton;
    QPushButton *editProfileButton;
    QPushButton *deleteProfileButton;
    QPushButton *setAsDefaultButton;
    QSpacerItem *spacerItem;
    QFrame *separator;
    QTreeView *profileListView;

    void setupUi(QWidget *ProfileSettings)
    {
        if (ProfileSettings->objectName().isEmpty())
            ProfileSettings->setObjectName("ProfileSettings");
        ProfileSettings->resize(384, 384);
        verticalLayout_2 = new QVBoxLayout(ProfileSettings);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        newProfileButton = new QPushButton(ProfileSettings);
        newProfileButton->setObjectName("newProfileButton");

        verticalLayout->addWidget(newProfileButton);

        editProfileButton = new QPushButton(ProfileSettings);
        editProfileButton->setObjectName("editProfileButton");
        editProfileButton->setEnabled(false);

        verticalLayout->addWidget(editProfileButton);

        deleteProfileButton = new QPushButton(ProfileSettings);
        deleteProfileButton->setObjectName("deleteProfileButton");
        deleteProfileButton->setEnabled(false);

        verticalLayout->addWidget(deleteProfileButton);

        setAsDefaultButton = new QPushButton(ProfileSettings);
        setAsDefaultButton->setObjectName("setAsDefaultButton");
        setAsDefaultButton->setEnabled(false);

        verticalLayout->addWidget(setAsDefaultButton);


        gridLayout_2->addLayout(verticalLayout, 0, 2, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(spacerItem, 1, 2, 1, 1);

        separator = new QFrame(ProfileSettings);
        separator->setObjectName("separator");
        separator->setFrameShape(QFrame::Shape::VLine);

        gridLayout_2->addWidget(separator, 0, 1, 2, 1);

        profileListView = new QTreeView(ProfileSettings);
        profileListView->setObjectName("profileListView");
        profileListView->setAlternatingRowColors(true);
        profileListView->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        profileListView->setRootIsDecorated(false);
        profileListView->setUniformRowHeights(true);
        profileListView->setItemsExpandable(false);
        profileListView->setExpandsOnDoubleClick(false);
        profileListView->header()->setMinimumSectionSize(8);
        profileListView->header()->setStretchLastSection(true);

        gridLayout_2->addWidget(profileListView, 0, 0, 2, 1);

        gridLayout_2->setRowStretch(1, 1);

        verticalLayout_2->addLayout(gridLayout_2);


        retranslateUi(ProfileSettings);

        QMetaObject::connectSlotsByName(ProfileSettings);
    } // setupUi

    void retranslateUi(QWidget *ProfileSettings)
    {
#if QT_CONFIG(tooltip)
        newProfileButton->setToolTip(tr2i18n("Create a new profile based on the selected profile", nullptr));
#endif // QT_CONFIG(tooltip)
        newProfileButton->setText(tr2i18n("&New...", nullptr));
#if QT_CONFIG(tooltip)
        editProfileButton->setToolTip(tr2i18n("Edit the selected profile (this button is disabled for read-only profiles)", nullptr));
#endif // QT_CONFIG(tooltip)
        editProfileButton->setText(tr2i18n("&Edit...", nullptr));
#if QT_CONFIG(tooltip)
        deleteProfileButton->setToolTip(tr2i18n("Delete the selected profile", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteProfileButton->setText(tr2i18n("&Remove", nullptr));
#if QT_CONFIG(tooltip)
        setAsDefaultButton->setToolTip(tr2i18n("Set the selected profile as the default for new terminal sessions", nullptr));
#endif // QT_CONFIG(tooltip)
        setAsDefaultButton->setText(tr2i18n("&Set as Default", nullptr));
        (void)ProfileSettings;
    } // retranslateUi

};

namespace Ui {
    class ProfileSettings: public Ui_ProfileSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PROFILESETTINGS_H

