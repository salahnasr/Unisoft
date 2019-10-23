#ifndef PROJECT_MANGEMENT_H
#define PROJECT_MANGEMENT_H

#include "headers/Prototype.h"

namespace Ui {
class Project_mangement;
}

class Project_mangement : public QDialog
{
    Q_OBJECT

public:
    explicit Project_mangement(QWidget *parent = 0);
    ~Project_mangement();

private slots:
    void on_cancel_clicked();

private:
    Ui::Project_mangement *ui;
};

#endif // PROJECT_MANGEMENT_H
