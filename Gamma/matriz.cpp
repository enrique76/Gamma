#include "matriz.h"
#include "ui_matriz.h"

matriz::matriz(QWidget *parent) :QWidget(parent),ui(new Ui::matriz){
    ui->setupUi(this);


}

matriz::~matriz()
{
    delete ui;
}

void matriz::Crear(int filas, int columnas, QString nombre,bool vector){
    this->filas = filas;
    this->columnas = columnas;
    this->nombre = nombre;

    ui->m->setColumnCount(this->columnas);
    ui->m->setRowCount(this->filas);
    ui->v->setColumnCount(1);
    ui->v->setRowCount(this->filas);
    ui->v->setVisible(vector);
    ui->cambioVector->setVisible(vector);
}

void matriz::setCapas(int i){
    ui->capas->setCurrentIndex(i);
}

void matriz::AgregarValorMatriz(int i, int j, QString v){
    ui->m->setItem(i,j,new QTableWidgetItem(v));
}

void matriz::AgregarValorVector(int j, QString v){
    ui->v->setItem(0,j,new QTableWidgetItem(v));
}

void matriz::CrearRama(QTreeWidgetItem *padre, QIcon icono){
    rama = new QTreeWidgetItem(padre);
    rama->setText(0,this->nombre);
    rama->setIcon(0,icono);
}
