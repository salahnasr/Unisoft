#ifndef STATISTICS_H
#define STATISTICS_H

#include <QDialog>

namespace Ui {
class Statistics;
}

class Statistics : public QDialog
{
    Q_OBJECT

public:
    explicit Statistics(QWidget *parent = 0);
    ~Statistics();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::Statistics *ui;
};

#endif // STATISTICS_H
