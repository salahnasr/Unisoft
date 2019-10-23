#include "headers/employees_management.h"
#include "ui_employees_management.h"

Employees_management::Employees_management(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Employees_management)
{
    add_dialog=0;
    edit_dialog=0;
    ui->setupUi(this);
}

Employees_management::~Employees_management()
{
    delete add_dialog;
    delete edit_dialog;
    delete ui;
}

void Employees_management::on_Cancel_clicked()
{
    this->reject();
}

void Employees_management::on_Button_Add_clicked()
{
    add_dialog=new Employees_information(this);
    add_dialog->exec();
}

void Employees_management::on_Button_Edit_clicked()
{
    edit_dialog=new Employees_information(this);
    edit_dialog->exec();
}
