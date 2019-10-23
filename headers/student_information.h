#ifndef STUDENT_INFORMATION_H
#define STUDENT_INFORMATION_H

#include "headers/Prototype.h"
#include "headers/student_management.h"
#include "headers/administrator.h"
#include "headers/student.h"
#include "headers/classes.h"
#include "headers/financialagent.h"
namespace Ui {
class Student_information;
}

class Student_information : public QDialog
{
    Q_OBJECT

public:
    explicit Student_information(int cin=0, QWidget *parent = 0);
    ~Student_information();

private slots:
    void on_cancel_clicked();

    void on_ok_clicked();

    void set_ok_enable();

    void on_Line_Age_editingFinished();

    void on_Line_firstName_editingFinished();

    void on_Line_lastName_editingFinished();

    void on_Line_Class_editingFinished();

    void on_line_CIN_editingFinished();

    void on_line_Telephone_editingFinished();

    void on_line_Adresse_editingFinished();

    void on_line_ID_editingFinished();

signals:
    void Student_data_added();

private:
    Ui::Student_information *ui;
    bool To_edit;
    QString ID_for_query;
    QValidator *Text;
    QValidator *Text_Digit;
    QValidator *Digit;
    QCompleter *classes;
};

#endif // STUDENT_INFORMATION_H

