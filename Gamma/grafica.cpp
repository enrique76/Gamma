#include "grafica.h"
#include "ui_grafica.h"
#include<QPixmap>
#include"matriz.h"
#include<time.h>

grafica::grafica(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::grafica)
{
    ui->setupUi(this);
}

grafica::~grafica()
{
    delete ui;
}

void grafica::CreateItem(QTreeWidgetItem *i){
    item = new QTreeWidgetItem(i);
    item->setText(0,this->nombre);
    item->setIcon(0,QIcon(this->icono));
}

void grafica::SetRutaPadre(QString r){
    this->rutaPadre = r;
}

void grafica::SetRuta(QString r){
    this->ruta = r;
}

void grafica::SetNombre(QString n){
    this->nombre = n;
}

void grafica::SetIcono(QString i){
    this->icono = i;
}

QString grafica::GetRutaPadre(){
return this->rutaPadre;
}

QString grafica::GetRuta(){
return this->ruta;
}

QString grafica::GetNombre(){
    return this->nombre;
}

QTreeWidgetItem *grafica::GetItem()
{
    return this->item;
}

void grafica::CreateGraph(Matriz *m){


    //this->ruta += "/g.png";

    double miy = m->GetValue(0,0).toDouble(),my = m->GetValue(0,0).toDouble();

    // generate some data:
//    QVector<double> x(101), y(101),x2(101),y2(101); // initialize with entries 0..100
//    for (int i=0; i<101; ++i)
//    {
//      x[i] = i/50.0 - 1; // x goes from -1 to 1
//      x2[i] = x[i];
//      y[i] = x[i]*x[i]; // let's plot a quadratic function
//      y2[i] = y[i]*4;
//    }

    QVector<double> x;

    QVector<QVector<double>> y;

    QVector<QPen> c;

    c.append(QPen(Qt::red));
    c.append(QPen(Qt::blue));
    c.append(QPen(Qt::black));
    c.append(QPen(Qt::darkBlue));
    c.append(QPen(Qt::yellow));
    c.append(QPen(Qt::green));
    c.append(QPen(Qt::gray));
    c.append(QPen(Qt::darkGreen));
    c.append(QPen(Qt::darkGray));
    c.append(QPen(Qt::darkCyan));
    c.append(QPen(Qt::cyan));
    c.append(QPen(Qt::magenta));
    c.append(QPen(Qt::darkRed));
    c.append(QPen(Qt::lightGray));

    srand(time(NULL));

    for(int i=0;i<m->GetColumnas();i++){
        int r = 0 + rand()%(c.size());

        x.append(i);
        QVector<double> aux;
        for(int j=0;j<m->GetFilas();j++){
            aux.append(m->GetValue(i,j).toDouble());

            if(aux.at(j) < miy){
                miy = aux.at(j);
            }

            if(aux.at(j) > my){
                my = aux.at(j);
            }

        }

        y.append(aux);

        ui->base->addGraph();
        ui->base->graph(i)->setData(x,y.at(i));
        ui->base->graph(i)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle));
        ui->base->graph(i)->setLayer("Grafica#"+QString::number(i));
        //ui->base->graph(i)->setBrush(QBrush(QColor(0+i,0+i+i,0+i+i+i,0+i+i+i+i)));
        ui->base->graph(i)->setPen(c.at(r));
        ui->base->graph(i)->setName("Filas#"+QString::number(i));
    }

//    // create graph and assign data to it:
//    ui->base->addGraph();
//    ui->base->graph(0)->setData(x,y);

//    ui->base->addGraph();
//    ui->base->graph(1)->setData(x2, y2);
    // give the axes some labels:
    ui->base->xAxis->setLabel("x");
    ui->base->yAxis->setLabel("y");
    // set axes ranges, so we see all data:
    ui->base->xAxis->setRange(-1, m->GetColumnas()+1);
    ui->base->yAxis->setRange(miy-1, my+1);
    ui->base->legend->setVisible(true);


    ui->base->replot();

    ui->base->savePng(this->ruta+"/"+m->GetNameItem()+"png");
}
