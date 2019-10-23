/********************************************************************************
** Form generated from reading UI file 'teacher_information.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_INFORMATION_H
#define UI_TEACHER_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Teacher_information
{
public:
    QFormLayout *formLayout;
    QSplitter *splitter;
    QGroupBox *BasicInformations;
    QHBoxLayout *horizontalLayout_2;
    QLabel *Label_Photo;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_firstName;
    QLabel *Label_Lastname;
    QLabel *Label_Age;
    QLabel *Label_Salary;
    QVBoxLayout *verticalLayout;
    QLineEdit *Line_firstName;
    QLineEdit *Line_lastName;
    QLineEdit *Line_Age;
    QLineEdit *Line_Salary;
    QGroupBox *Additionalinformation;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_CIN;
    QLabel *label_Telephone;
    QLabel *label_Adresse;
    QLabel *label_ID;
    QLabel *label_Session;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *line_CIN;
    QLineEdit *line_Telephone;
    QLineEdit *line_Adresse;
    QLineEdit *line_ID;
    QComboBox *Combo_Session;
    QFrame *line;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QListView *listView;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *Teacher_information)
    {
        if (Teacher_information->objectName().isEmpty())
            Teacher_information->setObjectName(QStringLiteral("Teacher_information"));
        Teacher_information->resize(800, 498);
        Teacher_information->setStyleSheet(QStringLiteral(""));
        formLayout = new QFormLayout(Teacher_information);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        splitter = new QSplitter(Teacher_information);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        BasicInformations = new QGroupBox(splitter);
        BasicInformations->setObjectName(QStringLiteral("BasicInformations"));
        horizontalLayout_2 = new QHBoxLayout(BasicInformations);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Label_Photo = new QLabel(BasicInformations);
        Label_Photo->setObjectName(QStringLiteral("Label_Photo"));
        Label_Photo->setMinimumSize(QSize(100, 0));
        Label_Photo->setStyleSheet(QStringLiteral("border-image: url(:/Icones/Ressources/url.png);"));

        horizontalLayout_2->addWidget(Label_Photo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_firstName = new QLabel(BasicInformations);
        label_firstName->setObjectName(QStringLiteral("label_firstName"));

        verticalLayout_2->addWidget(label_firstName);

        Label_Lastname = new QLabel(BasicInformations);
        Label_Lastname->setObjectName(QStringLiteral("Label_Lastname"));

        verticalLayout_2->addWidget(Label_Lastname);

        Label_Age = new QLabel(BasicInformations);
        Label_Age->setObjectName(QStringLiteral("Label_Age"));

        verticalLayout_2->addWidget(Label_Age);

        Label_Salary = new QLabel(BasicInformations);
        Label_Salary->setObjectName(QStringLiteral("Label_Salary"));

        verticalLayout_2->addWidget(Label_Salary);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Line_firstName = new QLineEdit(BasicInformations);
        Line_firstName->setObjectName(QStringLiteral("Line_firstName"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Line_firstName->sizePolicy().hasHeightForWidth());
        Line_firstName->setSizePolicy(sizePolicy);
        Line_firstName->setMinimumSize(QSize(150, 0));

        verticalLayout->addWidget(Line_firstName);

        Line_lastName = new QLineEdit(BasicInformations);
        Line_lastName->setObjectName(QStringLiteral("Line_lastName"));
        sizePolicy.setHeightForWidth(Line_lastName->sizePolicy().hasHeightForWidth());
        Line_lastName->setSizePolicy(sizePolicy);
        Line_lastName->setMinimumSize(QSize(150, 0));

        verticalLayout->addWidget(Line_lastName);

        Line_Age = new QLineEdit(BasicInformations);
        Line_Age->setObjectName(QStringLiteral("Line_Age"));
        sizePolicy.setHeightForWidth(Line_Age->sizePolicy().hasHeightForWidth());
        Line_Age->setSizePolicy(sizePolicy);
        Line_Age->setMinimumSize(QSize(150, 0));

        verticalLayout->addWidget(Line_Age);

        Line_Salary = new QLineEdit(BasicInformations);
        Line_Salary->setObjectName(QStringLiteral("Line_Salary"));
        sizePolicy.setHeightForWidth(Line_Salary->sizePolicy().hasHeightForWidth());
        Line_Salary->setSizePolicy(sizePolicy);
        Line_Salary->setMinimumSize(QSize(150, 0));

        verticalLayout->addWidget(Line_Salary);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        splitter->addWidget(BasicInformations);

        formLayout->setWidget(0, QFormLayout::LabelRole, splitter);

        Additionalinformation = new QGroupBox(Teacher_information);
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
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_CIN->sizePolicy().hasHeightForWidth());
        label_CIN->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(label_CIN);

        label_Telephone = new QLabel(Additionalinformation);
        label_Telephone->setObjectName(QStringLiteral("label_Telephone"));
        sizePolicy2.setHeightForWidth(label_Telephone->sizePolicy().hasHeightForWidth());
        label_Telephone->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(label_Telephone);

        label_Adresse = new QLabel(Additionalinformation);
        label_Adresse->setObjectName(QStringLiteral("label_Adresse"));
        sizePolicy2.setHeightForWidth(label_Adresse->sizePolicy().hasHeightForWidth());
        label_Adresse->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(label_Adresse);

        label_ID = new QLabel(Additionalinformation);
        label_ID->setObjectName(QStringLiteral("label_ID"));
        sizePolicy2.setHeightForWidth(label_ID->sizePolicy().hasHeightForWidth());
        label_ID->setSizePolicy(sizePolicy2);

        verticalLayout_4->addWidget(label_ID);

        label_Session = new QLabel(Additionalinformation);
        label_Session->setObjectName(QStringLiteral("label_Session"));

        verticalLayout_4->addWidget(label_Session);


        horizontalLayout_4->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        line_CIN = new QLineEdit(Additionalinformation);
        line_CIN->setObjectName(QStringLiteral("line_CIN"));

        verticalLayout_5->addWidget(line_CIN);

        line_Telephone = new QLineEdit(Additionalinformation);
        line_Telephone->setObjectName(QStringLiteral("line_Telephone"));

        verticalLayout_5->addWidget(line_Telephone);

        line_Adresse = new QLineEdit(Additionalinformation);
        line_Adresse->setObjectName(QStringLiteral("line_Adresse"));

        verticalLayout_5->addWidget(line_Adresse);

        line_ID = new QLineEdit(Additionalinformation);
        line_ID->setObjectName(QStringLiteral("line_ID"));

        verticalLayout_5->addWidget(line_ID);

        Combo_Session = new QComboBox(Additionalinformation);
        Combo_Session->setObjectName(QStringLiteral("Combo_Session"));

        verticalLayout_5->addWidget(Combo_Session);


        horizontalLayout_4->addLayout(verticalLayout_5);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        line = new QFrame(Additionalinformation);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShadow(QFrame::Sunken);
        line->setLineWidth(1);
        line->setMidLineWidth(0);
        line->setFrameShape(QFrame::VLine);

        horizontalLayout_6->addWidget(line);


        formLayout->setWidget(0, QFormLayout::FieldRole, Additionalinformation);

        groupBox = new QGroupBox(Teacher_information);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        listView = new QListView(groupBox);
        listView->setObjectName(QStringLiteral("listView"));

        gridLayout->addWidget(listView, 1, 0, 1, 1);


        formLayout->setWidget(1, QFormLayout::SpanningRole, groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        ok = new QPushButton(Teacher_information);
        ok->setObjectName(QStringLiteral("ok"));
        sizePolicy2.setHeightForWidth(ok->sizePolicy().hasHeightForWidth());
        ok->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(ok);

        cancel = new QPushButton(Teacher_information);
        cancel->setObjectName(QStringLiteral("cancel"));
        sizePolicy2.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(cancel);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_3);


        retranslateUi(Teacher_information);

        QMetaObject::connectSlotsByName(Teacher_information);
    } // setupUi

    void retranslateUi(QDialog *Teacher_information)
    {
        Teacher_information->setWindowTitle(QApplication::translate("Teacher_information", "Esprit-RP : Teacher information", 0));
        BasicInformations->setTitle(QApplication::translate("Teacher_information", "Basic informations", 0));
        Label_Photo->setText(QString());
        label_firstName->setText(QApplication::translate("Teacher_information", "First name ", 0));
        Label_Lastname->setText(QApplication::translate("Teacher_information", "Last name", 0));
        Label_Age->setText(QApplication::translate("Teacher_information", "Age", 0));
        Label_Salary->setText(QApplication::translate("Teacher_information", "Salary", 0));
        Additionalinformation->setTitle(QApplication::translate("Teacher_information", "Additional informations", 0));
        label_CIN->setText(QApplication::translate("Teacher_information", "CIN", 0));
        label_Telephone->setText(QApplication::translate("Teacher_information", "Telephone", 0));
        label_Adresse->setText(QApplication::translate("Teacher_information", "Adresse", 0));
        label_ID->setText(QApplication::translate("Teacher_information", "ID", 0));
        label_Session->setText(QApplication::translate("Teacher_information", "Session", 0));
        groupBox->setTitle(QApplication::translate("Teacher_information", "Workspace", 0));
        label->setText(QApplication::translate("Teacher_information", "Class", 0));
        ok->setText(QApplication::translate("Teacher_information", "Ok", 0));
        cancel->setText(QApplication::translate("Teacher_information", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Teacher_information: public Ui_Teacher_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_INFORMATION_H
