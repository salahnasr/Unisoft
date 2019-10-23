#include "headers/statisticsdrawer.h"


Qt::GlobalColor Colors[] = {Qt::red,Qt::blue,Qt::green,Qt::darkMagenta,Qt::black,Qt::magenta};


StatisticsDrawer::StatisticsDrawer(QCustomPlot * plotter,QCustomPlot * plotter2 )
{
    this->plotter = plotter;
    this->plotter2 = plotter2;
    for(int i = 0; i<GRAPH_COUNT;i++){
        plotter->addGraph();
        plotter2->addGraph();
    }
    for(int i = 0; i<GRAPH_COUNT;i++){
        QPen p(Colors[i]);
        p.setWidthF(2);
        plotter->graph(i)->setPen(p);
        plotter2->graph(i)->setPen(p);
        QColor col(Colors[i]);
        col.setAlpha(50);
        plotter->graph(i)->setBrush(QBrush(col));
        plotter2->graph(i)->setBrush(QBrush(col));
    }
    plotter->xAxis->setRange(0, 100);
    plotter->yAxis->setRange(0, 100);
    plotter2->xAxis->setRange(0, 100);
    plotter2->yAxis->setRange(0, 100);
}

void StatisticsDrawer::SetData(Statstypes type,QVector<double> x,QVector<double> y, bool Plotter1){
    ScaleToAxis(x);
    ScaleToAxis(y);
    if(Plotter1){
        plotter->graph(type)->setData(x,y);
        plotter->replot();
    }
    else {
        plotter2->graph(type)->setData(x,y);
        plotter2->replot();
    }

}

void StatisticsDrawer::ScaleToAxis(QVector<double> &x){
    if(x.empty()) return;
    double min = GetMin(x),max = GetMax(x);
    double offset = -min;
    double scale = (1/(max+offset))*100;

    for (int i=0; i< x.size(); i++){
        x[i]= (x[i]+offset) * scale;
    }

}

double StatisticsDrawer::GetMin(QVector<double> x){

    double ret = 0;
    if(x.size()==0) return ret;
    ret = x.at(0);
    for(int i=1; i<x.size(); i++){
        if(x.at(i)<ret)
            ret=x.at(i);
    }
    return ret;
}

double StatisticsDrawer::GetMax(QVector<double> x){
    double ret = 0;
    if(x.size()==0) return ret;
    ret = x.at(0);
    for(int i=1; i<x.size(); i++){
        if(x.at(i)>ret)
            ret=x.at(i);
    }
    return ret;
}

