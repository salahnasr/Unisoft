/********************************************************************************
** Form generated from reading UI file 'account_management.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_MANAGEMENT_H
#define UI_ACCOUNT_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Account_management
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *group_private_info;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_ID;
    QLabel *label_password;
    QGridLayout *gridLayout;
    QLineEdit *line_id;
    QLineEdit *line_password;
    QToolButton *tool_unlock;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *group_public_info;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_first_name;
    QLabel *label_last_name;
    QLabel *label_age;
    QLabel *label_adresse;
    QLabel *label_cin;
    QLabel *label_email;
    QLabel *label_phone_number;
    QLabel *label_profession;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLineEdit *line_first_name;
    QLineEdit *line_last_name;
    QLineEdit *line_age;
    QLineEdit *line_adresse;
    QLineEdit *line_cin;
    QLineEdit *line_email;
    QLineEdit *line_phone_number;
    QLineEdit *line_profession;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *button_close;

    void setupUi(QDialog *Account_management)
    {
        if (Account_management->objectName().isEmpty())
            Account_management->setObjectName(QStringLiteral("Account_management"));
        Account_management->resize(581, 591);
        Account_management->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(Account_management);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        group_private_info = new QGroupBox(Account_management);
        group_private_info->setObjectName(QStringLiteral("group_private_info"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        group_private_info->setFont(font);
        horizontalLayout_4 = new QHBoxLayout(group_private_info);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(group_private_info);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/Icones/Ressources/url.png")));

        horizontalLayout_4->addWidget(label_7);

        horizontalSpacer_4 = new QSpacerItem(154, 92, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_ID = new QLabel(group_private_info);
        label_ID->setObjectName(QStringLiteral("label_ID"));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(11);
        label_ID->setFont(font1);

        verticalLayout_5->addWidget(label_ID);

        label_password = new QLabel(group_private_info);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setFont(font1);

        verticalLayout_5->addWidget(label_password);


        horizontalLayout_3->addLayout(verticalLayout_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        line_id = new QLineEdit(group_private_info);
        line_id->setObjectName(QStringLiteral("line_id"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_id->sizePolicy().hasHeightForWidth());
        line_id->setSizePolicy(sizePolicy);
        line_id->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(line_id, 0, 0, 1, 1);

        line_password = new QLineEdit(group_private_info);
        line_password->setObjectName(QStringLiteral("line_password"));
        line_password->setMinimumSize(QSize(0, 30));

        gridLayout->addWidget(line_password, 1, 0, 1, 1);

        tool_unlock = new QToolButton(group_private_info);
        tool_unlock->setObjectName(QStringLiteral("tool_unlock"));
        tool_unlock->setMinimumSize(QSize(0, 60));

        gridLayout->addWidget(tool_unlock, 0, 1, 2, 1);


        horizontalLayout_3->addLayout(gridLayout);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_3->addWidget(group_private_info);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        group_public_info = new QGroupBox(Account_management);
        group_public_info->setObjectName(QStringLiteral("group_public_info"));
        group_public_info->setFont(font);
        verticalLayout_4 = new QVBoxLayout(group_public_info);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_first_name = new QLabel(group_public_info);
        label_first_name->setObjectName(QStringLiteral("label_first_name"));
        label_first_name->setFont(font1);

        verticalLayout_2->addWidget(label_first_name);

        label_last_name = new QLabel(group_public_info);
        label_last_name->setObjectName(QStringLiteral("label_last_name"));
        label_last_name->setFont(font1);

        verticalLayout_2->addWidget(label_last_name);

        label_age = new QLabel(group_public_info);
        label_age->setObjectName(QStringLiteral("label_age"));
        label_age->setFont(font1);

        verticalLayout_2->addWidget(label_age);

        label_adresse = new QLabel(group_public_info);
        label_adresse->setObjectName(QStringLiteral("label_adresse"));
        label_adresse->setFont(font1);

        verticalLayout_2->addWidget(label_adresse);

        label_cin = new QLabel(group_public_info);
        label_cin->setObjectName(QStringLiteral("label_cin"));
        label_cin->setFont(font1);

        verticalLayout_2->addWidget(label_cin);

        label_email = new QLabel(group_public_info);
        label_email->setObjectName(QStringLiteral("label_email"));
        label_email->setFont(font1);

        verticalLayout_2->addWidget(label_email);

        label_phone_number = new QLabel(group_public_info);
        label_phone_number->setObjectName(QStringLiteral("label_phone_number"));
        label_phone_number->setFont(font1);

        verticalLayout_2->addWidget(label_phone_number);

        label_profession = new QLabel(group_public_info);
        label_profession->setObjectName(QStringLiteral("label_profession"));
        label_profession->setFont(font1);

        verticalLayout_2->addWidget(label_profession);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(10);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        line_first_name = new QLineEdit(group_public_info);
        line_first_name->setObjectName(QStringLiteral("line_first_name"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(line_first_name->sizePolicy().hasHeightForWidth());
        line_first_name->setSizePolicy(sizePolicy1);
        line_first_name->setMinimumSize(QSize(0, 30));
        line_first_name->setReadOnly(true);

        verticalLayout->addWidget(line_first_name);

        line_last_name = new QLineEdit(group_public_info);
        line_last_name->setObjectName(QStringLiteral("line_last_name"));
        sizePolicy1.setHeightForWidth(line_last_name->sizePolicy().hasHeightForWidth());
        line_last_name->setSizePolicy(sizePolicy1);
        line_last_name->setMinimumSize(QSize(0, 30));
        line_last_name->setReadOnly(true);

        verticalLayout->addWidget(line_last_name);

        line_age = new QLineEdit(group_public_info);
        line_age->setObjectName(QStringLiteral("line_age"));
        sizePolicy1.setHeightForWidth(line_age->sizePolicy().hasHeightForWidth());
        line_age->setSizePolicy(sizePolicy1);
        line_age->setMinimumSize(QSize(0, 30));
        line_age->setReadOnly(true);

        verticalLayout->addWidget(line_age);

        line_adresse = new QLineEdit(group_public_info);
        line_adresse->setObjectName(QStringLiteral("line_adresse"));
        sizePolicy1.setHeightForWidth(line_adresse->sizePolicy().hasHeightForWidth());
        line_adresse->setSizePolicy(sizePolicy1);
        line_adresse->setMinimumSize(QSize(0, 30));
        line_adresse->setReadOnly(true);

        verticalLayout->addWidget(line_adresse);

        line_cin = new QLineEdit(group_public_info);
        line_cin->setObjectName(QStringLiteral("line_cin"));
        sizePolicy1.setHeightForWidth(line_cin->sizePolicy().hasHeightForWidth());
        line_cin->setSizePolicy(sizePolicy1);
        line_cin->setMinimumSize(QSize(0, 30));
        line_cin->setReadOnly(true);

        verticalLayout->addWidget(line_cin);

        line_email = new QLineEdit(group_public_info);
        line_email->setObjectName(QStringLiteral("line_email"));
        sizePolicy1.setHeightForWidth(line_email->sizePolicy().hasHeightForWidth());
        line_email->setSizePolicy(sizePolicy1);
        line_email->setMinimumSize(QSize(0, 30));
        line_email->setReadOnly(true);

        verticalLayout->addWidget(line_email);

        line_phone_number = new QLineEdit(group_public_info);
        line_phone_number->setObjectName(QStringLiteral("line_phone_number"));
        sizePolicy1.setHeightForWidth(line_phone_number->sizePolicy().hasHeightForWidth());
        line_phone_number->setSizePolicy(sizePolicy1);
        line_phone_number->setMinimumSize(QSize(0, 30));
        line_phone_number->setReadOnly(true);

        verticalLayout->addWidget(line_phone_number);

        line_profession = new QLineEdit(group_public_info);
        line_profession->setObjectName(QStringLiteral("line_profession"));
        line_profession->setMinimumSize(QSize(0, 30));
        line_profession->setReadOnly(true);

        verticalLayout->addWidget(line_profession);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(group_public_info);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        button_close = new QPushButton(Account_management);
        button_close->setObjectName(QStringLiteral("button_close"));

        horizontalLayout_5->addWidget(button_close);


        verticalLayout_3->addLayout(horizontalLayout_5);


        retranslateUi(Account_management);

        QMetaObject::connectSlotsByName(Account_management);
    } // setupUi

    void retranslateUi(QDialog *Account_management)
    {
        Account_management->setWindowTitle(QApplication::translate("Account_management", "Esprit-RP : Account management", 0));
        group_private_info->setTitle(QApplication::translate("Account_management", "Private informations", 0));
        label_7->setText(QString());
        label_ID->setText(QApplication::translate("Account_management", "ID", 0));
        label_password->setText(QApplication::translate("Account_management", "Password", 0));
        tool_unlock->setText(QApplication::translate("Account_management", "Unlock", 0));
        group_public_info->setTitle(QApplication::translate("Account_management", "Public informations", 0));
        label_first_name->setText(QApplication::translate("Account_management", "First name", 0));
        label_last_name->setText(QApplication::translate("Account_management", "Last name", 0));
        label_age->setText(QApplication::translate("Account_management", "Age", 0));
        label_adresse->setText(QApplication::translate("Account_management", "Adresse", 0));
        label_cin->setText(QApplication::translate("Account_management", "CIN", 0));
        label_email->setText(QApplication::translate("Account_management", "Email", 0));
        label_phone_number->setText(QApplication::translate("Account_management", "Phone number", 0));
        label_profession->setText(QApplication::translate("Account_management", "Profession", 0));
        button_close->setText(QApplication::translate("Account_management", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class Account_management: public Ui_Account_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_MANAGEMENT_H
