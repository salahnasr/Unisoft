#include "headers/session.h"
#include "ui_session.h"

Session::Session(QString query_name, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Session)
{
    ui->setupUi(this);
    this->query_name=query_name;
    if(!query_name.isEmpty())
        ui->line_name->setReadOnly(true);

    ui->line_name->setText(query_name);
     ui->list_class->addItems(sessions::GetclassList(query_name));
    this->setWindowTitle("Esprit-RP - Time tables managent -Session : Add/Edit");
    ui->combo_level->addItems(Classes::GetLevelList());

}

bool Session::ExistInList(QString classe)
{
    for (int i=0;i<ui->list_class->count();i++)
    {
        if (ui->list_class->item(i)->text()==classe)
            return true;
    }
    return false;
}

Session::~Session()
{
    delete ui;
}



void Session::on_button_cancel_clicked()
{
    reject();
}

void Session::on_button_accept_clicked()
{

        for (int i=0;i<ui->list_class->count();i++)
    sessions::AddSession(ui->line_name->text(),ui->list_class->item(i)->text());
    reject();
}

void Session::on_combo_level_currentIndexChanged(const QString &arg1)
{
ui->combo_speciality->clear();
ui->combo_speciality->addItems(Classes::GetSpecialityList(arg1.toInt()));
}

void Session::on_combo_speciality_currentIndexChanged(const QString &arg1)
{
    ui->combo_class->clear();
    ui->combo_class->addItems(Classes::GetClassList(ui->combo_level->currentText().toInt(),arg1));
}

void Session::on_tool_add_clicked()
{
    if (!ExistInList(ui->combo_class->currentText()))
    ui->list_class->addItem(ui->combo_class->currentText());

}

void Session::on_line_name_textChanged(const QString &arg1)
{
    if (arg1.isEmpty())
        ui->button_accept->setDisabled(true);
    else
        ui->button_accept->setDisabled(false);
}
