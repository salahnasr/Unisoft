#ifndef LOGIN_H
#define LOGIN_H

#include "headers/home.h"
#include "headers/simplecrypt.h"
#include "headers/mailclient.h"
namespace Ui {
class Login;
}


class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
private slots:

    void on_ButtonShowPassword_pressed();
    void on_ButtonShowPassword_released();
    void on_ButtonSignIn_clicked();
    void on_ButtonFacebook_clicked();
    void on_ButtonEsprit_clicked();
    void on_LinePassword_textEdited(const QString &arg1);

    void on_LinkForgottenPassword_clicked();

    void on_Button_quit_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase db;
};

void CheckLogin();
void SetDatabase();

#endif // LOGIN_H




