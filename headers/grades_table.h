#ifndef GRADES_TABLE_H
#define GRADES_TABLE_H

#include "headers/Prototype.h"
#include "headers/classes.h"
#include "headers/student.h"
class Grades_table
{
public:
    Grades_table();
    ~Grades_table();
    static void add_session_to_table(QString session,QString class_name);
    void Add_grade_speciality(int level, QString Speciality, QStringList sessions_list);
    bool add_grade_class(QString class_name,QStringList sessions_list);
    bool delete_grade_class(QString class_name);
    void delete_grade_speciality(int level, QString Speciality);
    static QStringList GetSessionList(QString Class_name);
     QSqlQueryModel *LoadGrades(QString class_name);
     static void Add_student(QString ID, QStringList sessions);
     static void Set_grade(QString ID,QString session,QString grade);
private :
     QSqlQueryModel *Model;
};

#endif // GRADES_TABLE_H
