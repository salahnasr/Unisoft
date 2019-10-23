/********************************************************************************
** Form generated from reading UI file 'mailclient.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAILCLIENT_H
#define UI_MAILCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MailClient
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QToolButton *button_add_attachment;
    QToolButton *button_send;
    QToolButton *button_close;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_receiver_mail;
    QLineEdit *line_receiver_mail;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_receiver_name;
    QLineEdit *line_receiver_name;
    QLabel *label_password;
    QLineEdit *line_password;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_subject;
    QLineEdit *line_subject;
    QListWidget *list_attachements;
    QSpacerItem *verticalSpacer_2;
    QTextEdit *Text_mail_content;

    void setupUi(QDialog *MailClient)
    {
        if (MailClient->objectName().isEmpty())
            MailClient->setObjectName(QStringLiteral("MailClient"));
        MailClient->resize(731, 474);
        MailClient->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(MailClient);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);

        frame = new QFrame(MailClient);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button_add_attachment = new QToolButton(frame);
        button_add_attachment->setObjectName(QStringLiteral("button_add_attachment"));

        horizontalLayout->addWidget(button_add_attachment);

        button_send = new QToolButton(frame);
        button_send->setObjectName(QStringLiteral("button_send"));

        horizontalLayout->addWidget(button_send);

        button_close = new QToolButton(frame);
        button_close->setObjectName(QStringLiteral("button_close"));

        horizontalLayout->addWidget(button_close);


        verticalLayout_2->addWidget(frame);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_receiver_mail = new QLabel(MailClient);
        label_receiver_mail->setObjectName(QStringLiteral("label_receiver_mail"));

        horizontalLayout_5->addWidget(label_receiver_mail);

        line_receiver_mail = new QLineEdit(MailClient);
        line_receiver_mail->setObjectName(QStringLiteral("line_receiver_mail"));
        line_receiver_mail->setMinimumSize(QSize(0, 30));

        horizontalLayout_5->addWidget(line_receiver_mail);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_receiver_name = new QLabel(MailClient);
        label_receiver_name->setObjectName(QStringLiteral("label_receiver_name"));
        label_receiver_name->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout_2->addWidget(label_receiver_name);

        line_receiver_name = new QLineEdit(MailClient);
        line_receiver_name->setObjectName(QStringLiteral("line_receiver_name"));
        line_receiver_name->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(line_receiver_name);

        label_password = new QLabel(MailClient);
        label_password->setObjectName(QStringLiteral("label_password"));

        horizontalLayout_2->addWidget(label_password);

        line_password = new QLineEdit(MailClient);
        line_password->setObjectName(QStringLiteral("line_password"));
        line_password->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(line_password);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_subject = new QLabel(MailClient);
        label_subject->setObjectName(QStringLiteral("label_subject"));

        horizontalLayout_4->addWidget(label_subject);

        line_subject = new QLineEdit(MailClient);
        line_subject->setObjectName(QStringLiteral("line_subject"));
        line_subject->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(line_subject);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_3->addLayout(verticalLayout);

        list_attachements = new QListWidget(MailClient);
        list_attachements->setObjectName(QStringLiteral("list_attachements"));

        horizontalLayout_3->addWidget(list_attachements);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        Text_mail_content = new QTextEdit(MailClient);
        Text_mail_content->setObjectName(QStringLiteral("Text_mail_content"));

        verticalLayout_2->addWidget(Text_mail_content);


        retranslateUi(MailClient);

        QMetaObject::connectSlotsByName(MailClient);
    } // setupUi

    void retranslateUi(QDialog *MailClient)
    {
        MailClient->setWindowTitle(QApplication::translate("MailClient", "Esprit-RP : Mail client", 0));
        button_add_attachment->setText(QApplication::translate("MailClient", "Add Attachemnt", 0));
        button_send->setText(QApplication::translate("MailClient", "Send", 0));
        button_close->setText(QApplication::translate("MailClient", "Close", 0));
        label_receiver_mail->setText(QApplication::translate("MailClient", "Receiver mail", 0));
        label_receiver_name->setText(QApplication::translate("MailClient", "Receiver name", 0));
        label_password->setText(QApplication::translate("MailClient", "Password", 0));
        label_subject->setText(QApplication::translate("MailClient", "Subject", 0));
    } // retranslateUi

};

namespace Ui {
    class MailClient: public Ui_MailClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAILCLIENT_H
