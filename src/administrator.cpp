#include "headers/administrator.h"

Administrator::Administrator() : User()
{
}

Administrator::Administrator(User Current_User)
{
    Password=Current_User.get_Password();
    ID=Current_User.get_ID();
    first_name=Current_User.get_first_name();
    last_name=Current_User.get_last_name();
    age=Current_User.get_age();
    CIN=Current_User.get_Cin();
    USER=Current_User.get_USERTYPE();
    PhoneNumber=Current_User.get_phoneNumber();
    Adresse=Current_User.get_Adresse();
}



void Administrator::add_Student_to_database(Student Student_to_add)
{

Student_to_add.AddStudent();
}


void Administrator::EditStudent(QString ID_for_query,Student Student_to_add)
{  
Student_to_add.EditStudent(ID_for_query);
}

bool Administrator::DeleteStudent(QString ID_Student_to_delete)
{
    return Student::DeleteStudent(ID_Student_to_delete);
}

void Administrator::add_Teachers_to_database(Teacher Teacher_to_add)
{

Teacher_to_add.AddTeacher();
}


void Administrator::EditTeachers(QString ID_for_query, Teacher Teacher_to_add){

    Teacher_to_add.EditTeacher(ID_for_query);
}

bool Administrator::DeleteTeachers(QString ID_Teacher_to_delete)
{
    return Teacher::DeleteTeacher(ID_Teacher_to_delete);

}
