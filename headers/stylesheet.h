#ifndef STYLESHEET_H
#define STYLESHEET_H

#include "headers/Prototype.h"

namespace Ui {
class StyleSheet;
}

class StyleSheet : public QDialog
{
    Q_OBJECT

public:
    explicit StyleSheet(QWidget *parent = 0);
    ~StyleSheet();

private slots:
    void on_Button_close_clicked();

    void on_Button_apply_clicked();

    void on_Button_OK_clicked();

private:
    Ui::StyleSheet *ui;
    QString DefaultStyle;
};

#endif // STYLESHEET_H
