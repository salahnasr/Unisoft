#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include"employees.h"
#include<QSqlRecord>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:


    void on_ajoutPB_clicked();

    void on_rechercherPB_clicked();

    void on_supprimerPB_clicked();


    void on_listView_doubleClicked(const QModelIndex &index);

    void on_pushButton_clicked();

private:

    Ui::MainWindow *ui;
    QSqlQueryModel *emp;
    employees tmpemp;
};

#endif // MAINWINDOW_H
