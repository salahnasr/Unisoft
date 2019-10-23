#include <QFileDialog>
#include <QMessageBox>
#include <QTextDocument>
#include "headers/qcpdocumentobject.h"
#include <QtSql/QtSql>
#include "headers/statistics.h"
#include "ui_statistics.h"
#include "headers/statisticsdrawer.h"
#include "headers/qcustomplot.h"

StatisticsDrawer *Stats;
bool States1[] = {false,false,false,false,false,false};
bool States2[] = {false,false,false,false,false,false};
QVector<double> EmptyVector;
QTextEdit *textEdit;


Statistics::Statistics(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Statistics)
{
    ui->setupUi(this);
    Stats = new StatisticsDrawer(ui->customPlot,ui->customPlot_2);

    textEdit = new QTextEdit();
    QCPDocumentObject *interfac = new  QCPDocumentObject(this);
   textEdit->document()->documentLayout()->registerHandler(QCPDocumentObject::PlotTextFormat, interfac);
}

Statistics::~Statistics()
{
    delete ui;
}

void Statistics::on_pushButton_clicked()//Students
{
    if((!States1[Students] && ui->radioButton->isChecked()) || (!States2[Students] && ui->radioButton_2->isChecked())){
        int studCount[5];
        for(int i = 0; i<5; i++){

            QSqlQuery query = QSqlQuery();
            if( query.exec("SELECT * FROM Students WHERE Class Like '" + QString::number(i+1) + "%';")){
                studCount[i] = 0;
                while(query.next()){
                    studCount[i] ++;
                }
                query.clear();
            }
            else
            {
               QMessageBox::critical(NULL, "Error",query.lastError().text());
               return;
            }
        }

        QVector<double> x(11), y(11);

        x[0]=0;
        x[1]=1;
        x[2]=1.001;
        x[3]=2;
        x[4]=2.001;
        x[5]=3;
        x[6]=3.001;
        x[7]=4;
        x[8]=4.001;
        x[9]=5;
        x[10]=5.001;

        y[0]=studCount[0];
        y[1]=studCount[0];
        y[2]=studCount[1];
        y[3]=studCount[1];
        y[4]=studCount[2];
        y[5]=studCount[2];
        y[6]=studCount[3];
        y[7]=studCount[3];
        y[8]=studCount[4];
        y[9]=studCount[4];
        y[10]=0;


        Stats->SetData(Students,x,y,ui->radioButton->isChecked());
    }
    else
    {
        Stats->SetData(Students,EmptyVector,EmptyVector,ui->radioButton->isChecked());
    }
    if(ui->radioButton->isChecked()){
        States1[Students] = !States1[Students];
    }
    else
    {
        States2[Students] = !States2[Students];
    }
}

void Statistics::on_pushButton_2_clicked()//Teachers
{
    if((!States1[Teachers] && ui->radioButton->isChecked()) || (!States2[Teachers] && ui->radioButton_2->isChecked())){
        QVector<QString> Matieres;
        QVector<double> salaries;
        QSqlQuery query = QSqlQuery();
        if(query.exec("SELECT Distinct Session FROM teachers;")){
            while(query.next()){
                Matieres.push_back(query.value(0).toString());

            }
        }
        else
        {
           QMessageBox::critical(NULL, "Error",query.lastError().text());
           return;
        }
        for (int i=0; i<Matieres.size();i++){
            query.clear();
            if(query.exec("SELECT avg(salary) FROM teachers WHERE Session = '" + Matieres[i] + "';")){
                while(query.next()){
                    salaries.push_back(query.value(0).toDouble());
                }
            }
            else
            {
               QMessageBox::critical(NULL, "Error",query.lastError().text());
               return;
            }
        }
        salaries.push_back(0);
        QVector<double> x(salaries.size());

        for (int i=0; i<x.size(); i++){
            x[i] = i;
        }
        Stats->SetData(Teachers,x,salaries,ui->radioButton->isChecked());
    }
    else
    {
        Stats->SetData(Teachers,EmptyVector,EmptyVector,ui->radioButton->isChecked());
    }
    if(ui->radioButton->isChecked()){
        States1[Teachers] = !States1[Teachers];
    }
    else
    {
        States2[Teachers] = !States2[Teachers];
    }

}

void Statistics::on_pushButton_3_clicked()//Incomes
{
    if((!States1[Incomes] && ui->radioButton->isChecked()) || (!States2[Incomes] && ui->radioButton_2->isChecked())){
        QVector<double> x, y; // initialize with entries 0..100
        QSqlQuery query = QSqlQuery();
        x.push_back(0);
        x.push_back(0.0005);
        x.push_back(0.001);
        x.push_back(1);
        y.push_back(0);
        if(query.exec("SELECT total(Salary) FROM teachers;")){
            while(query.next()){
                y.push_back(query.value(0).toDouble());
            }
        }
        else
        {
           QMessageBox::critical(NULL, "Error",query.lastError().text());
           return;
        }
        query.clear();
        if(query.exec("SELECT total(Paid) FROM students;")){
            while(query.next()){
                y.push_back(query.value(0).toDouble());
                y.push_back(query.value(0).toDouble());
            }
        }
        else
        {
           QMessageBox::critical(NULL, "Error",query.lastError().text());
           return;
        }

        Stats->SetData(Incomes,x,y,ui->radioButton->isChecked());
    }
    else
    {
        Stats->SetData(Incomes,EmptyVector,EmptyVector,ui->radioButton->isChecked());
    }
    if(ui->radioButton->isChecked()){
        States1[Incomes] = !States1[Incomes];
    }
    else
    {
        States2[Incomes] = !States2[Incomes];
    }

}

void Statistics::on_pushButton_4_clicked()//Outcomes
{
    if((!States1[Outcomes] && ui->radioButton->isChecked()) || (!States2[Outcomes] && ui->radioButton_2->isChecked())){
        QVector<double> x, y; // initialize with entries 0..100
        QSqlQuery query = QSqlQuery();
        x.push_back(0);
        x.push_back(0.0005);
        x.push_back(0.001);
        x.push_back(1);
        y.push_back(0);
        if(query.exec("SELECT total(Paid) FROM students;")){
            while(query.next()){
                y.push_back(query.value(0).toDouble());
            }
        }
        else
        {
           QMessageBox::critical(NULL, "Error",query.lastError().text());
           return;
        }
        query.clear();
        if(query.exec("SELECT total(Salary) FROM teachers;")){
            while(query.next()){
                y.push_back(query.value(0).toDouble());
                y.push_back(query.value(0).toDouble());
            }
        }
        else
        {
           QMessageBox::critical(NULL, "Error",query.lastError().text());
           return;
        }

        Stats->SetData(Outcomes,x,y,ui->radioButton->isChecked());
    }
    else
    {
        Stats->SetData(Outcomes,EmptyVector,EmptyVector,ui->radioButton->isChecked());
    }
    if(ui->radioButton->isChecked()){
        States1[Outcomes] = !States1[Outcomes];
    }
    else
    {
        States2[Outcomes] = !States2[Outcomes];
    }

}

void Statistics::on_pushButton_6_clicked()//Materials
{
    if((!States1[Materials] && ui->radioButton->isChecked()) || (!States2[Materials] && ui->radioButton_2->isChecked())){
        int fixed=0,broken=0;
        QSqlQuery query = QSqlQuery();
        if(query.exec("SELECT * FROM Maintenance WHERE Status = 'Fixed';")){
            while(query.next()){
                fixed++;
            }
        }
        else
        {
           QMessageBox::critical(NULL, "Error",query.lastError().text());
           return;
        }
        if(query.exec("SELECT * FROM Maintenance WHERE Status = 'Broken';")){
            while(query.next()){
                broken++;
            }
        }
        else
        {
           QMessageBox::critical(NULL, "Error",query.lastError().text());
           return;
        }
        QVector<double> x(11), y(11);

        x[0]=0;
        x[1]=0.001;
        x[2]=1;
        x[3]=1.001;
        x[4]=2;
        x[5]=2.001;
        x[6]=3;
        x[7]=3.001;
        x[8]=4;
        x[9]=4.001;
        x[10]=5;

        y[0]=0;
        y[1]=0;
        y[2]=0;
        y[3]=fixed;
        y[4]=fixed;
        y[5]=0;
        y[6]=0;
        y[7]=broken;
        y[8]=broken;
        y[9]=0;
        y[10]=0;
        Stats->SetData(Materials,x,y,ui->radioButton->isChecked());
    }
    else
    {
        Stats->SetData(Materials,EmptyVector,EmptyVector,ui->radioButton->isChecked());
    }
    if(ui->radioButton->isChecked()){
        States1[Materials] = !States1[Materials];
    }
    else
    {
        States2[Materials] = !States2[Materials];
    }

}

void Statistics::on_pushButton_5_clicked()//Employees
{
    if((!States1[Employees] && ui->radioButton->isChecked()) || (!States2[Employees] && ui->radioButton_2->isChecked())){
        QVector<double> x, y; // initialize with entries 0..100
        QSqlQuery query = QSqlQuery();
        if(query.exec("SELECT Age, Salary FROM Employees;")){
            while(query.next()){
                x.push_back(query.value(0).toDouble());
                y.push_back(query.value(1).toDouble());
            }
        }
        else
        {
           QMessageBox::critical(NULL, "Error",query.lastError().text());
           return;
        }

        Stats->SetData(Employees,x,y,ui->radioButton->isChecked());
    }
    else
    {
        Stats->SetData(Employees,EmptyVector,EmptyVector,ui->radioButton->isChecked());
    }
    if(ui->radioButton->isChecked()){
        States1[Employees] = !States1[Employees];
    }
    else
    {
        States2[Employees] = !States2[Employees];
    }

}

void Statistics::on_pushButton_9_clicked()
{


    QString fileName = QFileDialog::getSaveFileName(this, "Export Report As...", qApp->applicationDirPath(), "PDF Files (*.pdf)");
    if (!fileName.isEmpty())
    {
      QPrinter printer;
      printer.setFullPage(true);
      printer.setPaperSize(QPrinter::A4);
      printer.setOrientation(QPrinter::Portrait);
      printer.setOutputFormat(QPrinter::PdfFormat);
      printer.setOutputFileName(fileName);

      textEdit->clear();
      textEdit->setFontPointSize(24);
      textEdit->setTextColor(QColor("red"));
      textEdit->setAlignment(Qt::AlignCenter);
      textEdit->textCursor().insertText(QString("Esprit-RP Analysis Report\n\n"));
      textEdit->textCursor().insertText(QString(QChar::ObjectReplacementCharacter), QCPDocumentObject::generatePlotFormat(ui->customPlot, 0, 0));
      textEdit->textCursor().insertText(QString(QChar::ObjectReplacementCharacter), QCPDocumentObject::generatePlotFormat(ui->customPlot_2, 0, 0));
      textEdit->textCursor().insertText(QString("\n\n\n"));
      textEdit->setAlignment(Qt::AlignLeft);

      //Students
      int studCount[5];
      for(int i = 0; i<5; i++){
          QSqlQuery query = QSqlQuery();
          if( query.exec("SELECT * FROM Students WHERE Class Like '" + QString::number(i+1) + "%';")){
              studCount[i] = 0;
              while(query.next()){
                  studCount[i] ++;
              }
              query.clear();
          }
          else
          {
             QMessageBox::critical(NULL, "Error",query.lastError().text());
             return;
          }
      }

      textEdit->setTextColor(QColor("blue"));
      textEdit->setFontPointSize(18);
      textEdit->textCursor().insertText(QString("\nStudents report : \n"));
      textEdit->setTextColor(QColor("black"));
      textEdit->setFontPointSize(14);
      for(int i = 0; i<5; i++){
          textEdit->textCursor().insertText(QString("\tNumber of students of level ") + QString::number(i+1) +
                                                QString(" : ") + QString::number(studCount[i]) + QString(" Students.\n"));
      }
      //Teachers
      QVector<QString> Matieres;
      QVector<double> salaries;
      QSqlQuery query = QSqlQuery();
      if(query.exec("SELECT Distinct Session FROM teachers;")){
          while(query.next()){
              Matieres.push_back(query.value(0).toString());

          }
      }
      else
      {
         QMessageBox::critical(NULL, "Error",query.lastError().text());
         return;
      }
      for (int i=0; i<Matieres.size();i++){
          query.clear();
          if(query.exec("SELECT avg(salary) FROM teachers WHERE Session = '" + Matieres[i] + "';")){
              while(query.next()){
                  salaries.push_back(query.value(0).toDouble());
              }
          }
          else
          {
             QMessageBox::critical(NULL, "Error",query.lastError().text());
             return;
          }
      }
      textEdit->setTextColor(QColor("blue"));
      textEdit->setFontPointSize(18);
      textEdit->textCursor().insertText(QString("\nTeachers report : \n"));
      textEdit->setTextColor(QColor("black"));
      textEdit->setFontPointSize(14);
      for (int i=0; i<Matieres.size();i++){
          textEdit->textCursor().insertText(QString("\tAverage ") + Matieres[i] +  QString(" teachers salary : ") +
                                                QString::number(salaries[i]) + QString(" Dinars.\n"));

      }
      //Incomes
      double incomes;
      if(query.exec("SELECT total(Paid) FROM students;")){
          while(query.next()){
              incomes = query.value(0).toDouble();
          }
      }
      else
      {
         QMessageBox::critical(NULL, "Error",query.lastError().text());
         return;
      }
      textEdit->setTextColor(QColor("blue"));
      textEdit->setFontPointSize(18);
      textEdit->textCursor().insertText(QString("\nIncomes report : \n"));
      textEdit->setTextColor(QColor("black"));
      textEdit->setFontPointSize(14);
      textEdit->textCursor().insertText(QString("\tIncomes state is at the order of ") + QString::number(incomes) +
                                            QString(" Dinars.\n"));
      //Outcomes
      double outcomes;
      if(query.exec("SELECT total(salary) FROM Teachers;")){
          while(query.next()){
              outcomes = query.value(0).toDouble();
          }
      }
      else
      {
         QMessageBox::critical(NULL, "Error",query.lastError().text());
         return;
      }
      textEdit->setTextColor(QColor("blue"));
      textEdit->setFontPointSize(18);
      textEdit->textCursor().insertText(QString("\nOutcomes report : \n"));
      textEdit->setTextColor(QColor("black"));
      textEdit->setFontPointSize(14);
      textEdit->textCursor().insertText(QString("\tOutcomes state is at the order of ") + QString::number(outcomes) +
                                            QString(" Dinars.\n"));
      //Materials
      int fixed=0,broken=0;
      if(query.exec("SELECT * FROM Maintenance WHERE Status = 'Fixed';")){
          while(query.next()){
              fixed++;
          }
      }
      else
      {
         QMessageBox::critical(NULL, "Error",query.lastError().text());
         return;
      }
      if(query.exec("SELECT * FROM Maintenance WHERE Status = 'Broken';")){
          while(query.next()){
              broken++;
          }
      }
      else
      {
         QMessageBox::critical(NULL, "Error",query.lastError().text());
         return;
      }
      textEdit->setTextColor(QColor("blue"));
      textEdit->setFontPointSize(18);
      textEdit->textCursor().insertText(QString("\nMaterials report : \n"));
      textEdit->setTextColor(QColor("black"));
      textEdit->setFontPointSize(14);
      textEdit->textCursor().insertText(QString("\tNumber of Broken Material Elements : ") + QString::number(broken) + QString(".\n"));
      textEdit->textCursor().insertText(QString("\tNumber of Fixed Material Elements : ") + QString::number(fixed) + QString(".\n"));
      //Employees
      double below30=0, above30=0;
      if(query.exec("SELECT avg(Salary) FROM Employees WHERE Age<=30;")){
          while(query.next()){
              below30 = query.value(0).toDouble();
          }
      }
      else
      {
         QMessageBox::critical(NULL, "Error",query.lastError().text());
         //return;
      }
      if(query.exec("SELECT avg(Salary) FROM Employees WHERE Age>=30;")){
          while(query.next()){
              above30 = query.value(0).toDouble();
          }
      }
      else
      {
         QMessageBox::critical(NULL, "Error",query.lastError().text());
         //return;
      }
      textEdit->setTextColor(QColor("blue"));
      textEdit->setFontPointSize(18);
      textEdit->textCursor().insertText(QString("\nEmployees report : \n"));
      textEdit->setTextColor(QColor("black"));
      textEdit->setFontPointSize(14);
      textEdit->textCursor().insertText(QString("\tAverage salary of employees below the age of 30 : ") +
                                                    QString::number(below30) +  QString(" Dinars.\n"));
      textEdit->textCursor().insertText(QString("\tAverage salary of employees above the age of 30 : ") +
                                                    QString::number(above30) +  QString(" Dinars.\n"));


      textEdit->setFontPointSize(10);
      textEdit->setTextColor(QColor("red"));
      textEdit->setAlignment(Qt::AlignCenter);
      textEdit->setFontItalic(true);
      textEdit->textCursor().insertText(QString("\nThis document was auto generated by the Esprit-RP Analysis module.\n"));

      textEdit->document()->print(&printer);
      QMessageBox::information(NULL,"Exported.","File has been saved in " + fileName);
    }
}

