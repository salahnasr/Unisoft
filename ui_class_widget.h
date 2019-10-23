/********************************************************************************
** Form generated from reading UI file 'class_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASS_WIDGET_H
#define UI_CLASS_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Class_widget
{
public:
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_level;
    QLabel *label_speciality;
    QLabel *label_classroom;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *line_level;
    QLineEdit *line_speciality;
    QLineEdit *line_classroom;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_accept;
    QPushButton *button_cancel;

    void setupUi(QDialog *Class_widget)
    {
        if (Class_widget->objectName().isEmpty())
            Class_widget->setObjectName(QStringLiteral("Class_widget"));
        Class_widget->resize(462, 140);
        Class_widget->setStyleSheet(QStringLiteral(""));
        horizontalLayout_3 = new QHBoxLayout(Class_widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_level = new QLabel(Class_widget);
        label_level->setObjectName(QStringLiteral("label_level"));

        verticalLayout->addWidget(label_level);

        label_speciality = new QLabel(Class_widget);
        label_speciality->setObjectName(QStringLiteral("label_speciality"));

        verticalLayout->addWidget(label_speciality);

        label_classroom = new QLabel(Class_widget);
        label_classroom->setObjectName(QStringLiteral("label_classroom"));

        verticalLayout->addWidget(label_classroom);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        line_level = new QLineEdit(Class_widget);
        line_level->setObjectName(QStringLiteral("line_level"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_level->sizePolicy().hasHeightForWidth());
        line_level->setSizePolicy(sizePolicy);
        line_level->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(line_level);

        line_speciality = new QLineEdit(Class_widget);
        line_speciality->setObjectName(QStringLiteral("line_speciality"));
        sizePolicy.setHeightForWidth(line_speciality->sizePolicy().hasHeightForWidth());
        line_speciality->setSizePolicy(sizePolicy);
        line_speciality->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(line_speciality);

        line_classroom = new QLineEdit(Class_widget);
        line_classroom->setObjectName(QStringLiteral("line_classroom"));
        sizePolicy.setHeightForWidth(line_classroom->sizePolicy().hasHeightForWidth());
        line_classroom->setSizePolicy(sizePolicy);
        line_classroom->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(line_classroom);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        button_accept = new QPushButton(Class_widget);
        button_accept->setObjectName(QStringLiteral("button_accept"));
        button_accept->setMinimumSize(QSize(0, 35));

        horizontalLayout_2->addWidget(button_accept);

        button_cancel = new QPushButton(Class_widget);
        button_cancel->setObjectName(QStringLiteral("button_cancel"));
        button_cancel->setMinimumSize(QSize(0, 35));

        horizontalLayout_2->addWidget(button_cancel);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        retranslateUi(Class_widget);

        QMetaObject::connectSlotsByName(Class_widget);
    } // setupUi

    void retranslateUi(QDialog *Class_widget)
    {
        Class_widget->setWindowTitle(QApplication::translate("Class_widget", "Esprit-RP : Class management", 0));
        label_level->setText(QApplication::translate("Class_widget", "Level", 0));
        label_speciality->setText(QApplication::translate("Class_widget", "Speciality", 0));
        label_classroom->setText(QApplication::translate("Class_widget", "Classroom", 0));
        button_accept->setText(QApplication::translate("Class_widget", "Accept", 0));
        button_cancel->setText(QApplication::translate("Class_widget", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Class_widget: public Ui_Class_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASS_WIDGET_H
