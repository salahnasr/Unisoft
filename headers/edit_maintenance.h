#ifndef EDIT_MAINTENANCE_H
#define EDIT_MAINTENANCE_H

#include "headers/Prototype.h"
#include"headers/products.h"

namespace Ui {
class EDIT_MAintenance;
}

class EDIT_MAintenance : public QDialog
{
    Q_OBJECT

public:
    explicit EDIT_MAintenance(QWidget *parent = 0);
    ~EDIT_MAintenance();

private slots:
    void on_listView_doubleClicked(const QModelIndex &index);


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::EDIT_MAintenance *ui;
    QSqlQueryModel *editm;
};

#endif // EDIT_MAINTENANCE_H
