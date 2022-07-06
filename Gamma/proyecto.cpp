#include "proyecto.h"
#include "ui_proyecto.h"
#include "matriz.h"
#include<QMessageBox>
#include"mainwindow.h"
#include<QTime>

proyecto::proyecto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::proyecto)
{
    ui->setupUi(this);

}

proyecto::~proyecto()
{
    delete ui;
}

void proyecto::setFilas(int f){
//    ui->m->setRowCount(f);
//    ui->filas->setValue(f);


}

void proyecto::setColumnas(int c){
//    ui->m->setColumnCount(c);
//    ui->columnas->setValue(c);
//    for(int i=0;i<c;i++){
//        ui->m->setColumnWidth(i,50);
//    }


}

void proyecto::setVector(bool v){

//    if(v){
//       ui->v->setRowCount(ui->m->rowCount());
//       ui->v->setColumnCount(1);
//       ui->v->setVisible(v);
//       ui->cambioVector->setVisible(v);
//       ui->v->setColumnWidth(0,70);
//    }


}

void proyecto::AgregarMatriz(int filas,int columnas,QString nombre,bool vector){
    // agregando una matriz a el vector
    matriz *m = new matriz();

    m->Crear(filas,columnas,nombre,vector);
    m->setCapas(0);

    ui->area->addTab(m,nombre);
    ui->area->setCurrentIndex(ui->area->currentIndex()+1);
    matrices.append(m);
}

void proyecto::CerrarMatriz(QTreeWidget *arbol){

    QMessageBox::StandardButton pregunta =  QMessageBox::question(this,"Borrar ","Desea borrar",QMessageBox::Yes|QMessageBox::No);

    if(pregunta == QMessageBox::Yes){
        ui->area->removeTab(ui->area->currentIndex());
        QMessageBox::information(this,"Borrar","Borrado con exito");
        matrices.remove(ui->area->currentIndex());

    }
    else{
        QMessageBox::information(this,"Borrado","No se borro");
    }

}

QString proyecto::CurrentIndexText(){
    return ui->area->tabText(ui->area->currentIndex());
}

void proyecto::AgregarFigura(QString nombre){
    matriz *m = new matriz();

    m->setCapas(1);

    ui->area->addTab(m,nombre);
    ui->area->setCurrentIndex(ui->area->currentIndex()+1);
    matrices.append(m);
}

void proyecto::on_pushButton_8_clicked(){
    int z = ui->area->currentIndex();
    int f = matrices[z]->filas;
    int c = matrices[z]->columnas;
    int in = ui->inferior->value();
    int su = ui->superior->value();
    int v;

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            v = (in + rand()%(su));
            matrices[z]->AgregarValorMatriz(i,j,QString::number(v));
            v = (in + rand()%(su));
            matrices[z]->AgregarValorVector(i,QString::number(v));
        }
    }
}

