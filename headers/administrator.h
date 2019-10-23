#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "headers/student_information.h"
#include "headers/Prototype.h"
#include "headers/user.h"
#include "headers/student.h"
#include "headers/teacher.h"

class Administrator : public User
{

public:
    Administrator();
    Administrator(User Current_User);
    static void add_Student_to_database(Student Student_to_add);
    static void EditStudent(QString ID_for_query, Student Student_to_add);
    static bool DeleteStudent(QString ID_Student_to_delete);

    static void add_Teachers_to_database(Teacher Teacher_to_add);
    static void EditTeachers(QString ID_for_query, Teacher Teacher_to_add);
    static bool DeleteTeachers(QString ID_Teacher_to_delete);


private:


};

#endif // ADMINISTRATOR_H

