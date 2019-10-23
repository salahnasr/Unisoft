#ifndef CLASSES_H
#define CLASSES_H

#include "headers/Prototype.h"

class Classes
{
public:
    Classes();
    static QStringList GetLevelList();
    static QStringList GetSpecialityList(int level);
    static QStringList GetClassList(int level,QString Speciality);
    static QString GetClassRoom(QString class_name);
    static QStringList GetClassesList();
    void AddClass(int level, QString Speciality, QString Classroom);
    void DeleteClass(QString Class_name);
};

#endif // CLASSES_H
