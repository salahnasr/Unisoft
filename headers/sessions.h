#ifndef SESSIONS_H
#define SESSIONS_H

#include "headers/Prototype.h"
class sessions
{
public:
    sessions();
    ~sessions();
    sessions(QString name,QString class_name);
    QSqlQueryModel *model();
    bool DeleteSession(QString session_name);
   static bool AddSession(QString name, QString class_name);
   static QString Getclass_name(QString name);
   static bool VerifySession(QString name);
   static QStringList GetSessionsList(QString class_name);
   static QStringList GetSessionsList();
   static QStringList GetclassList(QString session_name);
   static bool VerifSessionExistance(QString name,QString class_name);
private:
    QString name;
    QString class_name;
    QSqlQueryModel *Model;

};

#endif // SESSIONS_H
