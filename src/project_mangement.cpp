#include "headers/project_mangement.h"
#include "ui_project_mangement.h"

Project_mangement::Project_mangement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Project_mangement)
{
    ui->setupUi(this);
}

Project_mangement::~Project_mangement()
{
    delete ui;
}

void Project_mangement::on_cancel_clicked()
{
    this->reject();
}
