#ifndef ACCOUNT_MANAGEMENT_H
#define ACCOUNT_MANAGEMENT_H

#include "headers/Prototype.h"
#include "headers/pass_demande.h"
namespace Ui {
class Account_management;
}

class Account_management : public QDialog
{
    Q_OBJECT

public:
    explicit Account_management(QWidget *parent = 0);
    ~Account_management();
    void loadUserInfo();

private slots:

    void on_tool_unlock_clicked();
    void tool_unlock_accept();
    void tool_unlock_reject();

    void on_button_close_clicked();

private:
    Ui::Account_management *ui;
};

#endif // ACCOUNT_MANAGEMENT_H
