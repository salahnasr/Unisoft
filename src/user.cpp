#include "headers/user.h"

User::User()
{
    Password="";
    ID="";
    USER=NONE;
    first_name="";
    last_name="";
    age=0;
    CIN=0;
    PhoneNumber=0;
    Adresse="";
    mail="";
}

User::User(QString ID)
{
    QString UserType;

    this->ID=ID;
    QSqlDatabase::database();
    QSqlQuery query("SELECT * FROM Users where ID='"+ID+"'");

    if (query.exec())
    {

    query.first();

    Password = query.value("Password").toString();
    UserType = query.value("Profession").toString();
    first_name=query.value("first_name").toString();
    last_name=query.value("last_name").toString();
    age=query.value("Age").toInt();
    CIN=query.value("CIN").toInt();
    PhoneNumber=query.value("Phone_number").toInt();
    Adresse=query.value("Adresse").toString();
    mail=query.value("Email").toString();

        if (!UserType.isEmpty())
        {
             if (UserType.toLower()=="administrator")
                USER=ADMINISTRATOR;
            else if (UserType.toLower()=="student")
                USER=STUDENT;
            else if (UserType.toLower()=="teacher")
                USER=TEACHER;
            else if (UserType.toLower()=="postoffice")
                USER=POSTOFFICE;
             else if (UserType.toUpper()=="FINANCIALAGENT")
                USER=FINANCIALAGENT;
          }

        }

    qApp->setProperty("USER_TYPE",USER);
    qApp->setProperty("USER_ID",ID);

}

User::User(QString Password, QString ID)
{
    this->Password=Password;
    this->ID=ID;
    QString UserType;

    QSqlQuery query("SELECT * FROM Users where ID='"+ID+"'");

    if (query.exec())
    {

    query.first();

    UserType = query.value("Profession").toString();
    first_name=query.value("first_name").toString();
    last_name=query.value("last_name").toString();
    age=query.value("Age").toInt();
    CIN=query.value("CIN").toInt();
    PhoneNumber=query.value("Phone_number").toInt();
    Adresse=query.value("Adresse").toString();
    mail=query.value("Email").toString();

    if (!UserType.isEmpty())
    {
         if (UserType.toLower()=="administrator")
            USER=ADMINISTRATOR;
        else if (UserType.toLower()=="student")
            USER=STUDENT;
        else if (UserType.toLower()=="teacher")
            USER=TEACHER;
        else if (UserType.toLower()=="none")
            USER=NONE;
        else if (UserType.toLower()=="postoffice")
            USER=POSTOFFICE;
         else if (UserType.toUpper()=="FINANCIALAGENT")
            USER=FINANCIALAGENT;

         qApp->setProperty("USER_TYPE",USER);
         qApp->setProperty("USER_ID",ID);
      }
}
}

bool User::validate_user()
{

    if (ID.isEmpty() && Password.isEmpty())
        return false;

    QString UserType;
    bool FoundStat=false;
    QSqlQuery query;
    query.prepare("SELECT profession FROM Users where (ID='"+ID+"' AND password='"+Password+"')");
    if (query.exec())
    {
        query.first();
        UserType = query.value("Profession").toString();
        if (!UserType.isEmpty())
        {
            FoundStat= true;
            if (UserType.toLower()=="administrator")
                USER=ADMINISTRATOR;
            else if (UserType.toLower()=="student")
                USER=STUDENT;
            else if (UserType.toLower()=="teacher")
                USER=TEACHER;
            else if (UserType.toLower()=="none")
                USER=NONE;
            else if (UserType.toLower()=="postoffice")
                USER=POSTOFFICE;
            else if (UserType.toUpper()=="FINANCIALAGENT")
               USER=FINANCIALAGENT;

            qApp->setProperty("USER_TYPE",USER);
          }
        }
    else
    QMessageBox::warning(NULL,"Error","Could not open database ",QMessageBox::Ok);

    return  FoundStat;
}

bool User::validate_password(QString Password)
{
    QSqlQuery query;
    query.prepare("Select password from Users where id='"+qApp->property("USER_ID").toString()+"'");
    if (query.exec())
    {
        query.first();
        QString UserPassword=query.value("password").toString();
        if (UserPassword==Password)
            return true;
    }
    return false;
}

QString User::get_ID()
{
    return ID;
}

QString User::get_Password()
{
    return Password;
}

USER_TYPE User::get_USERTYPE()
{
    return USER;
}

QString User::get_first_name()
{
return first_name;
}

QString User::get_last_name()
{
return last_name;
}

QString User::get_Adresse()
{
return Adresse;
}

int User::get_age()
{
return age;
}

int User::get_Cin()
{
return CIN;
}

int User::get_phoneNumber()
{
    return PhoneNumber;
}

QString User::get_mail()
{
    return mail;
}

void User::SetID(QString ID)
{
 this->ID=ID;
    qApp->setProperty("USER_ID",ID);
}

void User::SetPassword(QString Password)
{
    this->Password=Password;
}

void User::UpdatePasswordToDatabase(QString Password)
{

    QSqlQuery query;
    query.prepare("UPDATE USERS set password='"+Password+"' where password='"+this->Password+"'");
    if (query.exec())
    SetPassword(Password);

}

void User::UpdateIDToDatabase(QString ID)
{
    QSqlQuery query;
    query.prepare("UPDATE USERS set id='"+ID+"' where ID='"+this->ID+"'");
    if (query.exec())
    SetID(ID);
}


