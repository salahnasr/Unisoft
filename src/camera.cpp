#include "headers/camera.h"
#include "ui_camera.h"

Camera::Camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Camera)
{
    ui->setupUi(this);
    ui->Button_capture->setHidden(true);
    ui->Preview->setHidden(true);
    ui->Button_set->setHidden(true);
   camera=0;
    viewfinder=0;
    imageCapture=0;
    this->setWindowTitle("Esprit-RP : Change profile picture ");
}

void Camera::SetImage(QPixmap image)
{
    this->Image=image;

}

Camera::~Camera()
{
    QFile tmpFile(QDir::currentPath()+"/Ressources/tmp.jpg");
    tmpFile.remove();
    delete camera;
    delete viewfinder;
    delete imageCapture;
    delete ui;
}
void Camera::on_Button_close_clicked()
{
    reject();
    deleteLater();
}

void Camera::on_Button_capture_clicked()
{
        imageCapture->capture(QDir::currentPath()+"/Ressources/tmp.jpg");

        // the delay needed to save the image
        QTime dieTime= QTime::currentTime().addSecs(3);
        while( QTime::currentTime() < dieTime );

        ui->Preview->setHidden(false);
        QPixmap image;
        if(image.load(QDir::currentPath()+"/Ressources/tmp.jpg","JPG"))
        {
            ui->label_preview->setPixmap(image);
        }
        Direction=QDir::currentPath()+"/Ressources/tmp.jpg";

        camera->stop();
        camera->unload();
}

void Camera::on_Button_capture_pressed()
{
    camera->searchAndLock();
}

void Camera::on_Button_capture_released()
{
    camera->unlock();
    this->viewfinder->setHidden(true);
    ui->Button_capture->setHidden(true);
    ui->Button_set->setHidden(false);
    ui->Button_Take_image->setHidden(false);
    ui->Button_upload->setHidden(false);
}


void Camera::on_Button_upload_clicked()
{
    QPixmap Image;

    QString direction = QFileDialog::getOpenFileName(this,"Select an image File",QDir::currentPath(),tr("Images (*.png *.jpg *.jpeg)"));
    Image.load(direction);

    if (Image.height()>640 && Image.width()>480)
    {
        Image.detach();
        QMessageBox::warning(this,"error","Operation aborted .\n File is too large",QMessageBox::Ok);
    }
    else
    {
        Direction=direction;
        ui->Preview->setHidden(false);
        ui->label_preview->setPixmap(Image);
        ui->Button_set->setHidden(false);
        ui->Button_Take_image->setHidden(false);
        ui->Button_upload->setHidden(false);
        ui->Button_capture->setHidden(true);
    }
}

void Camera::on_Button_Take_image_clicked()
{

    ui->Preview->setHidden(true);
    ui->Button_set->setHidden(true);
    ui->Button_upload->setHidden(true);
    ui->Button_capture->setHidden(false);
    ui->Button_Take_image->setHidden(true);

    camera = new QCamera;
    viewfinder = new QCameraViewfinder(this);
    viewfinder->setFixedSize(640,480);
    ui->verticalLayout_2->addWidget(viewfinder);
    camera->setViewfinder(viewfinder);
    camera->setCaptureMode(QCamera::CaptureStillImage);
    camera->start();

    imageCapture = new QCameraImageCapture(camera);
    settings.setQuality(QMultimedia::VeryHighQuality);
    settings.setResolution(128,128);
    settings.setCodec("PNG");
    imageCapture->setEncodingSettings(settings);

}

void Camera::on_Button_set_clicked()
{
    SetImage(ui->label_preview->pixmap()->scaled(128,128));
    emit NewImageSaved(this->Image);

    QPixmap image(Direction);
    Direction=QDir::currentPath()+"/Ressources/ProfileImage.png";
    image.save(Direction,"png");

    QFile ProfileImage("ProfileImage");

    if (ProfileImage.open(QIODevice::WriteOnly ))
    {
        QTextStream ID(&ProfileImage);
        ID << Direction;
        ProfileImage.flush();
        ProfileImage.close();
    }
    reject();
    deleteLater();
}
