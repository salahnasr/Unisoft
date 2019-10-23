#include "headers/edit_maintenance.h"
#include "ui_edit_maintenance.h"

EDIT_MAintenance::EDIT_MAintenance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EDIT_MAintenance)
{
    ui->setupUi(this);
    editm = new QSqlQueryModel();
    editm->setQuery("select ID,Name,Status,TO_DO,Ressource_type from Maintenance");
    ui->listView->setModel(editm);
}

EDIT_MAintenance::~EDIT_MAintenance()
{
    delete ui;
}

void EDIT_MAintenance::on_listView_doubleClicked(const QModelIndex &index)
{
    QString Name(ui->listView->currentIndex().data().toString());
    QSqlQuery query;
    query.prepare("select Name,ID,Status,TO_DO,Ressource_type from Maintenance WHERE ID='"+Name+"'");
    query.exec();
    query.first();
    QString ID=query.value("ID").toString();
    ui->lineEdit_ID->setText(ID);
    ui->lineEdit_Status->setText(query.value("Status").toString());
    ui->lineEdit_Name->setText(query.value("Name").toString());
    ui->lineEdit_todo->setText(query.value("TO_DO").toString());
    ui->lineEdit_type->setText(query.value("Ressource_type").toString());

}



void EDIT_MAintenance::on_pushButton_clicked()
{
    QString Name(ui->lineEdit_Name->text()),TO_DO(ui->lineEdit_todo->text())
            ,Ressource_type(ui->lineEdit_type->text()),ID(ui->lineEdit_ID->text()),Status(ui->lineEdit_Status->text());
    QSqlQuery query;
    QString azerty(ui->listView->currentIndex().data().toString());
    products::edit_products(Name,ID,Status,TO_DO,Ressource_type,azerty);
    int s=QMessageBox::information(this,tr("ALL OK!!"),tr("EDITED"),QMessageBox::Close);
    editm = new QSqlQueryModel();
    editm->setQuery("select ID,Name,Status,TO_DO,Ressource_type from Maintenance");
    ui->listView->setModel(editm);
}

void EDIT_MAintenance::on_pushButton_2_clicked()
{
    this->reject();
}
