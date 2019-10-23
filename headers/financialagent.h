#ifndef FINANCIALAGENT_H
#define FINANCIALAGENT_H

#include "headers/student.h"

class FinancialAgent : public User
{
public:
    FinancialAgent();
    FinancialAgent(User Current_User);
    static void setStudentPaiment(Student Current_student);
};

#endif // FINANCIALAGENT_H
