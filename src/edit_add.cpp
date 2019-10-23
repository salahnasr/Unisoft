#include "headers/edit_add.h"
#include "ui_edit_add.h"
#include "headers/products.h"

EDIT_ADD::EDIT_ADD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EDIT_ADD)
{
    ui->setupUi(this);
    ui->SAVE->setDisabled(true);
}

EDIT_ADD::~EDIT_ADD()
{
    delete ui;
}

void EDIT_ADD::on_SAVE_clicked()
{
    QString Name(ui->lineEditName->text()),TO_DO(ui->lineEdit_todo->text())
            ,Ressource_type(ui->lineEditRT->text()),ID(ui->lineEdit_id->text()),Status(ui->lineEditStatus->text());
    if(products::verifier(ID)!=1)
    {
    products::add_products(Name,ID,Status,TO_DO,Ressource_type);
    int s=QMessageBox::information(this,tr("ALL OK!!"),tr("SAVED"),QMessageBox::Close);
    }
    else
    {
           QMessageBox msgBox;
           msgBox.setText("Product already exist");
           msgBox.setInformativeText("Do you want to overwrite this ?");
           msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
           msgBox.setDefaultButton(QMessageBox::Save);
           int ret = msgBox.exec();
           if (ret==2048)
           {
               products::remov_products(ID);
               products::add_products(Name,ID,Status,TO_DO,Ressource_type);

               int ss=QMessageBox::information(this,tr("ALL OK!!"),tr("SAVED"),QMessageBox::Close);
           }
    }
    ui->lineEditName->setText("");
    ui->lineEditRT->setText("");
    ui->lineEditStatus->setText("");
    ui->lineEdit_id->setText("");
    ui->lineEdit_todo->setText("");

}



void EDIT_ADD::on_lineEditRT_textChanged(const QString &arg1)
{
    ui->SAVE->setDisabled(false);
}

void EDIT_ADD::on_pushButton_clicked()
{
    this->reject();
}
