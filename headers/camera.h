#ifndef CAMERA_H
#define CAMERA_H

#include "headers/Prototype.h"

namespace Ui {
class Camera;
}

class Camera : public QDialog
{
    Q_OBJECT

public:
    explicit Camera(QWidget *parent = 0);
    void SetImage(QPixmap image);
    ~Camera();

signals :
    void NewImageSaved(QPixmap image);
private slots:


    void on_Button_close_clicked();

    void on_Button_capture_clicked();

    void on_Button_capture_pressed();

    void on_Button_capture_released();

    void on_Button_upload_clicked();

    void on_Button_Take_image_clicked();


    void on_Button_set_clicked();

private:
    Ui::Camera *ui;
    QCamera *camera;
    QCameraViewfinder * viewfinder;
    QCameraImageCapture *imageCapture;
    QImageEncoderSettings settings;
    QPixmap Image;
    QString Direction;
};

#endif // CAMERA_H
