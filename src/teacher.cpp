#include "headers/teacher.h"

Teacher::Teacher():User()
{
    Salary=400;
}


Teacher::Teacher(User Current_User){

    Password=Current_User.get_Password();
    ID=Current_User.get_ID();
    first_name=Current_User.get_first_name();
    last_name=Current_User.get_last_name();
    age=Current_User.get_age();
    CIN=Current_User.get_Cin();
    USER=Current_User.get_USERTYPE();
    PhoneNumber=Current_User.get_phoneNumber();
    Adresse=Current_User.get_Adresse();

    QSqlQuery query;
    query.prepare("SELECT Salary FROM TEACHERS WHERE ID='"+ID+"'");
    if(query.exec()){
        Salary=query.value("Salary").toInt();
    }


}




Teacher::Teacher(int cin)
{  QSqlQuery query;
    query.prepare("SELECT * FROM users join TEACHERS on users.ID=teachers.ID WHERE cin='"+QString::number(cin)+"'");

    if (query.exec())
    {
        while (query.next())
        {
            first_name=query.value(query.record().indexOf("first_name")).toString();
            last_name=query.value(query.record().indexOf("last_name")).toString();
            age=query.value(query.record().indexOf("age")).toInt();
            Salary=query.value(query.record().indexOf("Salary")).toInt();
            ID =query.value(query.record().indexOf("ID")).toString();
            CIN=query.value(query.record().indexOf("CIN")).toInt();
            PhoneNumber=query.value(query.record().indexOf("Phone_number")).toInt();
            Adresse=query.value(query.record().indexOf("adresse")).toString();
            Session=query.value(query.record().indexOf("Session")).toString();

        }
    }

}

Teacher::Teacher(QString first_name, QString last_name, int age,int Salary, QString ID, int CIN,QString Adresse, int PhoneNumber,QString Session){

    this->first_name=first_name;
    this->last_name=last_name;
    this->age=age;
    this->Salary=Salary;
    this->ID=ID;
    this->CIN=CIN;
    this->PhoneNumber=PhoneNumber;
    this->Adresse=Adresse;
    this->Session=Session;

}


void Teacher::AddTeacher(){

    QSqlQuery query_teachers;
    QSqlQuery query_users;

    query_users.prepare("INSERT INTO users(First_name,Last_name,Age,ID,CIN,Adresse,Phone_number,profession,password) VALUES ('"+
                        first_name+"','"+last_name+"','"+QString::number(age)+"','"+ID+"','"+
                        QString::number(CIN)+"','"+Adresse+"','"+QString::number(PhoneNumber)+"','"+"TEACHER"+"','"+QString::number(CIN)+"')" );
    query_teachers.prepare("INSERT INTO teachers(ID,Salary,Session) VALUES ('"+ID+"','"+QString::number(Salary)+"','"+Session+"')");

    query_users.exec();
    query_teachers.exec();
}


void Teacher::EditTeacher(QString ID_query){

    QSqlQuery query_teachers;
    QSqlQuery query_users;

    query_users.prepare("UPDATE USERS SET First_name='"+first_name+"',Last_name='"+last_name+"',age='"+
                              QString::number(age)+"',ID='"+ID+"',CIN='"+QString::number(CIN)+"',Adresse='"+
                              Adresse+"',Phone_number='"+QString::number(PhoneNumber)+"',PASSWORD='"+
                              QString::number(CIN)+"' where ID='"+ID_query+"'");

    query_teachers.prepare("UPDATE TEACHERS SET ID='"+ID+"',Salary ='"+QString::number(Salary)+"',Session ='"+Session+"'where ID='"+ ID_query+"'");

    query_teachers.exec();
    query_users.exec();

}


bool Teacher::DeleteTeacher(QString ID_Teacher){

    QSqlQuery query_teacher;
    QSqlQuery query_user;
    query_teacher.prepare("DELETE FROM TEACHERS where ID='"+ID_Teacher+"'");
    query_user.prepare("DELETE FROM USERS where ID='"+ID_Teacher+"'");
    if(query_teacher.exec() && query_user.exec())
        return true;
    else
        return false;

}

int Teacher::get_salary()
{
    return Salary;
}

QString Teacher::get_session()
{
    return Session;
}
