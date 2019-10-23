/********************************************************************************
** Form generated from reading UI file 'statistics.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICS_H
#define UI_STATISTICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include "headers/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Statistics
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QCustomPlot *customPlot_2;
    QCustomPlot *customPlot;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label;

    void setupUi(QDialog *Statistics)
    {
        if (Statistics->objectName().isEmpty())
            Statistics->setObjectName(QStringLiteral("Statistics"));
        Statistics->resize(662, 498);
        pushButton = new QPushButton(Statistics);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 30, 211, 23));
        pushButton_2 = new QPushButton(Statistics);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 70, 211, 23));
        pushButton_3 = new QPushButton(Statistics);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 110, 211, 23));
        pushButton_4 = new QPushButton(Statistics);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 150, 211, 23));
        pushButton_5 = new QPushButton(Statistics);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 230, 211, 23));
        pushButton_6 = new QPushButton(Statistics);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 190, 211, 23));
        customPlot_2 = new QCustomPlot(Statistics);
        customPlot_2->setObjectName(QStringLiteral("customPlot_2"));
        customPlot_2->setGeometry(QRect(330, 240, 311, 211));
        customPlot = new QCustomPlot(Statistics);
        customPlot->setObjectName(QStringLiteral("customPlot"));
        customPlot->setGeometry(QRect(330, 10, 311, 211));
        radioButton = new QRadioButton(Statistics);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(40, 280, 82, 17));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(Statistics);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(170, 280, 82, 17));
        pushButton_7 = new QPushButton(Statistics);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(570, 460, 75, 23));
        pushButton_8 = new QPushButton(Statistics);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(490, 460, 75, 23));
        pushButton_9 = new QPushButton(Statistics);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(410, 460, 75, 23));
        label = new QLabel(Statistics);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 310, 201, 171));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Icones/Ressources/legende.jpg")));

        retranslateUi(Statistics);

        QMetaObject::connectSlotsByName(Statistics);
    } // setupUi

    void retranslateUi(QDialog *Statistics)
    {
        Statistics->setWindowTitle(QApplication::translate("Statistics", "EspritRP : Statistics", 0));
        pushButton->setText(QApplication::translate("Statistics", "Fetch Students", 0));
        pushButton_2->setText(QApplication::translate("Statistics", "Fetch Teachers", 0));
        pushButton_3->setText(QApplication::translate("Statistics", "Fetch Incomes", 0));
        pushButton_4->setText(QApplication::translate("Statistics", "Fetch Outcomes", 0));
        pushButton_5->setText(QApplication::translate("Statistics", "Fetch Employees", 0));
        pushButton_6->setText(QApplication::translate("Statistics", "Fetch Materials", 0));
        radioButton->setText(QApplication::translate("Statistics", "Plot 1", 0));
        radioButton_2->setText(QApplication::translate("Statistics", "Plot 2", 0));
        pushButton_7->setText(QApplication::translate("Statistics", "Cancel", 0));
        pushButton_8->setText(QApplication::translate("Statistics", "Ok", 0));
        pushButton_9->setText(QApplication::translate("Statistics", "Export...", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Statistics: public Ui_Statistics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICS_H
