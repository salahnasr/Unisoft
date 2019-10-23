#include "headers/stylesheet.h"
#include "ui_stylesheet.h"

StyleSheet::StyleSheet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StyleSheet)
{
    ui->setupUi(this);
    ui->Text_stylesheet->setText(qApp->styleSheet());
    DefaultStyle=ui->Text_stylesheet->toPlainText();
}

StyleSheet::~StyleSheet()
{
    delete ui;
}

void StyleSheet::on_Button_close_clicked()
{
    qApp->setStyleSheet(DefaultStyle);
accept();
}

void StyleSheet::on_Button_apply_clicked()
{
    qApp->setStyleSheet(ui->Text_stylesheet->toPlainText());

}

void StyleSheet::on_Button_OK_clicked()
{
qApp->setStyleSheet(ui->Text_stylesheet->toPlainText());
accept();}
