#include "headers/student_management.h"
#include "ui_student_management.h"

Student_management::Student_management(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Student_management)
{
    Student_model=0;
    ui->setupUi(this);
    setWindowTitle("Esprit-RP : Students management");
    list_students();
    ui->Line_Search->setPlaceholderText("search ...");
    ui->Combo_level->addItems(this->classList.GetLevelList());

    if (qApp->property("USER_TYPE")==TEACHER)

    {
        ui->Group_Options->setHidden(true);
    }
    else if (qApp->property("USER_TYPE")==FINANCIALAGENT)
    {
        ui->Button_Add->setHidden(true);
        ui->Button_Delete->setHidden(true);
    }
}

Student_management::~Student_management()
{
    delete Student_model;
    delete ui;
}

void Student_management::list_students()
{

    Student_model = new QSqlQueryModel();
    
    if( ui->Combo_level->currentIndex()==0 )

        Student_model->setQuery("select first_name,last_name,CIN ,class from users join students ON users.ID=students.ID");
   else
        Student_model->setQuery("select first_name,last_name,CIN ,class from users join students ON users.ID=students.ID WHERE class ='"+ui->combo_class->currentText()+"'");
    
    ui->tableView->setModel(Student_model);
}

void Student_management::on_Button_Add_clicked()
{
    Student_information *Information_Dialog=new Student_information(0,this);
    connect(Information_Dialog,SIGNAL(Student_data_added()),SLOT(list_students()));
    Information_Dialog->exec();
    delete Information_Dialog;
}

void Student_management::on_Button_Edit_clicked()
{
    int Cin=ui->tableView->model()->data(ui->tableView->model()->index(ui->tableView->currentIndex().row(),2)).toInt();
    Student_information *Information_Dialog=new Student_information(Cin,this);
    connect(Information_Dialog,SIGNAL(Student_data_added()),SLOT(list_students()));
    Information_Dialog->exec();
    delete Information_Dialog;

}

void Student_management::on_Button_Delete_clicked()
{
    int selected_row = ui->tableView->currentIndex().row();
    int Current_Row_CIN=ui->tableView->model()->data(ui->tableView->model()->index(selected_row,2)).toInt();
    QSqlQuery query;
    QString Current_row_ID;
   if(query.exec("SELECT ID from users where cin='"+QString::number(Current_Row_CIN)+"'"))
query.first();
    Current_row_ID=query.value("ID").toString();

    if(Administrator::DeleteStudent(Current_row_ID))
    {
           list_students();
    }        
}

void Student_management::on_cancel_clicked()
{
    reject();
}

void Student_management::on_Combo_level_currentIndexChanged(int index)
{
    ui->combo_class->clear();
    ui->Combo_specialty->clear();

    int level=ui->Combo_level->currentText().toInt();
    QString Speciality=ui->Combo_specialty->currentText();

    ui->Combo_specialty->addItems(this->classList.GetSpecialityList(level));
    ui->combo_class->addItems(classList.GetClassList(level,Speciality));

    list_students();
}

void Student_management::on_Combo_specialty_currentIndexChanged(int index)
{
    ui->combo_class->clear();

    int level = ui->Combo_level->currentText().toInt();
    QString Speciality=ui->Combo_specialty->currentText();
    ui->combo_class->addItems(classList.GetClassList(level,Speciality));

list_students();
}


void Student_management::on_Line_Search_textEdited(const QString &arg1)
{
    bool Cin_checked=ui->check_CIN->isChecked();
    bool FirstN_checked=ui->check_firstname->isChecked();
    bool lastN_checked=ui->check_lastname->isChecked();


QString query="SELECT first_name,last_name,cin,class FROM users join students on users.ID=students.ID WHERE class like '%"+ui->combo_class->currentText()+"%' and ";


    if (!arg1.isEmpty())
    {
        if (!Cin_checked  && !FirstN_checked && !lastN_checked)
        {
            query+="First_name Like '%"+arg1+"%' OR Last_name like '%"+arg1+"%' OR CIN LIke '%"+arg1+"%' ";
        }

        if (Cin_checked)
        {
            if (query!="SELECT first_name,last_name,cin,class FROM users join students on users.ID=students.ID WHERE class like '%"+ui->combo_class->currentText()+"%' and ")
                query+=" OR ";
            query+="CIN LIke '%"+arg1+"%'";

        }

            if (FirstN_checked)
            {
                if (query!="SELECT first_name,last_name,cin,class FROM users join students on users.ID=students.ID WHERE class like '%"+ui->combo_class->currentText()+"%' and ")
                    query+=" OR ";
                query+="First_name Like '%"+arg1+"%'";
            }
            if (lastN_checked)
            {
                if (query!="SELECT first_name,last_name,cin,class FROM users join students on users.ID=students.ID WHERE class like '%"+ui->combo_class->currentText()+"%' and ")
                    query+=" OR ";
                query+="Last_name like '%"+arg1+"%'";
            }
            Student_model->setQuery(query);
            ui->tableView->setModel(Student_model);
    }
    else
    {
        list_students();
    }

}

void Student_management::on_ok_clicked()
{
this->accept();
}


void Student_management::on_combo_class_currentIndexChanged(const QString &arg1)
{
    list_students();
}
