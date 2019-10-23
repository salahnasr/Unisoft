/********************************************************************************
** Form generated from reading UI file 'delete_maintenance.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_MAINTENANCE_H
#define UI_DELETE_MAINTENANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_delete_maintenance
{
public:
    QLabel *label;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_close;
    QListView *listView;

    void setupUi(QDialog *delete_maintenance)
    {
        if (delete_maintenance->objectName().isEmpty())
            delete_maintenance->setObjectName(QStringLiteral("delete_maintenance"));
        delete_maintenance->resize(408, 343);
        label = new QLabel(delete_maintenance);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 331, 16));
        pushButton_delete = new QPushButton(delete_maintenance);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(230, 261, 71, 61));
        pushButton_delete->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icones/Ressources/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete->setIcon(icon);
        pushButton_delete->setIconSize(QSize(87, 58));
        pushButton_close = new QPushButton(delete_maintenance);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(307, 261, 71, 61));
        pushButton_close->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icones/Ressources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_close->setIcon(icon1);
        pushButton_close->setIconSize(QSize(74, 52));
        listView = new QListView(delete_maintenance);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 30, 381, 221));

        retranslateUi(delete_maintenance);

        QMetaObject::connectSlotsByName(delete_maintenance);
    } // setupUi

    void retranslateUi(QDialog *delete_maintenance)
    {
        delete_maintenance->setWindowTitle(QApplication::translate("delete_maintenance", "Esprit-RP : Maintenance", 0));
        label->setText(QApplication::translate("delete_maintenance", "Select and press delete", 0));
        pushButton_delete->setText(QString());
        pushButton_close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class delete_maintenance: public Ui_delete_maintenance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_MAINTENANCE_H
