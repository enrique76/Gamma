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

    for(int i=0;i<columnas;i++){
        this->v<<QString::number(i);
    }

    ui->m->setVerticalHeaderLabels(this->v);

    for(int i=0;i<filas;i++){
        this->h<<QString::number(i);
    }

    ui->m->setHorizontalHeaderLabels(this->h);
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

QString matriz::GetValor(int r, int c){
    return ui->m->item(r,c)->text();
}

int matriz::GetFilas(){
return ui->m->rowCount();
}

int matriz::GetColumnas(){
return ui->m->columnCount();
}

void matriz::SetFilas(int r){
    ui->m->setRowCount(r);
}

void matriz::SetColumnas(int c){
    ui->m->setColumnCount(c);
}

void matriz::SetNombre(QString t){
    this->nombre = t;
}

QString matriz::getNombre()
{
    return this->nombre;
}

QString matriz::getComentario(){
    return this->Comentario;
}

void matriz::setComentario(QString t)
{
    this->Comentario = t;
}

QString matriz::MinH(){
    return this->h.at(0);
}

QString matriz::MaxH()
{
    return this->h.at(this->h.size()-1);
}

QString matriz::MinV()
{
    return this->v.at(0);
}

QString matriz::MaxV()
{
    return this->v.at(this->v.size()-1);
}

void matriz::setHL(QStringList l){
    ui->m->setHorizontalHeaderLabels(l);
}

void matriz::setVL(QStringList l){
    ui->m->setVerticalHeaderLabels(l);
}


