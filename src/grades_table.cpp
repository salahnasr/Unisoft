#include "headers/grades_table.h"

Grades_table::Grades_table()
{
     Model=0;
}

Grades_table::~Grades_table()
{
    delete Model;
}

void Grades_table::add_session_to_table(QString session, QString class_name)
{
    QSqlQuery query;
    query.prepare("ALTER TABLE grades_"+class_name+" Add '"+session+"'' TEXT");
    query.exec();
}

void Grades_table::Add_grade_speciality(int level, QString Speciality,QStringList sessions_list)
{
    QStringList class_names=Classes::GetClassList(level,Speciality);

    for (int j=0;j<class_names.count();j++)
        add_grade_class(class_names.at(j),sessions_list);

}

bool Grades_table::add_grade_class(QString class_name, QStringList sessions_list)
{
    QSqlQuery query;
    QStringList Students_ids=Student::GetStudentFromClass(class_name);


        for (int i=0;i<Students_ids.count();i++)
        {
            Add_student(Students_ids.at(i),sessions_list);
        }
        return true;
}

bool Grades_table::delete_grade_class(QString class_name)
{
    QSqlQuery query;
    QStringList student_list=Student::GetStudentFromClass(class_name);
    for (int i=0;i< student_list.count();i++)
    {
    query.prepare("Delete from grades where student_id='"+student_list.at(i)+"'");
    query.exec();
    }
    return true;
}

void Grades_table::delete_grade_speciality(int level, QString Speciality)
{
    QStringList class_names=Classes::GetClassList(level,Speciality);

    for (int j=0;j<class_names.count();j++)
        delete_grade_class(class_names.at(j));
}

QSqlQueryModel *Grades_table::LoadGrades(QString class_name)
{
  Model=new QSqlQueryModel;
Model->setQuery("select first_name,last_name,users.ID,class,session_name,grade from users inner join students on users.id=students.id inner join grades on users.id=grades.student_id where students.class='"+class_name+"'");
return Model;
}

void Grades_table::Add_student(QString ID, QStringList sessions)
{
    QSqlQuery query;
    for (int i=0;i<sessions.count();i++)
    {
    query.prepare("INSERT into grades ( Student_ID ,session_name) Values ('"+ID+"',"+sessions.at(i)+")");
    query.exec();
    }
}

void Grades_table::Set_grade(QString ID, QString session, QString grade)
{
    QSqlQuery query;
    query.prepare("UPDATE grades set grade='"+grade+"' where student_id='"+ID+"' and session_name='"+session+"'");
    query.exec();
}
