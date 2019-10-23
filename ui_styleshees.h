/********************************************************************************
** Form generated from reading UI file 'styleshees.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STYLESHEES_H
#define UI_STYLESHEES_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_StyleShees
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_3;
    QProgressBar *progressBar;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QTextEdit *text_stylesheet;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_ok;
    QPushButton *Button_apply;
    QPushButton *Button_close;

    void setupUi(QDialog *StyleShees)
    {
        if (StyleShees->objectName().isEmpty())
            StyleShees->setObjectName(QStringLiteral("StyleShees"));
        StyleShees->resize(624, 513);
        verticalLayout = new QVBoxLayout(StyleShees);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(StyleShees);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_2->addWidget(radioButton);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_2->addWidget(checkBox);

        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        horizontalLayout_2->addWidget(toolButton);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        progressBar = new QProgressBar(groupBox);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_3->addWidget(progressBar);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_3->addWidget(comboBox);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout->addWidget(groupBox);

        text_stylesheet = new QTextEdit(StyleShees);
        text_stylesheet->setObjectName(QStringLiteral("text_stylesheet"));

        verticalLayout->addWidget(text_stylesheet);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Button_ok = new QPushButton(StyleShees);
        Button_ok->setObjectName(QStringLiteral("Button_ok"));

        horizontalLayout->addWidget(Button_ok);

        Button_apply = new QPushButton(StyleShees);
        Button_apply->setObjectName(QStringLiteral("Button_apply"));

        horizontalLayout->addWidget(Button_apply);

        Button_close = new QPushButton(StyleShees);
        Button_close->setObjectName(QStringLiteral("Button_close"));

        horizontalLayout->addWidget(Button_close);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(StyleShees);

        QMetaObject::connectSlotsByName(StyleShees);
    } // setupUi

    void retranslateUi(QDialog *StyleShees)
    {
        StyleShees->setWindowTitle(QApplication::translate("StyleShees", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("StyleShees", "Preview", 0));
        pushButton->setText(QApplication::translate("StyleShees", "PushButton", 0));
        radioButton->setText(QApplication::translate("StyleShees", "RadioButton", 0));
        checkBox->setText(QApplication::translate("StyleShees", "CheckBox", 0));
        toolButton->setText(QApplication::translate("StyleShees", "...", 0));
        Button_ok->setText(QApplication::translate("StyleShees", "ok", 0));
        Button_apply->setText(QApplication::translate("StyleShees", "Apply", 0));
        Button_close->setText(QApplication::translate("StyleShees", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class StyleShees: public Ui_StyleShees {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STYLESHEES_H
