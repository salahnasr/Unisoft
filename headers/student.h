#ifndef STUDENT_H
#define STUDENT_H
#include "headers/Prototype.h"
#include "headers/user.h"
class Student : public User
{
public:
    Student();
    Student(User Current_User);
    Student(int cin);
    Student(QString first_name, QString last_name, int age, QString Class,QString ID,int CIN,QString Adresse,int PhoneNumber);
    void AddStudent();
    void EditStudent(QString ID_for_query);
     static bool DeleteStudent(QString ID_Student_to_delete);
     static QStringList GetStudentFromClass(QString Class_name);
    void  SetPayment(QString Payment);
     void UpdatePaymentStatus();
   QString get_class();
   QString GetPayment();
   static void AddStudentTogrades(QString class_name,QString Student_name,QString Student_id);
private:

    QString Class;
    QString Payment;
};

#endif // STUDENT_H
