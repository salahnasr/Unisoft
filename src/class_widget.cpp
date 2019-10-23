#include "headers/class_widget.h"
#include "ui_class_widget.h"

Class_widget::Class_widget(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Class_widget)
{
    ui->setupUi(this);
    this->setWindowTitle("Esprit-RP - Time tables managent : Add class");
}

Class_widget::~Class_widget()
{
    delete ui;
}

void Class_widget::on_button_cancel_clicked()
{
    reject();
}

void Class_widget::on_button_accept_clicked()
{
    new_class.AddClass(ui->line_level->text().toInt(),ui->line_speciality->text(),ui->line_classroom->text());
    accept();
}
