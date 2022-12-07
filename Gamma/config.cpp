#include "config.h"
#include "ui_config.h"
#include<QFile>
#include<QDir>
#include<QFileDialog>

config::config(QWidget *parent) :QDialog(parent), ui(new Ui::config){
    ui->setupUi(this);

    ui->treeWidget->expandAll();
    ui->area->setCurrentIndex(0);
}

config::~config()
{
    delete ui;
}

QString config::GetEstilo()
{
    return this->estilo;
}

void config::SetS(QString s){
    QFile sf(s);
    sf.open(QFile::ReadOnly);


    QString sS { QLatin1String(sf.readAll()) };
    sf.close();

    this->setStyleSheet(sS);
}

void config::SetData(QVector<Matriz *> m){
    this->m = m;

    for(int i=0;i<this->m.size();i++){
        ui->base->addTab(this->m.at(i),this->m.at(i)->GetNameItem());
    }

    ui->nombre->setText(this->m.at(0)->GetNameItem());
    ui->ruta->setText(this->m.at(0)->GetRuta());
    ui->vv->setChecked(this->m.at(0)->GetV());
    ui->filas->setValue(this->m.at(0)->GetFilas());
    ui->columnas->setValue(this->m.at(0)->GetColumnas());

}

void config::on_buttonBox_accepted()
{
    close();
}


void config::on_Estilos_currentTextChanged(const QString &arg1){

}


void config::on_Estilos_currentIndexChanged(int index){
    if(index!=0){
        this->estilo=ui->Estilos->currentText();

        QString s;

        s="C:/Users/enriq/OneDrive/Escritorio/Gamma/Gamma/Estilos/";

        s+=ui->Estilos->currentText();
        s+=".qss";

        QFile sf(s);
        sf.open(QFile::ReadOnly);

        QString sS { QLatin1String(sf.readAll()) };

        sf.close();

        this->setStyleSheet(sS);
    }
    else{
        this->estilo = nullptr;
    }
}


void config::on_base_tabBarClicked(int index){
    ui->nombre->setText(this->m.at(index)->GetNameItem());
    ui->ruta->setText(this->m.at(index)->GetRuta());
    ui->vv->setChecked(this->m.at(index)->GetV());
    ui->filas->setValue(this->m.at(index)->GetFilas());
    ui->columnas->setValue(this->m.at(index)->GetColumnas());
}


void config::on_pushButton_2_clicked()
{
    QString ruta = QFileDialog::getExistingDirectory(this,"Guardar en ...",QDir::homePath());
    ui->ruta->setText(ruta);

    this->m.at(ui->area->currentIndex())->SetRuta(ui->ruta->text());
}

