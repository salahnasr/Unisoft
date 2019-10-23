#ifndef EMPLOYEES_H
#define EMPLOYEES_H
#include"headers/Prototype.h"
class employees
{

protected:
    int  id ;
    QString namelastname;
    int salary ;
    int age ;
    QString grade_level;
    QString diplomes ;

public:
    employees(){}


    employees(int id, QString namelastname,int age ,int salary, QString grade_level,QString diplomes );
    int getid(){return id;};
    QString getnamelastname(){return namelastname;} ;
    int getage () {return age;};
    int getsalary(){return salary;};
QString getgrade_level(){return grade_level;};
QString getdiplomes(){return diplomes;};
static void edit_employees(QString ID,QString Name,QString AGE,QString GL,QString DP,QString salaire,QString last);

    bool ajoutemployees(employees *emp);
    virtual QSqlQueryModel * afficheremployees();
    QSqlQueryModel * rechercheremployees(int id);
    bool supprimeremployees(int id);





};

#endif // COMPTE_H
