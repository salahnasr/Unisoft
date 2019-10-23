/********************************************************************************
** Form generated from reading UI file 'stylesheet.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STYLESHEET_H
#define UI_STYLESHEET_H

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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StyleSheet
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QToolButton *toolButton;
    QLCDNumber *lcdNumber;
    QTextEdit *Text_stylesheet;
    QHBoxLayout *horizontalLayout;
    QPushButton *Button_close;
    QPushButton *Button_apply;
    QPushButton *Button_OK;

    void setupUi(QDialog *StyleSheet)
    {
        if (StyleSheet->objectName().isEmpty())
            StyleSheet->setObjectName(QStringLiteral("StyleSheet"));
        StyleSheet->resize(587, 501);
        verticalLayout = new QVBoxLayout(StyleSheet);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(StyleSheet);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_2->addWidget(progressBar);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_3->addWidget(radioButton);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_3->addWidget(checkBox);

        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout_3->addWidget(toolButton);

        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        horizontalLayout_3->addWidget(lcdNumber);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox);

        Text_stylesheet = new QTextEdit(StyleSheet);
        Text_stylesheet->setObjectName(QStringLiteral("Text_stylesheet"));

        verticalLayout->addWidget(Text_stylesheet);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Button_close = new QPushButton(StyleSheet);
        Button_close->setObjectName(QStringLiteral("Button_close"));

        horizontalLayout->addWidget(Button_close);

        Button_apply = new QPushButton(StyleSheet);
        Button_apply->setObjectName(QStringLiteral("Button_apply"));

        horizontalLayout->addWidget(Button_apply);

        Button_OK = new QPushButton(StyleSheet);
        Button_OK->setObjectName(QStringLiteral("Button_OK"));

        horizontalLayout->addWidget(Button_OK);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(StyleSheet);

        QMetaObject::connectSlotsByName(StyleSheet);
    } // setupUi

    void retranslateUi(QDialog *StyleSheet)
    {
        StyleSheet->setWindowTitle(QApplication::translate("StyleSheet", "Esprit-RP : Style customizer", 0));
        groupBox->setTitle(QApplication::translate("StyleSheet", "GroupBox", 0));
        pushButton->setText(QApplication::translate("StyleSheet", "PushButton", 0));
        radioButton->setText(QApplication::translate("StyleSheet", "RadioButton", 0));
        checkBox->setText(QApplication::translate("StyleSheet", "CheckBox", 0));
        toolButton->setText(QApplication::translate("StyleSheet", "...", 0));
        Button_close->setText(QApplication::translate("StyleSheet", "Close", 0));
        Button_apply->setText(QApplication::translate("StyleSheet", "Apply", 0));
        Button_OK->setText(QApplication::translate("StyleSheet", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class StyleSheet: public Ui_StyleSheet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STYLESHEET_H
