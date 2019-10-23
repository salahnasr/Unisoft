/********************************************************************************
** Form generated from reading UI file 'student_information.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_INFORMATION_H
#define UI_STUDENT_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Student_information
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QSplitter *splitter;
    QGroupBox *BasicInformations;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_firstName;
    QLineEdit *Line_firstName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Label_Lastname;
    QLineEdit *Line_lastName;
    QHBoxLayout *horizontalLayout_7;
    QLabel *Label_Age;
    QLineEdit *Line_Age;
    QHBoxLayout *horizontalLayout_8;
    QLabel *Label_Class;
    QLineEdit *Line_Class;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_payment;
    QLineEdit *line_Payment;
    QGroupBox *Additionalinformation;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_CIN;
    QLabel *label_Telephone;
    QLabel *label_Adresse;
    QLabel *label_ID;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *line_CIN;
    QLineEdit *line_Telephone;
    QLineEdit *line_Adresse;
    QLineEdit *line_ID;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *Student_information)
    {
        if (Student_information->objectName().isEmpty())
            Student_information->setObjectName(QStringLiteral("Student_information"));
        Student_information->resize(283, 480);
        Student_information->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(Student_information);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        splitter = new QSplitter(Student_information);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        BasicInformations = new QGroupBox(splitter);
        BasicInformations->setObjectName(QStringLiteral("BasicInformations"));
        verticalLayout = new QVBoxLayout(BasicInformations);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_firstName = new QLabel(BasicInformations);
        label_firstName->setObjectName(QStringLiteral("label_firstName"));

        horizontalLayout->addWidget(label_firstName);

        Line_firstName = new QLineEdit(BasicInformations);
        Line_firstName->setObjectName(QStringLiteral("Line_firstName"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Line_firstName->sizePolicy().hasHeightForWidth());
        Line_firstName->setSizePolicy(sizePolicy);
        Line_firstName->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(Line_firstName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Label_Lastname = new QLabel(BasicInformations);
        Label_Lastname->setObjectName(QStringLiteral("Label_Lastname"));

        horizontalLayout_2->addWidget(Label_Lastname);

        Line_lastName = new QLineEdit(BasicInformations);
        Line_lastName->setObjectName(QStringLiteral("Line_lastName"));
        sizePolicy.setHeightForWidth(Line_lastName->sizePolicy().hasHeightForWidth());
        Line_lastName->setSizePolicy(sizePolicy);
        Line_lastName->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(Line_lastName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        Label_Age = new QLabel(BasicInformations);
        Label_Age->setObjectName(QStringLiteral("Label_Age"));

        horizontalLayout_7->addWidget(Label_Age);

        Line_Age = new QLineEdit(BasicInformations);
        Line_Age->setObjectName(QStringLiteral("Line_Age"));
        sizePolicy.setHeightForWidth(Line_Age->sizePolicy().hasHeightForWidth());
        Line_Age->setSizePolicy(sizePolicy);
        Line_Age->setMinimumSize(QSize(150, 0));

        horizontalLayout_7->addWidget(Line_Age);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        Label_Class = new QLabel(BasicInformations);
        Label_Class->setObjectName(QStringLiteral("Label_Class"));

        horizontalLayout_8->addWidget(Label_Class);

        Line_Class = new QLineEdit(BasicInformations);
        Line_Class->setObjectName(QStringLiteral("Line_Class"));
        sizePolicy.setHeightForWidth(Line_Class->sizePolicy().hasHeightForWidth());
        Line_Class->setSizePolicy(sizePolicy);
        Line_Class->setMinimumSize(QSize(150, 0));
        Line_Class->setAutoFillBackground(false);
        Line_Class->setDragEnabled(false);
        Line_Class->setReadOnly(false);
        Line_Class->setClearButtonEnabled(false);

        horizontalLayout_8->addWidget(Line_Class);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_payment = new QLabel(BasicInformations);
        label_payment->setObjectName(QStringLiteral("label_payment"));

        horizontalLayout_9->addWidget(label_payment);

        line_Payment = new QLineEdit(BasicInformations);
        line_Payment->setObjectName(QStringLiteral("line_Payment"));
        sizePolicy.setHeightForWidth(line_Payment->sizePolicy().hasHeightForWidth());
        line_Payment->setSizePolicy(sizePolicy);
        line_Payment->setMinimumSize(QSize(150, 0));

        horizontalLayout_9->addWidget(line_Payment);


        verticalLayout->addLayout(horizontalLayout_9);

        splitter->addWidget(BasicInformations);

        horizontalLayout_5->addWidget(splitter);


        verticalLayout_2->addLayout(horizontalLayout_5);

        Additionalinformation = new QGroupBox(Student_information);
        Additionalinformation->setObjectName(QStringLiteral("Additionalinformation"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Additionalinformation->sizePolicy().hasHeightForWidth());
        Additionalinformation->setSizePolicy(sizePolicy1);
        Additionalinformation->setMinimumSize(QSize(0, 200));
        horizontalLayout_6 = new QHBoxLayout(Additionalinformation);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_CIN = new QLabel(Additionalinformation);
        label_CIN->setObjectName(QStringLiteral("label_CIN"));
        sizePolicy.setHeightForWidth(label_CIN->sizePolicy().hasHeightForWidth());
        label_CIN->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_CIN);

        label_Telephone = new QLabel(Additionalinformation);
        label_Telephone->setObjectName(QStringLiteral("label_Telephone"));
        sizePolicy.setHeightForWidth(label_Telephone->sizePolicy().hasHeightForWidth());
        label_Telephone->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_Telephone);

        label_Adresse = new QLabel(Additionalinformation);
        label_Adresse->setObjectName(QStringLiteral("label_Adresse"));
        sizePolicy.setHeightForWidth(label_Adresse->sizePolicy().hasHeightForWidth());
        label_Adresse->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_Adresse);

        label_ID = new QLabel(Additionalinformation);
        label_ID->setObjectName(QStringLiteral("label_ID"));
        sizePolicy.setHeightForWidth(label_ID->sizePolicy().hasHeightForWidth());
        label_ID->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_ID);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        line_CIN = new QLineEdit(Additionalinformation);
        line_CIN->setObjectName(QStringLiteral("line_CIN"));
        sizePolicy.setHeightForWidth(line_CIN->sizePolicy().hasHeightForWidth());
        line_CIN->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(line_CIN);

        line_Telephone = new QLineEdit(Additionalinformation);
        line_Telephone->setObjectName(QStringLiteral("line_Telephone"));
        sizePolicy.setHeightForWidth(line_Telephone->sizePolicy().hasHeightForWidth());
        line_Telephone->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(line_Telephone);

        line_Adresse = new QLineEdit(Additionalinformation);
        line_Adresse->setObjectName(QStringLiteral("line_Adresse"));
        sizePolicy.setHeightForWidth(line_Adresse->sizePolicy().hasHeightForWidth());
        line_Adresse->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(line_Adresse);

        line_ID = new QLineEdit(Additionalinformation);
        line_ID->setObjectName(QStringLiteral("line_ID"));
        sizePolicy.setHeightForWidth(line_ID->sizePolicy().hasHeightForWidth());
        line_ID->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(line_ID);


        horizontalLayout_4->addLayout(verticalLayout_5);


        horizontalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(Additionalinformation);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        ok = new QPushButton(Student_information);
        ok->setObjectName(QStringLiteral("ok"));
        sizePolicy.setHeightForWidth(ok->sizePolicy().hasHeightForWidth());
        ok->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(ok);

        cancel = new QPushButton(Student_information);
        cancel->setObjectName(QStringLiteral("cancel"));
        sizePolicy.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(cancel);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(Student_information);

        QMetaObject::connectSlotsByName(Student_information);
    } // setupUi

    void retranslateUi(QDialog *Student_information)
    {
        Student_information->setWindowTitle(QApplication::translate("Student_information", "Esprit-RP : Student information", 0));
        BasicInformations->setTitle(QApplication::translate("Student_information", "Basic informations", 0));
        label_firstName->setText(QApplication::translate("Student_information", "First name ", 0));
        Label_Lastname->setText(QApplication::translate("Student_information", "Last name", 0));
        Label_Age->setText(QApplication::translate("Student_information", "Age", 0));
        Label_Class->setText(QApplication::translate("Student_information", "Class", 0));
        label_payment->setText(QApplication::translate("Student_information", "Payment", 0));
        Additionalinformation->setTitle(QApplication::translate("Student_information", "Additional informations", 0));
        label_CIN->setText(QApplication::translate("Student_information", "CIN", 0));
        label_Telephone->setText(QApplication::translate("Student_information", "Telphone", 0));
        label_Adresse->setText(QApplication::translate("Student_information", "Adresse", 0));
        label_ID->setText(QApplication::translate("Student_information", "ID", 0));
        ok->setText(QApplication::translate("Student_information", "Ok", 0));
        cancel->setText(QApplication::translate("Student_information", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Student_information: public Ui_Student_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_INFORMATION_H
