#ifndef USER_H
#define USER_H
#include "Prototype.h"

class User
{

public:

    User();
    User(QString ID);
    User(QString Password,QString ID);
    bool validate_user();
   static bool validate_password(QString Password);
    USER_TYPE get_USERTYPE();
    QString get_ID();
    QString get_Password();
    QString get_first_name();
    QString get_last_name();
    QString get_Adresse();
    int get_age();
    int get_Cin();
    int get_phoneNumber();
    QString get_mail();
    void SetID(QString ID);
    void SetPassword(QString Password);
    void UpdatePasswordToDatabase(QString Password);
    void UpdateIDToDatabase(QString ID);
protected:
   QString Password;
   QString ID;
   USER_TYPE USER;
   QString first_name;
   QString last_name;
   int age;
   int CIN;
   int PhoneNumber;
   QString Adresse;
   QString mail;

};



#endif // USER_H
