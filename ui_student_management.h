/********************************************************************************
** Form generated from reading UI file 'student_management.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_MANAGEMENT_H
#define UI_STUDENT_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student_management
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *Group_Options;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *Button_Delete;
    QPushButton *Button_Edit;
    QPushButton *Button_Add;
    QGroupBox *Group_Filters;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *Line_Search;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *check_firstname;
    QCheckBox *check_lastname;
    QCheckBox *check_CIN;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Level;
    QComboBox *Combo_level;
    QSpacerItem *horizontalSpacer;
    QLabel *label_specialty;
    QComboBox *Combo_specialty;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_class;
    QComboBox *combo_class;
    QSpacerItem *horizontalSpacer_6;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *Student_management)
    {
        if (Student_management->objectName().isEmpty())
            Student_management->setObjectName(QStringLiteral("Student_management"));
        Student_management->resize(670, 480);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Student_management->sizePolicy().hasHeightForWidth());
        Student_management->setSizePolicy(sizePolicy);
        Student_management->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(Student_management);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(Student_management);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        Group_Options = new QGroupBox(layoutWidget);
        Group_Options->setObjectName(QStringLiteral("Group_Options"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Group_Options->sizePolicy().hasHeightForWidth());
        Group_Options->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(Group_Options);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        Button_Delete = new QPushButton(Group_Options);
        Button_Delete->setObjectName(QStringLiteral("Button_Delete"));
        Button_Delete->setMinimumSize(QSize(150, 30));

        verticalLayout_4->addWidget(Button_Delete);

        Button_Edit = new QPushButton(Group_Options);
        Button_Edit->setObjectName(QStringLiteral("Button_Edit"));
        Button_Edit->setMinimumSize(QSize(150, 30));

        verticalLayout_4->addWidget(Button_Edit);

        Button_Add = new QPushButton(Group_Options);
        Button_Add->setObjectName(QStringLiteral("Button_Add"));
        Button_Add->setMinimumSize(QSize(150, 30));

        verticalLayout_4->addWidget(Button_Add);


        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout_5->addWidget(Group_Options);

        Group_Filters = new QGroupBox(layoutWidget);
        Group_Filters->setObjectName(QStringLiteral("Group_Filters"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Group_Filters->sizePolicy().hasHeightForWidth());
        Group_Filters->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(Group_Filters);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        Line_Search = new QLineEdit(Group_Filters);
        Line_Search->setObjectName(QStringLiteral("Line_Search"));
        Line_Search->setMinimumSize(QSize(0, 25));
        Line_Search->setStyleSheet(QStringLiteral(""));

        horizontalLayout_8->addWidget(Line_Search);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        check_firstname = new QCheckBox(Group_Filters);
        check_firstname->setObjectName(QStringLiteral("check_firstname"));
        check_firstname->setMinimumSize(QSize(0, 0));
        check_firstname->setStyleSheet(QStringLiteral(""));
        check_firstname->setChecked(false);
        check_firstname->setTristate(false);

        horizontalLayout_3->addWidget(check_firstname);

        check_lastname = new QCheckBox(Group_Filters);
        check_lastname->setObjectName(QStringLiteral("check_lastname"));
        check_lastname->setStyleSheet(QStringLiteral(""));
        check_lastname->setChecked(false);
        check_lastname->setTristate(false);

        horizontalLayout_3->addWidget(check_lastname);

        check_CIN = new QCheckBox(Group_Filters);
        check_CIN->setObjectName(QStringLiteral("check_CIN"));
        check_CIN->setStyleSheet(QStringLiteral(""));
        check_CIN->setChecked(false);
        check_CIN->setTristate(false);

        horizontalLayout_3->addWidget(check_CIN);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_Level = new QLabel(Group_Filters);
        label_Level->setObjectName(QStringLiteral("label_Level"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_Level->sizePolicy().hasHeightForWidth());
        label_Level->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(label_Level);

        Combo_level = new QComboBox(Group_Filters);
        Combo_level->setObjectName(QStringLiteral("Combo_level"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Combo_level->sizePolicy().hasHeightForWidth());
        Combo_level->setSizePolicy(sizePolicy4);
        Combo_level->setMinimumSize(QSize(35, 25));
        Combo_level->setEditable(false);
        Combo_level->setMaxVisibleItems(5);
        Combo_level->setDuplicatesEnabled(false);
        Combo_level->setFrame(true);

        horizontalLayout_4->addWidget(Combo_level);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_specialty = new QLabel(Group_Filters);
        label_specialty->setObjectName(QStringLiteral("label_specialty"));
        sizePolicy3.setHeightForWidth(label_specialty->sizePolicy().hasHeightForWidth());
        label_specialty->setSizePolicy(sizePolicy3);

        horizontalLayout_4->addWidget(label_specialty);

        Combo_specialty = new QComboBox(Group_Filters);
        Combo_specialty->setObjectName(QStringLiteral("Combo_specialty"));
        sizePolicy4.setHeightForWidth(Combo_specialty->sizePolicy().hasHeightForWidth());
        Combo_specialty->setSizePolicy(sizePolicy4);
        Combo_specialty->setMinimumSize(QSize(100, 25));
        Combo_specialty->setMaxVisibleItems(10);

        horizontalLayout_4->addWidget(Combo_specialty);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        label_class = new QLabel(Group_Filters);
        label_class->setObjectName(QStringLiteral("label_class"));

        horizontalLayout_7->addWidget(label_class);

        combo_class = new QComboBox(Group_Filters);
        combo_class->setObjectName(QStringLiteral("combo_class"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(combo_class->sizePolicy().hasHeightForWidth());
        combo_class->setSizePolicy(sizePolicy5);
        combo_class->setMinimumSize(QSize(0, 25));
        combo_class->setMaxVisibleItems(10);
        combo_class->setFrame(true);

        horizontalLayout_7->addWidget(combo_class);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_5->addWidget(Group_Filters);

        splitter->addWidget(layoutWidget);

        verticalLayout_3->addWidget(splitter);

        tableView = new QTableView(Student_management);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView->setGridStyle(Qt::NoPen);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setHighlightSections(true);
        tableView->horizontalHeader()->setMinimumSectionSize(200);
        tableView->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setCascadingSectionResizes(true);
        tableView->verticalHeader()->setHighlightSections(true);
        tableView->verticalHeader()->setMinimumSectionSize(17);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_3->addWidget(tableView);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        ok = new QPushButton(Student_management);
        ok->setObjectName(QStringLiteral("ok"));
        sizePolicy.setHeightForWidth(ok->sizePolicy().hasHeightForWidth());
        ok->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(ok);

        cancel = new QPushButton(Student_management);
        cancel->setObjectName(QStringLiteral("cancel"));
        sizePolicy.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(cancel);


        verticalLayout_3->addLayout(horizontalLayout_6);


        retranslateUi(Student_management);

        Combo_specialty->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Student_management);
    } // setupUi

    void retranslateUi(QDialog *Student_management)
    {
        Student_management->setWindowTitle(QApplication::translate("Student_management", "Esprit-RP : Student management", 0));
        Group_Options->setTitle(QApplication::translate("Student_management", "Options", 0));
        Button_Delete->setText(QApplication::translate("Student_management", "Delete", 0));
        Button_Edit->setText(QApplication::translate("Student_management", "Edit", 0));
        Button_Add->setText(QApplication::translate("Student_management", "Add", 0));
        Group_Filters->setTitle(QApplication::translate("Student_management", "Filters", 0));
        Line_Search->setText(QString());
        check_firstname->setText(QApplication::translate("Student_management", "First name", 0));
        check_lastname->setText(QApplication::translate("Student_management", "Last name", 0));
        check_CIN->setText(QApplication::translate("Student_management", "CIN", 0));
        label_Level->setText(QApplication::translate("Student_management", "Level", 0));
        Combo_level->clear();
        Combo_level->insertItems(0, QStringList()
         << QApplication::translate("Student_management", "NONE", 0)
        );
        label_specialty->setText(QApplication::translate("Student_management", "Specialty ", 0));
        label_class->setText(QApplication::translate("Student_management", "Class", 0));
        ok->setText(QApplication::translate("Student_management", "Ok", 0));
        cancel->setText(QApplication::translate("Student_management", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Student_management: public Ui_Student_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_MANAGEMENT_H
