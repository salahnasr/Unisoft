#include "headers/home.h"
#include "ui_home.h"

//Home widget constructor
Home::Home(User Current_user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);

    qApp->setStyleSheet(this->styleSheet());
    qApp->setProperty("StyleSheet",qApp->styleSheet());

    LoadProfilePicture();

    setWindowTitle("ESPRIT-RP Homepage");
    ui->calender->setHidden(true);
    ui->Button_Student_management->setToolTip("manage students database");
    ui->Button_Employees_management->setToolTip("manage employees database");
    ui->Button_Financial->setToolTip("manage budget and contracts");
    ui->Button_logout->setToolTip("Logout");
    ui->Button_maintanence->setToolTip("manage ressources and it's maintanence");
    ui->Button_stats->setToolTip("view statistics for the last years");
    ui->Button_teacher_management->setToolTip("Manage teachers database");
    ui->tool_About->setToolTip("About Unisoft");
    ui->tool_Account_managemnt->setToolTip("Manage your account information");
    ui->tool_accoun_picture->setToolTip("Set your profile picture");
    ui->tool_Lock->setToolTip("Lock your application");
    ui->tool_mailclient->setToolTip("mail client");
    ui->tool_Quit->setToolTip("Quit");

    Students_Dialog=0;
     Teachers_Dialog=0;
     Financial_dialog=0;
     Statistics_Dialog=0;
     Maintenance_Dialog=0;
     Employees_Dialog=0;
     About_Dialog=0;
     time_table=0;
     mailclient=0;
     Account=0;
     lock=0;
     grades_manager=0;
     db= QSqlDatabase::database();

    if (!db.open())
        QMessageBox::warning(this, tr("Error"),tr(" Could not connect to Database !"),QMessageBox::Ok);

    // SET THE CURRENT USER.

    switch (Current_user.get_USERTYPE())
    {
    case ADMINISTRATOR :
    {
        this->Current_User=new Administrator (Current_user);
    }
        break;

    case STUDENT :
    {
        this->Current_User=new Student (Current_user);
    }
        break;
    case TEACHER:
    {
        this->Current_User=new Teacher (Current_user);
    }
        break;
    case POSTOFFICE:
    {
        this->Current_User=new postoffice (Current_user);
    }
        break;

    case FINANCIALAGENT:
    {
        this->Current_User= new FinancialAgent (Current_user);
    }
        break;


default :
    break;
}

    SetNameAndNProfession();
    Access_management();

    // Clock Set

    timer = new QTimer;
    timer->start(1000);    
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    showTime();

}

Home::~Home()
{
    delete timer;
    delete Current_User;
    delete Students_Dialog;
    delete Teachers_Dialog;
    delete Financial_dialog;
    delete Statistics_Dialog;
    delete Maintenance_Dialog;
    delete Employees_Dialog;
    delete About_Dialog;
    delete time_table;
    delete mailclient;
    delete Account;
    delete lock;
    delete grades_manager;
    delete ui;
    qDebug() <<"Home Destroyed";

}
// Clock function

void Home::showTime()
{
    QTime time = QTime::currentTime();
         QString text = time.toString("hh:mm");
         if ((time.second() % 2) == 0)
             text[2] = ' ';
         ui->Clock->display(text);
}

void Home::SetProfileImage(QPixmap image)
{
    ui->Label_photo->setPixmap(image);
}
//Display the user name and profession

void Home::SetNameAndNProfession()
{
QSqlQuery query;

if (query.exec("SELECT Profession FROM Users WHERE ID='"+Current_User->get_ID()+"'"))

{
    query.first();
    ui->Label_Profession->setText(query.value("Profession").toString());
    ui->Label_Name->setText(Current_User->get_ID());
}

}

void Home::Access_management()
{
    switch (qApp->property("USER_TYPE").toInt()) {
    case ADMINISTRATOR:
        ui->Button_grades->setHidden(true);
        ui->Button_Timetable->setHidden(true);
        ui->Button_Financial->setHidden(true);

        break;
    case STUDENT:
        ui->Button_Employees_management->setHidden(true);
        ui->Button_Financial->setHidden(true);
        ui->Button_maintanence->setHidden(true);
        ui->Button_stats->setHidden(true);
        ui->Button_teacher_management->setHidden(true);
        break;
    case TEACHER:
        ui->Button_Employees_management->setHidden(true);
        ui->Button_Financial->setHidden(true);
        ui->Button_maintanence->setHidden(true);
        ui->Button_stats->setHidden(true);
        break;
    case POSTOFFICE:
        ui->Button_Employees_management->setHidden(true);
        ui->Button_Financial->setHidden(true);
        ui->Button_maintanence->setHidden(true);
        ui->Button_stats->setHidden(true);
        ui->Button_teacher_management->setHidden(true);
        break;
    case FINANCIALAGENT:
        ui->Button_Employees_management->setHidden(true);
        ui->Button_grades->setHidden(true);
        ui->Button_maintanence->setHidden(true);
        ui->Button_stats->setHidden(true);
        ui->Button_Student_management->setHidden(true);
        ui->Button_teacher_management->setHidden(true);
        ui->Button_Timetable->setHidden(true);
    default:
        break;
    }
}

void Home::LoadProfilePicture()
{
    QFile ProfileImage("ProfileImage");
    QTextStream ID(&ProfileImage);

    if(ProfileImage.open(QIODevice::ReadOnly)&& !ID.readAll().isEmpty())
    {

        ID.seek(0);//set cursor position to 0;
        QString ProfileImageLocation= ID.readAll();

        QPixmap image;
        if(image.load(ProfileImageLocation,"PNG"))
            ui->Label_photo->setPixmap(image.scaled(128,128));
        else
            ui->Label_photo->setPixmap(QPixmap(":/Icones/Ressources/url.png"));

    }
    else
        ui->Label_photo->setPixmap(QPixmap(":/Icones/Ressources/url.png"));

}

//Logout

void Home::on_Button_logout_clicked()
{
    QFile LoginInfo("Autologin");
    if (LoginInfo.open(QIODevice::Truncate | QIODevice::WriteOnly))
    {
        LoginInfo.close();
    }
    Login *LoginScreen=new Login;
    this->close();
    this->deleteLater();
    LoginScreen->show();
}

void Home::on_Button_Student_management_clicked()
{

    if (Current_User->get_USERTYPE()==STUDENT)
    Students_Dialog=new Student_information(Current_User->get_Cin(),this);
    else
    Students_Dialog = new Student_management(this);

    Students_Dialog->exec();
}

void Home::on_Button_teacher_management_clicked()
{
    Teachers_Dialog = new teachers_management(this);
    Teachers_Dialog->exec();
}

void Home::on_Button_Financial_clicked()
{
    Financial_dialog=new Financial_management(this);
    Financial_dialog->exec();
}

void Home::on_Button_stats_clicked()
{
    Statistics_Dialog =new Statistics(this) ;
    Statistics_Dialog->exec();
}

void Home::on_Button_maintanence_clicked()
{
    Maintenance_Dialog = new Maintenance(this) ;
    Maintenance_Dialog->exec();
}



void Home::on_Button_Employees_management_clicked()
{
    Employees_Dialog=new MainWindow(this);
    Employees_Dialog->show();
}



void Home::on_tool_About_clicked()
{
    About_Dialog=new AboutEsprit_RP(this);
    About_Dialog->exec();
}

void Home::on_Button_Timetable_clicked()
{
    time_table=new Time_Table(this);
    time_table->exec();
}

void Home::on_tool_mailclient_clicked()
{
    mailclient= new MailClient(this);
    mailclient->exec();
}


void Home::on_tool_Account_managemnt_clicked()
{
Account =new Account_management(this);
Account->exec();
}


void Home::on_tool_Lock_clicked()
{
   lock=new Pass_Demande(this);
   while(!lock->IsAccepted())
    lock->exec();
}



void Home::on_Button_grades_clicked()
{
    grades_manager=new Grades_management(this);
    grades_manager->exec();
}


void Home::on_tool_Quit_clicked()
{
    this->close();
    this->deleteLater();
}

void Home::on_tool_accoun_picture_clicked()
{
    Camera *AccountPic =new Camera(this);
   connect(AccountPic,SIGNAL(NewImageSaved(QPixmap)),this,SLOT(SetProfileImage(QPixmap)));
    AccountPic->exec();
    AccountPic->deleteLater();

}

void Home::on_tool_calender_clicked()
{
if(ui->calender->isHidden())
    ui->calender->setHidden(false);
else
    ui->calender->setHidden(true);
}

void Home::on_tool_graphic_chart_clicked()
{

StyleSheet *Chart_Dialog =new StyleSheet(NULL);
connect(Chart_Dialog,SIGNAL(accepted()),Chart_Dialog,SLOT(deleteLater()));
Chart_Dialog->exec();
this->setStyleSheet(qApp->styleSheet());
}
