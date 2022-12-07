#include "rutas.h"
#include "ui_rutas.h"
#include<QFileDialog>

rutas::rutas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rutas)
{
    ui->setupUi(this);
}

rutas::~rutas()
{
    delete ui;
}

void rutas::SetRuta(QString r){
    ui->ruta->setText(r);
}

void rutas::SetContex(QString r){

    if(r == "Guardar"){
        ui->obtenerRuta->setVisible(false);
    }

    this->contexto = r;
    ui->go->setText(this->contexto);
}

void rutas::SetIE(bool v)
{
    if(v){
        ui->ed->setText("Desencriptar");
    }
    else{
        ui->ed->setText("Encriptar");
    }
}

void rutas::on_obtenerRuta_clicked(){
    ui->ruta->setText(QFileDialog::getExistingDirectory(this,this->contexto+" en ...",QDir::homePath()));
}

