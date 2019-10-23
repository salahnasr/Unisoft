/********************************************************************************
** Form generated from reading UI file 'edit_add.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_ADD_H
#define UI_EDIT_ADD_H

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

class Ui_EDIT_ADD
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *ID_2;
    QLabel *Name;
    QLabel *Status;
    QLabel *TODO;
    QLabel *ID;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEditName;
    QLineEdit *lineEditStatus;
    QLineEdit *lineEdit_todo;
    QLineEdit *lineEditRT;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *SAVE;
    QPushButton *pushButton;

    void setupUi(QDialog *EDIT_ADD)
    {
        if (EDIT_ADD->objectName().isEmpty())
            EDIT_ADD->setObjectName(QStringLiteral("EDIT_ADD"));
        EDIT_ADD->resize(584, 316);
        verticalLayout = new QVBoxLayout(EDIT_ADD);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        ID_2 = new QLabel(EDIT_ADD);
        ID_2->setObjectName(QStringLiteral("ID_2"));

        verticalLayout_3->addWidget(ID_2);

        Name = new QLabel(EDIT_ADD);
        Name->setObjectName(QStringLiteral("Name"));

        verticalLayout_3->addWidget(Name);

        Status = new QLabel(EDIT_ADD);
        Status->setObjectName(QStringLiteral("Status"));

        verticalLayout_3->addWidget(Status);

        TODO = new QLabel(EDIT_ADD);
        TODO->setObjectName(QStringLiteral("TODO"));

        verticalLayout_3->addWidget(TODO);

        ID = new QLabel(EDIT_ADD);
        ID->setObjectName(QStringLiteral("ID"));

        verticalLayout_3->addWidget(ID);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lineEdit_id = new QLineEdit(EDIT_ADD);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        verticalLayout_2->addWidget(lineEdit_id);

        lineEditName = new QLineEdit(EDIT_ADD);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        verticalLayout_2->addWidget(lineEditName);

        lineEditStatus = new QLineEdit(EDIT_ADD);
        lineEditStatus->setObjectName(QStringLiteral("lineEditStatus"));

        verticalLayout_2->addWidget(lineEditStatus);

        lineEdit_todo = new QLineEdit(EDIT_ADD);
        lineEdit_todo->setObjectName(QStringLiteral("lineEdit_todo"));

        verticalLayout_2->addWidget(lineEdit_todo);

        lineEditRT = new QLineEdit(EDIT_ADD);
        lineEditRT->setObjectName(QStringLiteral("lineEditRT"));

        verticalLayout_2->addWidget(lineEditRT);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 36, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        SAVE = new QPushButton(EDIT_ADD);
        SAVE->setObjectName(QStringLiteral("SAVE"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SAVE->sizePolicy().hasHeightForWidth());
        SAVE->setSizePolicy(sizePolicy);
        SAVE->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icones/Ressources/save-23.png"), QSize(), QIcon::Normal, QIcon::Off);
        SAVE->setIcon(icon);
        SAVE->setIconSize(QSize(50, 50));

        horizontalLayout_2->addWidget(SAVE);

        pushButton = new QPushButton(EDIT_ADD);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icones/Ressources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(52, 48));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(EDIT_ADD);

        QMetaObject::connectSlotsByName(EDIT_ADD);
    } // setupUi

    void retranslateUi(QDialog *EDIT_ADD)
    {
        EDIT_ADD->setWindowTitle(QApplication::translate("EDIT_ADD", "Esprit-RP : product management", 0));
        ID_2->setText(QApplication::translate("EDIT_ADD", "ID *", 0));
        Name->setText(QApplication::translate("EDIT_ADD", "Name", 0));
        Status->setText(QApplication::translate("EDIT_ADD", "Status", 0));
        TODO->setText(QApplication::translate("EDIT_ADD", "To do", 0));
        ID->setText(QApplication::translate("EDIT_ADD", "Ressource_type", 0));
        SAVE->setText(QString());
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EDIT_ADD: public Ui_EDIT_ADD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_ADD_H
