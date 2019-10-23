/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QAction *actionQuit;
    QAction *actionAbout_Qt;
    QAction *actionAbout_Unisoft;
    QAction *actionHelp;
    QAction *actionLanguage;
    QAction *actionSettings;
    QAction *actionEdit_Account;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QWidget *Widget_tools;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *Label_photo;
    QVBoxLayout *verticalLayout;
    QLabel *Label_Name;
    QLabel *Label_Profession;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout;
    QToolButton *tool_Account_managemnt;
    QToolButton *tool_Lock;
    QToolButton *tool_About;
    QToolButton *tool_accoun_picture;
    QToolButton *tool_mailclient;
    QToolButton *tool_graphic_chart;
    QToolButton *tool_Quit;
    QToolButton *tool_calender;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_2;
    QLCDNumber *Clock;
    QPushButton *Button_logout;
    QCalendarWidget *calender;
    QSpacerItem *horizontalSpacer_2;
    QWidget *Widget_Apps;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *Button_Student_management;
    QPushButton *Button_Employees_management;
    QPushButton *Button_Financial;
    QPushButton *Button_stats;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Button_maintanence;
    QPushButton *Button_teacher_management;
    QPushButton *Button_Timetable;
    QPushButton *Button_grades;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QMainWindow *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QStringLiteral("Home"));
        Home->resize(1013, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Home->sizePolicy().hasHeightForWidth());
        Home->setSizePolicy(sizePolicy);
        Home->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 200;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"   \n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-botto"
                        "m:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"QToolButton\n"
"{\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"    \n"
"}\n"
"\n"
""
                        "QToolButton:pressed\n"
"{\n"
"    background-color: #1e1e1e;\n"
"color:#1e1e1e;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"       background-color: rgb(255, 170, 0);\n"
"color:rgb(255, 170, 0);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
""
                        "\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/down_arrow.png);\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px soli"
                        "d QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
""
                        "}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7"
                        "801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none"
                        ";\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidge"
                        "t::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the tool bar */\n"
"     background: url(:/images/handle.png);\n"
"}"
                        "\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has nothing to ove"
                        "rlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::i"
                        "ndicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    color: #ffaa00;\n"
"	border: 1px solid #ffaa00;\n"
"background-color: #ffaa00;\n"
"\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}"));
        actionQuit = new QAction(Home);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout_Qt = new QAction(Home);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        actionAbout_Unisoft = new QAction(Home);
        actionAbout_Unisoft->setObjectName(QStringLiteral("actionAbout_Unisoft"));
        actionHelp = new QAction(Home);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        actionLanguage = new QAction(Home);
        actionLanguage->setObjectName(QStringLiteral("actionLanguage"));
        actionSettings = new QAction(Home);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionEdit_Account = new QAction(Home);
        actionEdit_Account->setObjectName(QStringLiteral("actionEdit_Account"));
        centralwidget = new QWidget(Home);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Widget_tools = new QWidget(centralwidget);
        Widget_tools->setObjectName(QStringLiteral("Widget_tools"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Widget_tools->sizePolicy().hasHeightForWidth());
        Widget_tools->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(Widget_tools);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(10, 120, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Label_photo = new QLabel(Widget_tools);
        Label_photo->setObjectName(QStringLiteral("Label_photo"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Label_photo->sizePolicy().hasHeightForWidth());
        Label_photo->setSizePolicy(sizePolicy2);
        Label_photo->setMinimumSize(QSize(150, 150));
        Label_photo->setStyleSheet(QLatin1String("border: 4px solid White;\n"
"border-radius : 10px;\n"
"padding :0 8px;\n"
"border-color: rgba(20, 20, 20, 200);"));

        horizontalLayout->addWidget(Label_photo);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Label_Name = new QLabel(Widget_tools);
        Label_Name->setObjectName(QStringLiteral("Label_Name"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Label_Name->sizePolicy().hasHeightForWidth());
        Label_Name->setSizePolicy(sizePolicy3);
        QFont font;
        font.setFamily(QStringLiteral("Ubuntu Condensed"));
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        Label_Name->setFont(font);
        Label_Name->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 170, 0);\n"
"border: 4px solid White;\n"
"border-radius : 10px;\n"
"padding :0 8px;\n"
"border-color: rgba(20, 20, 20, 200);"));

        verticalLayout->addWidget(Label_Name);

        Label_Profession = new QLabel(Widget_tools);
        Label_Profession->setObjectName(QStringLiteral("Label_Profession"));
        sizePolicy3.setHeightForWidth(Label_Profession->sizePolicy().hasHeightForWidth());
        Label_Profession->setSizePolicy(sizePolicy3);
        Label_Profession->setFont(font);
        Label_Profession->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 170, 0);\n"
"border: 4px solid White;\n"
"border-radius : 10px;\n"
"padding :0 8px;\n"
"border-color: rgba(20, 20, 20, 200);"));

        verticalLayout->addWidget(Label_Profession);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tool_Account_managemnt = new QToolButton(Widget_tools);
        tool_Account_managemnt->setObjectName(QStringLiteral("tool_Account_managemnt"));
        sizePolicy3.setHeightForWidth(tool_Account_managemnt->sizePolicy().hasHeightForWidth());
        tool_Account_managemnt->setSizePolicy(sizePolicy3);
        tool_Account_managemnt->setMinimumSize(QSize(48, 48));
        tool_Account_managemnt->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icones/Ressources/User.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_Account_managemnt->setIcon(icon);
        tool_Account_managemnt->setIconSize(QSize(60, 60));
        tool_Account_managemnt->setAutoRaise(true);

        gridLayout->addWidget(tool_Account_managemnt, 1, 1, 1, 1);

        tool_Lock = new QToolButton(Widget_tools);
        tool_Lock->setObjectName(QStringLiteral("tool_Lock"));
        sizePolicy3.setHeightForWidth(tool_Lock->sizePolicy().hasHeightForWidth());
        tool_Lock->setSizePolicy(sizePolicy3);
        tool_Lock->setMinimumSize(QSize(48, 48));
        tool_Lock->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icones/Ressources/Lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_Lock->setIcon(icon1);
        tool_Lock->setIconSize(QSize(60, 60));
        tool_Lock->setAutoRaise(true);

        gridLayout->addWidget(tool_Lock, 1, 0, 1, 1);

        tool_About = new QToolButton(Widget_tools);
        tool_About->setObjectName(QStringLiteral("tool_About"));
        sizePolicy3.setHeightForWidth(tool_About->sizePolicy().hasHeightForWidth());
        tool_About->setSizePolicy(sizePolicy3);
        tool_About->setMinimumSize(QSize(48, 48));
        tool_About->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icones/Ressources/Unisoft.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_About->setIcon(icon2);
        tool_About->setIconSize(QSize(60, 60));
        tool_About->setAutoRaise(true);

        gridLayout->addWidget(tool_About, 1, 3, 1, 1);

        tool_accoun_picture = new QToolButton(Widget_tools);
        tool_accoun_picture->setObjectName(QStringLiteral("tool_accoun_picture"));
        sizePolicy3.setHeightForWidth(tool_accoun_picture->sizePolicy().hasHeightForWidth());
        tool_accoun_picture->setSizePolicy(sizePolicy3);
        tool_accoun_picture->setMinimumSize(QSize(48, 48));
        tool_accoun_picture->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icones/Ressources/Camera.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_accoun_picture->setIcon(icon3);
        tool_accoun_picture->setIconSize(QSize(60, 60));
        tool_accoun_picture->setAutoRaise(true);

        gridLayout->addWidget(tool_accoun_picture, 0, 3, 1, 1);

        tool_mailclient = new QToolButton(Widget_tools);
        tool_mailclient->setObjectName(QStringLiteral("tool_mailclient"));
        sizePolicy3.setHeightForWidth(tool_mailclient->sizePolicy().hasHeightForWidth());
        tool_mailclient->setSizePolicy(sizePolicy3);
        tool_mailclient->setMinimumSize(QSize(48, 48));
        tool_mailclient->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icones/Ressources/Mail3.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_mailclient->setIcon(icon4);
        tool_mailclient->setIconSize(QSize(60, 60));
        tool_mailclient->setAutoRaise(true);

        gridLayout->addWidget(tool_mailclient, 1, 2, 1, 1);

        tool_graphic_chart = new QToolButton(Widget_tools);
        tool_graphic_chart->setObjectName(QStringLiteral("tool_graphic_chart"));
        sizePolicy3.setHeightForWidth(tool_graphic_chart->sizePolicy().hasHeightForWidth());
        tool_graphic_chart->setSizePolicy(sizePolicy3);
        tool_graphic_chart->setMinimumSize(QSize(48, 48));
        tool_graphic_chart->setStyleSheet(QStringLiteral(""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Icones/Ressources/Chart.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_graphic_chart->setIcon(icon5);
        tool_graphic_chart->setIconSize(QSize(60, 60));
        tool_graphic_chart->setAutoRaise(true);

        gridLayout->addWidget(tool_graphic_chart, 0, 2, 1, 1);

        tool_Quit = new QToolButton(Widget_tools);
        tool_Quit->setObjectName(QStringLiteral("tool_Quit"));
        sizePolicy3.setHeightForWidth(tool_Quit->sizePolicy().hasHeightForWidth());
        tool_Quit->setSizePolicy(sizePolicy3);
        tool_Quit->setMinimumSize(QSize(48, 48));
        tool_Quit->setStyleSheet(QStringLiteral(""));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Icones/Ressources/Quit.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_Quit->setIcon(icon6);
        tool_Quit->setIconSize(QSize(60, 60));
        tool_Quit->setAutoRaise(true);

        gridLayout->addWidget(tool_Quit, 0, 0, 1, 1);

        tool_calender = new QToolButton(Widget_tools);
        tool_calender->setObjectName(QStringLiteral("tool_calender"));
        sizePolicy3.setHeightForWidth(tool_calender->sizePolicy().hasHeightForWidth());
        tool_calender->setSizePolicy(sizePolicy3);
        tool_calender->setMinimumSize(QSize(48, 48));
        tool_calender->setStyleSheet(QStringLiteral(""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Icones/Ressources/Calendar.png"), QSize(), QIcon::Normal, QIcon::Off);
        tool_calender->setIcon(icon7);
        tool_calender->setIconSize(QSize(60, 60));
        tool_calender->setAutoRaise(true);

        gridLayout->addWidget(tool_calender, 0, 1, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Clock = new QLCDNumber(Widget_tools);
        Clock->setObjectName(QStringLiteral("Clock"));
        sizePolicy1.setHeightForWidth(Clock->sizePolicy().hasHeightForWidth());
        Clock->setSizePolicy(sizePolicy1);
        Clock->setMinimumSize(QSize(90, 50));
        QFont font1;
        font1.setPointSize(4);
        Clock->setFont(font1);
        Clock->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 170, 0);\n"
"border: 4px solid White;\n"
"border-radius : 10px;\n"
"padding :4 8px;\n"
"border-color: rgba(20, 20, 20, 200);"));
        Clock->setFrameShape(QFrame::NoFrame);
        Clock->setFrameShadow(QFrame::Plain);
        Clock->setLineWidth(0);
        Clock->setSmallDecimalPoint(true);
        Clock->setDigitCount(5);
        Clock->setMode(QLCDNumber::Dec);
        Clock->setSegmentStyle(QLCDNumber::Flat);
        Clock->setProperty("intValue", QVariant(0));

        verticalLayout_2->addWidget(Clock);

        Button_logout = new QPushButton(Widget_tools);
        Button_logout->setObjectName(QStringLiteral("Button_logout"));
        sizePolicy3.setHeightForWidth(Button_logout->sizePolicy().hasHeightForWidth());
        Button_logout->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu Condensed"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        Button_logout->setFont(font2);
        Button_logout->setStyleSheet(QLatin1String("color: rgb(255, 170, 0);\n"
"font: 12pt \"Ubuntu Condensed\";"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Icones/Ressources/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_logout->setIcon(icon8);
        Button_logout->setIconSize(QSize(48, 48));
        Button_logout->setAutoDefault(false);
        Button_logout->setDefault(false);
        Button_logout->setFlat(true);

        verticalLayout_2->addWidget(Button_logout);


        horizontalLayout->addLayout(verticalLayout_2);

        calender = new QCalendarWidget(Widget_tools);
        calender->setObjectName(QStringLiteral("calender"));
        calender->setStyleSheet(QLatin1String("background-color: rgb(61, 61, 61);\n"
"color: rgb(255, 255, 255);\n"
"alternate-background-color: rgb(61, 61, 61);"));

        horizontalLayout->addWidget(calender);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(Widget_tools);

        Widget_Apps = new QWidget(centralwidget);
        Widget_Apps->setObjectName(QStringLiteral("Widget_Apps"));
        sizePolicy.setHeightForWidth(Widget_Apps->sizePolicy().hasHeightForWidth());
        Widget_Apps->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(Widget_Apps);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        Button_Student_management = new QPushButton(Widget_Apps);
        Button_Student_management->setObjectName(QStringLiteral("Button_Student_management"));
        sizePolicy.setHeightForWidth(Button_Student_management->sizePolicy().hasHeightForWidth());
        Button_Student_management->setSizePolicy(sizePolicy);
        Button_Student_management->setMinimumSize(QSize(200, 200));
        Button_Student_management->setCursor(QCursor(Qt::PointingHandCursor));
        Button_Student_management->setMouseTracking(false);
        Button_Student_management->setStyleSheet(QStringLiteral(""));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/Icones/Ressources/graduated-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_Student_management->setIcon(icon9);
        Button_Student_management->setIconSize(QSize(128, 128));
        Button_Student_management->setCheckable(false);
        Button_Student_management->setFlat(false);

        horizontalLayout_3->addWidget(Button_Student_management);

        Button_Employees_management = new QPushButton(Widget_Apps);
        Button_Employees_management->setObjectName(QStringLiteral("Button_Employees_management"));
        sizePolicy.setHeightForWidth(Button_Employees_management->sizePolicy().hasHeightForWidth());
        Button_Employees_management->setSizePolicy(sizePolicy);
        Button_Employees_management->setMinimumSize(QSize(200, 200));
        Button_Employees_management->setStyleSheet(QStringLiteral(""));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/Icones/Ressources/Teachers-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_Employees_management->setIcon(icon10);
        Button_Employees_management->setIconSize(QSize(128, 128));
        Button_Employees_management->setFlat(false);

        horizontalLayout_3->addWidget(Button_Employees_management);

        Button_Financial = new QPushButton(Widget_Apps);
        Button_Financial->setObjectName(QStringLiteral("Button_Financial"));
        sizePolicy.setHeightForWidth(Button_Financial->sizePolicy().hasHeightForWidth());
        Button_Financial->setSizePolicy(sizePolicy);
        Button_Financial->setMinimumSize(QSize(200, 200));
        Button_Financial->setStyleSheet(QStringLiteral(""));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/Icones/Ressources/Money-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_Financial->setIcon(icon11);
        Button_Financial->setIconSize(QSize(128, 128));
        Button_Financial->setFlat(false);

        horizontalLayout_3->addWidget(Button_Financial);

        Button_stats = new QPushButton(Widget_Apps);
        Button_stats->setObjectName(QStringLiteral("Button_stats"));
        sizePolicy.setHeightForWidth(Button_stats->sizePolicy().hasHeightForWidth());
        Button_stats->setSizePolicy(sizePolicy);
        Button_stats->setMinimumSize(QSize(200, 200));
        QFont font3;
        Button_stats->setFont(font3);
        Button_stats->setAutoFillBackground(false);
        Button_stats->setStyleSheet(QStringLiteral(""));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/Icones/Ressources/Network-Statistics-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_stats->setIcon(icon12);
        Button_stats->setIconSize(QSize(128, 128));
        Button_stats->setAutoDefault(false);
        Button_stats->setDefault(false);
        Button_stats->setFlat(false);

        horizontalLayout_3->addWidget(Button_stats);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Button_maintanence = new QPushButton(Widget_Apps);
        Button_maintanence->setObjectName(QStringLiteral("Button_maintanence"));
        sizePolicy.setHeightForWidth(Button_maintanence->sizePolicy().hasHeightForWidth());
        Button_maintanence->setSizePolicy(sizePolicy);
        Button_maintanence->setMinimumSize(QSize(200, 200));
        Button_maintanence->setStyleSheet(QStringLiteral(""));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/Icones/Ressources/settings-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_maintanence->setIcon(icon13);
        Button_maintanence->setIconSize(QSize(128, 128));
        Button_maintanence->setFlat(false);

        horizontalLayout_4->addWidget(Button_maintanence);

        Button_teacher_management = new QPushButton(Widget_Apps);
        Button_teacher_management->setObjectName(QStringLiteral("Button_teacher_management"));
        sizePolicy.setHeightForWidth(Button_teacher_management->sizePolicy().hasHeightForWidth());
        Button_teacher_management->setSizePolicy(sizePolicy);
        Button_teacher_management->setMinimumSize(QSize(200, 200));
        Button_teacher_management->setStyleSheet(QStringLiteral(""));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/Icones/Ressources/128_Teacher-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_teacher_management->setIcon(icon14);
        Button_teacher_management->setIconSize(QSize(128, 128));
        Button_teacher_management->setAutoDefault(false);
        Button_teacher_management->setDefault(false);
        Button_teacher_management->setFlat(false);

        horizontalLayout_4->addWidget(Button_teacher_management);

        Button_Timetable = new QPushButton(Widget_Apps);
        Button_Timetable->setObjectName(QStringLiteral("Button_Timetable"));
        sizePolicy.setHeightForWidth(Button_Timetable->sizePolicy().hasHeightForWidth());
        Button_Timetable->setSizePolicy(sizePolicy);
        Button_Timetable->setMinimumSize(QSize(200, 200));
        Button_Timetable->setAutoFillBackground(false);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/Icones/Ressources/Timetable-icon-512x512.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_Timetable->setIcon(icon15);
        Button_Timetable->setIconSize(QSize(128, 128));
        Button_Timetable->setFlat(false);

        horizontalLayout_4->addWidget(Button_Timetable);

        Button_grades = new QPushButton(Widget_Apps);
        Button_grades->setObjectName(QStringLiteral("Button_grades"));
        sizePolicy.setHeightForWidth(Button_grades->sizePolicy().hasHeightForWidth());
        Button_grades->setSizePolicy(sizePolicy);
        Button_grades->setMinimumSize(QSize(200, 200));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/Icones/Ressources/Test-paper-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        Button_grades->setIcon(icon16);
        Button_grades->setIconSize(QSize(128, 128));
        Button_grades->setFlat(false);

        horizontalLayout_4->addWidget(Button_grades);


        verticalLayout_4->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout_3->addWidget(Widget_Apps);

        Home->setCentralWidget(centralwidget);

        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QMainWindow *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "MainWindow", 0));
        actionQuit->setText(QApplication::translate("Home", "Quit", 0));
        actionAbout_Qt->setText(QApplication::translate("Home", "About Qt", 0));
        actionAbout_Unisoft->setText(QApplication::translate("Home", "About Unisoft", 0));
        actionHelp->setText(QApplication::translate("Home", "Help", 0));
        actionLanguage->setText(QApplication::translate("Home", "Language", 0));
        actionSettings->setText(QApplication::translate("Home", "Settings", 0));
        actionEdit_Account->setText(QApplication::translate("Home", "Edit Account", 0));
        Label_photo->setText(QString());
        Label_Name->setText(QApplication::translate("Home", "Name", 0));
        Label_Profession->setText(QApplication::translate("Home", "Profession", 0));
        tool_Account_managemnt->setText(QString());
        tool_Lock->setText(QString());
        tool_About->setText(QString());
        tool_accoun_picture->setText(QString());
        tool_mailclient->setText(QString());
        tool_graphic_chart->setText(QString());
        tool_Quit->setText(QString());
        tool_calender->setText(QString());
        Button_logout->setText(QString());
#ifndef QT_NO_WHATSTHIS
        Button_Student_management->setWhatsThis(QApplication::translate("Home", "Student management", 0));
#endif // QT_NO_WHATSTHIS
        Button_Student_management->setText(QString());
#ifndef QT_NO_WHATSTHIS
        Button_Employees_management->setWhatsThis(QApplication::translate("Home", "Employees management", 0));
#endif // QT_NO_WHATSTHIS
        Button_Employees_management->setText(QString());
#ifndef QT_NO_WHATSTHIS
        Button_Financial->setWhatsThis(QApplication::translate("Home", "Financial management", 0));
#endif // QT_NO_WHATSTHIS
        Button_Financial->setText(QString());
#ifndef QT_NO_WHATSTHIS
        Button_stats->setWhatsThis(QApplication::translate("Home", "Statistics", 0));
#endif // QT_NO_WHATSTHIS
        Button_stats->setText(QString());
#ifndef QT_NO_WHATSTHIS
        Button_maintanence->setWhatsThis(QApplication::translate("Home", "Maintenance", 0));
#endif // QT_NO_WHATSTHIS
        Button_maintanence->setText(QString());
#ifndef QT_NO_WHATSTHIS
        Button_teacher_management->setWhatsThis(QApplication::translate("Home", "Teacher managemnt", 0));
#endif // QT_NO_WHATSTHIS
        Button_teacher_management->setText(QString());
        Button_Timetable->setText(QString());
        Button_grades->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
