#include"headers/products.h"

products::products()
{

}


void products::add_products(QString Name,QString ID,QString Status,QString TO_DO,QString Ressource_type)
{
    QSqlQuery query;

    query.prepare(" INSERT INTO Maintenance (ID,Name,Status,TO_DO,Ressource_type) VALUES ('" + ID + "','" + Name + "','" + Status +"','" + TO_DO + "','"+ Ressource_type +"') ");
    query.exec();

}
int products::verifier(QString ID)
{int i=0;
    QSqlQuery query;
    query.prepare("select ID from Maintenance");
    query.exec();
    while (query.next())
    {
        QString zh=query.value("ID").toString();
        if (zh==ID)
        {
            i=1;
            return (i);
        }

    }
    return(i);
}

void products::edit_products(QString Name, QString ID, QString Status, QString TO_DO, QString Ressource_type, QString azerty)

    {
        QSqlQuery query;
        query.prepare("UPDATE Maintenance SET ID='"+ID+"',Name='"+Name+"',Status='"+Status+"',TO_DO='"+TO_DO+"',Ressource_type='"+Ressource_type+"' WHERE ID='"+azerty+"'");

        query.exec();
    }



void products::remov_products(QString Name)
{

    QSqlQuery query;
    query.prepare("DELETE FROM Maintenance where ID='"+Name+"'");
    query.exec();
}
