#include "headers/sessions_management.h"
#include "ui_sessions_management.h"

sessions_management::sessions_management(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sessions_management)
{
    Add_session_widget=0;
    Edit_session_widget=0;
    ui->setupUi(this);
    LoadSessions();
    this->setWindowTitle("Esprit-RP - Time tables managent : Sessions");

}

sessions_management::~sessions_management()
{
    delete Add_session_widget;
    delete Edit_session_widget;
    delete ui;
}

void sessions_management::LoadSessions()
{
    ui->list_session->setModel(sessionslist.model());
}


void sessions_management::on_button_close_clicked()
{
    reject();
}

void sessions_management::on_button_delete_clicked()
{
    QString CurrentItemText = ui->list_session->currentIndex().data().toString();
    sessionslist.DeleteSession(CurrentItemText);
    LoadSessions();
}

void sessions_management::on_button_add_clicked()
{
   Add_session_widget= new Session(ui->list_session->currentIndex().data().toString(),this);
   Add_session_widget->exec();
   LoadSessions();

}


