/********************************************************************************
** Form generated from reading UI file 'edit_maintenance.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_MAINTENANCE_H
#define UI_EDIT_MAINTENANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EDIT_MAintenance
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QListView *listView;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_ID;
    QLineEdit *lineEdit_Name;
    QLineEdit *lineEdit_Status;
    QLineEdit *lineEdit_todo;
    QLineEdit *lineEdit_type;

    void setupUi(QDialog *EDIT_MAintenance)
    {
        if (EDIT_MAintenance->objectName().isEmpty())
            EDIT_MAintenance->setObjectName(QStringLiteral("EDIT_MAintenance"));
        EDIT_MAintenance->resize(798, 557);
        pushButton = new QPushButton(EDIT_MAintenance);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(621, 495, 80, 58));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icones/Ressources/save-23.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(72, 48));
        pushButton_2 = new QPushButton(EDIT_MAintenance);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(710, 495, 80, 58));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icones/Ressources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(73, 54));
        layoutWidget = new QWidget(EDIT_MAintenance);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 781, 481));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        listView = new QListView(layoutWidget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_3->addWidget(listView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit_ID = new QLineEdit(layoutWidget);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));

        verticalLayout->addWidget(lineEdit_ID);

        lineEdit_Name = new QLineEdit(layoutWidget);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));

        verticalLayout->addWidget(lineEdit_Name);

        lineEdit_Status = new QLineEdit(layoutWidget);
        lineEdit_Status->setObjectName(QStringLiteral("lineEdit_Status"));

        verticalLayout->addWidget(lineEdit_Status);

        lineEdit_todo = new QLineEdit(layoutWidget);
        lineEdit_todo->setObjectName(QStringLiteral("lineEdit_todo"));

        verticalLayout->addWidget(lineEdit_todo);

        lineEdit_type = new QLineEdit(layoutWidget);
        lineEdit_type->setObjectName(QStringLiteral("lineEdit_type"));

        verticalLayout->addWidget(lineEdit_type);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(EDIT_MAintenance);

        QMetaObject::connectSlotsByName(EDIT_MAintenance);
    } // setupUi

    void retranslateUi(QDialog *EDIT_MAintenance)
    {
        EDIT_MAintenance->setWindowTitle(QApplication::translate("EDIT_MAintenance", "Esprit-RP : Product management", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        label->setText(QApplication::translate("EDIT_MAintenance", "ID", 0));
        label_3->setText(QApplication::translate("EDIT_MAintenance", "NAME", 0));
        label_4->setText(QApplication::translate("EDIT_MAintenance", "Status", 0));
        label_5->setText(QApplication::translate("EDIT_MAintenance", "TO_DO", 0));
        label_2->setText(QApplication::translate("EDIT_MAintenance", "Type", 0));
    } // retranslateUi

};

namespace Ui {
    class EDIT_MAintenance: public Ui_EDIT_MAintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_MAINTENANCE_H
