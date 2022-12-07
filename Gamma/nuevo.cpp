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
    //ui->descipcion->setVisible(false);
}

QString Nuevo::GetNombreMatriz(){
    return ui->nombreMatriz->text();
}

QString Nuevo::GetNombreProyecto(){
    return ui->nombre->text();
}

QString Nuevo::GetComentario(){
    return ui->descipcion->toPlainText();
}

bool Nuevo::GetV()
{
    return ui->vector->isChecked();
}

void Nuevo::on_buttonBox_accepted(){
    if(ui->nombre->text().isEmpty() || ui->nombreMatriz->text().isEmpty() || ui->ruta->text().isEmpty()){
        if(ui->label_5->isVisible()){
            QMessageBox::critical(this,"Crear Proyecto","Los siguientes Datos son Obligatorios: \n\n Nombre del Proyecto \n Nombre de la Matriz \n Ruta");
        }
        else {
            if(ui->nombreMatriz->text().isEmpty()){
                QMessageBox::critical(this,"Crear Archivo","El nombre de la matriz no es opccional");
            }
            else{
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



                close();
            }
        }
    }
    else{
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



//        directorio->mkpath(ruta+"/Matrices");
//        directorio->mkpath(ruta+"/Graficas");
//        directorio->mkpath(ruta+"/Configuracion");
//        directorio->mkpath(ruta+"/Operaciones");
//        directorio->mkpath(ruta+"/Historial");


        close();
    }
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

