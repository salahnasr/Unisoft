#include "headers/financial_management.h"
#include "headers/home.h"
#include "ui_financial_management.h"
#include<QTreeWidget>
Financial_management::Financial_management(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Financial_management)
{
    finantial_model=0;
    ui->setupUi(this);
    on_lineEdit_textEdited("");
}

Financial_management::~Financial_management()
{
    delete finantial_model;
    delete ui;
}

void Financial_management::on_cancel_clicked()
{
    this->reject();
}
void Financial_management::on_manage_clicked()
{

    Students_Dialog = new Student_management(this);
    Students_Dialog->exec();
}

void Financial_management::on_refresh_clicked()
{int i=0,j=0;
            QSqlQuery query;
            query.prepare("SELECT users.*,students.* from users inner join students where users.ID=Students.ID");
            query.exec();

            while (query.next())
               { if (i==0)
                {
                    query.first();
                    for(j=0;j<=colorCount();j++)
                    {
                        delete ui->treeWidget->takeTopLevelItem(0);
                    }
                }
                i++;
                QTreeWidgetItem *tempItem = new QTreeWidgetItem(ui->treeWidget);
                QString Phone_number = query.value("Phone_number").toString();
                tempItem->setText(3,Phone_number);
                QString name = query.value("Last_name").toString();
                tempItem->setText(1,name);
                QString Adresse = query.value("Adresse").toString();
                tempItem->setText(5,Adresse);
                QString CIN = query.value("CIN").toString();
                tempItem->setText(2,CIN);
                QString Age = query.value("Age").toString();
                tempItem->setText(4,Age);
                QString ID = query.value("ID").toString();
                tempItem->setText(6,ID);
                QString Profession = query.value("Profession").toString();
                tempItem->setText(7,Profession);
                QString Password = query.value("Password").toString();
                tempItem->setText(8,"****");
                QString First_name = query.value("First_name").toString();
                tempItem->setText(0,First_name);
                QString Classes=query.value("Class").toString();
                tempItem->setText(9,Classes);
                QString email=query.value("Email").toString();
                tempItem->setText(10,email);
                QString Fees=query.value("Paid").toString();
                tempItem->setText(11,Fees);

                ui->treeWidget->insertTopLevelItem(0,tempItem);
            }
}

void Financial_management::on_pushButton_clicked()
{
}

void Financial_management::on_refresh_3_clicked()
{
    int i=0,j=0;
                QSqlQuery query;
                query.prepare("SELECT Email,Phone_number,Last_name,Adresse,CIN,Age,ID,Profession,First_name,Password from users");
                //query.prepare("select users.*,students.* from users inner join students where users.ID=students.ID");
                query.exec();

                while (query.next())
                {
                    if (i==0)
                    {
                        query.first();
                        for(j=0;j<=colorCount();j++)
                        {
                            delete ui->treeWidget_4->takeTopLevelItem(0);
                        }
                    }
                    i++;
                    QTreeWidgetItem *tempItem = new QTreeWidgetItem(ui->treeWidget_4);
                    QString Phone_number = query.value("Phone_number").toString();
                    tempItem->setText(3,Phone_number);
                    QString name = query.value("Last_name").toString();
                    tempItem->setText(1,name);
                    QString Adresse = query.value("Adresse").toString();
                    tempItem->setText(5,Adresse);
                    QString CIN = query.value("CIN").toString();
                    tempItem->setText(2,CIN);
                    QString Age = query.value("Age").toString();
                    tempItem->setText(4,Age);
                    QString ID = query.value("ID").toString();
                    tempItem->setText(6,ID);
                    QString Profession = query.value("Profession").toString();
                    tempItem->setText(7,Profession);
                    QString Password = query.value("Password").toString();
                    tempItem->setText(8,"****");
                    QString First_name = query.value("First_name").toString();
                    tempItem->setText(0,First_name);
                    QString email=query.value("Email").toString();
                    tempItem->setText(9,email);
                    ui->treeWidget_4->insertTopLevelItem(0,tempItem);
                }
}

void Financial_management::on_lineEdit_textEdited(const QString &valor)
{
       ui->pushButton->setDisabled(true);
       bool Email=ui->EMAIL->isChecked();
       bool Age=ui->AGE->isChecked();
       bool ID=ui->ID->isChecked();
       bool Profession=ui->PF->isChecked();
       bool Phone_n=ui->PN->isChecked();
       bool Cin_checked=ui->CIN->isChecked();
       bool FirstN_checked=ui->FN->isChecked();
       bool lastN_checked=ui->LN->isChecked();

   QString query="select first_name,CIN,last_name,Email,Phone_number,Age,ID,Profession from users WHERE ";


       if (!valor.isEmpty())
       {
           if (!Cin_checked  && !FirstN_checked && !lastN_checked && !Email && !Age && !ID && !Phone_n && !Profession )
           {
                  query+="First_name Like '%"+valor+"%' OR Last_name like '%"+valor+"%' OR CIN Like '%"+valor+"%' OR Email Like '%"+valor+"%' OR Phone_number Like '%"+valor+"%' OR Age Like '%"+valor+"%' OR ID Like '%"+valor+"%' OR Profession Like '%"+valor+"%'";
           }
           if (Cin_checked)
           {
               query+="CIN Like '%"+valor+"%'";
           }

           if (FirstN_checked)
               {
                   query+="First_name Like '%"+valor+"%'";
               }
           if (Phone_n)
           {
               query+="Phone_number Like '%"+valor+"%'";
           }
           if (Email)
           {
               query+="Email Like '%"+valor+"%'";
           }
           if (Age)
           {
               query+="Age Like '%"+valor+"%'";
           }
           if (ID)
           {
               query+="ID Like '%"+valor+"%'";
           }
           if (Profession)
           {
               query+="Profession Like '%"+valor+"%'";
           }
           if (lastN_checked)
           {
                   query+="Last_name like '%"+valor+"%'";
           }
           ui->pushButton->setDisabled(false);

               finantial_model = new QSqlQueryModel();
               finantial_model->setQuery(query);
               ui->tableView->setModel(finantial_model);

       }

}

void Financial_management::on_refresh_2_clicked()
{
    int i=0,j=0;

                QSqlQuery query;
                query.prepare("select users.*,teachers.* from users inner join teachers where users.ID=teachers.ID");

                query.exec();
                while (query.next())
                {
                    if (i==0)
                    {
                        query.first();
                        for(j=0;j<=colorCount();j++)
                        {
                            delete ui->treeWidget_3->takeTopLevelItem(0);
                        }
                    }
                    i++;
                    QTreeWidgetItem *tempItem = new QTreeWidgetItem(ui->treeWidget_3);
                    QString Phone_number = query.value("Phone_number").toString();
                    tempItem->setText(3,Phone_number);
                    QString name = query.value("Last_name").toString();
                    tempItem->setText(1,name);
                    QString Adresse = query.value("Adresse").toString();
                    tempItem->setText(5,Adresse);
                    QString CIN = query.value("CIN").toString();
                    tempItem->setText(2,CIN);
                    QString Age = query.value("Age").toString();
                    tempItem->setText(4,Age);
                    QString ID = query.value("ID").toString();
                    tempItem->setText(6,ID);
                    QString Profession = query.value("Profession").toString();
                    tempItem->setText(7,Profession);
                    QString Password = query.value("Password").toString();
                    tempItem->setText(8,"****");
                    QString First_name = query.value("First_name").toString();
                    tempItem->setText(0,First_name);
                    QString email=query.value("Email").toString();
                    tempItem->setText(9,email);
                    QString Salary=query.value("Salary").toString();
                    tempItem->setText(10,Salary);
                    QString session=query.value("Session").toString();
                    tempItem->setText(11,session);
                    ui->treeWidget_3->insertTopLevelItem(0,tempItem);
                }

}
