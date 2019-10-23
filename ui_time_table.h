/********************************************************************************
** Form generated from reading UI file 'time_table.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIME_TABLE_H
#define UI_TIME_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Time_Table
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *Group_class_selector;
    QHBoxLayout *horizontalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_level;
    QLabel *label_specialty;
    QLabel *label_class;
    QComboBox *combo_level;
    QComboBox *Combo_specialty;
    QComboBox *combo_class;
    QVBoxLayout *verticalLayout_2;
    QPushButton *Button_add_class;
    QPushButton *Button_delete_class;
    QGroupBox *Group_extra;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *Button_export;
    QPushButton *Button_mail;
    QPushButton *Button_sessions;
    QGraphicsView *GraphicView_TimeTable;
    QHBoxLayout *MainLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_Accept;
    QPushButton *Button_Cancel;

    void setupUi(QDialog *Time_Table)
    {
        if (Time_Table->objectName().isEmpty())
            Time_Table->setObjectName(QStringLiteral("Time_Table"));
        Time_Table->resize(1175, 730);
        Time_Table->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(Time_Table);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(Time_Table);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMaximumSize(QSize(16777215, 120));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Group_class_selector = new QGroupBox(widget);
        Group_class_selector->setObjectName(QStringLiteral("Group_class_selector"));
        horizontalLayout_3 = new QHBoxLayout(Group_class_selector);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        label_level = new QLabel(Group_class_selector);
        label_level->setObjectName(QStringLiteral("label_level"));
        QFont font;
        font.setPointSize(9);
        label_level->setFont(font);

        gridLayout_2->addWidget(label_level, 0, 0, 1, 1);

        label_specialty = new QLabel(Group_class_selector);
        label_specialty->setObjectName(QStringLiteral("label_specialty"));
        label_specialty->setFont(font);

        gridLayout_2->addWidget(label_specialty, 0, 1, 1, 1);

        label_class = new QLabel(Group_class_selector);
        label_class->setObjectName(QStringLiteral("label_class"));
        label_class->setFont(font);

        gridLayout_2->addWidget(label_class, 0, 2, 1, 1);

        combo_level = new QComboBox(Group_class_selector);
        combo_level->setObjectName(QStringLiteral("combo_level"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(combo_level->sizePolicy().hasHeightForWidth());
        combo_level->setSizePolicy(sizePolicy1);
        combo_level->setMinimumSize(QSize(100, 25));

        gridLayout_2->addWidget(combo_level, 1, 0, 1, 1);

        Combo_specialty = new QComboBox(Group_class_selector);
        Combo_specialty->setObjectName(QStringLiteral("Combo_specialty"));
        Combo_specialty->setMinimumSize(QSize(150, 25));

        gridLayout_2->addWidget(Combo_specialty, 1, 1, 1, 1);

        combo_class = new QComboBox(Group_class_selector);
        combo_class->setObjectName(QStringLiteral("combo_class"));
        sizePolicy1.setHeightForWidth(combo_class->sizePolicy().hasHeightForWidth());
        combo_class->setSizePolicy(sizePolicy1);
        combo_class->setMinimumSize(QSize(150, 25));

        gridLayout_2->addWidget(combo_class, 1, 2, 1, 1);


        horizontalLayout_3->addLayout(gridLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Button_add_class = new QPushButton(Group_class_selector);
        Button_add_class->setObjectName(QStringLiteral("Button_add_class"));
        Button_add_class->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(Button_add_class);

        Button_delete_class = new QPushButton(Group_class_selector);
        Button_delete_class->setObjectName(QStringLiteral("Button_delete_class"));
        sizePolicy1.setHeightForWidth(Button_delete_class->sizePolicy().hasHeightForWidth());
        Button_delete_class->setSizePolicy(sizePolicy1);
        Button_delete_class->setMinimumSize(QSize(0, 25));

        verticalLayout_2->addWidget(Button_delete_class);


        horizontalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout->addWidget(Group_class_selector);

        Group_extra = new QGroupBox(widget);
        Group_extra->setObjectName(QStringLiteral("Group_extra"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Group_extra->sizePolicy().hasHeightForWidth());
        Group_extra->setSizePolicy(sizePolicy2);
        Group_extra->setMaximumSize(QSize(500, 16777215));
        verticalLayout = new QVBoxLayout(Group_extra);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        Button_export = new QPushButton(Group_extra);
        Button_export->setObjectName(QStringLiteral("Button_export"));
        sizePolicy1.setHeightForWidth(Button_export->sizePolicy().hasHeightForWidth());
        Button_export->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(Button_export);

        Button_mail = new QPushButton(Group_extra);
        Button_mail->setObjectName(QStringLiteral("Button_mail"));
        sizePolicy1.setHeightForWidth(Button_mail->sizePolicy().hasHeightForWidth());
        Button_mail->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(Button_mail);


        verticalLayout->addLayout(horizontalLayout_2);

        Button_sessions = new QPushButton(Group_extra);
        Button_sessions->setObjectName(QStringLiteral("Button_sessions"));
        sizePolicy1.setHeightForWidth(Button_sessions->sizePolicy().hasHeightForWidth());
        Button_sessions->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Button_sessions);


        horizontalLayout->addWidget(Group_extra);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        GraphicView_TimeTable = new QGraphicsView(Time_Table);
        GraphicView_TimeTable->setObjectName(QStringLiteral("GraphicView_TimeTable"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(GraphicView_TimeTable->sizePolicy().hasHeightForWidth());
        GraphicView_TimeTable->setSizePolicy(sizePolicy3);
        GraphicView_TimeTable->setMinimumSize(QSize(0, 0));
        GraphicView_TimeTable->setStyleSheet(QLatin1String("QWidget:item:hover\n"
"{\n"
"    \n"
"    color: #000000;\n"
"}"));
        GraphicView_TimeTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        GraphicView_TimeTable->setRenderHints(QPainter::Antialiasing|QPainter::HighQualityAntialiasing|QPainter::NonCosmeticDefaultPen|QPainter::Qt4CompatiblePainting|QPainter::SmoothPixmapTransform|QPainter::TextAntialiasing);
        GraphicView_TimeTable->setResizeAnchor(QGraphicsView::AnchorViewCenter);
        GraphicView_TimeTable->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
        GraphicView_TimeTable->setRubberBandSelectionMode(Qt::ContainsItemShape);

        gridLayout->addWidget(GraphicView_TimeTable, 1, 0, 1, 1);

        MainLayout = new QHBoxLayout();
        MainLayout->setObjectName(QStringLiteral("MainLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        MainLayout->addItem(horizontalSpacer);

        Button_Accept = new QPushButton(Time_Table);
        Button_Accept->setObjectName(QStringLiteral("Button_Accept"));

        MainLayout->addWidget(Button_Accept);

        Button_Cancel = new QPushButton(Time_Table);
        Button_Cancel->setObjectName(QStringLiteral("Button_Cancel"));
        Button_Cancel->setMinimumSize(QSize(50, 0));

        MainLayout->addWidget(Button_Cancel);


        gridLayout->addLayout(MainLayout, 2, 0, 1, 1);


        retranslateUi(Time_Table);

        QMetaObject::connectSlotsByName(Time_Table);
    } // setupUi

    void retranslateUi(QDialog *Time_Table)
    {
        Time_Table->setWindowTitle(QApplication::translate("Time_Table", "Esprit-RP : TimeTable management", 0));
        Group_class_selector->setTitle(QApplication::translate("Time_Table", "Class selector", 0));
        label_level->setText(QApplication::translate("Time_Table", "Level", 0));
        label_specialty->setText(QApplication::translate("Time_Table", "Specialty", 0));
        label_class->setText(QApplication::translate("Time_Table", "Class", 0));
        Button_add_class->setText(QApplication::translate("Time_Table", "Add", 0));
        Button_delete_class->setText(QApplication::translate("Time_Table", "Delete", 0));
        Group_extra->setTitle(QApplication::translate("Time_Table", "Extra options", 0));
        Button_export->setText(QApplication::translate("Time_Table", "Export", 0));
        Button_mail->setText(QApplication::translate("Time_Table", "Send via mail", 0));
        Button_sessions->setText(QApplication::translate("Time_Table", "Sessions", 0));
        Button_Accept->setText(QApplication::translate("Time_Table", "Save", 0));
        Button_Cancel->setText(QApplication::translate("Time_Table", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class Time_Table: public Ui_Time_Table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIME_TABLE_H
