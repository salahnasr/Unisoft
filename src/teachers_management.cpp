#include "headers/teachers_management.h"
#include "ui_teachers_management.h"
#include "headers/sessions.h"

teachers_management::teachers_management(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::teachers_management)
{
    ui->setupUi(this);
    list_teachers();
    ui->Line_Search->setPlaceholderText("Search");
    ui->combo_Session->addItems(sessions::GetSessionsList());
}

teachers_management::~teachers_management()
{
    delete ui;
}

void teachers_management::on_Button_Add_clicked()
{
    Teacher_information *Information_Dialog=new Teacher_information(0,this);
    connect(Information_Dialog,SIGNAL(Teacher_data_added()),SLOT(list_teachers()));
    Information_Dialog->exec();
}

void teachers_management::on_Button_Edit_clicked()
{
    int Cin=ui->tab_listTeachers->model()->data(ui->tab_listTeachers->model()->index(ui->tab_listTeachers->currentIndex().row(),2)).toInt();
  Teacher_information *Information_Dialog=new Teacher_information(Cin,this);
    connect(Information_Dialog,SIGNAL(Teacher_data_added()),SLOT(list_teachers()));
    Information_Dialog->exec();
}

void teachers_management::on_Cancel_clicked()
{
    this->reject();
}

void teachers_management::list_teachers()
{
    Teacher_model = new QSqlQueryModel();
    QString query="SELECT  first_name,last_name,CIN ,Salary,Session from users  join teachers ON users.ID=teachers.ID ";
    QString index=ui->Combo_Salary->currentText();
    if(index=="Ascending")
      Teacher_model->setQuery(query+"ORDER By Salary ASC");
    else if(index=="Descending")
        Teacher_model->setQuery(query+"ORDER By Salary DESC");
    ui->tab_listTeachers->setModel(Teacher_model);
}

//Delete method
void teachers_management::on_Button_Delete_clicked()
{

    int selected_row= ui->tab_listTeachers->currentIndex().row();
    int Current_row_CIN = ui->tab_listTeachers->model()->data(ui->tab_listTeachers->model()->index(selected_row,2)).toInt();
    QSqlQuery query;
    QString Current_row_ID;

    if(query.exec("SELECT ID from users where cin='"+QString::number(Current_row_CIN)+"'"))
        query.first();
    Current_row_ID=query.value("ID").toString();

    if(Administrator::DeleteTeachers(Current_row_ID))
        list_teachers();
}

void teachers_management::on_Ok_clicked()
{
    this->accept();
}

//Search method

void teachers_management::on_Line_Search_textEdited(const QString &arg1)
{
    QString query="SELECT first_name,last_name,cin,Salary FROM users join teachers on users.ID=teachers.ID  where ";
    if(! arg1.isEmpty())
    {

        query+="First_name Like '%"+arg1+"%' OR Last_name like '%"+arg1+"%' OR CIN LIke '%"+arg1+"%'";
        Teacher_model->setQuery(query);
    ui->tab_listTeachers->setModel(Teacher_model);
    }
    else
    {
        list_teachers();
    }
}
void teachers_management::on_Combo_Salary_currentIndexChanged(const QString &arg1)
{

    list_teachers();

}

void teachers_management::on_combo_Session_currentIndexChanged(const QString &arg1)
{
    if (arg1=="All")
    {
        list_teachers();
    }
    else
    {

        Teacher_model->setQuery("SELECT * from teachers where session='"+arg1+"'");
       ui->tab_listTeachers->setModel(Teacher_model);
    }
}
