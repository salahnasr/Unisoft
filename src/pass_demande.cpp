#include "headers/pass_demande.h"
#include "ui_pass_demande.h"

Pass_Demande::Pass_Demande(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pass_Demande)
{
    ui->setupUi(this);
    stat=false;
    this->setWindowTitle("Esprit-RP : Authentification");
}

Pass_Demande::~Pass_Demande()
{
    delete ui;
}

bool Pass_Demande::IsAccepted()
{
    return stat;
}

void Pass_Demande::on_button_cancel_clicked()
{
    reject();

}

void Pass_Demande::on_button_verify_clicked()
{
    QString ID=qApp->property("USER_ID").toString();
    User CurrentUser(ID);
    if (CurrentUser.validate_password(ui->line_password->text()))
    {
        accept();
        stat=true;
    }
    else
        ui->label_erro_info->setText("Wrong password . Please retry !");

}




