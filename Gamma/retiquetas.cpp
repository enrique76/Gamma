#include "retiquetas.h"
#include "ui_retiquetas.h"
#include<QMessageBox>

rEtiquetas::rEtiquetas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rEtiquetas)
{
    ui->setupUi(this);

    ui->tabWidget->setCurrentIndex(0);


}

rEtiquetas::~rEtiquetas()
{
    delete ui;
}

void rEtiquetas::setTitle(QString t){
    this->setWindowTitle(t);
}

void rEtiquetas::setIcon(QIcon i){
    this->setWindowIcon(i);
}

void rEtiquetas::getListH(QStringList &l){
    for(int i=0;i<this->h.size();i++){
        l<<this->h.at(i);
    }
}

void rEtiquetas::getListV(QStringList &l){
    for(int i=0;i<this->v.size();i++){
        l<<this->v.at(i);
    }
}

void rEtiquetas::setC(int c)
{
    this->c = c;
}

bool rEtiquetas::getV(){
    return this->V;
}

void rEtiquetas::setE(bool v){
    this->E = v;


    if(this->E){
        ui->label_3->setText("Nombres");
        ui->label_4->setVisible(false);
        ui->manual2->setVisible(false);
    }
}

void rEtiquetas::setF(int n){
    this->f = n;
}

void rEtiquetas::on_buttonBox_accepted(){
    if(ui->tabWidget->currentIndex() == 0){
        if(ui->lineEdit->text().isEmpty()){
            QMessageBox::critical(this,"Error","Ponga un caracter");
        }
        else{
            for(int i=0;i<this->c;i++){
                this->v<<ui->lineEdit->text()+QString::number(ui->spinBox->value()+i);
            }

            for(int i=0;i<this->f;i++){
                this->h<<ui->lineEdit->text()+QString::number(ui->spinBox->value()+i);
            }

            this->V = true;
            close();
        }
    }
    else{

            if(ui->manual1->text().isEmpty()){
                QMessageBox::critical(this,"Error","Faltan Datos");
            }
            else{
                if(ui->manual1->text().count(ui->separador->currentText()) <  0){
                    QMessageBox::critical(this,"Error","El texto ingresado no contine el separador elejido");
                }
                else{
                    this->h = ui->manual1->text().split(ui->separador->currentText());
                    this->v = ui->manual2->text().split(ui->separador->currentText());

                    if((this->h.size() != this->f) || (this->v.size() != this->c)){
                        QMessageBox::critical(this,"Error","El texto ingresado no coincide con la matriz");
                    }
                    else{
                        this->V = true;
                        close();
                    }
                }
            }

    }
}

