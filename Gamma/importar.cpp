#include "importar.h"
#include "ui_importar.h"
#include<QFileDialog>

importar::importar(QWidget *parent) : QDialog(parent), ui(new Ui::importar){
    ui->setupUi(this);



}

importar::~importar()
{
    delete ui;
}

void importar::setMatrices(QTreeWidgetItem *p){
    for(int i=0;i<p->childCount();p++){
        ui->matrices->addItem(p->child(i)->text(0));
    }
}

void importar::on_ok_clicked(){

}


void importar::on_Buscarruta_clicked(){
//    QString filter = " SQL File (*.sql)";

//    QString ruta = QFileDialog::getOpenFileName(this,"Abrir Query",QDir::homePath(),filter);

    QString ruta = QFileDialog::getExistingDirectory(this,"Importar ...",QDir::homePath());
    ui->ruta->setText(ruta);
}

