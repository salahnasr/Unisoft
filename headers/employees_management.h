#ifndef EMPLOYEES_MANAGEMENT_H
#define EMPLOYEES_MANAGEMENT_H

#include "headers/Prototype.h"
#include "employees_information.h"
namespace Ui {
class Employees_management;
}

class Employees_management : public QDialog
{
    Q_OBJECT

public:
    explicit Employees_management(QWidget *parent = 0);
    ~Employees_management();

private slots:
    void on_Cancel_clicked();

    void on_Button_Add_clicked();

    void on_Button_Edit_clicked();

private:
    Ui::Employees_management *ui;
    Employees_information *add_dialog;
    Employees_information *edit_dialog;
};

#endif // EMPLOYEES_MANAGEMENT_H
