#include "headers/time_table_widget.h"
#include "ui_time_table_widget.h"

Time_table_widget::Time_table_widget(QString Class, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Time_table_widget)
{
    ui->setupUi(this);
     monday_session1=0;
     monday_session2=0;
     monday_session3=0;
     monday_session4=0;
     tuesday_session1=0;
     tuesday_session2=0;
     tuesday_session3=0;
     tuesday_session4=0;
     wedensday_session1=0;
     wedensday_session2=0;
     wedensday_session3=0;
     wedensday_session4=0;
     thursday_session1=0;
     thursday_session2=0;
     thursday_session3=0;
     thursday_session4=0;
     friday_session1=0;
     friday_session2=0;
     friday_session3=0;
     friday_session4=0;
     saturday_session1=0;
     saturday_session2=0;
     saturday_session3=0;
     saturday_session4=0;
    ui->label_class->setText(Class);
    ui->tableWidget_timetable->setColumnWidth(1,40);
    ui->tableWidget_timetable->setColumnWidth(3,150);
    ui->tableWidget_timetable->setColumnWidth(5,40);


}

Time_table_widget::~Time_table_widget()
{

    delete monday_session1;
    delete monday_session2;
    delete monday_session3;
    delete monday_session4;
    delete tuesday_session1;
    delete tuesday_session2;
    delete tuesday_session3;
    delete tuesday_session4;
    delete wedensday_session1;
    delete wedensday_session2;
    delete wedensday_session3;
    delete wedensday_session4;
    delete thursday_session1;
    delete thursday_session2;
    delete thursday_session3;
    delete thursday_session4;
    delete friday_session1;
    delete friday_session2;
    delete friday_session3;
    delete friday_session4;
    delete saturday_session1;
    delete saturday_session2;
    delete saturday_session3;
    delete saturday_session4;
    delete ui;
}

void Time_table_widget::SetClassText(QString Class)
{
    ui->label_class->setText(Class);
}

void Time_table_widget::genereteTable(QString Class)
{
    QSqlQuery query;

    query.prepare("Select * From timetable where Class_name='"+Class+"'");
    if (query.exec())
    {

        query.first();
       monday_session1=new QTableWidgetItem(query.value("Monday_session1").toString());
       monday_session2=new QTableWidgetItem(query.value("Monday_session2").toString());
          monday_session3=new QTableWidgetItem(query.value("Monday_session3").toString());
          monday_session4=new QTableWidgetItem(query.value("Monday_session4").toString());
          tuesday_session1=new QTableWidgetItem(query.value("Tuesday_session1").toString());
          tuesday_session2=new QTableWidgetItem(query.value("Tuesday_session2").toString());
          tuesday_session3=new QTableWidgetItem(query.value("Tuesday_session3").toString());
          tuesday_session4=new QTableWidgetItem(query.value("Tuesday_session4").toString());
          wedensday_session1=new QTableWidgetItem(query.value("Wedensday_session1").toString());
          wedensday_session2=new QTableWidgetItem(query.value("Wedensday_session2").toString());
          wedensday_session3=new QTableWidgetItem(query.value("Wedensday_session3").toString());
          wedensday_session4=new QTableWidgetItem(query.value("Wedensday_session4").toString());
          thursday_session1=new QTableWidgetItem(query.value("Thursday_session1").toString());
          thursday_session2=new QTableWidgetItem(query.value("Thursday_session2").toString());
          thursday_session3=new QTableWidgetItem(query.value("Thursday_session3").toString());
          thursday_session4=new QTableWidgetItem(query.value("Thursday_session4").toString());
          friday_session1=new QTableWidgetItem(query.value("Friday_session1").toString());
          friday_session2=new QTableWidgetItem(query.value("Friday_session2").toString());
          friday_session3=new QTableWidgetItem(query.value("Friday_session3").toString());
          friday_session4=new QTableWidgetItem(query.value("Friday_session4").toString());
          saturday_session1=new QTableWidgetItem(query.value("Saturday_session1").toString());
          saturday_session2=new QTableWidgetItem(query.value("Saturday_session2").toString());
          saturday_session3=new QTableWidgetItem(query.value("Saturday_session3").toString());
          saturday_session4=new QTableWidgetItem(query.value("Saturday_session4").toString());

    ui->tableWidget_timetable->setItem(0,0,monday_session1);
    ui->tableWidget_timetable->setItem(0,2,monday_session2);
    ui->tableWidget_timetable->setItem(0,4,monday_session3);
    ui->tableWidget_timetable->setItem(0,6,monday_session4);
    ui->tableWidget_timetable->setItem(1,0,tuesday_session1);
    ui->tableWidget_timetable->setItem(1,2,tuesday_session2);
    ui->tableWidget_timetable->setItem(1,4,tuesday_session3);
    ui->tableWidget_timetable->setItem(1,6,tuesday_session4);
    ui->tableWidget_timetable->setItem(2,0,wedensday_session1);
    ui->tableWidget_timetable->setItem(2,2,wedensday_session2);
    ui->tableWidget_timetable->setItem(2,4,wedensday_session3);
    ui->tableWidget_timetable->setItem(2,6,wedensday_session4);
    ui->tableWidget_timetable->setItem(3,0,thursday_session1);
    ui->tableWidget_timetable->setItem(3,2,thursday_session2);
    ui->tableWidget_timetable->setItem(3,4,thursday_session3);
    ui->tableWidget_timetable->setItem(3,6,thursday_session4);
    ui->tableWidget_timetable->setItem(4,0,friday_session1);
    ui->tableWidget_timetable->setItem(4,2,friday_session2);
    ui->tableWidget_timetable->setItem(4,4,friday_session3);
    ui->tableWidget_timetable->setItem(4,6,friday_session4);
    ui->tableWidget_timetable->setItem(5,0,saturday_session1);
    ui->tableWidget_timetable->setItem(5,2,saturday_session2);
    ui->tableWidget_timetable->setItem(5,4,saturday_session3);
    ui->tableWidget_timetable->setItem(5,6,saturday_session4);
    }
}

void Time_table_widget::updateTimeTable()
{
    emit TimeTableChangeSaved();
}

void Time_table_widget::SaveIntoDatabase(QString Class_name)
{

    for (int i=0;i<6;i++)
    {
        for (int j=0;j<7;j+=2)
        {
            if (!sessions::VerifySession(ui->tableWidget_timetable->item(i,j)->text()))
            {
            QMessageBox::warning(NULL,"Error",ui->tableWidget_timetable->item(i,j)->text()+"is not a valid session .\n Operation aborted !",QMessageBox::Ok);
            return;
            }
        }
    }

    QStringList Sessions;

    for ( int i=0;i<6;i++)
    {
        for ( int j=0;j<7;j+=2)
            Sessions.push_back(ui->tableWidget_timetable->item(i,j)->text());
    }

    QSqlQuery query;
    QString query_timetable="INSERT OR REPLACE into timetable values ('"+Class_name+"','";
    int i;
    for ( i=0;i<23;i++)
    query_timetable+=Sessions.at(i)+"','";
    query_timetable+=Sessions.at(i)+"')";
    query.prepare(query_timetable);
    query.exec();
}
