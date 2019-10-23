#include "headers/login.h"
#include "ui_login.h"

// Login constructor

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->LineIdentifier->setPlaceholderText("Identification");
    ui->LinePassword->setPlaceholderText("Password");
    ui->LinePassword->setEchoMode(QLineEdit::Password);
    ui->ButtonShowPassword->setEnabled(false);
    ui->LineIdentifier->setMaxLength(50);
    setWindowTitle("Esprit-RP Login");
    db = QSqlDatabase::database();
    if (!db.open())
       QMessageBox::warning(this, tr("Error"),tr(" Could not connect to Database !"),QMessageBox::Ok);



}

// Login Destructor

Login::~Login()
{
    qDebug() <<"Login Destroyed";
    delete ui;
}

// Display password when the button show password is pressed

void Login::on_LinePassword_textEdited(const QString &arg1)
{
    if (!ui->LinePassword->text().isEmpty())
    ui->ButtonShowPassword->setEnabled(true);
    else
    ui->ButtonShowPassword->setEnabled(false);
}
void Login::on_ButtonShowPassword_pressed()
{
    ui->LinePassword->setEchoMode(QLineEdit::Normal);
}
// Hide password text when the button show password is released

void Login::on_ButtonShowPassword_released()
{
    ui->LinePassword->setEchoMode(QLineEdit::Password);

}
// Display home widget or display error when username or password is wrong

void Login::on_ButtonSignIn_clicked()
{
    Home *HomeScreen=0;
    User Current_User(ui->LinePassword->text(),ui->LineIdentifier->text());
    if(Current_User.validate_user())
    {
        if (ui->AutoLogin->isChecked())
        {
            QFile LoginInfo("Autologin");
            if (LoginInfo.open(QIODevice::WriteOnly ))
            {
                SimpleCrypt crypto(Q_UINT64_C(0));
                QTextStream ID(&LoginInfo);
                ID << crypto.encryptToString(ui->LineIdentifier->text());
                LoginInfo.flush();
                LoginInfo.close();
            }

        }        
        HomeScreen= new Home(Current_User);
        HomeScreen->show();
       if( this->close())
        this->deleteLater();
    }
        else
    {
        QMessageBox::critical(NULL, tr("Esprit-RP"),tr("Wrong Password or Username ! "),QMessageBox::Ok);
        ui->LinePassword->setText("");
    }

}

//Open facebook page in the os default browser
void Login::on_ButtonFacebook_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.facebook.com/Esprit.Rp11"));

}

//Check for any AutoLogin information

void CheckLogin()
{
    QFile Autologin("Autologin");
    QTextStream ID(&Autologin);
    Home * HomeScreen=0;
    User *Current_user=0;
    Login *LoginScreen=0;
    if(Autologin.open(QIODevice::ReadOnly | QIODevice::Text| QIODevice::Truncate)&& !ID.readAll().isEmpty())
    {
        SimpleCrypt crypto(Q_UINT64_C(0));

        ID.seek(0);//set cursor position to 0;
        QString UserID= crypto.decryptToString(ID.readAll());
        Current_user=new User(UserID);
    }
    else
        Current_user= new User;


   if(Current_user->validate_user())
   {
       HomeScreen=new Home(*Current_user);
       HomeScreen->show();
   }
    else
    {
        LoginScreen=new Login ;
        Autologin.resize("Autologin",0);
        LoginScreen->show();
    }
    Autologin.close();
    delete Current_user;
}

//Open database

void SetDatabase()
{
    QSqlDatabase  db ;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Ressources/Database");
}

void Login::on_ButtonEsprit_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.esprit.ens.tn/test/v3/index.php?lang=fr"));

}


void Login::on_LinkForgottenPassword_clicked()
{
    MailClient::ForgottenPassword(ui->LineIdentifier->text());
}

void Login::on_Button_quit_clicked()
{
    this->close();
    this->deleteLater();
}
