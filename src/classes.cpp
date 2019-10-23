#include "headers/classes.h"

Classes::Classes()
{
}

QStringList Classes::GetLevelList()
{
    QSqlQuery query;
    QStringList level_list;
    query.prepare("select distinct level from classes order by level asc");
    if(query.exec())
    {
        while (query.next())
        {
            level_list<<query.value(0).toString();
        }
    }
    return level_list;
}

QStringList Classes::GetSpecialityList(int level)
{
    QSqlQuery query;
    QStringList Speciality_list;
    query.prepare("Select distinct Speciality from classes where level="+QString::number(level));
    if(query.exec())
    {
        while (query.next())
        {
            Speciality_list<<query.value(0).toString();
        }
    }
return Speciality_list;
}

QStringList Classes::GetClassList(int level, QString Speciality)
{
    QSqlQuery query;
    QStringList Class_list;
    query.prepare("Select distinct name from classes where level="+QString::number(level)+" and Speciality ='"+Speciality+"'order by name asc");
    if(query.exec())
    {
        while (query.next())
        {
            Class_list<<query.value(0).toString();
        }
    }
    return Class_list;
}

QString Classes::GetClassRoom(QString class_name)
{
 QSqlQuery query;
 query.prepare("SELECT classroom from classes where name ='"+class_name+"'");
 if (query.exec())
 {
     query.first();
     return query.value("classroom").toString();
 }
 return "";
}

QStringList Classes::GetClassesList()
{
    QSqlQuery query;
    QStringList Class_list;
    query.prepare("Select distinct name from classes order by name asc");
    if(query.exec())
    {
        while (query.next())
        {
            Class_list<<query.value(0).toString();
        }
    }
    return Class_list;
}

void Classes::AddClass(int level, QString Speciality,QString Classroom)
{
    QSqlQuery item_number_query;
    QSqlQuery query;
    QString class_name;
    int item_number=-1;

    item_number_query.prepare("select count(name) from classes where level="+QString::number(level)+" and speciality='"+
                              Speciality+"'");

    if(item_number_query.exec())
    {
        item_number_query.first();
        item_number=item_number_query.value(0).toInt()+1;
    }

if (item_number!=-1)
    {
     class_name=QString::number(level)+Speciality+QString::number(item_number);
     query.prepare("Insert into classes (name,level,speciality,classroom) values ('"+class_name+"',"+
                   QString::number(level)+",'"+Speciality+"','"+Classroom+"')");
     query.exec();

    }

}

void Classes::DeleteClass(QString Class_name)
{
QSqlQuery query;
query.prepare("delete from classes where name='"+Class_name+"'");
query.exec();
}
