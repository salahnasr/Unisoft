/********************************************************************************
** Form generated from reading UI file 'pass_demande.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASS_DEMANDE_H
#define UI_PASS_DEMANDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Pass_Demande
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_text_info;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_password;
    QLineEdit *line_password;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_erro_info;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_verify;
    QPushButton *button_cancel;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *Pass_Demande)
    {
        if (Pass_Demande->objectName().isEmpty())
            Pass_Demande->setObjectName(QStringLiteral("Pass_Demande"));
        Pass_Demande->resize(591, 199);
        Pass_Demande->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(Pass_Demande);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        label_text_info = new QLabel(Pass_Demande);
        label_text_info->setObjectName(QStringLiteral("label_text_info"));
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferDefault);
        label_text_info->setFont(font);

        horizontalLayout_3->addWidget(label_text_info);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_password = new QLabel(Pass_Demande);
        label_password->setObjectName(QStringLiteral("label_password"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_password->setFont(font1);

        horizontalLayout_2->addWidget(label_password);

        line_password = new QLineEdit(Pass_Demande);
        line_password->setObjectName(QStringLiteral("line_password"));
        line_password->setMinimumSize(QSize(0, 30));
        line_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(line_password);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_6 = new QSpacerItem(120, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        label_erro_info = new QLabel(Pass_Demande);
        label_erro_info->setObjectName(QStringLiteral("label_erro_info"));

        horizontalLayout_4->addWidget(label_erro_info);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        button_verify = new QPushButton(Pass_Demande);
        button_verify->setObjectName(QStringLiteral("button_verify"));
        button_verify->setMinimumSize(QSize(120, 30));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        button_verify->setFont(font2);

        horizontalLayout->addWidget(button_verify);

        button_cancel = new QPushButton(Pass_Demande);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));
        button_cancel->setMinimumSize(QSize(120, 30));
        button_cancel->setFont(font2);

        horizontalLayout->addWidget(button_cancel);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Pass_Demande);

        QMetaObject::connectSlotsByName(Pass_Demande);
    } // setupUi

    void retranslateUi(QDialog *Pass_Demande)
    {
        Pass_Demande->setWindowTitle(QApplication::translate("Pass_Demande", "Esprit-RP : Lock", 0));
        label_text_info->setText(QApplication::translate("Pass_Demande", "Password is needed to confirm the current user", 0));
        label_password->setText(QApplication::translate("Pass_Demande", "Password", 0));
        label_erro_info->setText(QString());
        button_verify->setText(QApplication::translate("Pass_Demande", "Verify", 0));
        button_cancel->setText(QApplication::translate("Pass_Demande", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Pass_Demande: public Ui_Pass_Demande {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASS_DEMANDE_H
