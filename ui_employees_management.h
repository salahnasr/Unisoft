/********************************************************************************
** Form generated from reading UI file 'employees_management.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEES_MANAGEMENT_H
#define UI_EMPLOYEES_MANAGEMENT_H

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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Employees_management
{
public:
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *Group_Options;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
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
    QLabel *label_Level;
    QComboBox *Combo_level;
    QSpacerItem *horizontalSpacer;
    QLabel *label_class;
    QComboBox *Combo_Class;
    QSpacerItem *horizontalSpacer_3;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ok;
    QPushButton *Cancel;

    void setupUi(QDialog *Employees_management)
    {
        if (Employees_management->objectName().isEmpty())
            Employees_management->setObjectName(QStringLiteral("Employees_management"));
        Employees_management->resize(667, 458);
        Employees_management->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(Employees_management);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(Employees_management);
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
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Button_Add = new QPushButton(Group_Options);
        Button_Add->setObjectName(QStringLiteral("Button_Add"));

        horizontalLayout->addWidget(Button_Add);

        Button_Edit = new QPushButton(Group_Options);
        Button_Edit->setObjectName(QStringLiteral("Button_Edit"));

        horizontalLayout->addWidget(Button_Edit);

        Button_Delete = new QPushButton(Group_Options);
        Button_Delete->setObjectName(QStringLiteral("Button_Delete"));

        horizontalLayout->addWidget(Button_Delete);


        horizontalLayout_2->addLayout(horizontalLayout);


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
        label_Level = new QLabel(Group_Filters);
        label_Level->setObjectName(QStringLiteral("label_Level"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Level->sizePolicy().hasHeightForWidth());
        label_Level->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_Level);

        Combo_level = new QComboBox(Group_Filters);
        Combo_level->setObjectName(QStringLiteral("Combo_level"));

        horizontalLayout_4->addWidget(Combo_level);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        label_class = new QLabel(Group_Filters);
        label_class->setObjectName(QStringLiteral("label_class"));
        sizePolicy1.setHeightForWidth(label_class->sizePolicy().hasHeightForWidth());
        label_class->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(label_class);

        Combo_Class = new QComboBox(Group_Filters);
        Combo_Class->setObjectName(QStringLiteral("Combo_Class"));

        horizontalLayout_4->addWidget(Combo_Class);

        horizontalSpacer_3 = new QSpacerItem(40, 0, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_5->addWidget(Group_Filters);

        splitter->addWidget(layoutWidget);
        tableWidget = new QTableWidget(splitter);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        splitter->addWidget(tableWidget);

        verticalLayout_3->addWidget(splitter);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        ok = new QPushButton(Employees_management);
        ok->setObjectName(QStringLiteral("ok"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ok->sizePolicy().hasHeightForWidth());
        ok->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(ok);

        Cancel = new QPushButton(Employees_management);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        sizePolicy2.setHeightForWidth(Cancel->sizePolicy().hasHeightForWidth());
        Cancel->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(Cancel);


        verticalLayout_3->addLayout(horizontalLayout_6);


        retranslateUi(Employees_management);

        QMetaObject::connectSlotsByName(Employees_management);
    } // setupUi

    void retranslateUi(QDialog *Employees_management)
    {
        Employees_management->setWindowTitle(QApplication::translate("Employees_management", "Esprit-RP : employee management", 0));
        Group_Options->setTitle(QApplication::translate("Employees_management", "Options", 0));
        Button_Add->setText(QApplication::translate("Employees_management", "Add", 0));
        Button_Edit->setText(QApplication::translate("Employees_management", "Edit", 0));
        Button_Delete->setText(QApplication::translate("Employees_management", "Delete", 0));
        Group_Filters->setTitle(QApplication::translate("Employees_management", "Filters", 0));
        Button_Search->setText(QApplication::translate("Employees_management", "Search", 0));
        label_Level->setText(QApplication::translate("Employees_management", "Salary", 0));
        label_class->setText(QApplication::translate("Employees_management", "Ascending", 0));
        ok->setText(QApplication::translate("Employees_management", "Ok", 0));
        Cancel->setText(QApplication::translate("Employees_management", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Employees_management: public Ui_Employees_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEES_MANAGEMENT_H
