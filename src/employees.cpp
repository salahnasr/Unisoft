#include "headers/employees.h"
#include"QDebug"
employees::employees(int id, QString namelastname, int age,int salary, QString grade_level,QString diplomes)
{
    this->id= id;
    this->namelastname=namelastname;
    this-> age= age;
     this-> salary= salary;
     this->  grade_level=  grade_level;
     this-> diplomes= diplomes;


}
bool employees::ajoutemployees(employees *emp)
{
    QSqlQuery query;
    QString str= "insert into emp(id,namelastname,age,salary,occupation,diplomes) values("+ QString::number(emp->getid())+",'"+emp->getnamelastname()+"',"+QString::number(emp->getage())+","+QString::number(emp->getsalary())+",'"+emp->getgrade_level()+"','"+emp->getdiplomes()+"')";
    /*employees.rechercheremployees(emp->getid());*/

     if (query.exec(str))
     {
    return true;}
     else
     {qDebug()<<query.lastError().text();
         return false;}

}
QSqlQueryModel * employees::afficheremployees()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from emp");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("namelastname"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("salary"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("grade_level"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("diplomes"));
    return model;
}
QSqlQueryModel * employees::rechercheremployees(int id)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString str="select * from emp where id ="+QString::number(id);
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("namelastname"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("salary"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("grade_level"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("diplomes"));
    return model;

}
bool employees::supprimeremployees(int id)
{
    QSqlQuery query;
    QString str="delete from emp where id ="+QString::number(id);

    bool res = query.exec(str);
    return res;

}

void employees::edit_employees(QString ID, QString Name, QString AGE, QString GL, QString DP, QString salaire,QString last)
{
    QSqlQuery query;
    query.prepare("UPDATE emp SET id='"+ID+"',namelastname='"+Name+"',age='"+AGE+"',salary='"+salaire+"',grade_level='"+GL+"',diplomes='"+DP+"' WHERE ID='"+last+"'");

    query.exec();
}
