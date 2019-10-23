#ifndef DELETE_MAINTENANCE_H
#define DELETE_MAINTENANCE_H

#include "headers/Prototype.h"

namespace Ui {
class delete_maintenance;
}

class delete_maintenance : public QDialog
{
    Q_OBJECT

public:
    explicit delete_maintenance(QWidget *parent = 0);
    ~delete_maintenance();


private slots:
    void on_pushButton_delete_clicked();
    void on_pushButton_close_clicked();

    void on_listView_doubleClicked(const QModelIndex &index);

private:
    Ui::delete_maintenance *ui;
    QSqlQueryModel *maintenance_model;
};

#endif // DELETE_MAINTENANCE_H
