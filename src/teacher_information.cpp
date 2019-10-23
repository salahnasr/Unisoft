#include "headers/teacher_information.h"
#include "ui_teacher_information.h"
#include "headers/sessions.h"

Teacher_information::Teacher_information(int cin ,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Teacher_information)
{
    ui->setupUi(this);
    QRegExp Text_only("[A-Za-z]{1,30}");
    QRegExp Text_digit_only("[A-Za-z0-9]{3,50}");
    QRegExp Digit_only("[0-9]{8}");

    QValidator *Text_validator = new QRegExpValidator (Text_only);
    QValidator *Text_Digit_validator = new QRegExpValidator (Text_digit_only);
    QValidator *Digit_validator = new QRegExpValidator(Digit_only);

    ui->Line_firstName->setValidator(Text_validator);
    ui->Line_lastName->setValidator(Text_validator);

    ui->Line_Salary->setValidator(Digit_validator);
    ui->line_Adresse->setValidator(Text_Digit_validator);
    ui->line_ID->setValidator(Text_Digit_validator);


    ui->line_CIN->setValidator(Digit_validator);
    ui->Line_Age->setValidator(Digit_validator);
    ui->line_Telephone->setValidator(Digit_validator);

    ui->Line_Age->setMaxLength(2);
    ui->line_ID->setMaxLength(10);
    set_ok_enable();

    ui->Combo_Session->addItems(sessions::GetSessionsList());

    if(cin!=0)
    {
            To_edit=true;
            setWindowTitle("ESPRIT-RP : Edit Teacher");
        Teacher Teacher_To_Edit(cin);
        ui->Line_firstName->setText(Teacher_To_Edit.get_first_name());
        ui->Line_lastName->setText(Teacher_To_Edit.get_last_name());
        ui->line_Adresse->setText(Teacher_To_Edit.get_Adresse());
        ui->line_CIN->setText(QString::number(Teacher_To_Edit.get_Cin()));
        ui->Line_Age->setText(QString::number(Teacher_To_Edit.get_age()));
        ui->Line_Salary->setText(QString::number(Teacher_To_Edit.get_salary()));
        ui->line_Telephone->setText(QString::number(Teacher_To_Edit.get_phoneNumber()));
        ui->line_ID->setText(Teacher_To_Edit.get_ID());
        ID_for_query=ui->line_ID->text();
        ui->Combo_Session->setCurrentText(Teacher_To_Edit.get_session());
    }
    else
{
        To_edit=false;
            setWindowTitle("ESPRIT-RP : Add Teacher");
}
}

Teacher_information::~Teacher_information()
{
    delete ui;
}

void Teacher_information::on_cancel_clicked()
{
    this->reject();
}

void Teacher_information::set_ok_enable()
{
    bool first=ui->Line_firstName->text().isEmpty();
    bool last=ui->Line_lastName->text().isEmpty();
    bool CIN=ui->line_CIN->text().isEmpty();
    bool Salary=ui->Line_Salary->text().isEmpty();
    bool age=ui->Line_Age->text().isEmpty();
    bool adresse=ui->line_Adresse->text().isEmpty();
    bool ID=ui->line_ID->text().isEmpty();
    bool Phone=ui->line_Telephone->text().isEmpty();

    if (!(first || last || CIN || Salary || age || adresse || ID || Phone))
        ui->ok->setEnabled(true);
    else
        ui->ok->setEnabled(false);
}

void Teacher_information::on_ok_clicked()
{
    Teacher New_Teacher(ui->Line_firstName->text(),
                        ui->Line_lastName->text(),
                        ui->Line_Age->text().toInt(),
                        ui->Line_Salary->text().toInt(),
                        ui->line_ID->text(),
                        ui->line_CIN->text().toInt(),
                        ui->line_Adresse->text(),
                        ui->line_Telephone->text().toInt(),
                        ui->Combo_Session->currentText());
    if (To_edit)
        Administrator::EditTeachers(ID_for_query,New_Teacher);
    else
        Administrator::add_Teachers_to_database(New_Teacher);

    emit Teacher_data_added();
    this->accept();
}


void Teacher_information::on_Line_Age_editingFinished()
{
    set_ok_enable();
}

void Teacher_information::on_Line_firstName_editingFinished()
{
    set_ok_enable();
}

void Teacher_information::on_Line_lastName_editingFinished()
{
    set_ok_enable();
}

void Teacher_information::on_Line_Salary_editingFinished()
{
    set_ok_enable();
}

void Teacher_information::on_line_CIN_editingFinished()
{
    set_ok_enable();
}

void Teacher_information::on_line_Telephone_editingFinished()
{
    set_ok_enable();
}

void Teacher_information::on_line_Adresse_editingFinished()
{
    set_ok_enable();
}

void Teacher_information::on_line_ID_editingFinished()
{
    set_ok_enable();
}
