#include "headers/aboutesprit_rp.h"
#include "ui_aboutesprit_rp.h"

AboutEsprit_RP::AboutEsprit_RP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutEsprit_RP)
{
    ui->setupUi(this);
}

AboutEsprit_RP::~AboutEsprit_RP()
{
    delete ui;
}

void AboutEsprit_RP::on_Button_close_clicked()
{
    this->reject();
}
