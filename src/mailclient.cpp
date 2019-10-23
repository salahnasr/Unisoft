#include "headers/mailclient.h"
#include "ui_mailclient.h"
MailClient::MailClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MailClient)
{
    ui->setupUi(this);
    ui->line_password->setEchoMode(QLineEdit::Password);
    setWindowTitle("Esprit-RP: Mail Client");
}

MailClient::~MailClient()
{
    delete ui;
}

void MailClient::ForgottenPassword(QString UserID)
{
    User Current_User(UserID);
    if (!Current_User.validate_user())
    {
        QMessageBox::information(NULL, "Error","User not found",QMessageBox::Ok);
        return;
    }
       QString password=Current_User.get_Password();
    bool quit=true;



    SmtpClient smtp("smtp.googlemail.com", 465, SmtpClient::SslConnection);

    // We need to set the username (your email address) and the password
    // for smtp authentification.

    smtp.setUser("EspritRP@gmail.com");
    smtp.setPassword("UnisoftRP");

    // Now we create a MimeMessage object. This will be the email.

    MimeMessage message;

    message.setSender(new EmailAddress("haithem.sboui@esprit.tn", "Esprit-RP"));
    message.addRecipient(new EmailAddress(Current_User.get_mail(),UserID));
    message.setSubject("Esprit-RP : Forgotten password");

    // Now add some text to the email.
    // First we create a MimeText object.

    MimeText text;
    text.setText("Your password is : "+password);
    // Now add it to the mail
    message.addPart(&text);


    // Now we can send the mail

    if (!smtp.connectToHost())
    {
        QMessageBox::warning(NULL, "Error","Unable to connect to the host . \n  Please retry !",QMessageBox::Ok);
        quit=false;
        return ;
    }

    if(!smtp.login())
    {
        QMessageBox::warning(NULL, "Error","Wrong Password .",QMessageBox::Ok);
        quit=false;
        return ;
    }

    if(!smtp.sendMail(message))
    {
        QMessageBox::warning(NULL, "Error","Unable to send mail.\n Please retry !",QMessageBox::Ok);
        quit=false;
        return ;
    }
    smtp.quit();

    if (quit)
    {
        QMessageBox::information(NULL, "Mail Report","Mail succefully sent",QMessageBox::Ok);
    }

}

void MailClient::on_button_close_clicked()
{
    this->reject();
}

void MailClient::on_button_add_attachment_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,"Select File",QDir::currentPath());
    ui->list_attachements->addItem(filename);
}

void MailClient::on_button_send_clicked()
{
    QSqlQuery query;
    QString email;
    QString fullname;
    bool quit=true;
    MimeAttachment *AttachmentList[ui->list_attachements->count()];

    query.prepare("Select Email,first_name,last_name from users where ID='"+qApp->property("USER_ID").toString()+"'");

    if(query.exec())
    {
        query.first();
      email=query.value("Email").toString();
      fullname=query.value("first_name").toString()+" "+query.value("last_name").toString();
    }

    SmtpClient smtp("smtp.googlemail.com", 465, SmtpClient::SslConnection);

    // We need to set the username (your email address) and the password
    // for smtp authentification.

    smtp.setUser(email);
    smtp.setPassword(ui->line_password->text());

    // Now we create a MimeMessage object. This will be the email.

    MimeMessage message;

    message.setSender(new EmailAddress(email, fullname));
    message.addRecipient(new EmailAddress(ui->line_receiver_mail->text(),ui->line_receiver_name->text()));
    message.setSubject(ui->line_subject->text());

    // Now add some text to the email.
    // First we create a MimeText object.

    MimeText text;

    text.setText(ui->Text_mail_content->toPlainText());
    // Now add it to the mail
    message.addPart(&text);

    // Add attachments location

    for (int i=0;i < ui->list_attachements->count() ; i++) 
    {
        AttachmentList[i] =new MimeAttachment(new QFile(ui->list_attachements->item(i)->text()));
        message.addPart(AttachmentList[i]);
    }

    // Now we can send the mail

    if (!smtp.connectToHost())
    {
        QMessageBox::warning(this, "Error","Unable to connect to the host . \n  Please retry !",QMessageBox::Ok);
        quit=false;
        return ;
    }

    if(!smtp.login())
    {
        QMessageBox::warning(this, "Error","Wrong Password .",QMessageBox::Ok);
        quit=false;
        return ;
    }

    if(!smtp.sendMail(message))
    {
        QMessageBox::warning(this, "Error","Unable to send mail.\n Please retry !",QMessageBox::Ok);
        quit=false;
        return ;
    }
    smtp.quit();

    if (quit)
    {
        QMessageBox::information(this, "Mail Report","Mail succefully sent",QMessageBox::Ok);
        this->reject();
    }

}
