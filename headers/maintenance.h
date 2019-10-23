#ifndef MAINTENANCE_H
#define MAINTENANCE_H
#include"headers/edit_add.h"

#include "headers/Prototype.h"
#include"headers/edit_add.h"
#include "headers/delete_maintenance.h"
#include "headers/edit_maintenance.h"
namespace Ui {
class Maintenance;
}

class Maintenance : public QDialog
{
    Q_OBJECT

public:
    explicit Maintenance(QWidget *parent = 0);
    ~Maintenance();

private slots:
    void on_cancel_clicked();

    void on_pushButton_Edit_clicked();



    void on_pushButton_ADD_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_refresh_clicked();

private:
    Ui::Maintenance *ui;
   EDIT_ADD *edit_dialod;
   delete_maintenance *delete_dialog;
   EDIT_MAintenance *editM_dialog;
   QSqlQueryModel *maintenance;
};

#endif // MAINTENANCE_H
