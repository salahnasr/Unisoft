#ifndef STATISTICSDRAWER_H
#define STATISTICSDRAWER_H
#include "qcustomplot.h"

enum Statstypes {Students, Teachers, Incomes, Outcomes, Materials,Employees,GRAPH_COUNT};

class StatisticsDrawer
{
public:
    StatisticsDrawer();
    StatisticsDrawer(QCustomPlot * plotter,QCustomPlot * plotter2);
    void SetData(Statstypes type,QVector<double> x,QVector<double> y,bool Plotter1 = true);

private:
    void ScaleToAxis(QVector<double> &x);
    double GetMin(QVector<double> x);
    double GetMax(QVector<double> x);

    QCustomPlot* plotter;
    QCustomPlot* plotter2;
};

#endif // STATISTICSDRAWER_H
