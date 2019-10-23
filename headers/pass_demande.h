#ifndef PASS_DEMANDE_H
#define PASS_DEMANDE_H
#include "headers/Prototype.h"
#include "headers/user.h"
namespace Ui {
class Pass_Demande;
}

class Pass_Demande : public QDialog
{
    Q_OBJECT

public:
    explicit Pass_Demande(QWidget *parent = 0);
    ~Pass_Demande();
    bool IsAccepted();
private slots:
    void on_button_cancel_clicked();

    void on_button_verify_clicked();


private:
    Ui::Pass_Demande *ui;
    bool stat;
};

#endif // PASS_DEMANDE_H
