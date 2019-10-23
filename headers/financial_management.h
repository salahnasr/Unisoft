#ifndef FINANCIAL_MANAGEMENT_H
#define FINANCIAL_MANAGEMENT_H
#include "headers/Prototype.h"
#include"headers/mainwindow.h"
#include "headers/teachers_management.h"

namespace Ui {
class Financial_management;
}

class Financial_management : public QDialog
{
    Q_OBJECT

public:
    explicit Financial_management(QWidget *parent = 0);
    ~Financial_management();

private slots:
    void on_cancel_clicked();

    void on_refresh_clicked();
    void on_manage_clicked();

    void on_pushButton_clicked();

    void on_refresh_3_clicked();

    void on_lineEdit_textEdited(const QString &valor);

    void on_refresh_2_clicked();



private:
    Ui::Financial_management *ui;
    QSqlQueryModel *finantial_model;
    Financial_management *Financial_dialog;
    QDialog *Students_Dialog;
    MainWindow *employees_dialog;
    teachers_management *teachers_dialog;
};

#endif // FINANCIAL_MANAGEMENT_H
