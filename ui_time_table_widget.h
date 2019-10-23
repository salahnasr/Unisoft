/********************************************************************************
** Form generated from reading UI file 'time_table_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIME_TABLE_WIDGET_H
#define UI_TIME_TABLE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Time_table_widget
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_class;
    QLabel *label_date;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget_timetable;

    void setupUi(QWidget *Time_table_widget)
    {
        if (Time_table_widget->objectName().isEmpty())
            Time_table_widget->setObjectName(QStringLiteral("Time_table_widget"));
        Time_table_widget->resize(1150, 545);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Time_table_widget->sizePolicy().hasHeightForWidth());
        Time_table_widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(Time_table_widget);
        verticalLayout->setSpacing(1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_class = new QLabel(Time_table_widget);
        label_class->setObjectName(QStringLiteral("label_class"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_class->sizePolicy().hasHeightForWidth());
        label_class->setSizePolicy(sizePolicy1);
        label_class->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        label_class->setFont(font);
        label_class->setFrameShape(QFrame::NoFrame);
        label_class->setFrameShadow(QFrame::Sunken);
        label_class->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout->addWidget(label_class);

        label_date = new QLabel(Time_table_widget);
        label_date->setObjectName(QStringLiteral("label_date"));
        sizePolicy1.setHeightForWidth(label_date->sizePolicy().hasHeightForWidth());
        label_date->setSizePolicy(sizePolicy1);
        label_date->setMinimumSize(QSize(0, 30));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_date->setFont(font1);
        label_date->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout->addWidget(label_date);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        tableWidget_timetable = new QTableWidget(Time_table_widget);
        if (tableWidget_timetable->columnCount() < 7)
            tableWidget_timetable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_timetable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_timetable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_timetable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_timetable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_timetable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_timetable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_timetable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget_timetable->rowCount() < 6)
            tableWidget_timetable->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_timetable->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_timetable->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_timetable->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_timetable->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_timetable->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_timetable->setVerticalHeaderItem(5, __qtablewidgetitem12);
        tableWidget_timetable->setObjectName(QStringLiteral("tableWidget_timetable"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        tableWidget_timetable->setFont(font2);
        tableWidget_timetable->setLayoutDirection(Qt::LeftToRight);
        tableWidget_timetable->setStyleSheet(QStringLiteral(""));
        tableWidget_timetable->setFrameShape(QFrame::StyledPanel);
        tableWidget_timetable->setFrameShadow(QFrame::Sunken);
        tableWidget_timetable->setAutoScroll(false);
        tableWidget_timetable->setAutoScrollMargin(10);
        tableWidget_timetable->setTabKeyNavigation(true);
        tableWidget_timetable->setDragEnabled(false);
        tableWidget_timetable->setDragDropOverwriteMode(true);
        tableWidget_timetable->setAlternatingRowColors(false);
        tableWidget_timetable->setTextElideMode(Qt::ElideLeft);
        tableWidget_timetable->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        tableWidget_timetable->setShowGrid(true);
        tableWidget_timetable->setWordWrap(true);
        tableWidget_timetable->horizontalHeader()->setVisible(false);
        tableWidget_timetable->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget_timetable->horizontalHeader()->setDefaultSectionSize(200);
        tableWidget_timetable->horizontalHeader()->setHighlightSections(true);
        tableWidget_timetable->horizontalHeader()->setMinimumSectionSize(20);
        tableWidget_timetable->horizontalHeader()->setStretchLastSection(true);
        tableWidget_timetable->verticalHeader()->setCascadingSectionResizes(true);
        tableWidget_timetable->verticalHeader()->setDefaultSectionSize(80);
        tableWidget_timetable->verticalHeader()->setMinimumSectionSize(70);

        verticalLayout->addWidget(tableWidget_timetable);


        retranslateUi(Time_table_widget);

        QMetaObject::connectSlotsByName(Time_table_widget);
    } // setupUi

    void retranslateUi(QWidget *Time_table_widget)
    {
        Time_table_widget->setWindowTitle(QApplication::translate("Time_table_widget", "Form", 0));
        label_class->setText(QString());
        label_date->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget_timetable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Time_table_widget", "9 - 10:30", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_timetable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("Time_table_widget", "10:45 - 12:15", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_timetable->horizontalHeaderItem(4);
        ___qtablewidgetitem2->setText(QApplication::translate("Time_table_widget", "14 - 15:30", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_timetable->horizontalHeaderItem(6);
        ___qtablewidgetitem3->setText(QApplication::translate("Time_table_widget", "15:45 - 17:15", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_timetable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("Time_table_widget", "  Monday", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_timetable->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("Time_table_widget", "  Tuesday", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_timetable->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("Time_table_widget", "  Wedensday  ", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_timetable->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("Time_table_widget", "  Thursday", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_timetable->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("Time_table_widget", "  Friday", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_timetable->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("Time_table_widget", "  Saturday", 0));
    } // retranslateUi

};

namespace Ui {
    class Time_table_widget: public Ui_Time_table_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIME_TABLE_WIDGET_H
