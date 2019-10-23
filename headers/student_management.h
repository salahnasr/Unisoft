#ifndef STUDENT_MANAGEMENT_H
#define STUDENT_MANAGEMENT_H

#include "headers/Prototype.h"
#include "headers/student_information.h"
#include "headers/classes.h"
namespace Ui {
class Student_management;
}

class Student_management : public QDialog
{
    Q_OBJECT

public:
    explicit Student_management(QWidget *parent = 0);
    ~Student_management();

private slots:

    void list_students();
    void on_Button_Add_clicked();
    void on_Button_Edit_clicked();
    void on_cancel_clicked();
    void on_Combo_level_currentIndexChanged(int index);
    void on_Combo_specialty_currentIndexChanged(int index);
    void on_Button_Delete_clicked();
    void on_Line_Search_textEdited(const QString &arg1);
    void on_ok_clicked();

    void on_combo_class_currentIndexChanged(const QString &arg1);

private:
    Ui::Student_management *ui;
    QSqlQueryModel *Student_model;
    Classes classList;
};

#endif // STUDENT_MANAGEMENT_H

