#include "nuevo.h"
#include "ui_nuevo.h"
#include<QMessageBox>
#include<QFileDialog>
#include<QDir>
#include<QFile>
#include<QTextStream>

Nuevo::Nuevo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Nuevo)
{
    ui->setupUi(this);
}

Nuevo::~Nuevo()
{
    delete ui;
}

void Nuevo::AgregarMatriz(){
    ui->label_5->setVisible(false);
    ui->ruta->setVisible(false);
    ui->buscarRuta->setVisible(false);
}

void Nuevo::AbrirArchivo(){
    ui->label_5->setVisible(false);
    ui->ruta->setVisible(false);
    ui->buscarRuta->setVisible(false);
    ui->nombre->setVisible(false);
    ui->label->setVisible(false);
    ui->label_4->setVisible(false);
    ui->descipcion->setVisible(false);
}

QString Nuevo::GetNameMatriz(){
return ui->nombreMatriz->text();
}

QString Nuevo::GetNameProyect()
{
    return ui->nombre->text();
}

bool Nuevo::IsCreateVector()
{
    return ui->vector->isChecked();
}

void Nuevo::on_buttonBox_accepted(){
    nombreProyecto = ui->nombre->text();

    nombreMatriz = ui->nombreMatriz->text();

    descripccion = ui->descipcion->toPlainText();

    ruta = ui->ruta->text();
    filas = ui->filas->value();
    columnas = ui->columnas->value();
    vector = !ui->vector->isChecked();
    ok = true;
    // creando la carpeta

    ruta+="/"+ui->nombre->text();
    QDir *directorio = new QDir();
    directorio->mkpath(ruta);
    directorio->mkpath(ruta+"/Matrices");

    close();
}


void Nuevo::on_buttonBox_rejected()
{
    close();
}


void Nuevo::on_buscarRuta_clicked(){
    // Direccion donde se va a guardar la carpeta

    ruta = QFileDialog::getExistingDirectory(this,"Guardar Proyecto en ...",QDir::homePath());
    ui->ruta->setText(ruta);
}

