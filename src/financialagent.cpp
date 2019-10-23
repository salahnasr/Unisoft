#include "headers/financialagent.h"

FinancialAgent::FinancialAgent()
{
}

FinancialAgent::FinancialAgent(User Current_User)
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

void FinancialAgent::setStudentPaiment(Student Current_student)
{
    Current_student.UpdatePaymentStatus();
}
