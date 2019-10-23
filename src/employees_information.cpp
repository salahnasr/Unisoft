#include "headers/employees_information.h"
#include "ui_employees_information.h"

Employees_information::Employees_information(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Employees_information)
{
    ui->setupUi(this);
}

Employees_information::~Employees_information()
{
    delete ui;
}

void Employees_information::on_cancel_clicked()
{
    this->reject();
}
