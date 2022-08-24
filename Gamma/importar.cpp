#include "importar.h"
#include "ui_importar.h"
#include<QFileDialog>
#include<QFile>
#include<QTextStream>

importar::importar(QWidget *parent) : QDialog(parent), ui(new Ui::importar){
    ui->setupUi(this);



}

importar::~importar()
{
    delete ui;
}

void importar::setMatrices(QTreeWidgetItem *p){

}

void importar::PararDatos(matriz *p,QSpinBox *f,QSpinBox *c){
    p->SetFilas(ui->filas->value());
    p->SetColumnas(ui->columnas->value());

    for(int i=0;i<ui->filas->value();i++){
        for(int j=0;j<ui->columnas->value();j++){
            p->AgregarValorMatriz(i,j,ui->prevista->item(i,j)->text());
        }
    }

    p->SetNombre(ui->nombre->text());

    f->setValue(ui->filas->value());
    c->setValue(ui->columnas->value());
}

bool importar::getV()
{
    return this->V;
}

QString importar::getRuta(){
    return ui->ruta->text();
}

int importar::getFilas()
{
    return ui->filas->value();
}

int importar::getColumnas()
{
    return ui->columnas->value();
}

QString importar::getCeparador()
{
    return ui->cp->currentText();
}

void importar::on_ok_clicked(){
    if(!ui->ruta->text().isEmpty()){
        QFile a(ui->ruta->text());

        QTextStream out(&a);

        a.open(QFile::ReadOnly | QFile::Text);

        QString texto = a.readAll();

        ui->filas->setValue(texto.count("\n")+1);
        ui->columnas->setValue((texto.count((ui->cp->currentText()))/ui->filas->value())+1);



        // agregar al preview

        //texto.remove(ui->cp->currentText());
        texto.replace("\n",ui->cp->currentText());

        QStringList t = texto.split(ui->cp->currentText());

        ui->prevista->setColumnCount(ui->columnas->value());
        ui->prevista->setRowCount(ui->filas->value());

        qDebug()<<t;

        int x = 0;

        for(int i=0;i<ui->filas->value();i++){
            //QStringList tc = t.at(i).split(ui->cp->currentText());
            for(int j=0;j<ui->columnas->value();j++){
                ui->prevista->setItem(i,j,new QTableWidgetItem(t.at(x)));
                x++;
            }
        }

        a.flush();
        a.close();
    }
}


void importar::on_Buscarruta_clicked(){
   QString ruta = QFileDialog::getOpenFileName(this,"Importar",QDir::homePath());

    ui->ruta->setText(ruta);

    QStringList r;


        r = ruta.split("/");

        ui->nombre->setText(r[r.size()-1].split(".").at(0));

}


void importar::on_aceptar_clicked(){
    this->V = true;
    close();
}

