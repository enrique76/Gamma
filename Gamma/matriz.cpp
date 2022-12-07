#include "matriz.h"
#include "ui_matriz.h"
#include<QDir>
#include<QCompleter>

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
    this->vector = vector;

    for(int i=0;i<columnas;i++){
        this->v<<QString::number(i);
    }

    ui->m->setVerticalHeaderLabels(this->v);

    for(int i=0;i<filas;i++){
        this->h<<QString::number(i);
    }

    ui->m->setHorizontalHeaderLabels(this->h);

    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            ui->m->setItem(i,j,new QTableWidgetItem(0));
        }
    }

    for(int i=0;i<this->filas;i++){
        for(int j=0;j<this->columnas;j++){
            ui->m->setItem(i,j,new QTableWidgetItem("0"));
        }

        if(ui->v->isVisible()){
            ui->v->setItem(i,0,new QTableWidgetItem("0"));
        }
    }
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

QString matriz::GetValor(int i){
    return ui->v->item(i,0)->text();
}

int matriz::GetFilas(){
return ui->m->rowCount();
}

int matriz::GetColumnas(){
return ui->m->columnCount();
}

void matriz::SetFilas(int r){
    ui->m->setRowCount(r);
    this->filas = r;
    if(this->getVector()){
        ui->v->setRowCount(r);
    }
}

void matriz::SetColumnas(int c){
    ui->m->setColumnCount(c);
    this->columnas = c;
}

bool matriz::getVector()
{
    return this->vector;
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

QStringList matriz::getHL(){
    QStringList l;

    for(int i=0;i<ui->m->columnCount();i++){
        l<<ui->m->horizontalHeaderItem(i)->text();
    }

    return l;
}

QStringList matriz::getVL(){
    QStringList l;

    for(int i=0;i<ui->m->rowCount();i++){
        l<<ui->m->verticalHeaderItem(i)->text();
    }

    return l;
}

void matriz::Copy(QTableWidget *t){
    t->setRowCount(ui->m->rowCount());
    t->setColumnCount(ui->m->columnCount());

    t->setHorizontalHeaderLabels(this->h);
    t->setVerticalHeaderLabels(this->v);

    for(int i=0;i<ui->m->rowCount();i++){
        for(int j=0;j<ui->m->columnCount();j++){
            t->setItem(i,j,new QTableWidgetItem(ui->m->item(i,j)->text()));
        }
    }
}

void matriz::setRuta(QString r){
    this->ruta = r+"/"+this->nombre;
//    QDir *directorio = new QDir();

//    directorio->mkpath(this->ruta);
}

QString matriz::getRuta()
{
    return this->ruta;
}

void matriz::setDeterminante(){

//    double *vaux,*nDet,**a;
//    int nM = 0;
//    double t = 0;

//    // darles tamaño

//   vaux = new double[this->filas];
//    nDet = new double[this->filas+1];
//    a = new double*[this->filas]; // copia

//    for(int i=0;i<this->filas;i++){
//        a[i] = new double[this->filas];
//    }

//    double **d,**aux;

//    // darles tamaño

//    d = new double*[this->filas];
//    aux = new double*[this->filas];

//    for(int i=0;i<this->filas;i++){
//        d[i] = new double[this->filas + 2];
//        aux[i] = new double[2];
//    }

//    // pasar datos

//    for(int i=0;i<this->filas;i++){
//        for(int j=0;j<this->filas;j++){
//            a[i][j] = ui->m->item(i,j)->text().toDouble();
//        }
//    }

//    // principal
//    for(int i=0;i<this->filas;i++){
//        for(int j=0;j<this->filas;j++){
//            vaux[j] = a[j][i];
//        }

//        nM++;

//        // declaramos las matrices dinamicas



//        // aux

//        for(int i=0;i<this->filas;i++){
//            for(int j=0;j<2;j++){
//                aux[i][j] = a[i][j];
//            }
//        }

//        // d

//        for(int i=0;i<this->filas;i++){
//            for(int j=0;j<this->filas+2;j++){
//                if(j < this->filas){
//                   d[i][j] = a[i][j];
//                }
//                else{
//                    d[i][j] = aux[i][j-this->filas];
//                }
//            }
//        }

//        int z = 0;
//        double mul = 1;
//        double p1 = 0,p2 = 0;

//        for(int i=0;i<this->filas;i++){
//            for(int j=0;j<this->filas;j++){
//                mul *= d[j][j+z];
//            }

//            z++;
//            p1 += mul;
//            mul = 1;
//        }

//        z = this->filas+1;

//        for(int i=0;i<this->filas;i++){
//            for(int j=0;j<this->filas;j++){
//                mul*=d[j][z];
//                z--;
//            }

//            z+=2;
//            p2+=mul;
//            mul = 1;
//        }

//        nDet[nM] = p1 - p2;

//        for(int j=0;j<this->filas;i++){
//            a[j][i] = vaux[j];
//        }

//    }

//    // eliminar memoria

//    for(int i=0;i<this->filas;i++){
//        delete[] d[i];
//        delete[] aux[i];
//    }

//    delete[] d;
//    delete[] aux;



//    // liberar memoria a

//    for(int i=0;i<this->filas;i++){
//        delete[] a[i];
//    }

//    delete[] a;

//    this->determinante = nDet[0];

}

double matriz::getDeterminante(){
    this->setDeterminante();

    return this->determinante;
}

void matriz::setMaximo(){
    this->maximo = ui->m->item(0,0)->text().toDouble();

    for(int i=0;i<this->filas;i++){
        for(int j=0;j<this->columnas;j++){
            if(ui->m->item(i,j)->text().toDouble() > this->maximo){
                this->maximo = ui->m->item(i,j)->text().toDouble();
            }
        }
    }
}

double matriz::getMaximo(){
    this->setMaximo();

    return this->maximo;
}

void matriz::setMinimo(){
    this->minimo = ui->m->item(0,0)->text().toDouble();

    for(int i=0;i<this->filas;i++){
        for(int j=0;j<this->columnas;j++){
            if(ui->m->item(i,j)->text().toDouble() < this->minimo){
                this->minimo = ui->m->item(i,j)->text().toDouble();
            }
        }
    }
}

double matriz::getMinimo(){
    this->setMinimo();

    return this->minimo;
}

void matriz::setSumatoria(){
    this->sumatoria = 0;

    for(int i=0;i<this->filas;i++){
        for(int j=0;i<this->columnas;j++){
            this->sumatoria += ui->m->item(i,j)->text().toDouble();
        }
    }
}

double matriz::getSumatoria(){
    this->setSumatoria();

    return this->sumatoria;
}

void matriz::setFuente(QFont f){
    for(int i=0;i<this->GetFilas();i++){
        for(int j=0;j<this->GetColumnas();j++){
            ui->m->item(i,j)->setFont(f);
        }

        if(this->getVector()){
            ui->v->item(i,0)->setFont(f);
        }
    }
}

void matriz::setColor(QColor c){
    if(its.size() == 0){
        for(int i=0;i<this->GetFilas();i++){
            for(int j=0;j<this->GetColumnas();j++){
                ui->m->item(i,j)->setBackground(QBrush(c));
            }

            if(this->getVector()){
                ui->v->item(i,0)->setBackground(QBrush(c));
            }
        }
    }
    else{
        for(int i=0;i<its.size();i++){
            its.at(i)->setBackground(QBrush(c));
        }
    }


}

void matriz::setColor(QColor c, int i, int j){
    ui->m->item(i,j)->setBackground(QBrush(c));
}

void matriz::setColor(QColor c, int i){
    ui->v->item(i,0)->setBackground(QBrush(c));
}

QString matriz::getColor(int i, int j){
    return ui->m->item(i,j)->background().color().name();
}

QString matriz::getFuente(int i, int j){
    return ui->m->item(i,j)->font().toString();
}

void matriz::setVector(bool v){
    ui->v->setVisible(v);
    ui->cambioVector->setVisible(v);
    this->vector = v;
}

void matriz::on_m_itemEntered(QTableWidgetItem *item)
{
    its.push_back(item);
}


void matriz::on_m_cellClicked(int row, int column)
{
    its.clear();
}


void matriz::on_m_cellChanged(int row, int column){

}


void matriz::on_m_itemChanged(QTableWidgetItem *item){
    if(item->text() == "="){

        qDebug()<<"ecuacion";
    }
}

