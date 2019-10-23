/********************************************************************************
** Form generated from reading UI file 'session.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSION_H
#define UI_SESSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Session
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_name;
    QLineEdit *line_name;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_level;
    QComboBox *combo_level;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_speciality;
    QComboBox *combo_speciality;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_class;
    QComboBox *combo_class;
    QToolButton *tool_add;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *button_accept;
    QPushButton *button_cancel;
    QListWidget *list_class;

    void setupUi(QDialog *Session)
    {
        if (Session->objectName().isEmpty())
            Session->setObjectName(QStringLiteral("Session"));
        Session->resize(593, 239);
        Session->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(Session);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_name = new QLabel(Session);
        label_name->setObjectName(QStringLiteral("label_name"));

        horizontalLayout->addWidget(label_name);

        line_name = new QLineEdit(Session);
        line_name->setObjectName(QStringLiteral("line_name"));

        horizontalLayout->addWidget(line_name);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_level = new QLabel(Session);
        label_level->setObjectName(QStringLiteral("label_level"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_level->sizePolicy().hasHeightForWidth());
        label_level->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label_level);

        combo_level = new QComboBox(Session);
        combo_level->setObjectName(QStringLiteral("combo_level"));

        verticalLayout->addWidget(combo_level);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_speciality = new QLabel(Session);
        label_speciality->setObjectName(QStringLiteral("label_speciality"));
        sizePolicy.setHeightForWidth(label_speciality->sizePolicy().hasHeightForWidth());
        label_speciality->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_speciality);

        combo_speciality = new QComboBox(Session);
        combo_speciality->setObjectName(QStringLiteral("combo_speciality"));

        verticalLayout_2->addWidget(combo_speciality);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_class = new QLabel(Session);
        label_class->setObjectName(QStringLiteral("label_class"));
        sizePolicy.setHeightForWidth(label_class->sizePolicy().hasHeightForWidth());
        label_class->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_class);

        combo_class = new QComboBox(Session);
        combo_class->setObjectName(QStringLiteral("combo_class"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(combo_class->sizePolicy().hasHeightForWidth());
        combo_class->setSizePolicy(sizePolicy1);

        verticalLayout_3->addWidget(combo_class);


        horizontalLayout_2->addLayout(verticalLayout_3);

        tool_add = new QToolButton(Session);
        tool_add->setObjectName(QStringLiteral("tool_add"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tool_add->sizePolicy().hasHeightForWidth());
        tool_add->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(tool_add);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        button_accept = new QPushButton(Session);
        button_accept->setObjectName(QStringLiteral("button_accept"));

        horizontalLayout_3->addWidget(button_accept);

        button_cancel = new QPushButton(Session);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));

        horizontalLayout_3->addWidget(button_cancel);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_4);

        list_class = new QListWidget(Session);
        list_class->setObjectName(QStringLiteral("list_class"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(list_class->sizePolicy().hasHeightForWidth());
        list_class->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(list_class);


        retranslateUi(Session);

        QMetaObject::connectSlotsByName(Session);
    } // setupUi

    void retranslateUi(QDialog *Session)
    {
        Session->setWindowTitle(QApplication::translate("Session", "Esprit-RP : Session management", 0));
        label_name->setText(QApplication::translate("Session", "Name", 0));
        label_level->setText(QApplication::translate("Session", "Level", 0));
        label_speciality->setText(QApplication::translate("Session", "Speciality", 0));
        label_class->setText(QApplication::translate("Session", "Class", 0));
        tool_add->setText(QApplication::translate("Session", "+", 0));
        button_accept->setText(QApplication::translate("Session", "Accept", 0));
        button_cancel->setText(QApplication::translate("Session", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Session: public Ui_Session {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSION_H
