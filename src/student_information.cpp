#include "headers/student_information.h"
#include "ui_student_information.h"

Student_information::Student_information(int cin, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Student_information)
{
    ui->setupUi(this);

    QRegExp Text_only("[A-Za-z]{1,30}");
    QRegExp Text_digit_only("[A-Za-z0-9]{3,50}");
    QRegExp Digit_only("[0-9]{8}");

    Text = new QRegExpValidator (Text_only);
    Text_Digit = new QRegExpValidator (Text_digit_only);
    Digit = new QRegExpValidator(Digit_only);
    ui->Line_firstName->setValidator(Text);
    ui->Line_lastName->setValidator(Text);

    ui->Line_Class->setValidator(Text_Digit);
    ui->line_Adresse->setValidator(Text_Digit);
    ui->line_ID->setValidator(Text_Digit);

    ui->line_CIN->setValidator(Digit);
    ui->Line_Age->setValidator(Digit);
    ui->line_Telephone->setValidator(Digit);

    ui->Line_Age->setMaxLength(2);
    ui->line_ID->setMaxLength(10);

    set_ok_enable();

    if (qApp->property("USER_TYPE")==STUDENT)
    {
        ui->line_Adresse->setReadOnly(true);
        ui->line_CIN->setReadOnly(true);
        ui->line_ID->setReadOnly(true);
        ui->line_Payment->setReadOnly(true);
        ui->line_Telephone->setReadOnly(true);
        ui->Line_Age->setReadOnly(true);
        ui->Line_Class->setReadOnly(true);
        ui->Line_firstName->setReadOnly(true);
        ui->Line_lastName->setReadOnly(true);
        ui->ok->setEnabled(true);
        ui->cancel->setHidden(true);
    }
    else if(qApp->property("USER_TYPE")==FINANCIALAGENT)
    {
        ui->line_Adresse->setReadOnly(true);
        ui->line_CIN->setReadOnly(true);
        ui->line_ID->setReadOnly(true);
        ui->line_Telephone->setReadOnly(true);
        ui->Line_Age->setReadOnly(true);
        ui->Line_Class->setReadOnly(true);
        ui->Line_firstName->setReadOnly(true);
        ui->Line_lastName->setReadOnly(true);
        ui->ok->setEnabled(true);
        ui->cancel->setHidden(true);
    }
    else if (qApp->property("USER_TYPE")==ADMINISTRATOR)
        ui->line_Payment->setReadOnly(true);

    classes= new QCompleter(Classes::GetClassesList());
    ui->Line_Class->setCompleter(classes);

    if(cin!=0)
    {
            To_edit=true;
            setWindowTitle("ESPRIT-RP : Edit Student");
        Student Student_To_Edit(cin);
        ui->Line_firstName->setText(Student_To_Edit.get_first_name());
        ui->Line_lastName->setText(Student_To_Edit.get_last_name());
        ui->line_Adresse->setText(Student_To_Edit.get_Adresse());
        ui->line_CIN->setText(QString::number(Student_To_Edit.get_Cin()));
        ui->Line_Age->setText(QString::number(Student_To_Edit.get_age()));
        ui->Line_Class->setText(Student_To_Edit.get_class());
        ui->line_Telephone->setText(QString::number(Student_To_Edit.get_phoneNumber()));
        ui->line_ID->setText(Student_To_Edit.get_ID());
        ui->line_Payment->setText(Student_To_Edit.GetPayment());
        ID_for_query=ui->line_ID->text();

    }
    else
{
        To_edit=false;
            setWindowTitle("ESPRIT-RP : Add Student");

}
}

Student_information::~Student_information()
{
    delete Text;
    delete Text_Digit;
    delete Digit;
    delete classes;
    delete ui;

}

void Student_information::on_cancel_clicked()
{
    this->reject();
}


void Student_information::on_ok_clicked()
{

    Student New_Student(ui->Line_firstName->text(),ui->Line_lastName->text(),ui->Line_Age->text().toInt(),
                        ui->Line_Class->text(),ui->line_ID->text(),
                        ui->line_CIN->text().toInt(),
                        ui->line_Adresse->text(),
                        ui->line_Telephone->text().toInt()
                            );

    if (To_edit)
       {
        if(qApp->property("USER_TYPE")==FINANCIALAGENT)
        {
            New_Student.SetPayment(ui->line_Payment->text());
            FinancialAgent::setStudentPaiment(New_Student);
        }
        else
        Administrator::EditStudent(ID_for_query,New_Student);
        }
    else   
        Administrator::add_Student_to_database(New_Student);
    emit Student_data_added();
    this->accept();

}

void Student_information::set_ok_enable()
{
    bool first=ui->Line_firstName->text().isEmpty();
    bool last=ui->Line_lastName->text().isEmpty();
    bool CIN=ui->line_CIN->text().isEmpty();
    bool Class=ui->Line_Class->text().isEmpty();
    bool age=ui->Line_Age->text().isEmpty();
    bool adresse=ui->line_Adresse->text().isEmpty();
    bool ID=ui->line_ID->text().isEmpty();
    bool Phone=ui->line_Telephone->text().isEmpty();

    if (!(first || last || CIN || Class || age || adresse || ID || Phone))
{
        ui->ok->setEnabled(true);
}
    else
        ui->ok->setEnabled(false);
}


void Student_information::on_Line_Age_editingFinished()
{
    set_ok_enable();
}

void Student_information::on_Line_firstName_editingFinished()
{
    set_ok_enable();
}

void Student_information::on_Line_lastName_editingFinished()
{
    set_ok_enable();
}

void Student_information::on_Line_Class_editingFinished()
{
    set_ok_enable();
}

void Student_information::on_line_CIN_editingFinished()
{
    set_ok_enable();
}

void Student_information::on_line_Telephone_editingFinished()
{
    set_ok_enable();
}

void Student_information::on_line_Adresse_editingFinished()
{
    set_ok_enable();
}

void Student_information::on_line_ID_editingFinished()
{
    set_ok_enable();
}
