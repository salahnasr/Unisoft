#include "headers/student.h"

Student::Student(): User()
{
    Class="";
    Payment="";
}

Student::Student(User Current_User)
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
    mail=Current_User.get_mail();
    QSqlQuery query;
    query.prepare("SELECT Class,Paid FROM STUDENTS WHERE ID='"+ID+"'");

    if(query.exec())
    {
        query.first();
        Class=query.value("Class").toString();
        Payment=query.value("Paid").toString();
    }
}

Student::Student(int cin)
{
QSqlQuery query;
query.prepare("SELECT * FROM users join students on users.ID=students.ID WHERE cin='"+QString::number(cin)+"'");

if (query.exec())
{
    while (query.next())
    {
        first_name=query.value("first_name").toString();
        last_name=query.value("last_name").toString();
        age=query.value("age").toInt();
        Class=query.value("Class").toString();
        Payment=query.value("Paid").toString();
        ID =query.value("ID").toString();
        CIN=query.value("CIN").toInt();
        PhoneNumber=query.value("Phone_number").toInt();
        Adresse=query.value("adresse").toString();
        mail=query.value("Email").toString();
    }
}
}

Student::Student(QString first_name, QString last_name, int age, QString Class, QString ID, int CIN, QString Adresse, int PhoneNumber)
{
    this->first_name=first_name;
    this->last_name=last_name;
    this->age=age;
    this->Class=Class;
    this->ID=ID;
    this->CIN=CIN;
    this->PhoneNumber=PhoneNumber;
    this->Adresse=Adresse;

}

void Student::AddStudent()
{
    QSqlQuery query_to_students;
    QSqlQuery query_to_users;
    query_to_users.prepare(" INSERT INTO Users (First_name,Last_name,Age,ID,CIN,Adresse,Phone_number,profession,password) VALUES ('" +
                           first_name + "','" + last_name + "','" + QString::number(age) +"','" + ID + "','"+
                           QString::number(CIN) +"','"+Adresse+"','"+QString::number(PhoneNumber)+"','"+"STUDENT"+"','"+QString::number(CIN)+"')");
    query_to_students.prepare("INSERT INTO students (ID,class) VALUES ('"+ID+"','"+Class+"')");
    query_to_users.exec();
    query_to_students.exec();
}

void Student::EditStudent( QString ID_for_query)
{
    QSqlQuery query_to_students;
    QSqlQuery query_to_users;
    QSqlQuery query_to_grades;
    query_to_users.prepare("UPDATE USERS SET First_name='"+first_name+"',Last_name='"+last_name+"',age='"+
                              QString::number(age)+"',ID='"+ID+"',CIN='"+QString::number(CIN)+"',Adresse='"+
                              Adresse+"',Phone_number='"+QString::number(PhoneNumber)+"',PASSWORD='"+
                              QString::number(CIN)+"' where ID='"+ID_for_query+"'");

    query_to_students.prepare("UPDATE Students SET ID='"+ID+"',class='"+Class+"'where ID='"+ ID_for_query+"'");
    query_to_grades.prepare("UPDATE grades SET Student_id ='"+ID+"'where Student_id='"+ID_for_query+"'");
    query_to_grades.exec();
    query_to_students.exec();
    query_to_users.exec();
}

bool Student::DeleteStudent(QString ID_Student_to_delete)
{
    QSqlQuery query_delete_student;
    QSqlQuery query_delete_user;
    QSqlQuery query_to_grades;
    QSqlQuery Get_class_query;
    Get_class_query.prepare("Select Class from Students where ID='"+ID_Student_to_delete+"'");
    Get_class_query.exec();
    Get_class_query.first();
    QString Student_class=Get_class_query.value("Class").toString();
    query_to_grades.prepare("Delete from grades where Student_ID='"+ID_Student_to_delete+"'");
    query_delete_student.prepare("DELETE FROM STUDENTS where ID='"+ID_Student_to_delete+"'");
    query_delete_user.prepare("DELETE FROM USERS where ID='"+ID_Student_to_delete+"'");
    if(query_delete_student.exec() && query_delete_user.exec() && query_to_grades.exec())
        return true;
    else
        return false;
}

QStringList Student::GetStudentFromClass(QString Class_name)
{
    QSqlQuery query;
    QStringList Students_IDs;
    query.prepare("Select students.ID,(first_name||' '||last_name) from Students inner join users on Students.id=users.id where class='"+Class_name+"'");
    if (query.exec())
    {
        while(query.next())
        {
            Students_IDs << query.value(0).toString();
        }
    }
    return Students_IDs;
}

void Student::SetPayment(QString Payment)
{
    this->Payment=Payment;
}

void Student::UpdatePaymentStatus()
{
    QSqlQuery query;
    query.prepare("UPDATE students set Paid='"+this->Payment+"' where ID='"+this->ID+"'");
    query.exec();
}

QString Student::get_class()
{
    return Class;
}

QString Student::GetPayment()
{
    return Payment;
}

void Student::AddStudentTogrades(QString class_name, QString Student_name, QString Student_id)
{
    QSqlQuery query;
    query.prepare("INSERT into grades_"+class_name+" (Student_Name,Student_ID) Values ('"+
                                 Student_name+"','"+Student_id+"')");
    query.exec();
}



