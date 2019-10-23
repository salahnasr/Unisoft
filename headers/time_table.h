#ifndef TIME_TABLE_H
#define TIME_TABLE_H

#include "headers/Prototype.h"
#include "headers/time_table_widget.h"
#include "headers/mailclient.h"
#include "headers/sessions_management.h"
#include "headers/classes.h"
#include "headers/class_widget.h"
namespace Ui {
class Time_Table;
}

class Time_Table : public QDialog
{
    Q_OBJECT

public:
    explicit Time_Table(QWidget *parent = 0);
    ~Time_Table();
    QString Export(QString Direction);
    void CreateTimeTable(QString Class);
    void RefreshClassList();
signals:
    void TimeTableHasChanged();
private slots:
    void on_Button_export_clicked();

    void on_combo_level_currentIndexChanged(int index);

    void on_Combo_specialty_currentIndexChanged(int index);

    void on_combo_class_currentIndexChanged(int index);

    void on_Button_Cancel_clicked();

    void on_Button_Accept_clicked();

    void on_Button_mail_clicked();

    void on_Button_sessions_clicked();

    void on_Button_add_class_clicked();

    void on_Button_delete_class_clicked();

private:

    Ui::Time_Table *ui;
    QGraphicsScene *scene;
    QGraphicsProxyWidget* pProxyWidget ;
    Time_table_widget* timetable ;
    Classes classList;

    Class_widget *class_add_widget;
    sessions_management * session_manager;
    MailClient *mailDialog;
};

#endif // TIME_TABLE_H
