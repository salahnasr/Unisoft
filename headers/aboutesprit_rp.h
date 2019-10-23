#ifndef ABOUTESPRIT_RP_H
#define ABOUTESPRIT_RP_H

#include "headers/Prototype.h"

namespace Ui {
class AboutEsprit_RP;
}

class AboutEsprit_RP : public QDialog
{
    Q_OBJECT

public:
    explicit AboutEsprit_RP(QWidget *parent = 0);
    ~AboutEsprit_RP();

private slots:
    void on_Button_close_clicked();

private:
    Ui::AboutEsprit_RP *ui;
};

#endif // ABOUTESPRIT_RP_H
