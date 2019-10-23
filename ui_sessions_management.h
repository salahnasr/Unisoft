/********************************************************************************
** Form generated from reading UI file 'sessions_management.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSIONS_MANAGEMENT_H
#define UI_SESSIONS_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_sessions_management
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_options;
    QVBoxLayout *verticalLayout_3;
    QPushButton *button_add;
    QPushButton *button_delete;
    QPushButton *button_close;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_session_list;
    QVBoxLayout *verticalLayout_4;
    QListView *list_session;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *sessions_management)
    {
        if (sessions_management->objectName().isEmpty())
            sessions_management->setObjectName(QStringLiteral("sessions_management"));
        sessions_management->resize(574, 477);
        sessions_management->setStyleSheet(QStringLiteral(""));
        verticalLayout_5 = new QVBoxLayout(sessions_management);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_4);

        groupBox_options = new QGroupBox(sessions_management);
        groupBox_options->setObjectName(QStringLiteral("groupBox_options"));
        verticalLayout_3 = new QVBoxLayout(groupBox_options);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        button_add = new QPushButton(groupBox_options);
        button_add->setObjectName(QStringLiteral("button_add"));
        button_add->setMinimumSize(QSize(150, 50));

        verticalLayout_3->addWidget(button_add);

        button_delete = new QPushButton(groupBox_options);
        button_delete->setObjectName(QStringLiteral("button_delete"));
        button_delete->setMinimumSize(QSize(150, 50));

        verticalLayout_3->addWidget(button_delete);

        button_close = new QPushButton(groupBox_options);
        button_close->setObjectName(QStringLiteral("button_close"));
        button_close->setMinimumSize(QSize(150, 50));

        verticalLayout_3->addWidget(button_close);


        verticalLayout->addWidget(groupBox_options);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_3);

        groupBox_session_list = new QGroupBox(sessions_management);
        groupBox_session_list->setObjectName(QStringLiteral("groupBox_session_list"));
        verticalLayout_4 = new QVBoxLayout(groupBox_session_list);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        list_session = new QListView(groupBox_session_list);
        list_session->setObjectName(QStringLiteral("list_session"));
        list_session->setSelectionBehavior(QAbstractItemView::SelectItems);

        verticalLayout_4->addWidget(list_session);


        verticalLayout_2->addWidget(groupBox_session_list);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_2);


        retranslateUi(sessions_management);

        QMetaObject::connectSlotsByName(sessions_management);
    } // setupUi

    void retranslateUi(QDialog *sessions_management)
    {
        sessions_management->setWindowTitle(QApplication::translate("sessions_management", "Esprit-RP : session management", 0));
        groupBox_options->setTitle(QApplication::translate("sessions_management", "Options", 0));
        button_add->setText(QApplication::translate("sessions_management", "Add", 0));
        button_delete->setText(QApplication::translate("sessions_management", "Delete", 0));
        button_close->setText(QApplication::translate("sessions_management", "Close", 0));
        groupBox_session_list->setTitle(QApplication::translate("sessions_management", "Seesions list", 0));
    } // retranslateUi

};

namespace Ui {
    class sessions_management: public Ui_sessions_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSIONS_MANAGEMENT_H
