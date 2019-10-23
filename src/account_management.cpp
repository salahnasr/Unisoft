#include "headers/account_management.h"
#include "ui_account_management.h"

Account_management::Account_management(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Account_management)
{
    ui->setupUi(this);
    ui->line_password->setDisabled(true);
    ui->line_password->setEchoMode(QLineEdit::Password);
    ui->line_id->setDisabled(true);
    loadUserInfo();
    setWindowTitle("Esprit-RP: Account management");

}

Account_management::~Account_management()
{
    delete ui;
}

void Account_management::loadUserInfo()
{
    QString ID=qApp->property("USER_ID").toString();
    QSqlQuery query;
    query.prepare("SELECT * from users where id='"+ID+"'");
    if(query.exec())
    {
        query.first();
        ui->line_id->setText(ID);
        ui->line_adresse->setText(query.value("adresse").toString());
        ui->line_age->setText(query.value("age").toString());
        ui->line_cin->setText(query.value("cin").toString());
        ui->line_first_name->setText(query.value("first_name").toString());
        ui->line_last_name->setText(query.value("last_name").toString());
        ui->line_password->setText(query.value("password").toString());
        ui->line_phone_number->setText(query.value("Phone_number").toString());
        ui->line_profession->setText(query.value("profession").toString());
        ui->line_email->setText(query.value("email").toString());
    }

}


void Account_management::on_tool_unlock_clicked()
{

   if(ui->tool_unlock->text()=="Unlock")
    {
       Pass_Demande *Authentification=new Pass_Demande(this);
       connect(Authentification,SIGNAL(accepted()),this,SLOT(tool_unlock_accept()));
       connect(Authentification,SIGNAL(rejected()),this,SLOT(tool_unlock_reject()));
       Authentification->exec();
    }
   else
   {
       tool_unlock_reject();
       QString ID=qApp->property("USER_ID").toString();
       User current_User(ID);
       current_User.UpdateIDToDatabase(ui->line_id->text());
        current_User.UpdatePasswordToDatabase(ui->line_password->text());
   }
}


void Account_management::tool_unlock_accept()
{
    ui->tool_unlock->setText("Lock");
    ui->line_id->setDisabled(false);
    ui->line_password->setEchoMode(QLineEdit::Normal);
    ui->line_password->setDisabled(false);
}

void Account_management::tool_unlock_reject()
{
    ui->tool_unlock->setText("Unlock");
    ui->line_id->setDisabled(true);
    ui->line_password->setEchoMode(QLineEdit::Password);
    ui->line_password->setDisabled(true);
}

void Account_management::on_button_close_clicked()
{
    reject();
}
