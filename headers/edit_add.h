#ifndef EDIT_ADD_H
#define EDIT_ADD_H

#include "headers/Prototype.h"

namespace Ui {
class EDIT_ADD;
}

class EDIT_ADD : public QDialog
{
    Q_OBJECT

public:
    explicit EDIT_ADD(QWidget *parent = 0);
    ~EDIT_ADD();

private slots:
    void on_SAVE_clicked();


    void on_lineEditRT_textChanged(const QString &arg1);


    void on_pushButton_clicked();

private:
    Ui::EDIT_ADD *ui;
};

#endif // EDIT_ADD_H
