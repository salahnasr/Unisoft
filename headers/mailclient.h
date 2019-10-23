#ifndef MAILCLIENT_H
#define MAILCLIENT_H

#include "headers/SmtpClient/SmtpMime.h"
#include "Prototype.h"
#include "headers/user.h"
namespace Ui {
class MailClient;
}

class MailClient : public QDialog
{
    Q_OBJECT

public:
    explicit MailClient(QWidget *parent = 0);
    ~MailClient();
static void ForgottenPassword(QString UserID);
private slots:
    void on_button_close_clicked();

    void on_button_add_attachment_clicked();

    void on_button_send_clicked();


private:
    Ui::MailClient *ui;
};

#endif // MAILCLIENT_H
