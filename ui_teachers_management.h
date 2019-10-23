/********************************************************************************
** Form generated from reading UI file 'teachers_management.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERS_MANAGEMENT_H
#define UI_TEACHERS_MANAGEMENT_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_teachers_management
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *Group_Options;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *Button_Add;
    QPushButton *Button_Edit;
    QPushButton *Button_Delete;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *Group_Filters;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *Line_Search;
    QPushButton *Button_Search;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Salary;
    QComboBox *Combo_Salary;
    QSpacerItem *horizontalSpacer;
    QLabel *label_Session;
    QComboBox *combo_Session;
    QTableView *tab_listTeachers;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *Ok;
    QPushButton *Cancel;

    void setupUi(QDialog *teachers_management)
    {
        if (teachers_management->objectName().isEmpty())
            teachers_management->setObjectName(QStringLiteral("teachers_management"));
        teachers_management->resize(670, 480);
        teachers_management->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(teachers_management);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(teachers_management);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        Group_Options = new QGroupBox(layoutWidget);
        Group_Options->setObjectName(QStringLiteral("Group_Options"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Group_Options->sizePolicy().hasHeightForWidth());
        Group_Options->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(Group_Options);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        Button_Add = new QPushButton(Group_Options);
        Button_Add->setObjectName(QStringLiteral("Button_Add"));

        verticalLayout_4->addWidget(Button_Add);

        Button_Edit = new QPushButton(Group_Options);
        Button_Edit->setObjectName(QStringLiteral("Button_Edit"));

        verticalLayout_4->addWidget(Button_Edit);

        Button_Delete = new QPushButton(Group_Options);
        Button_Delete->setObjectName(QStringLiteral("Button_Delete"));

        verticalLayout_4->addWidget(Button_Delete);


        horizontalLayout_2->addLayout(verticalLayout_4);


        horizontalLayout_5->addWidget(Group_Options);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        Group_Filters = new QGroupBox(layoutWidget);
        Group_Filters->setObjectName(QStringLiteral("Group_Filters"));
        sizePolicy.setHeightForWidth(Group_Filters->sizePolicy().hasHeightForWidth());
        Group_Filters->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(Group_Filters);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Line_Search = new QLineEdit(Group_Filters);
        Line_Search->setObjectName(QStringLiteral("Line_Search"));

        horizontalLayout_3->addWidget(Line_Search);

        Button_Search = new QPushButton(Group_Filters);
        Button_Search->setObjectName(QStringLiteral("Button_Search"));

        horizontalLayout_3->addWidget(Button_Search);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_Salary = new QLabel(Group_Filters);
        label_Salary->setObjectName(QStringLiteral("label_Salary"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Salary->sizePolicy().hasHeightForWidth());
        label_Salary->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_Salary);

        Combo_Salary = new QComboBox(Group_Filters);
        Combo_Salary->setObjectName(QStringLiteral("Combo_Salary"));

        horizontalLayout_4->addWidget(Combo_Salary);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_Session = new QLabel(Group_Filters);
        label_Session->setObjectName(QStringLiteral("label_Session"));

        horizontalLayout_4->addWidget(label_Session);

        combo_Session = new QComboBox(Group_Filters);
        combo_Session->setObjectName(QStringLiteral("combo_Session"));

        horizontalLayout_4->addWidget(combo_Session);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_5->addWidget(Group_Filters);

        splitter->addWidget(layoutWidget);
        tab_listTeachers = new QTableView(splitter);
        tab_listTeachers->setObjectName(QStringLiteral("tab_listTeachers"));
        splitter->addWidget(tab_listTeachers);

        verticalLayout_3->addWidget(splitter);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        Ok = new QPushButton(teachers_management);
        Ok->setObjectName(QStringLiteral("Ok"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Ok->sizePolicy().hasHeightForWidth());
        Ok->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(Ok);

        Cancel = new QPushButton(teachers_management);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        sizePolicy2.setHeightForWidth(Cancel->sizePolicy().hasHeightForWidth());
        Cancel->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(Cancel);


        verticalLayout_3->addLayout(horizontalLayout_6);


        retranslateUi(teachers_management);

        QMetaObject::connectSlotsByName(teachers_management);
    } // setupUi

    void retranslateUi(QDialog *teachers_management)
    {
        teachers_management->setWindowTitle(QApplication::translate("teachers_management", "Esprit-RP : Teacher managment", 0));
        Group_Options->setTitle(QApplication::translate("teachers_management", "Options", 0));
        Button_Add->setText(QApplication::translate("teachers_management", "Add", 0));
        Button_Edit->setText(QApplication::translate("teachers_management", "Edit", 0));
        Button_Delete->setText(QApplication::translate("teachers_management", "Delete", 0));
        Group_Filters->setTitle(QApplication::translate("teachers_management", "Filters", 0));
        Button_Search->setText(QApplication::translate("teachers_management", "Search", 0));
        label_Salary->setText(QApplication::translate("teachers_management", "Salary", 0));
        Combo_Salary->clear();
        Combo_Salary->insertItems(0, QStringList()
         << QApplication::translate("teachers_management", "Ascending", 0)
         << QApplication::translate("teachers_management", "Descending", 0)
        );
        label_Session->setText(QApplication::translate("teachers_management", "Session", 0));
        combo_Session->clear();
        combo_Session->insertItems(0, QStringList()
         << QApplication::translate("teachers_management", "All", 0)
        );
        Ok->setText(QApplication::translate("teachers_management", "Ok", 0));
        Cancel->setText(QApplication::translate("teachers_management", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class teachers_management: public Ui_teachers_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERS_MANAGEMENT_H
