#ifndef EMPLOYEES_INFORMATION_H
#define EMPLOYEES_INFORMATION_H

#include "headers/Prototype.h"

namespace Ui {
class Employees_information;
}

class Employees_information : public QDialog
{
    Q_OBJECT

public:
    explicit Employees_information(QWidget *parent = 0);
    ~Employees_information();

private slots:
    void on_cancel_clicked();

private:
    Ui::Employees_information *ui;
};

#endif // EMPLOYEES_INFORMATION_H
