#include "headers/maintenance.h"
#include "ui_maintenance.h"

Maintenance::Maintenance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Maintenance)
{
    ui->setupUi(this);
    maintenance = new QSqlQueryModel();
    maintenance->setQuery("select Name,ID,Status,TO_DO,Ressource_type from Maintenance");
    ui->tableView->setModel(maintenance);
}

Maintenance::~Maintenance()
{
    delete ui;
}

void Maintenance::on_cancel_clicked()
{
    this->reject();
}

void Maintenance::on_pushButton_Edit_clicked()
{

    edit_dialod = new EDIT_ADD(this);
    edit_dialod->exec();

}

void Maintenance::on_pushButton_ADD_clicked()
{
    editM_dialog=new EDIT_MAintenance(this);
    editM_dialog->exec();

}

void Maintenance::on_pushButton_delete_clicked()
{
    delete_dialog=new delete_maintenance(this);
    delete_dialog->exec();
}

void Maintenance::on_pushButton_refresh_clicked()
{
    maintenance = new QSqlQueryModel();
    maintenance->setQuery("select Name,ID,Status,TO_DO,Ressource_type from Maintenance");
    ui->tableView->setModel(maintenance);

}
