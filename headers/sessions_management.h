#ifndef SESSIONS_MANAGEMENT_H
#define SESSIONS_MANAGEMENT_H

#include "headers/Prototype.h"
#include "headers/sessions.h"
#include "headers/session.h"
namespace Ui {
class sessions_management;
}

class sessions_management : public QDialog
{
    Q_OBJECT

public:
    explicit sessions_management(QWidget *parent = 0);
    ~sessions_management();
    void LoadSessions();

private slots:

    void on_button_close_clicked();

    void on_button_delete_clicked();

    void on_button_add_clicked();


private:
    Ui::sessions_management *ui;
    sessions sessionslist;
    Session *Add_session_widget;
    Session *Edit_session_widget;
};

#endif // SESSIONS_MANAGEMENT_H
