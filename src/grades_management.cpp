#include "headers/grades_management.h"
#include "ui_grades_management.h"

Grades_management::Grades_management(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Grades_management)
{
    ui->setupUi(this);
    ui->Combo_level_creation->addItems(this->classList.GetLevelList());
    ui->Combo_level_display->addItems(this->classList.GetLevelList());
    ui->Combo_level_edition->addItems(this->classList.GetLevelList());
    setWindowTitle("Esprit-RP : Grades management");
    Accens_management();
}

Grades_management::~Grades_management()
{
    delete ui;
}

bool Grades_management::Session_existed(QListWidget* parent,QString session_name)
{
    for(int i=0;i< parent->count();i++)
    {
        if (parent->item(i)->text()==session_name)
            return true;
    }
    return false;
}

void Grades_management::on_button_close_clicked()
{
    this->reject();
}

void Grades_management::on_Combo_level_creation_currentIndexChanged(int index)
{

    if(ui->Combo_level_creation->currentText()=="NONE")
    {
        ui->button_create_speciality->setEnabled(false);
        ui->button_creat_class->setEnabled(false);
    }
        else
    {
        ui->button_create_speciality->setEnabled(true);
        ui->button_creat_class->setEnabled(true);
    }
    ui->Combo_specialty_creation->clear();
    int level=ui->Combo_level_creation->currentText().toInt();
    ui->Combo_specialty_creation->addItems(this->classList.GetSpecialityList(level));
}

void Grades_management::on_Combo_level_display_currentIndexChanged(int index)
{

        ui->Combo_specialty_display->clear();
    int level=ui->Combo_level_display->currentText().toInt();
        ui->Combo_specialty_display->addItems(this->classList.GetSpecialityList(level));
Load_grades_table(ui->Combo_class_display->currentText());
}

void Grades_management::on_Combo_level_edition_currentIndexChanged(int index)
{
    if(ui->Combo_level_edition->currentText()=="NONE")
    {
        ui->button_delete->setEnabled(false);
        ui->button_delete_speciality->setEnabled(false);
    }
    else
    {
        ui->button_delete_speciality->setEnabled(true);
        ui->button_delete->setEnabled(true);
    }

    ui->Combo_specialty_edition->clear();
    int level=ui->Combo_level_edition->currentText().toInt();
        ui->Combo_specialty_edition->addItems(this->classList.GetSpecialityList(level));

}

void Grades_management::on_Combo_specialty_display_currentIndexChanged(int index)
{
    ui->Combo_class_display->clear();
    int level = ui->Combo_level_display->currentText().toInt();
    QString Speciality=ui->Combo_specialty_display->currentText();
    ui->Combo_class_display->addItems(classList.GetClassList(level,Speciality));
    Load_grades_table(ui->Combo_class_display->currentText());

}

void Grades_management::on_button_add_to_list_clicked()
{
   if (!Session_existed(ui->list_sessions,ui->combo_sessions->currentText()))
    ui->list_sessions->addItem(ui->combo_sessions->currentText());

}



void Grades_management::on_Combo_specialty_edition_currentIndexChanged(int index)
{
    ui->combo_class_edition->clear();
    int level = ui->Combo_level_edition->currentText().toInt();
    QString Speciality=ui->Combo_specialty_edition->currentText();
    ui->combo_class_edition->addItems(classList.GetClassList(level,Speciality));
}

void Grades_management::on_Combo_specialty_creation_currentIndexChanged(int index)
{
    ui->Combo_class->clear();
    int level = ui->Combo_level_creation->currentText().toInt();
    QString Speciality=ui->Combo_specialty_creation->currentText();
    ui->Combo_class->addItems(classList.GetClassList(level,Speciality));
}

void Grades_management::on_button_creat_class_clicked()
{
    Grades_table class_table;
    QStringList list_session;
    for(int i=0;i< ui->list_sessions->count();i++)
    {
        list_session << "'"+ui->list_sessions->item(i)->text()+"'";
    }
    if(!class_table.add_grade_class(ui->Combo_class->currentText(),list_session))
        QMessageBox::warning(this,"Error","Operation aborted ! \n Data already existing .",QMessageBox::Ok);
}

void Grades_management::on_button_delete_clicked()
{
    Grades_table class_table;
if(!class_table.delete_grade_class(ui->combo_class_edition->currentText()))
    QMessageBox::warning(this,"Error","Operation aborted ! \n Class table not found .",QMessageBox::Ok);

}

void Grades_management::on_button_delete_speciality_clicked()
{
    Grades_table class_table;
    class_table.delete_grade_speciality(ui->Combo_level_edition->currentIndex(),ui->Combo_specialty_edition->currentText());
}

void Grades_management::Accens_management()
{
    if (qApp->property("USER_TYPE")==STUDENT)
    {
        ui->group_data_creation->setHidden(true);
        ui->group_data_edition->setHidden(true);
        ui->table_students->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->group_data_display->setHidden(true);

        User current_user(qApp->property("USER_ID").toString());
        Student current_Student(current_user);
        Load_grades_table(current_Student.get_class());
    }
    else if (qApp->property("USER_TYPE")==TEACHER)
    {
        ui->group_data_creation->setHidden(true);
        ui->group_data_edition->setHidden(true);
        ui->table_students->setEditTriggers(QAbstractItemView::DoubleClicked);
    }
    else if (qApp->property("USER_TYPE")==POSTOFFICE)
    {
        ui->table_students->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }
}

void Grades_management::Load_grades_table(QString class_name)
{
    Grades_table grades_model;
ui->table_students->setModel(grades_model.LoadGrades(class_name));
/*qDebug() << */grades_model.LoadGrades(class_name)->query().lastError();

}

void Grades_management::on_Combo_class_display_currentIndexChanged(int index)
{
    Load_grades_table(ui->Combo_class_display->currentText());

}

void Grades_management::on_Combo_class_currentTextChanged(const QString &arg1)
{
    ui->list_sessions->clear();
    ui->combo_student_list->clear();
    ui->combo_sessions->clear();
    ui->combo_sessions->addItems(sessions::GetSessionsList(arg1));
    ui->combo_student_list->addItems(Student::GetStudentFromClass(ui->Combo_class->currentText()));
}

void Grades_management::on_button_create_speciality_clicked()
{
    Grades_table table;
    QStringList list_session;
    for(int i=0;i< ui->list_sessions->count();i++)
    {
        list_session << "'"+ui->list_sessions->item(i)->text()+"'";
    }
    table.Add_grade_speciality(ui->Combo_level_creation->currentIndex(),ui->Combo_specialty_creation->currentText(),list_session);

}

void Grades_management::on_Button_add_student_clicked()
{
    QStringList sessions;
    for (int i=0;i<ui->list_sessions->count();i++)
        sessions << "'"+ui->list_sessions->item(i)->text()+"'";

Grades_table::Add_student(ui->combo_student_list->currentText(),sessions);
}



void Grades_management::on_table_students_clicked(const QModelIndex &index)
{
    int row=index.row();
    QPoint grade(row,4);
    ui->line_grade->setText(ui->table_students->model()->index(row,5).data().toString());
}

void Grades_management::on_button_set_grade_clicked()
{
int row=ui->table_students->currentIndex().row();
QString ID;
ID=ui->table_students->model()->index(row,2).data().toString();
QString session;
session=ui->table_students->model()->index(row,4).data().toString();
Grades_table::Set_grade(ID,session,ui->line_grade->text());

}
