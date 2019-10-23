/********************************************************************************
** Form generated from reading UI file 'financial_management.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCIAL_MANAGEMENT_H
#define UI_FINANCIAL_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Financial_management
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *Students;
    QWidget *Students_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *refresh;
    QTreeWidget *treeWidget;
    QPushButton *manage;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *refresh_2;
    QTreeWidget *treeWidget_3;
    QPushButton *manage_2;
    QWidget *tab_4;
    QPushButton *refresh_4;
    QPushButton *manage_4;
    QTreeWidget *treeWidget_5;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QPushButton *refresh_3;
    QTreeWidget *treeWidget_4;
    QWidget *tab_3;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QCheckBox *FN;
    QCheckBox *PN;
    QCheckBox *ID;
    QCheckBox *CIN;
    QCheckBox *AGE;
    QCheckBox *LN;
    QCheckBox *AD;
    QCheckBox *EMAIL;
    QCheckBox *CL;
    QCheckBox *PF;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *ok;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancel;

    void setupUi(QDialog *Financial_management)
    {
        if (Financial_management->objectName().isEmpty())
            Financial_management->setObjectName(QStringLiteral("Financial_management"));
        Financial_management->resize(698, 585);
        Financial_management->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px solid black;\n"
"     background-color: #ffa02f;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
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
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
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
"        stop:0.2 #3"
                        "43434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
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
"  \n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    \n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton"
                        ":pressed\n"
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
"    "
                        "border: 2px solid darkgray;\n"
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
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1"
                        ": 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
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
"QScrollBar::right-ar"
                        "row:horizontal, QScrollBar::left-arrow:horizontal\n"
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
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
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
"      subcontr"
                        "ol-position: bottom;\n"
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
"      background: none;\n"
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
""
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
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
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
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, st"
                        "op: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
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
"}\n"
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
"    border: "
                        "2px solid grey;\n"
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
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
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
"    border-bottom-s"
                        "tyle: solid;\n"
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
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
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
"        stop: 0.2"
                        "5 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"\n"
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
""));
        verticalLayout = new QVBoxLayout(Financial_management);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(Financial_management);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Students = new QTabWidget(widget);
        Students->setObjectName(QStringLiteral("Students"));
        Students->setMinimumSize(QSize(662, 0));
        Students->setMaximumSize(QSize(662, 16777215));
        Students->setSizeIncrement(QSize(0, 0));
        Students->setBaseSize(QSize(0, 0));
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        Students->setFont(font);
        Students->setCursor(QCursor(Qt::PointingHandCursor));
        Students->setMouseTracking(true);
        Students->setStyleSheet(QLatin1String("QTabWidget::tab-bar {\n"
"\n"
" }\n"
"\n"
" QTabBar::tab {\n"
"  background:orange;\n"
"  color: white;\n"
"  padding: 10px;\n"
" }\n"
"\n"
" QTabBar::tab:selected {\n"
"  background: lightgray;\n"
" }"));
        Students->setIconSize(QSize(24, 27));
        Students->setElideMode(Qt::ElideNone);
        Students_2 = new QWidget();
        Students_2->setObjectName(QStringLiteral("Students_2"));
        verticalLayout_2 = new QVBoxLayout(Students_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        refresh = new QPushButton(Students_2);
        refresh->setObjectName(QStringLiteral("refresh"));
        refresh->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icones/Ressources/reload_refresh.000.png"), QSize(), QIcon::Normal, QIcon::Off);
        refresh->setIcon(icon);
        refresh->setIconSize(QSize(34, 34));

        verticalLayout_2->addWidget(refresh);

        treeWidget = new QTreeWidget(Students_2);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setForeground(8, brush2);
        __qtreewidgetitem->setForeground(1, brush1);
        __qtreewidgetitem->setBackground(0, QColor(0, 0, 0));
        __qtreewidgetitem->setForeground(0, brush);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        treeWidget->setFont(font1);
        treeWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        treeWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        treeWidget->setAcceptDrops(false);
        treeWidget->setStyleSheet(QLatin1String("QTreeView {\n"
"     show-decoration-selected: 1;\n"
" }\n"
"\n"
" QTreeView::item {\n"
"      border: 1px solid #d9d9d9;\n"
"     border-top-color: transparent;\n"
"     border-bottom-color: transparent;\n"
" }\n"
"\n"
" QTreeView::item:hover {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e7effd, stop: 1 #cbdaf1);\n"
"     border: 1px solid #bfcde4;\n"
" }\n"
"\n"
" QTreeView::item:selected {\n"
"     border: 1px solid #567dbc;\n"
" }\n"
"\n"
" QTreeView::item:selected:active{\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ea1f1, stop: 1 #567dbc);\n"
" }\n"
"\n"
" QTreeView::item:selected:!active {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6b9be8, stop: 1 #577fbf);\n"
" }"));
        treeWidget->setFrameShape(QFrame::WinPanel);
        treeWidget->setFrameShadow(QFrame::Sunken);
        treeWidget->setDragDropMode(QAbstractItemView::DragDrop);
        treeWidget->setSelectionMode(QAbstractItemView::ContiguousSelection);
        treeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidget->setIconSize(QSize(0, 0));
        treeWidget->setTextElideMode(Qt::ElideMiddle);
        treeWidget->setRootIsDecorated(true);
        treeWidget->setUniformRowHeights(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setAnimated(true);
        treeWidget->setAllColumnsShowFocus(true);
        treeWidget->header()->setDefaultSectionSize(125);
        treeWidget->header()->setHighlightSections(true);
        treeWidget->header()->setMinimumSectionSize(26);

        verticalLayout_2->addWidget(treeWidget);

        manage = new QPushButton(Students_2);
        manage->setObjectName(QStringLiteral("manage"));
        manage->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icones/Ressources/settings-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        manage->setIcon(icon1);
        manage->setIconSize(QSize(31, 31));

        verticalLayout_2->addWidget(manage);

        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icones/Ressources/graduated-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Students->addTab(Students_2, icon2, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        refresh_2 = new QPushButton(tab_2);
        refresh_2->setObjectName(QStringLiteral("refresh_2"));
        refresh_2->setIcon(icon);
        refresh_2->setIconSize(QSize(34, 34));

        verticalLayout_5->addWidget(refresh_2);

        treeWidget_3 = new QTreeWidget(tab_2);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::NoBrush);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::NoBrush);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setForeground(8, brush5);
        __qtreewidgetitem1->setForeground(1, brush4);
        __qtreewidgetitem1->setBackground(0, QColor(0, 0, 0));
        __qtreewidgetitem1->setForeground(0, brush3);
        treeWidget_3->setHeaderItem(__qtreewidgetitem1);
        treeWidget_3->setObjectName(QStringLiteral("treeWidget_3"));
        treeWidget_3->setFont(font1);
        treeWidget_3->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        treeWidget_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        treeWidget_3->setAcceptDrops(false);
        treeWidget_3->setStyleSheet(QLatin1String("QTreeView {\n"
"     show-decoration-selected: 1;\n"
" }\n"
"\n"
" QTreeView::item {\n"
"      border: 1px solid #d9d9d9;\n"
"     border-top-color: transparent;\n"
"     border-bottom-color: transparent;\n"
" }\n"
"\n"
" QTreeView::item:hover {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e7effd, stop: 1 #cbdaf1);\n"
"     border: 1px solid #bfcde4;\n"
" }\n"
"\n"
" QTreeView::item:selected {\n"
"     border: 1px solid #567dbc;\n"
" }\n"
"\n"
" QTreeView::item:selected:active{\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ea1f1, stop: 1 #567dbc);\n"
" }\n"
"\n"
" QTreeView::item:selected:!active {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6b9be8, stop: 1 #577fbf);\n"
" }"));
        treeWidget_3->setFrameShape(QFrame::WinPanel);
        treeWidget_3->setFrameShadow(QFrame::Sunken);
        treeWidget_3->setDragDropMode(QAbstractItemView::NoDragDrop);
        treeWidget_3->setSelectionMode(QAbstractItemView::ContiguousSelection);
        treeWidget_3->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidget_3->setIconSize(QSize(0, 0));
        treeWidget_3->setTextElideMode(Qt::ElideMiddle);
        treeWidget_3->setRootIsDecorated(true);
        treeWidget_3->setUniformRowHeights(true);
        treeWidget_3->setSortingEnabled(true);
        treeWidget_3->setAnimated(true);
        treeWidget_3->setAllColumnsShowFocus(true);
        treeWidget_3->header()->setDefaultSectionSize(125);
        treeWidget_3->header()->setHighlightSections(true);
        treeWidget_3->header()->setMinimumSectionSize(26);

        verticalLayout_5->addWidget(treeWidget_3);

        manage_2 = new QPushButton(tab_2);
        manage_2->setObjectName(QStringLiteral("manage_2"));
        manage_2->setIcon(icon1);
        manage_2->setIconSize(QSize(31, 31));

        verticalLayout_5->addWidget(manage_2);

        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icones/Ressources/128_Teacher-1.png"), QSize(), QIcon::Normal, QIcon::Off);
        Students->addTab(tab_2, icon3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        refresh_4 = new QPushButton(tab_4);
        refresh_4->setObjectName(QStringLiteral("refresh_4"));
        refresh_4->setGeometry(QRect(10, 10, 642, 42));
        refresh_4->setIcon(icon);
        refresh_4->setIconSize(QSize(34, 34));
        manage_4 = new QPushButton(tab_4);
        manage_4->setObjectName(QStringLiteral("manage_4"));
        manage_4->setGeometry(QRect(10, 376, 642, 39));
        manage_4->setIcon(icon1);
        manage_4->setIconSize(QSize(31, 31));
        treeWidget_5 = new QTreeWidget(tab_4);
        treeWidget_5->setObjectName(QStringLiteral("treeWidget_5"));
        treeWidget_5->setGeometry(QRect(10, 58, 642, 312));
        treeWidget_5->setFont(font1);
        treeWidget_5->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        treeWidget_5->setContextMenuPolicy(Qt::DefaultContextMenu);
        treeWidget_5->setAcceptDrops(false);
        treeWidget_5->setStyleSheet(QLatin1String("QTreeView {\n"
"     show-decoration-selected: 1;\n"
" }\n"
"\n"
" QTreeView::item {\n"
"      border: 1px solid #d9d9d9;\n"
"     border-top-color: transparent;\n"
"     border-bottom-color: transparent;\n"
" }\n"
"\n"
" QTreeView::item:hover {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e7effd, stop: 1 #cbdaf1);\n"
"     border: 1px solid #bfcde4;\n"
" }\n"
"\n"
" QTreeView::item:selected {\n"
"     border: 1px solid #567dbc;\n"
" }\n"
"\n"
" QTreeView::item:selected:active{\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ea1f1, stop: 1 #567dbc);\n"
" }\n"
"\n"
" QTreeView::item:selected:!active {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6b9be8, stop: 1 #577fbf);\n"
" }"));
        treeWidget_5->setFrameShape(QFrame::WinPanel);
        treeWidget_5->setFrameShadow(QFrame::Sunken);
        treeWidget_5->setDragDropMode(QAbstractItemView::NoDragDrop);
        treeWidget_5->setSelectionMode(QAbstractItemView::ContiguousSelection);
        treeWidget_5->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidget_5->setIconSize(QSize(0, 0));
        treeWidget_5->setTextElideMode(Qt::ElideMiddle);
        treeWidget_5->setRootIsDecorated(true);
        treeWidget_5->setUniformRowHeights(true);
        treeWidget_5->setSortingEnabled(true);
        treeWidget_5->setAnimated(true);
        treeWidget_5->setAllColumnsShowFocus(true);
        treeWidget_5->header()->setDefaultSectionSize(125);
        treeWidget_5->header()->setHighlightSections(true);
        treeWidget_5->header()->setMinimumSectionSize(26);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icones/Ressources/Teachers-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Students->addTab(tab_4, icon4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        refresh_3 = new QPushButton(tab);
        refresh_3->setObjectName(QStringLiteral("refresh_3"));
        refresh_3->setCursor(QCursor(Qt::PointingHandCursor));
        refresh_3->setIcon(icon);
        refresh_3->setIconSize(QSize(34, 34));

        verticalLayout_4->addWidget(refresh_3);

        treeWidget_4 = new QTreeWidget(tab);
        QBrush brush6(QColor(0, 0, 0, 255));
        brush6.setStyle(Qt::NoBrush);
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::NoBrush);
        QBrush brush8(QColor(0, 0, 0, 255));
        brush8.setStyle(Qt::NoBrush);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setForeground(8, brush8);
        __qtreewidgetitem2->setForeground(1, brush7);
        __qtreewidgetitem2->setBackground(0, QColor(0, 0, 0));
        __qtreewidgetitem2->setForeground(0, brush6);
        treeWidget_4->setHeaderItem(__qtreewidgetitem2);
        treeWidget_4->setObjectName(QStringLiteral("treeWidget_4"));
        treeWidget_4->setFont(font1);
        treeWidget_4->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        treeWidget_4->setContextMenuPolicy(Qt::DefaultContextMenu);
        treeWidget_4->setAcceptDrops(false);
        treeWidget_4->setStyleSheet(QLatin1String("QTreeView {\n"
"     show-decoration-selected: 1;\n"
" }\n"
"\n"
" QTreeView::item {\n"
"      border: 1px solid #d9d9d9;\n"
"     border-top-color: transparent;\n"
"     border-bottom-color: transparent;\n"
" }\n"
"\n"
" QTreeView::item:hover {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e7effd, stop: 1 #cbdaf1);\n"
"     border: 1px solid #bfcde4;\n"
" }\n"
"\n"
" QTreeView::item:selected {\n"
"     border: 1px solid #567dbc;\n"
" }\n"
"\n"
" QTreeView::item:selected:active{\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6ea1f1, stop: 1 #567dbc);\n"
" }\n"
"\n"
" QTreeView::item:selected:!active {\n"
"     background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #6b9be8, stop: 1 #577fbf);\n"
" }"));
        treeWidget_4->setFrameShape(QFrame::WinPanel);
        treeWidget_4->setFrameShadow(QFrame::Sunken);
        treeWidget_4->setDragDropMode(QAbstractItemView::NoDragDrop);
        treeWidget_4->setSelectionMode(QAbstractItemView::ContiguousSelection);
        treeWidget_4->setSelectionBehavior(QAbstractItemView::SelectRows);
        treeWidget_4->setIconSize(QSize(0, 0));
        treeWidget_4->setTextElideMode(Qt::ElideMiddle);
        treeWidget_4->setRootIsDecorated(true);
        treeWidget_4->setUniformRowHeights(true);
        treeWidget_4->setSortingEnabled(true);
        treeWidget_4->setAnimated(true);
        treeWidget_4->setAllColumnsShowFocus(true);
        treeWidget_4->header()->setDefaultSectionSize(125);
        treeWidget_4->header()->setHighlightSections(true);
        treeWidget_4->header()->setMinimumSectionSize(26);

        verticalLayout_4->addWidget(treeWidget_4);

        Students->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton = new QPushButton(tab_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(520, 30, 101, 81));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Icones/Ressources/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setIconSize(QSize(68, 68));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 57, 15));
        lineEdit = new QLineEdit(tab_3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(30, 30, 331, 23));
        tableView = new QTableView(tab_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 150, 641, 261));
        FN = new QCheckBox(tab_3);
        FN->setObjectName(QStringLiteral("FN"));
        FN->setGeometry(QRect(10, 70, 85, 21));
        PN = new QCheckBox(tab_3);
        PN->setObjectName(QStringLiteral("PN"));
        PN->setGeometry(QRect(100, 110, 111, 21));
        ID = new QCheckBox(tab_3);
        ID->setObjectName(QStringLiteral("ID"));
        ID->setGeometry(QRect(220, 110, 51, 21));
        CIN = new QCheckBox(tab_3);
        CIN->setObjectName(QStringLiteral("CIN"));
        CIN->setGeometry(QRect(100, 70, 85, 21));
        AGE = new QCheckBox(tab_3);
        AGE->setObjectName(QStringLiteral("AGE"));
        AGE->setGeometry(QRect(280, 70, 85, 21));
        LN = new QCheckBox(tab_3);
        LN->setObjectName(QStringLiteral("LN"));
        LN->setGeometry(QRect(10, 110, 85, 21));
        AD = new QCheckBox(tab_3);
        AD->setObjectName(QStringLiteral("AD"));
        AD->setGeometry(QRect(190, 70, 85, 21));
        EMAIL = new QCheckBox(tab_3);
        EMAIL->setObjectName(QStringLiteral("EMAIL"));
        EMAIL->setGeometry(QRect(280, 110, 85, 21));
        CL = new QCheckBox(tab_3);
        CL->setObjectName(QStringLiteral("CL"));
        CL->setGeometry(QRect(370, 70, 85, 21));
        PF = new QCheckBox(tab_3);
        PF->setObjectName(QStringLiteral("PF"));
        PF->setGeometry(QRect(370, 110, 85, 21));
        Students->addTab(tab_3, icon5, QString());

        verticalLayout_3->addWidget(Students);


        verticalLayout->addWidget(widget);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        ok = new QPushButton(Financial_management);
        ok->setObjectName(QStringLiteral("ok"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ok->sizePolicy().hasHeightForWidth());
        ok->setSizePolicy(sizePolicy);
        ok->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Icones/Ressources/Thumb_Up.png"), QSize(), QIcon::Normal, QIcon::Off);
        ok->setIcon(icon6);
        ok->setIconSize(QSize(60, 55));

        horizontalLayout_6->addWidget(ok);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        cancel = new QPushButton(Financial_management);
        cancel->setObjectName(QStringLiteral("cancel"));
        sizePolicy.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Icones/Ressources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancel->setIcon(icon7);
        cancel->setIconSize(QSize(60, 55));

        horizontalLayout_6->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(Financial_management);

        Students->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Financial_management);
    } // setupUi

    void retranslateUi(QDialog *Financial_management)
    {
        Financial_management->setWindowTitle(QApplication::translate("Financial_management", "Esprit-RP : Financial management", 0));
        refresh->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(11, QApplication::translate("Financial_management", "Fees payed", 0));
        ___qtreewidgetitem->setText(10, QApplication::translate("Financial_management", "Email", 0));
        ___qtreewidgetitem->setText(9, QApplication::translate("Financial_management", "Classes", 0));
        ___qtreewidgetitem->setText(8, QApplication::translate("Financial_management", "Password", 0));
        ___qtreewidgetitem->setText(7, QApplication::translate("Financial_management", "Profession", 0));
        ___qtreewidgetitem->setText(6, QApplication::translate("Financial_management", "ID", 0));
        ___qtreewidgetitem->setText(5, QApplication::translate("Financial_management", "Adresse", 0));
        ___qtreewidgetitem->setText(4, QApplication::translate("Financial_management", "Age", 0));
        ___qtreewidgetitem->setText(3, QApplication::translate("Financial_management", "Phone number", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("Financial_management", "CIN", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("Financial_management", "Last name", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("Financial_management", "First name", 0));
        manage->setText(QString());
        Students->setTabText(Students->indexOf(Students_2), QApplication::translate("Financial_management", "Students", 0));
        refresh_2->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_3->headerItem();
        ___qtreewidgetitem1->setText(11, QApplication::translate("Financial_management", "session", 0));
        ___qtreewidgetitem1->setText(10, QApplication::translate("Financial_management", "Salary", 0));
        ___qtreewidgetitem1->setText(9, QApplication::translate("Financial_management", "Email", 0));
        ___qtreewidgetitem1->setText(8, QApplication::translate("Financial_management", "Password", 0));
        ___qtreewidgetitem1->setText(7, QApplication::translate("Financial_management", "Profession", 0));
        ___qtreewidgetitem1->setText(6, QApplication::translate("Financial_management", "ID", 0));
        ___qtreewidgetitem1->setText(5, QApplication::translate("Financial_management", "Adresse", 0));
        ___qtreewidgetitem1->setText(4, QApplication::translate("Financial_management", "Age", 0));
        ___qtreewidgetitem1->setText(3, QApplication::translate("Financial_management", "Phone number", 0));
        ___qtreewidgetitem1->setText(2, QApplication::translate("Financial_management", "CIN", 0));
        ___qtreewidgetitem1->setText(1, QApplication::translate("Financial_management", "Last name", 0));
        ___qtreewidgetitem1->setText(0, QApplication::translate("Financial_management", "First name", 0));
        manage_2->setText(QString());
        Students->setTabText(Students->indexOf(tab_2), QApplication::translate("Financial_management", "Teachers", 0));
        refresh_4->setText(QString());
        manage_4->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget_5->headerItem();
        ___qtreewidgetitem2->setText(5, QApplication::translate("Financial_management", "salary", 0));
        ___qtreewidgetitem2->setText(4, QApplication::translate("Financial_management", "Diplome", 0));
        ___qtreewidgetitem2->setText(3, QApplication::translate("Financial_management", "Grade level", 0));
        ___qtreewidgetitem2->setText(2, QApplication::translate("Financial_management", "Age", 0));
        ___qtreewidgetitem2->setText(1, QApplication::translate("Financial_management", "Name", 0));
        ___qtreewidgetitem2->setText(0, QApplication::translate("Financial_management", "ID", 0));
        Students->setTabText(Students->indexOf(tab_4), QApplication::translate("Financial_management", "Employees", 0));
        refresh_3->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget_4->headerItem();
        ___qtreewidgetitem3->setText(9, QApplication::translate("Financial_management", "Email", 0));
        ___qtreewidgetitem3->setText(8, QApplication::translate("Financial_management", "Password", 0));
        ___qtreewidgetitem3->setText(7, QApplication::translate("Financial_management", "Profession", 0));
        ___qtreewidgetitem3->setText(6, QApplication::translate("Financial_management", "ID", 0));
        ___qtreewidgetitem3->setText(5, QApplication::translate("Financial_management", "Adresse", 0));
        ___qtreewidgetitem3->setText(4, QApplication::translate("Financial_management", "Age", 0));
        ___qtreewidgetitem3->setText(3, QApplication::translate("Financial_management", "Phone number", 0));
        ___qtreewidgetitem3->setText(2, QApplication::translate("Financial_management", "CIN", 0));
        ___qtreewidgetitem3->setText(1, QApplication::translate("Financial_management", "Last name", 0));
        ___qtreewidgetitem3->setText(0, QApplication::translate("Financial_management", "First name", 0));
        Students->setTabText(Students->indexOf(tab), QApplication::translate("Financial_management", "all", 0));
        pushButton->setText(QString());
        label->setText(QApplication::translate("Financial_management", "Search", 0));
        FN->setText(QApplication::translate("Financial_management", "First name", 0));
        PN->setText(QApplication::translate("Financial_management", "Phone number", 0));
        ID->setText(QApplication::translate("Financial_management", "ID", 0));
        CIN->setText(QApplication::translate("Financial_management", "CIN", 0));
        AGE->setText(QApplication::translate("Financial_management", "Age", 0));
        LN->setText(QApplication::translate("Financial_management", "Last name", 0));
        AD->setText(QApplication::translate("Financial_management", "Adress", 0));
        EMAIL->setText(QApplication::translate("Financial_management", "Email", 0));
        CL->setText(QApplication::translate("Financial_management", "Classes", 0));
        PF->setText(QApplication::translate("Financial_management", "Profession", 0));
        Students->setTabText(Students->indexOf(tab_3), QApplication::translate("Financial_management", "search", 0));
        ok->setText(QString());
        cancel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Financial_management: public Ui_Financial_management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIAL_MANAGEMENT_H
