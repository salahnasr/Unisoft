#ifndef GRADES_MANAGEMENT_H
#define GRADES_MANAGEMENT_H

#include "headers/Prototype.h"
#include "headers/classes.h"
#include "headers/sessions.h"
#include "headers/grades_table.h"
namespace Ui {
class Grades_management;
}

class Grades_management : public QDialog
{
    Q_OBJECT

public:
    explicit Grades_management(QWidget *parent = 0);
    ~Grades_management();
    bool Session_existed(QListWidget* parent, QString session_name);
private slots:

    void on_button_close_clicked();

    void on_Combo_level_creation_currentIndexChanged(int index);

    void on_Combo_level_display_currentIndexChanged(int index);

    void on_Combo_level_edition_currentIndexChanged(int index);

    void on_Combo_specialty_display_currentIndexChanged(int index);

    void on_button_add_to_list_clicked();

    void on_Combo_specialty_edition_currentIndexChanged(int index);

    void on_Combo_specialty_creation_currentIndexChanged(int index);

    void on_button_creat_class_clicked();

    void on_button_delete_clicked();

    void on_button_delete_speciality_clicked();

    void Accens_management();

    void Load_grades_table(QString class_name);

    void on_Combo_class_display_currentIndexChanged(int index);

    void on_Combo_class_currentTextChanged(const QString &arg1);

    void on_button_create_speciality_clicked();

    void on_Button_add_student_clicked();

    void on_table_students_clicked(const QModelIndex &index);

    void on_button_set_grade_clicked();

private:

    Ui::Grades_management *ui;
    Classes classList;
};

#endif // GRADES_MANAGEMENT_H
