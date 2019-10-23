#include "headers/delete_maintenance.h"
#include "ui_delete_maintenance.h"
#include "headers/products.h"
delete_maintenance::delete_maintenance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_maintenance)
{
    ui->setupUi(this);
    maintenance_model = new QSqlQueryModel();
    maintenance_model->setQuery("select ID,Name,Status,TO_DO,Ressource_type from Maintenance");
    ui->listView->setModel(maintenance_model);

}

delete_maintenance::~delete_maintenance()
{
    delete ui;
}


void delete_maintenance::on_pushButton_delete_clicked()
{
    QString Name (ui->listView->currentIndex().data().toString());
    if(products::verifier(Name)==1)
    {
    products::remov_products(Name);
    int s=QMessageBox::information(this,tr("ALL OK!!"),tr("SUCCESSFULLY DELETED"),QMessageBox::Close);
    }
    else
       {
        int s=QMessageBox::warning(this,tr("SORRY"),tr("PRODUCT NOT FOUND"),QMessageBox::Close);
       }
    maintenance_model = new QSqlQueryModel();
    maintenance_model->setQuery("select ID,Name,Status,TO_DO,Ressource_type from Maintenance WHERE Name");
    ui->listView->setModel(maintenance_model);

}




void delete_maintenance::on_pushButton_close_clicked()
{
    this->reject();
}

void delete_maintenance::on_listView_doubleClicked(const QModelIndex &index)
{
    QString Name (ui->listView->currentIndex().data().toString());
    if(products::verifier(Name)==1)
    {
    products::remov_products(Name);
    int s=QMessageBox::information(this,tr("ALL OK!!"),tr("SUCCESSFULLY DELETED"),QMessageBox::Close);
    }
    else
       {
        int s=QMessageBox::warning(this,tr("SORRY"),tr("PRODUCT NOT FOUND"),QMessageBox::Close);
       }
    maintenance_model = new QSqlQueryModel();
    maintenance_model->setQuery("select ID,Name,Status,TO_DO,Ressource_type from Maintenance");
    ui->listView->setModel(maintenance_model);

}
