#include "headers/mainwindow.h"
#include "ui_mainwindow.h"
#include "headers/employees.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->bankView->setModel(tmpemp.afficheremployees());

    ui->RechercheView->hide();
    emp = new QSqlQueryModel();
    emp->setQuery("SELECT id,namelastname,age,grade_level,diplomes,salary from emp");
    ui->listView->setModel(emp);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_ajoutPB_clicked()
{

        int id = ui->idLE->text().toInt();
        QString namelastname= ui->nameandlastnameLE->text();
       int age = ui->aLE->text().toInt();

       int salary = ui->salaryLE->text().toInt();
       QString grade_level = ui->grade_levelLE->text();
       QString diplomes = ui->diplomesLE->text();

        employees*emp = new employees(id,namelastname,age,salary,grade_level,diplomes);
        QSqlQueryModel *model =tmpemp.rechercheremployees(id);
        int ribRech = model->data(model->index(0, 0)).toInt();
        if(id == ribRech)
        {
            QMessageBox::critical(0, qApp->tr("Recherche"),
                qApp->tr("Already existe"), QMessageBox::Ok);
        }
        else
        {
        if (emp->ajoutemployees(emp))
            QMessageBox::information(0, qApp->tr("Ajout"),
                qApp->tr("Un nouveau employee a été ajouté"), QMessageBox::Ok);
        else
            QMessageBox::critical(0, qApp->tr("Ajout"),
                qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);
       ui->bankView->setModel(tmpemp.afficheremployees());
           }
}

void MainWindow::on_rechercherPB_clicked()
{
    int id =ui->idLE->text().toInt();
    QSqlQueryModel *model =tmpemp.rechercheremployees(id);
    int ribRech = model->data(model->index(0, 0)).toInt();
    if(id == ribRech)
    {
        ui->RechercheView->show();
        ui->RechercheView->setModel(model);
    }
     else
    {
        QMessageBox::critical(0, qApp->tr("Recherche"),
            qApp->tr("Compte non trouvé"), QMessageBox::Ok);
         ui->RechercheView->hide();
    }


}

void MainWindow::on_supprimerPB_clicked()
{
    int id =ui->ribSupLE->text().toInt();
    QSqlQueryModel *model =tmpemp.rechercheremployees(id);
    int ribRech = model->data(model->index(0, 0)).toInt();
    if(id == ribRech)
    {
        QString str = " Vous voulez vraiment supprimer \n le employee ayant le id :"+ ui->ribSupLE->text();
        int ret = QMessageBox::question(this, tr("emp"),str,QMessageBox::Ok|QMessageBox::Cancel);

        switch (ret) {
          case QMessageBox::Ok:
              if (tmpemp.supprimeremployees(id))
                  QMessageBox ::information(0, qApp->tr("Suppression"),
                      qApp->tr("Le employee a été supprimé"), QMessageBox::Ok);

              ui->bankView->setModel(tmpemp.afficheremployees());
              break;
          case QMessageBox::Cancel:

              break;
          default:
              // should never be reached
              break;
        }



    }
     else
    {

        QMessageBox::critical(0, qApp->tr("Suppression"),
            qApp->tr("employee non trouvé"), QMessageBox::Cancel);

    }


}



void MainWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    QString id(ui->listView->currentIndex().data().toString());
    QSqlQuery query;
    query.prepare("SELECT id,namelastname,age,grade_level,diplomes,salary from emp WHERE id='"+id+"'");
    query.exec();
    query.first();
    QString ID=query.value("id").toString();
    ui->lineEdit_ID->setText(ID);
    ui->lineEdit_Name->setText(query.value("namelastname").toString());
    ui->lineEdit_Age->setText(query.value("age").toString());
    ui->lineEdit_GL->setText(query.value("grade_level").toString());
    ui->lineEdit_Diplome->setText(query.value("diplomes").toString());
    ui->lineEdit_sala->setText(query.value("salary").toString());
}

void MainWindow::on_pushButton_clicked()
{
    QString Name(ui->lineEdit_Name->text()),id(ui->lineEdit_ID->text())
            ,age(ui->lineEdit_Age->text()),gl(ui->lineEdit_GL->text()),Diplome(ui->lineEdit_Diplome->text()),
            salary(ui->lineEdit_sala->text());
    QString last(ui->listView->currentIndex().data().toString());
    employees::edit_employees(id,Name,age,gl,Diplome,salary,last);
    emp = new QSqlQueryModel();
    emp->setQuery("SELECT id,namelastname,age,grade_level,diplomes,salary from emp");
    ui->listView->setModel(emp);
}
