#ifndef MANAGE_MAINTENANCE_H
#define MANAGE_MAINTENANCE_H

#include"headers/Prototype.h"
#include "headers/Prototype.h"



class products
{
public:
    products();
    static void add_products(QString Name,QString ID,QString Status,QString TO_DO,QString Ressource_type);
    static void edit_products(QString Name, QString ID, QString Status, QString TO_DO, QString Ressource_type,QString azerty);
    static void remov_products(QString Name);
    static int verifier(QString ID);
private:
};


#endif // MANAGE_MAINTENANCE_H
