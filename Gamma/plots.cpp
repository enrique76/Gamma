#include "plots.h"
#include "ui_plots.h"

Plots::Plots(QWidget *parent) :QDialog(parent),ui(new Ui::Plots){
    ui->setupUi(this);

    // generate some data:
    QVector<double> x(101), y(101); // initialize with entries 0..100
    for (int i=0; i<101; ++i)
    {
      x[i] = i/50.0 - 1; // x goes from -1 to 1
      y[i] = x[i]*x[i]; // let's plot a quadratic function
    }
    // create graph and assign data to it:
    ui->base->addGraph();
    ui->base->graph(0)->setData(x, y);
    // give the axes some labels:
    ui->base->xAxis->setLabel("x");
    ui->base->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    ui->base->xAxis->setRange(-1, 1);
    ui->base->yAxis->setRange(0, 1);
    ui->base->replot();
}

Plots::~Plots()
{
    delete ui;
}
