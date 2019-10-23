#ifndef TEACHER_INFORMATION_H
#define TEACHER_INFORMATION_H

#include "headers/Prototype.h"
#include"headers/teachers_management.h"
#include"headers/administrator.h"
#include"headers/teacher.h"


namespace Ui {
class Teacher_information;
}

class Teacher_information : public QDialog
{
    Q_OBJECT

public:
    explicit Teacher_information(int cin,QWidget *parent = 0);
    ~Teacher_information();

private slots:
    void on_cancel_clicked();

    void set_ok_enable();

    void on_ok_clicked();




    void on_Line_Age_editingFinished();

    void on_Line_firstName_editingFinished();

    void on_Line_lastName_editingFinished();

    void on_Line_Salary_editingFinished();

    void on_line_CIN_editingFinished();

    void on_line_Telephone_editingFinished();

    void on_line_Adresse_editingFinished();

    void on_line_ID_editingFinished();


signals:
    void Teacher_data_added();

private:
    Ui::Teacher_information *ui;
    bool To_edit;
    QString ID_for_query;
};

#endif // TEACHER_INFORMATION_H
