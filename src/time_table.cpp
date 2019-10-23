#include "headers/time_table.h"
#include "ui_time_table.h"

Time_Table::Time_Table(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Time_Table)
{
    ui->setupUi(this);
    session_manager=0;
    class_add_widget=0;
    mailDialog=0;
   scene=new QGraphicsScene;
   timetable=new Time_table_widget(ui->combo_class->currentText());
   pProxyWidget=scene->addWidget(timetable);
   ui->GraphicView_TimeTable->setScene(scene);
   ui->Button_export->setDisabled(true);
   ui->Button_mail->setDisabled(true);
   ui->Button_Accept->setDisabled(true);
   ui->combo_level->addItems(this->classList.GetLevelList());
    setWindowTitle("Esprit-RP : Time Tables management");

   if (qApp->property("USER_TYPE")==STUDENT || qApp->property("USER_TYPE")==TEACHER  )
   {
       ui->Button_Accept->setHidden(true);
       ui->Button_Cancel->setText("Close");
       ui->GraphicView_TimeTable->setInteractive(false);
       ui->Button_sessions->setHidden(true);
       ui->Button_add_class->setHidden(true);
       ui->Button_delete_class->setHidden(true);
   }
}

Time_Table::~Time_Table()
{
    delete timetable ;
    delete scene;
    delete class_add_widget;
    delete session_manager;
    delete mailDialog;
    delete ui;
}
QString Time_Table::Export(QString Direction)
{
    scene->clearSelection();
    scene->setSceneRect(scene->itemsBoundingRect());
    QImage image(scene->sceneRect().size().toSize(), QImage::Format_ARGB32);
    image.fill(Qt::transparent);

    QPainter painter(&image);
    scene->render(&painter);
    QString directory=Direction + "/" +ui->combo_level->currentText()+ui->combo_class->currentText()+".png" ;
    image.save(directory);
    return directory;
}

void Time_Table::on_Button_export_clicked()
{
    QString Direction = QFileDialog::getExistingDirectory(this,"Set Direction",QDir::currentPath());
    Export(Direction);
}

void Time_Table::on_combo_level_currentIndexChanged(int index)
{
    ui->combo_class->clear();
    ui->Combo_specialty->clear();
    ui->Button_export->setDisabled(false);
    ui->Button_mail->setDisabled(false);
    ui->Button_Accept->setDisabled(false);
    ui->GraphicView_TimeTable->setInteractive(true);
    if(qApp->property("USER_TYPE")==STUDENT || qApp->property("USER_TYPE")==TEACHER)
        ui->GraphicView_TimeTable->setInteractive(false);

    int level=ui->combo_level->currentText().toInt();
    QString Speciality=ui->Combo_specialty->currentText();

    ui->Combo_specialty->addItems(this->classList.GetSpecialityList(level));
    ui->combo_class->addItems(classList.GetClassList(level,Speciality));

    timetable->SetClassText(ui->combo_class->currentText());
    CreateTimeTable(ui->combo_class->currentText());

}

void Time_Table::on_Combo_specialty_currentIndexChanged(int index)
{
    ui->combo_class->clear();
    if(qApp->property("USER_TYPE")==STUDENT || qApp->property("USER_TYPE")==TEACHER)
        ui->GraphicView_TimeTable->setInteractive(false);

    int level = ui->combo_level->currentText().toInt();
    QString Speciality=ui->Combo_specialty->currentText();
    ui->combo_class->addItems(classList.GetClassList(level,Speciality));

    timetable->SetClassText(ui->combo_class->currentText());
    CreateTimeTable(ui->combo_class->currentText());

}


void Time_Table::CreateTimeTable(QString Class)
{
    timetable->genereteTable(Class);
}

void Time_Table::RefreshClassList()
{
    int level = ui->combo_level->currentText().toInt();
    QString Speciality=ui->Combo_specialty->currentText();

    ui->combo_class->clear();
    ui->combo_level->clear();
    ui->Combo_specialty->clear();

    ui->combo_level->addItems(this->classList.GetLevelList());
    ui->Combo_specialty->addItems(this->classList.GetSpecialityList(level));
    ui->combo_class->addItems(classList.GetClassList(level,Speciality));
}

void Time_Table::on_combo_class_currentIndexChanged(int index)
{
    timetable->SetClassText(ui->combo_class->currentText());
    CreateTimeTable(ui->combo_class->currentText());

    if(qApp->property("USER_TYPE")==STUDENT || qApp->property("USER_TYPE")==TEACHER)
        ui->GraphicView_TimeTable->setInteractive(false);


}

void Time_Table::on_Button_Cancel_clicked()
{
    this->reject();
}

void Time_Table::on_Button_Accept_clicked()
{

emit TimeTableHasChanged();
timetable->SaveIntoDatabase(ui->combo_class->currentText());
}

void Time_Table::on_Button_mail_clicked()
{
    mailDialog=new MailClient(this);
    mailDialog->exec();
}


void Time_Table::on_Button_sessions_clicked()
{
    session_manager=new sessions_management(this);
    session_manager->exec();
}



void Time_Table::on_Button_add_class_clicked()
{
class_add_widget=new Class_widget(this);
class_add_widget->exec();
RefreshClassList();
}

void Time_Table::on_Button_delete_class_clicked()
{
classList.DeleteClass(ui->combo_class->currentText());
RefreshClassList();
}
