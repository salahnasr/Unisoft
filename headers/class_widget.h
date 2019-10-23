#ifndef CLASS_WIDGET_H
#define CLASS_WIDGET_H

#include "headers/Prototype.h"
#include "headers/classes.h"

namespace Ui {
class Class_widget;
}

class Class_widget : public QDialog
{
    Q_OBJECT

public:
    explicit Class_widget(QWidget *parent = 0);
    ~Class_widget();

private slots:

    void on_button_cancel_clicked();

    void on_button_accept_clicked();

private:
    Ui::Class_widget *ui;
    Classes new_class;
};

#endif // CLASS_WIDGET_H
