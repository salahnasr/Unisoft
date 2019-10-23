#ifndef TEACHERS_MANAGEMENT_H
#define TEACHERS_MANAGEMENT_H

#include "headers/Prototype.h"
#include "headers/teacher_information.h"

namespace Ui {
class teachers_management;
}

class teachers_management : public QDialog
{
    Q_OBJECT

public:
    explicit teachers_management(QWidget *parent = 0);
    ~teachers_management();

private slots:

    void on_Button_Add_clicked();

    void on_Button_Edit_clicked();

    void on_Cancel_clicked();

    void list_teachers();

    void on_Button_Delete_clicked();

    void on_Ok_clicked();

    void on_Line_Search_textEdited(const QString &arg1);

    void on_Combo_Salary_currentIndexChanged(const QString &arg1);

    void on_combo_Session_currentIndexChanged(const QString &arg1);

signals:

    void Teacher_data_added();

private:
    Ui::teachers_management *ui;
    QSqlQueryModel *Teacher_model;
};

#endif // TEACHERS_MANAGEMENT_H




