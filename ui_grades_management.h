/********************************************************************************
** Form generated from reading UI file 'grades_management.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADES_MANAGEMENT_H
#define UI_GRADES_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Grades_management
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *group_data_creation;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_level_creation;
    QLabel *label_specialty_creation;
    QLabel *Label_class;
    QLabel *label_sessions;
    QVBoxLayout *verticalLayout_3;
    QComboBox *Combo_level_creation;
    QComboBox *Combo_specialty_creation;
    QComboBox *Combo_class;
    QComboBox *combo_sessions;
    QPushButton *button_add_to_list;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_creat_class;
    QPushButton *button_create_speciality;
    QPushButton *Button_add_student;
    QVBoxLayout *verticalLayout_8;
    QListWidget *list_sessions;
    QComboBox *combo_student_list;
    QGroupBox *group_data_edition;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_Level_edition;
    QLabel *label_specialty_edition;
    QLabel *label_class_edition;
    QVBoxLayout *verticalLayout_12;
    QComboBox *Combo_level_edition;
    QComboBox *Combo_specialty_edition;
    QComboBox *combo_class_edition;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *button_delete_speciality;
    QPushButton *button_delete;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *group_data_display;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_level_display;
    QComboBox *Combo_level_display;
    QLabel *label_specialty_display;
    QComboBox *Combo_specialty_display;
    QLabel *label_class_display;
    QComboBox *Combo_class_display;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *line_grade;
    QPushButton *button_set_grade;
    QTableView *table_students;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_close;

    void setupUi(QDialog *Grades_management)
    {
        if (Grades_management->objectName().isEmpty())
            Grades_management->setObjectName(QStringLiteral("Grades_management"));
        Grades_management->resize(1041, 677);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Grades_management->sizePolicy().hasHeightForWidth());
        Grades_management->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Grades_management->setFont(font);
        Grades_management->setStyleSheet(QStringLiteral(""));
        verticalLayout_4 = new QVBoxLayout(Grades_management);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        group_data_creation = new QGroupBox(Grades_management);
        group_data_creation->setObjectName(QStringLiteral("group_data_creation"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(group_data_creation->sizePolicy().hasHeightForWidth());
        group_data_creation->setSizePolicy(sizePolicy1);
        group_data_creation->setMinimumSize(QSize(500, 0));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        group_data_creation->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(group_data_creation);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_level_creation = new QLabel(group_data_creation);
        label_level_creation->setObjectName(QStringLiteral("label_level_creation"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_level_creation->sizePolicy().hasHeightForWidth());
        label_level_creation->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(label_level_creation);

        label_specialty_creation = new QLabel(group_data_creation);
        label_specialty_creation->setObjectName(QStringLiteral("label_specialty_creation"));
        sizePolicy2.setHeightForWidth(label_specialty_creation->sizePolicy().hasHeightForWidth());
        label_specialty_creation->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(label_specialty_creation);

        Label_class = new QLabel(group_data_creation);
        Label_class->setObjectName(QStringLiteral("Label_class"));
        sizePolicy2.setHeightForWidth(Label_class->sizePolicy().hasHeightForWidth());
        Label_class->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(Label_class);

        label_sessions = new QLabel(group_data_creation);
        label_sessions->setObjectName(QStringLiteral("label_sessions"));
        sizePolicy2.setHeightForWidth(label_sessions->sizePolicy().hasHeightForWidth());
        label_sessions->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(label_sessions);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Combo_level_creation = new QComboBox(group_data_creation);
        Combo_level_creation->setObjectName(QStringLiteral("Combo_level_creation"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Combo_level_creation->sizePolicy().hasHeightForWidth());
        Combo_level_creation->setSizePolicy(sizePolicy3);
        Combo_level_creation->setMinimumSize(QSize(35, 30));
        Combo_level_creation->setEditable(false);
        Combo_level_creation->setMaxVisibleItems(5);
        Combo_level_creation->setDuplicatesEnabled(false);
        Combo_level_creation->setFrame(true);

        verticalLayout_3->addWidget(Combo_level_creation);

        Combo_specialty_creation = new QComboBox(group_data_creation);
        Combo_specialty_creation->setObjectName(QStringLiteral("Combo_specialty_creation"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Combo_specialty_creation->sizePolicy().hasHeightForWidth());
        Combo_specialty_creation->setSizePolicy(sizePolicy4);
        Combo_specialty_creation->setMinimumSize(QSize(100, 30));
        Combo_specialty_creation->setMaxVisibleItems(10);

        verticalLayout_3->addWidget(Combo_specialty_creation);

        Combo_class = new QComboBox(group_data_creation);
        Combo_class->setObjectName(QStringLiteral("Combo_class"));
        Combo_class->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(Combo_class);

        combo_sessions = new QComboBox(group_data_creation);
        combo_sessions->setObjectName(QStringLiteral("combo_sessions"));
        sizePolicy3.setHeightForWidth(combo_sessions->sizePolicy().hasHeightForWidth());
        combo_sessions->setSizePolicy(sizePolicy3);
        combo_sessions->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(combo_sessions);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout);

        button_add_to_list = new QPushButton(group_data_creation);
        button_add_to_list->setObjectName(QStringLiteral("button_add_to_list"));
        sizePolicy3.setHeightForWidth(button_add_to_list->sizePolicy().hasHeightForWidth());
        button_add_to_list->setSizePolicy(sizePolicy3);
        button_add_to_list->setMinimumSize(QSize(0, 30));

        verticalLayout_5->addWidget(button_add_to_list);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        button_creat_class = new QPushButton(group_data_creation);
        button_creat_class->setObjectName(QStringLiteral("button_creat_class"));
        button_creat_class->setEnabled(false);
        button_creat_class->setMinimumSize(QSize(0, 30));

        horizontalLayout_2->addWidget(button_creat_class);

        button_create_speciality = new QPushButton(group_data_creation);
        button_create_speciality->setObjectName(QStringLiteral("button_create_speciality"));
        button_create_speciality->setEnabled(false);
        sizePolicy3.setHeightForWidth(button_create_speciality->sizePolicy().hasHeightForWidth());
        button_create_speciality->setSizePolicy(sizePolicy3);
        button_create_speciality->setMinimumSize(QSize(0, 30));
        button_create_speciality->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(button_create_speciality);


        verticalLayout_5->addLayout(horizontalLayout_2);

        Button_add_student = new QPushButton(group_data_creation);
        Button_add_student->setObjectName(QStringLiteral("Button_add_student"));
        Button_add_student->setMinimumSize(QSize(0, 30));

        verticalLayout_5->addWidget(Button_add_student);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        list_sessions = new QListWidget(group_data_creation);
        list_sessions->setObjectName(QStringLiteral("list_sessions"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(list_sessions->sizePolicy().hasHeightForWidth());
        list_sessions->setSizePolicy(sizePolicy5);
        list_sessions->setMaximumSize(QSize(200, 16777215));

        verticalLayout_8->addWidget(list_sessions);

        combo_student_list = new QComboBox(group_data_creation);
        combo_student_list->setObjectName(QStringLiteral("combo_student_list"));
        sizePolicy3.setHeightForWidth(combo_student_list->sizePolicy().hasHeightForWidth());
        combo_student_list->setSizePolicy(sizePolicy3);
        combo_student_list->setMinimumSize(QSize(0, 30));

        verticalLayout_8->addWidget(combo_student_list);


        horizontalLayout_4->addLayout(verticalLayout_8);


        horizontalLayout_3->addWidget(group_data_creation);

        group_data_edition = new QGroupBox(Grades_management);
        group_data_edition->setObjectName(QStringLiteral("group_data_edition"));
        sizePolicy1.setHeightForWidth(group_data_edition->sizePolicy().hasHeightForWidth());
        group_data_edition->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        group_data_edition->setFont(font2);
        group_data_edition->setCheckable(false);
        group_data_edition->setChecked(false);
        horizontalLayout_12 = new QHBoxLayout(group_data_edition);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_Level_edition = new QLabel(group_data_edition);
        label_Level_edition->setObjectName(QStringLiteral("label_Level_edition"));
        sizePolicy5.setHeightForWidth(label_Level_edition->sizePolicy().hasHeightForWidth());
        label_Level_edition->setSizePolicy(sizePolicy5);

        verticalLayout_11->addWidget(label_Level_edition);

        label_specialty_edition = new QLabel(group_data_edition);
        label_specialty_edition->setObjectName(QStringLiteral("label_specialty_edition"));
        sizePolicy2.setHeightForWidth(label_specialty_edition->sizePolicy().hasHeightForWidth());
        label_specialty_edition->setSizePolicy(sizePolicy2);

        verticalLayout_11->addWidget(label_specialty_edition);

        label_class_edition = new QLabel(group_data_edition);
        label_class_edition->setObjectName(QStringLiteral("label_class_edition"));
        sizePolicy5.setHeightForWidth(label_class_edition->sizePolicy().hasHeightForWidth());
        label_class_edition->setSizePolicy(sizePolicy5);

        verticalLayout_11->addWidget(label_class_edition);


        horizontalLayout_9->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        Combo_level_edition = new QComboBox(group_data_edition);
        Combo_level_edition->setObjectName(QStringLiteral("Combo_level_edition"));
        sizePolicy4.setHeightForWidth(Combo_level_edition->sizePolicy().hasHeightForWidth());
        Combo_level_edition->setSizePolicy(sizePolicy4);
        Combo_level_edition->setMinimumSize(QSize(0, 30));
        Combo_level_edition->setEditable(false);
        Combo_level_edition->setMaxVisibleItems(5);
        Combo_level_edition->setDuplicatesEnabled(false);
        Combo_level_edition->setFrame(true);

        verticalLayout_12->addWidget(Combo_level_edition);

        Combo_specialty_edition = new QComboBox(group_data_edition);
        Combo_specialty_edition->setObjectName(QStringLiteral("Combo_specialty_edition"));
        sizePolicy4.setHeightForWidth(Combo_specialty_edition->sizePolicy().hasHeightForWidth());
        Combo_specialty_edition->setSizePolicy(sizePolicy4);
        Combo_specialty_edition->setMinimumSize(QSize(0, 30));
        Combo_specialty_edition->setMaxVisibleItems(10);

        verticalLayout_12->addWidget(Combo_specialty_edition);

        combo_class_edition = new QComboBox(group_data_edition);
        combo_class_edition->setObjectName(QStringLiteral("combo_class_edition"));
        sizePolicy4.setHeightForWidth(combo_class_edition->sizePolicy().hasHeightForWidth());
        combo_class_edition->setSizePolicy(sizePolicy4);
        combo_class_edition->setMinimumSize(QSize(0, 30));

        verticalLayout_12->addWidget(combo_class_edition);


        horizontalLayout_9->addLayout(verticalLayout_12);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        button_delete_speciality = new QPushButton(group_data_edition);
        button_delete_speciality->setObjectName(QStringLiteral("button_delete_speciality"));
        button_delete_speciality->setEnabled(false);
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(button_delete_speciality->sizePolicy().hasHeightForWidth());
        button_delete_speciality->setSizePolicy(sizePolicy6);
        button_delete_speciality->setMinimumSize(QSize(0, 30));

        horizontalLayout_8->addWidget(button_delete_speciality);

        button_delete = new QPushButton(group_data_edition);
        button_delete->setObjectName(QStringLiteral("button_delete"));
        button_delete->setEnabled(false);
        sizePolicy6.setHeightForWidth(button_delete->sizePolicy().hasHeightForWidth());
        button_delete->setSizePolicy(sizePolicy6);
        button_delete->setMinimumSize(QSize(0, 30));

        horizontalLayout_8->addWidget(button_delete);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_12->addLayout(verticalLayout_2);


        horizontalLayout_3->addWidget(group_data_edition);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        group_data_display = new QGroupBox(Grades_management);
        group_data_display->setObjectName(QStringLiteral("group_data_display"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(group_data_display->sizePolicy().hasHeightForWidth());
        group_data_display->setSizePolicy(sizePolicy7);
        group_data_display->setFont(font1);
        verticalLayout_6 = new QVBoxLayout(group_data_display);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_level_display = new QLabel(group_data_display);
        label_level_display->setObjectName(QStringLiteral("label_level_display"));
        sizePolicy2.setHeightForWidth(label_level_display->sizePolicy().hasHeightForWidth());
        label_level_display->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(label_level_display);

        Combo_level_display = new QComboBox(group_data_display);
        Combo_level_display->setObjectName(QStringLiteral("Combo_level_display"));
        sizePolicy3.setHeightForWidth(Combo_level_display->sizePolicy().hasHeightForWidth());
        Combo_level_display->setSizePolicy(sizePolicy3);
        Combo_level_display->setMinimumSize(QSize(35, 30));
        Combo_level_display->setEditable(false);
        Combo_level_display->setMaxVisibleItems(5);
        Combo_level_display->setDuplicatesEnabled(false);
        Combo_level_display->setFrame(true);

        verticalLayout_7->addWidget(Combo_level_display);

        label_specialty_display = new QLabel(group_data_display);
        label_specialty_display->setObjectName(QStringLiteral("label_specialty_display"));
        sizePolicy2.setHeightForWidth(label_specialty_display->sizePolicy().hasHeightForWidth());
        label_specialty_display->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(label_specialty_display);

        Combo_specialty_display = new QComboBox(group_data_display);
        Combo_specialty_display->setObjectName(QStringLiteral("Combo_specialty_display"));
        sizePolicy3.setHeightForWidth(Combo_specialty_display->sizePolicy().hasHeightForWidth());
        Combo_specialty_display->setSizePolicy(sizePolicy3);
        Combo_specialty_display->setMinimumSize(QSize(100, 30));
        Combo_specialty_display->setMaxVisibleItems(10);

        verticalLayout_7->addWidget(Combo_specialty_display);

        label_class_display = new QLabel(group_data_display);
        label_class_display->setObjectName(QStringLiteral("label_class_display"));
        sizePolicy2.setHeightForWidth(label_class_display->sizePolicy().hasHeightForWidth());
        label_class_display->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(label_class_display);

        Combo_class_display = new QComboBox(group_data_display);
        Combo_class_display->setObjectName(QStringLiteral("Combo_class_display"));
        sizePolicy3.setHeightForWidth(Combo_class_display->sizePolicy().hasHeightForWidth());
        Combo_class_display->setSizePolicy(sizePolicy3);
        Combo_class_display->setMinimumSize(QSize(100, 30));
        Combo_class_display->setMaxVisibleItems(10);

        verticalLayout_7->addWidget(Combo_class_display);


        verticalLayout_6->addLayout(verticalLayout_7);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        line_grade = new QLineEdit(group_data_display);
        line_grade->setObjectName(QStringLiteral("line_grade"));
        sizePolicy2.setHeightForWidth(line_grade->sizePolicy().hasHeightForWidth());
        line_grade->setSizePolicy(sizePolicy2);
        line_grade->setMinimumSize(QSize(120, 30));

        horizontalLayout_7->addWidget(line_grade);

        button_set_grade = new QPushButton(group_data_display);
        button_set_grade->setObjectName(QStringLiteral("button_set_grade"));
        button_set_grade->setMinimumSize(QSize(0, 30));

        horizontalLayout_7->addWidget(button_set_grade);


        verticalLayout_6->addLayout(horizontalLayout_7);


        horizontalLayout_5->addWidget(group_data_display);

        table_students = new QTableView(Grades_management);
        table_students->setObjectName(QStringLiteral("table_students"));
        table_students->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        table_students->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_5->addWidget(table_students);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        button_close = new QPushButton(Grades_management);
        button_close->setObjectName(QStringLiteral("button_close"));
        button_close->setMinimumSize(QSize(0, 30));

        horizontalLayout_6->addWidget(button_close);


        verticalLayout_4->addLayout(horizontalLayout_6);


        retranslateUi(Grades_management);

        Combo_specialty_creation->setCurrentIndex(-1);
        Combo_specialty_edition->setCurrentIndex(-1);
        Combo_specialty_display->setCurrentIndex(-1);
        Combo_class_display->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Grades_management);
    } // setupUi

    void retranslateUi(QDialog *Grades_management)
    {
        Grades_management->setWindowTitle(QApplication::translate("Grades_management", "Esprit-RP : grades management", 0));
        group_data_creation->setTitle(QApplication::translate("Grades_management", "Data creation", 0));
        label_level_creation->setText(QApplication::translate("Grades_management", "Level", 0));
        label_specialty_creation->setText(QApplication::translate("Grades_management", "Specialty ", 0));
        Label_class->setText(QApplication::translate("Grades_management", "Class", 0));
        label_sessions->setText(QApplication::translate("Grades_management", "Sessions", 0));
        Combo_level_creation->clear();
        Combo_level_creation->insertItems(0, QStringList()
         << QApplication::translate("Grades_management", "NONE", 0)
        );
        button_add_to_list->setText(QApplication::translate("Grades_management", "Add this session", 0));
        button_creat_class->setText(QApplication::translate("Grades_management", "Add class", 0));
        button_create_speciality->setText(QApplication::translate("Grades_management", "Add speciality", 0));
        Button_add_student->setText(QApplication::translate("Grades_management", "Add Student", 0));
        group_data_edition->setTitle(QApplication::translate("Grades_management", "Data edition", 0));
        label_Level_edition->setText(QApplication::translate("Grades_management", "Level", 0));
        label_specialty_edition->setText(QApplication::translate("Grades_management", "Specialty ", 0));
        label_class_edition->setText(QApplication::translate("Grades_management", "Class", 0));
        Combo_level_edition->clear();
        Combo_level_edition->insertItems(0, QStringList()
         << QApplication::translate("Grades_management", "NONE", 0)
        );
        button_delete_speciality->setText(QApplication::translate("Grades_management", "Delete speciality", 0));
        button_delete->setText(QApplication::translate("Grades_management", "Delete Class", 0));
        group_data_display->setTitle(QApplication::translate("Grades_management", "Data display ", 0));
        label_level_display->setText(QApplication::translate("Grades_management", "Level", 0));
        Combo_level_display->clear();
        Combo_level_display->insertItems(0, QStringList()
         << QApplication::translate("Grades_management", "NONE", 0)
        );
        label_specialty_display->setText(QApplication::translate("Grades_management", "Specialty ", 0));
        label_class_display->setText(QApplication::translate("Grades_management", "Class", 0));
        button_set_grade->setText(QApplication::translate("Grades_management", "Set grade", 0));
        button_close->setText(QApplication::translate("Grades_management", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class Grades_management: public Ui_Grades_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADES_MANAGEMENT_H
