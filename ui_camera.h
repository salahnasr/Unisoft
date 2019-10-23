/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Camera
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_set;
    QPushButton *Button_capture;
    QPushButton *Button_Take_image;
    QPushButton *Button_upload;
    QGroupBox *Preview;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_preview;
    QPushButton *Button_close;

    void setupUi(QDialog *Camera)
    {
        if (Camera->objectName().isEmpty())
            Camera->setObjectName(QStringLiteral("Camera"));
        Camera->resize(496, 150);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Camera->sizePolicy().hasHeightForWidth());
        Camera->setSizePolicy(sizePolicy);
        Camera->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(Camera);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Button_set = new QPushButton(Camera);
        Button_set->setObjectName(QStringLiteral("Button_set"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button_set->sizePolicy().hasHeightForWidth());
        Button_set->setSizePolicy(sizePolicy1);
        Button_set->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(Button_set);

        Button_capture = new QPushButton(Camera);
        Button_capture->setObjectName(QStringLiteral("Button_capture"));
        sizePolicy1.setHeightForWidth(Button_capture->sizePolicy().hasHeightForWidth());
        Button_capture->setSizePolicy(sizePolicy1);
        Button_capture->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(Button_capture);

        Button_Take_image = new QPushButton(Camera);
        Button_Take_image->setObjectName(QStringLiteral("Button_Take_image"));
        sizePolicy1.setHeightForWidth(Button_Take_image->sizePolicy().hasHeightForWidth());
        Button_Take_image->setSizePolicy(sizePolicy1);
        Button_Take_image->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(Button_Take_image);

        Button_upload = new QPushButton(Camera);
        Button_upload->setObjectName(QStringLiteral("Button_upload"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Button_upload->sizePolicy().hasHeightForWidth());
        Button_upload->setSizePolicy(sizePolicy2);
        Button_upload->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(Button_upload);


        verticalLayout->addLayout(horizontalLayout);

        Preview = new QGroupBox(Camera);
        Preview->setObjectName(QStringLiteral("Preview"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Preview->sizePolicy().hasHeightForWidth());
        Preview->setSizePolicy(sizePolicy3);
        verticalLayout_3 = new QVBoxLayout(Preview);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_preview = new QLabel(Preview);
        label_preview->setObjectName(QStringLiteral("label_preview"));
        sizePolicy3.setHeightForWidth(label_preview->sizePolicy().hasHeightForWidth());
        label_preview->setSizePolicy(sizePolicy3);

        verticalLayout_3->addWidget(label_preview);


        verticalLayout->addWidget(Preview);

        Button_close = new QPushButton(Camera);
        Button_close->setObjectName(QStringLiteral("Button_close"));
        sizePolicy1.setHeightForWidth(Button_close->sizePolicy().hasHeightForWidth());
        Button_close->setSizePolicy(sizePolicy1);
        Button_close->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(Button_close);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Camera);

        QMetaObject::connectSlotsByName(Camera);
    } // setupUi

    void retranslateUi(QDialog *Camera)
    {
        Camera->setWindowTitle(QApplication::translate("Camera", "Esprit-RP : Photo profile ", 0));
        Button_set->setText(QApplication::translate("Camera", "Set image", 0));
        Button_capture->setText(QApplication::translate("Camera", "Capture", 0));
        Button_Take_image->setText(QApplication::translate("Camera", "Take Picture", 0));
        Button_upload->setText(QApplication::translate("Camera", "Upload picture", 0));
        Preview->setTitle(QApplication::translate("Camera", "Preview", 0));
        label_preview->setText(QString());
        Button_close->setText(QApplication::translate("Camera", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class Camera: public Ui_Camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
