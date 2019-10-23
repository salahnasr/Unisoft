/********************************************************************************
** Form generated from reading UI file 'aboutesprit_rp.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTESPRIT_RP_H
#define UI_ABOUTESPRIT_RP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutEsprit_RP
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *Frame_EspritRP;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *Label_Unisoft;
    QLabel *Label_copyright;
    QSpacerItem *horizontalSpacer;
    QPushButton *Button_close;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *AboutEsprit_RP)
    {
        if (AboutEsprit_RP->objectName().isEmpty())
            AboutEsprit_RP->setObjectName(QStringLiteral("AboutEsprit_RP"));
        AboutEsprit_RP->resize(561, 314);
        AboutEsprit_RP->setStyleSheet(QStringLiteral(""));
        verticalLayout_2 = new QVBoxLayout(AboutEsprit_RP);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Frame_EspritRP = new QFrame(AboutEsprit_RP);
        Frame_EspritRP->setObjectName(QStringLiteral("Frame_EspritRP"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Frame_EspritRP->sizePolicy().hasHeightForWidth());
        Frame_EspritRP->setSizePolicy(sizePolicy);
        Frame_EspritRP->setStyleSheet(QStringLiteral("border-image: url(:/Icones/Ressources/Logo_ESPRIT_-_Tunisie copy.png);"));
        Frame_EspritRP->setFrameShape(QFrame::StyledPanel);
        Frame_EspritRP->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(Frame_EspritRP);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Label_Unisoft = new QLabel(AboutEsprit_RP);
        Label_Unisoft->setObjectName(QStringLiteral("Label_Unisoft"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Label_Unisoft->sizePolicy().hasHeightForWidth());
        Label_Unisoft->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Label_Unisoft);

        Label_copyright = new QLabel(AboutEsprit_RP);
        Label_copyright->setObjectName(QStringLiteral("Label_copyright"));
        sizePolicy1.setHeightForWidth(Label_copyright->sizePolicy().hasHeightForWidth());
        Label_copyright->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(Label_copyright);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Button_close = new QPushButton(AboutEsprit_RP);
        Button_close->setObjectName(QStringLiteral("Button_close"));

        horizontalLayout->addWidget(Button_close);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(AboutEsprit_RP);

        QMetaObject::connectSlotsByName(AboutEsprit_RP);
    } // setupUi

    void retranslateUi(QDialog *AboutEsprit_RP)
    {
        AboutEsprit_RP->setWindowTitle(QApplication::translate("AboutEsprit_RP", "Esprit-RP : About", 0));
        Label_Unisoft->setText(QApplication::translate("AboutEsprit_RP", "This Program was Created By Unisoft\342\204\242 Team.", 0));
        Label_copyright->setText(QApplication::translate("AboutEsprit_RP", "Copyright \302\251 2013-2014 All rights reserved.", 0));
        Button_close->setText(QApplication::translate("AboutEsprit_RP", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutEsprit_RP: public Ui_AboutEsprit_RP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTESPRIT_RP_H
