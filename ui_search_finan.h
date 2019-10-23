/********************************************************************************
** Form generated from reading UI file 'search_finan.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_FINAN_H
#define UI_SEARCH_FINAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_search_finan
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *search_finan)
    {
        if (search_finan->objectName().isEmpty())
            search_finan->setObjectName(QStringLiteral("search_finan"));
        search_finan->resize(400, 300);
        buttonBox = new QDialogButtonBox(search_finan);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(search_finan);
        QObject::connect(buttonBox, SIGNAL(accepted()), search_finan, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), search_finan, SLOT(reject()));

        QMetaObject::connectSlotsByName(search_finan);
    } // setupUi

    void retranslateUi(QDialog *search_finan)
    {
        search_finan->setWindowTitle(QApplication::translate("search_finan", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class search_finan: public Ui_search_finan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_FINAN_H
