#ifndef TEACHER_H
#define TEACHER_H
#include"headers/Prototype.h"
#include "headers/user.h"
#include "headers/student.h"

class Teacher : public User
{
public:

    //Contructors
    Teacher();
    Teacher (User Current_User);
    Teacher(int cin );
    Teacher(QString first_name,QString last_name,int age,int Salary,QString ID,int CIN,QString Adresse,int PhoneNumber,QString Session);

    //Methods
    void AddTeacher();
    void EditTeacher(QString ID_query);
    static bool DeleteTeacher( QString ID_Teacher);

   int set_grade(int student_id,QString mastery );

    //Getters and Setters
    int get_salary();
    QString get_session();

private:
    int Salary ;
    QString Session;

};

#endif // TEACHER_H
