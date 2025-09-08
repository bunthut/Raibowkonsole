#include <klocalizedstring.h>

/********************************************************************************
** Form generated from reading UI file 'sshwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SSHWIDGET_H
#define UI_SSHWIDGET_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kmessagewidget.h"
#include "sshtreeview.h"

QT_BEGIN_NAMESPACE

class Ui_SSHTreeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QKeySequenceEdit *keySequenceEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *filterText;
    QCheckBox *btnInvertFilter;
    QHBoxLayout *horizontalLayout_1;
    QCheckBox *btnManageProfile;
    SshTreeView *treeView;
    KMessageWidget *errorPanel;
    QWidget *sshInfoPane;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *name;
    QLabel *label;
    QLineEdit *hostname;
    QLabel *label_3;
    QLineEdit *port;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *sshkey;
    QToolButton *btnFindSshKey;
    QCheckBox *useSshConfig;
    QLabel *label_7;
    QLineEdit *username;
    QLabel *folderLabel;
    QComboBox *folder;
    QLabel *label_5;
    QComboBox *profile;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *newSSHConfig;
    QPushButton *btnDelete;
    QPushButton *btnEdit;
    QPushButton *btnAdd;
    QPushButton *btnCancel;

    void setupUi(QWidget *SSHTreeWidget)
    {
        if (SSHTreeWidget->objectName().isEmpty())
            SSHTreeWidget->setObjectName("SSHTreeWidget");
        SSHTreeWidget->resize(506, 831);
        verticalLayout = new QVBoxLayout(SSHTreeWidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(SSHTreeWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        keySequenceEdit = new QKeySequenceEdit(SSHTreeWidget);
        keySequenceEdit->setObjectName("keySequenceEdit");

        horizontalLayout_4->addWidget(keySequenceEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        filterText = new QLineEdit(SSHTreeWidget);
        filterText->setObjectName("filterText");
        filterText->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(filterText);

        btnInvertFilter = new QCheckBox(SSHTreeWidget);
        btnInvertFilter->setObjectName("btnInvertFilter");

        horizontalLayout_2->addWidget(btnInvertFilter);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName("horizontalLayout_1");
        btnManageProfile = new QCheckBox(SSHTreeWidget);
        btnManageProfile->setObjectName("btnManageProfile");

        horizontalLayout_1->addWidget(btnManageProfile);


        verticalLayout->addLayout(horizontalLayout_1);

        treeView = new SshTreeView(SSHTreeWidget);
        treeView->setObjectName("treeView");
        treeView->header()->setVisible(false);

        verticalLayout->addWidget(treeView);

        errorPanel = new KMessageWidget(SSHTreeWidget);
        errorPanel->setObjectName("errorPanel");

        verticalLayout->addWidget(errorPanel);

        sshInfoPane = new QWidget(SSHTreeWidget);
        sshInfoPane->setObjectName("sshInfoPane");
        formLayout = new QFormLayout(sshInfoPane);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(sshInfoPane);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        name = new QLineEdit(sshInfoPane);
        name->setObjectName("name");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, name);

        label = new QLabel(sshInfoPane);
        label->setObjectName("label");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        hostname = new QLineEdit(sshInfoPane);
        hostname->setObjectName("hostname");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, hostname);

        label_3 = new QLabel(sshInfoPane);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_3);

        port = new QLineEdit(sshInfoPane);
        port->setObjectName("port");

        formLayout->setWidget(2, QFormLayout::ItemRole::FieldRole, port);

        label_4 = new QLabel(sshInfoPane);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        sshkey = new QLineEdit(sshInfoPane);
        sshkey->setObjectName("sshkey");

        horizontalLayout_3->addWidget(sshkey);

        btnFindSshKey = new QToolButton(sshInfoPane);
        btnFindSshKey->setObjectName("btnFindSshKey");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("folder-open")));
        btnFindSshKey->setIcon(icon);

        horizontalLayout_3->addWidget(btnFindSshKey);


        formLayout->setLayout(3, QFormLayout::ItemRole::FieldRole, horizontalLayout_3);

        useSshConfig = new QCheckBox(sshInfoPane);
        useSshConfig->setObjectName("useSshConfig");

        formLayout->setWidget(4, QFormLayout::ItemRole::FieldRole, useSshConfig);

        label_7 = new QLabel(sshInfoPane);
        label_7->setObjectName("label_7");

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_7);

        username = new QLineEdit(sshInfoPane);
        username->setObjectName("username");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, username);

        folderLabel = new QLabel(sshInfoPane);
        folderLabel->setObjectName("folderLabel");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, folderLabel);

        folder = new QComboBox(sshInfoPane);
        folder->setObjectName("folder");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(folder->sizePolicy().hasHeightForWidth());
        folder->setSizePolicy(sizePolicy);
        folder->setEditable(true);

        formLayout->setWidget(6, QFormLayout::ItemRole::FieldRole, folder);

        label_5 = new QLabel(sshInfoPane);
        label_5->setObjectName("label_5");

        formLayout->setWidget(7, QFormLayout::ItemRole::LabelRole, label_5);

        profile = new QComboBox(sshInfoPane);
        profile->setObjectName("profile");
        sizePolicy.setHeightForWidth(profile->sizePolicy().hasHeightForWidth());
        profile->setSizePolicy(sizePolicy);

        formLayout->setWidget(7, QFormLayout::ItemRole::FieldRole, profile);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        formLayout->setItem(8, QFormLayout::ItemRole::FieldRole, verticalSpacer);


        verticalLayout->addWidget(sshInfoPane);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        newSSHConfig = new QPushButton(SSHTreeWidget);
        newSSHConfig->setObjectName("newSSHConfig");
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("list-add")));
        newSSHConfig->setIcon(icon1);

        horizontalLayout->addWidget(newSSHConfig);

        btnDelete = new QPushButton(SSHTreeWidget);
        btnDelete->setObjectName("btnDelete");
        QIcon icon2(QIcon::fromTheme(QString::fromUtf8("edit-delete")));
        btnDelete->setIcon(icon2);

        horizontalLayout->addWidget(btnDelete);

        btnEdit = new QPushButton(SSHTreeWidget);
        btnEdit->setObjectName("btnEdit");

        horizontalLayout->addWidget(btnEdit);

        btnAdd = new QPushButton(SSHTreeWidget);
        btnAdd->setObjectName("btnAdd");

        horizontalLayout->addWidget(btnAdd);

        btnCancel = new QPushButton(SSHTreeWidget);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(treeView, newSSHConfig);
        QWidget::setTabOrder(newSSHConfig, name);
        QWidget::setTabOrder(name, hostname);
        QWidget::setTabOrder(hostname, port);
        QWidget::setTabOrder(port, sshkey);
        QWidget::setTabOrder(sshkey, username);
        QWidget::setTabOrder(username, btnAdd);
        QWidget::setTabOrder(btnAdd, btnCancel);
        QWidget::setTabOrder(btnCancel, btnEdit);
        QWidget::setTabOrder(btnEdit, btnDelete);

        retranslateUi(SSHTreeWidget);

        QMetaObject::connectSlotsByName(SSHTreeWidget);
    } // setupUi

    void retranslateUi(QWidget *SSHTreeWidget)
    {
        label_6->setText(tr2i18n("Shortcut", nullptr));
        filterText->setPlaceholderText(tr2i18n("Filter...", nullptr));
#if QT_CONFIG(tooltip)
        btnInvertFilter->setToolTip(tr2i18n("Show entries that don't match the filter", nullptr));
#endif // QT_CONFIG(tooltip)
        btnInvertFilter->setText(tr2i18n("Invert", nullptr));
#if QT_CONFIG(tooltip)
        btnManageProfile->setToolTip(tr2i18n("Change profile on connect/disconnect", nullptr));
#endif // QT_CONFIG(tooltip)
        btnManageProfile->setText(tr2i18n("Manage profile", nullptr));
        label_2->setText(tr2i18n("Identifier", nullptr));
#if QT_CONFIG(tooltip)
        name->setToolTip(tr2i18n("A name for this ssh entry", nullptr));
#endif // QT_CONFIG(tooltip)
        name->setPlaceholderText(tr2i18n("The name of this entry on the list", nullptr));
        label->setText(tr2i18n("SSH Hostname", nullptr));
#if QT_CONFIG(tooltip)
        hostname->setToolTip(tr2i18n("The hostname of the server", nullptr));
#endif // QT_CONFIG(tooltip)
        hostname->setPlaceholderText(tr2i18n("The hostname of the server", nullptr));
        label_3->setText(tr2i18n("Port", nullptr));
#if QT_CONFIG(tooltip)
        port->setToolTip(tr2i18n("The port of the server, 22 is the default for ssh connections", nullptr));
#endif // QT_CONFIG(tooltip)
        port->setText(tr2i18n("22", nullptr));
        label_4->setText(tr2i18n("SSH Key", nullptr));
#if QT_CONFIG(tooltip)
        sshkey->setToolTip(tr2i18n("The private key to be used for this connection", nullptr));
#endif // QT_CONFIG(tooltip)
        sshkey->setText(QString());
        sshkey->setPlaceholderText(tr2i18n("The private key", nullptr));
        btnFindSshKey->setText(tr2i18n("...", nullptr));
#if QT_CONFIG(tooltip)
        useSshConfig->setToolTip(tr2i18n("If this is set, we don't rely on the SSH key set above, but on the configuration on ~/.ssh/config", nullptr));
#endif // QT_CONFIG(tooltip)
        useSshConfig->setText(tr2i18n("Use ~/.ssh/config for key", nullptr));
        label_7->setText(tr2i18n("Username", nullptr));
#if QT_CONFIG(tooltip)
        username->setToolTip(tr2i18n("The username for the connection", nullptr));
#endif // QT_CONFIG(tooltip)
        username->setPlaceholderText(tr2i18n("Your username", nullptr));
        folderLabel->setText(tr2i18n("Folder", nullptr));
#if QT_CONFIG(tooltip)
        folder->setToolTip(tr2i18n("For organizational purposes, this entry will be inside of this folder.", nullptr));
#endif // QT_CONFIG(tooltip)
        folder->setCurrentText(tr2i18n("Default", nullptr));
        label_5->setText(tr2i18n("Profile", nullptr));
#if QT_CONFIG(tooltip)
        profile->setToolTip(tr2i18n("The profile to be active when the ssh session starts", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        newSSHConfig->setToolTip(tr2i18n("Add a new SSH Entry", nullptr));
#endif // QT_CONFIG(tooltip)
        newSSHConfig->setText(QString());
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(tr2i18n("Delete selected SSH entry", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QString());
#if QT_CONFIG(tooltip)
        btnEdit->setToolTip(tr2i18n("Edit selected entry", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdit->setText(tr2i18n("Edit", nullptr));
#if QT_CONFIG(tooltip)
        btnAdd->setToolTip(tr2i18n("Add new SSH Configuration", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAdd->setText(tr2i18n("Add", nullptr));
#if QT_CONFIG(tooltip)
        btnCancel->setToolTip(tr2i18n("Cancel Add or Edit", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCancel->setText(tr2i18n("Cancel", nullptr));
        (void)SSHTreeWidget;
    } // retranslateUi

};

namespace Ui {
    class SSHTreeWidget: public Ui_SSHTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SSHWIDGET_H

