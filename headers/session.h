#ifndef SESSION_H
#define SESSION_H

#include "headers/Prototype.h"
#include "headers/sessions.h"
#include "headers/classes.h"
namespace Ui {
class Session;
}

class Session : public QDialog
{
    Q_OBJECT

public:
    explicit Session(QString query_name="",QWidget *parent = 0);
    bool ExistInList(QString classe);
    ~Session();

private slots:

    void on_button_cancel_clicked();

    void on_button_accept_clicked();


    void on_combo_level_currentIndexChanged(const QString &arg1);

    void on_combo_speciality_currentIndexChanged(const QString &arg1);

    void on_tool_add_clicked();

    void on_line_name_textChanged(const QString &arg1);

private:
    Ui::Session *ui;
    QString query_name;
};

#endif // SESSION_H
