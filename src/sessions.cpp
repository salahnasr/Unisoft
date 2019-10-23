#include "headers/sessions.h"

sessions::sessions()
{
    Model=0;
    name="";
    class_name="";
}

sessions::~sessions()
{
    delete Model;
}

sessions::sessions(QString name, QString class_name)
{
    this->name=name;
    this->class_name=class_name;
}

QSqlQueryModel* sessions::model()
{
    Model=new QSqlQueryModel;
    QSqlQuery query;
    query.prepare("SELECT DISTINCT name from sessions");
    if(query.exec())
    {
        Model->setQuery(query);
    }
    return Model;
}

bool sessions::DeleteSession(QString session_name)
{
    QSqlQuery query;
    query.prepare("Delete from sessions where name='"+session_name+"'");
    return query.exec();
}

bool sessions::AddSession(QString name, QString class_name)
{
    if (VerifSessionExistance(name,class_name))
    {
    QSqlQuery query;
    query.prepare("INSERT INTO sessions (name,class_name) values ('"+name+"','"+class_name+"')");
     return query.exec();
    }
    else
        return false;
    }


QString sessions::Getclass_name(QString name)
{
    QSqlQuery query;
    query.prepare("select class_name from sessions where name='"+name+"'");
    query.exec();
    query.first();
        return query.value("class_name").toString();
}

bool sessions::VerifySession(QString name)
{
    QSqlQuery query;
 if (name.isEmpty())
     return true;
    query.prepare("select name from sessions where name='"+name+"'");
    query.exec();
    query.first();
    return !query.isNull(0);
}

QStringList sessions::GetSessionsList(QString class_name)
{
    QStringList sessionslist;
    QSqlQuery query;
    query.prepare("SELECT name from sessions where class_name='"+class_name+"'");
    if(query.exec())
    {
while(query.next())
    sessionslist << query.value("name").toString();
    }
    return sessionslist;
}

QStringList sessions::GetSessionsList()
{
    QStringList sessionslist;
    QSqlQuery query;
    query.prepare("SELECT DISTINCT name from sessions ");
    if(query.exec())
    {
while(query.next())
    sessionslist << query.value("name").toString();
    }
    return sessionslist;
}

QStringList sessions::GetclassList(QString session_name)
{
    QSqlQuery query;
    QStringList list;
    query.prepare("SELECT class_name FROM sessions where name='"+session_name+"'");
    query.exec();
    while (query.next())
    {
        list << query.value("class_name").toString();
    }
    return list;
}

bool sessions::VerifSessionExistance(QString name, QString class_name)
{
    QSqlQuery query;
    query.prepare("Select Name,class_name from sessions where Name='"+name+"' and class_name='"+class_name+"'");
    query.exec();
    query.first();
    if (query.value(0).toString().isEmpty() && query.value(1).toString().isEmpty())
        return true;
    else
        return false;
}
