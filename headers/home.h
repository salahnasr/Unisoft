#ifndef HOME_H
#define HOME_H

#include "headers/Prototype.h"
#include "headers/login.h"
#include "headers/student_management.h"
#include "headers/teachers_management.h"
#include "headers/Prototype.h"
#include "headers/maintenance.h"
#include "headers/aboutesprit_rp.h"
#include "headers/statistics.h"
#include "headers/financial_management.h"
#include "headers/employees_management.h"
#include "headers/employees_information.h"
#include "headers/time_table.h"
#include "headers/postoffice.h"
#include "headers/account_management.h"
#include "headers/pass_demande.h"
#include "headers/mainwindow.h"
#include "headers/teacher.h"
#include "headers/grades_management.h"
#include "headers/camera.h"
#include "headers/stylesheet.h"
#include "headers/financialagent.h"

namespace Ui {
class Home;
}

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(User Current_user,QWidget *parent = 0);
    ~Home();
    void SetNameAndNProfession();
    void Set_User_Typer (USER_TYPE USER);
    void Access_management();
    void LoadProfilePicture();
private slots :

    void showTime();

    void SetProfileImage(QPixmap image);

    void on_Button_logout_clicked();

    void on_Button_Student_management_clicked();

    void on_Button_teacher_management_clicked();

    void on_Button_Financial_clicked();

    void on_Button_stats_clicked();

    void on_Button_maintanence_clicked();

    void on_Button_Employees_management_clicked();

    void on_tool_About_clicked();

    void on_Button_Timetable_clicked();

    void on_tool_mailclient_clicked();

    void on_tool_Account_managemnt_clicked();

    void on_tool_Lock_clicked();

    void on_Button_grades_clicked();

    void on_tool_Quit_clicked();

    void on_tool_accoun_picture_clicked();

    void on_tool_calender_clicked();

    void on_tool_graphic_chart_clicked();

private:

    Ui::Home *ui;
    QTimer *timer;
    QSqlDatabase db;
    User *Current_User;
    Grades_management * grades_manager;
    Pass_Demande *lock;
    Account_management *Account;
    MailClient *mailclient;
    Time_Table *time_table;
    AboutEsprit_RP *About_Dialog;
    MainWindow *Employees_Dialog;
    Maintenance *Maintenance_Dialog;
    Statistics *Statistics_Dialog;
    Financial_management *Financial_dialog;
    teachers_management *Teachers_Dialog;
    QDialog *Students_Dialog;
};

#endif // HOME_H
