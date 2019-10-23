#ifndef TIME_TABLE_WIDGET_H
#define TIME_TABLE_WIDGET_H

#include "headers/Prototype.h"
#include "headers/sessions.h"
#include "headers/classes.h"
namespace Ui {
class Time_table_widget;
}

class Time_table_widget : public QWidget
{
    Q_OBJECT

public:
    explicit Time_table_widget(QString Class,QWidget *parent = 0);
    ~Time_table_widget();
    void SetClassText(QString Class);
    void genereteTable(QString Class);
public slots:
     void updateTimeTable();
     void SaveIntoDatabase(QString Class_name);
signals:
     void TimeTableChangeSaved();
private:
    Ui::Time_table_widget *ui;
    QTableWidgetItem * monday_session1;
    QTableWidgetItem * monday_session2;
    QTableWidgetItem * monday_session3;
    QTableWidgetItem * monday_session4;
    QTableWidgetItem * tuesday_session1;
    QTableWidgetItem * tuesday_session2;
    QTableWidgetItem * tuesday_session3;
    QTableWidgetItem * tuesday_session4;
    QTableWidgetItem * wedensday_session1;
    QTableWidgetItem * wedensday_session2;
    QTableWidgetItem * wedensday_session3;
    QTableWidgetItem * wedensday_session4;
    QTableWidgetItem * thursday_session1;
    QTableWidgetItem * thursday_session2;
    QTableWidgetItem * thursday_session3;
    QTableWidgetItem * thursday_session4;
    QTableWidgetItem * friday_session1;
    QTableWidgetItem * friday_session2;
    QTableWidgetItem * friday_session3;
    QTableWidgetItem * friday_session4;
    QTableWidgetItem * saturday_session1;
    QTableWidgetItem * saturday_session2;
    QTableWidgetItem * saturday_session3;
    QTableWidgetItem * saturday_session4;

};

#endif // TIME_TABLE_WIDGET_H
