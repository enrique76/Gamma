#include "matriz.h"
#include "ui_matriz.h"
#include<QTreeWidgetItem>

Matriz::Matriz(QWidget *parent) :QWidget(parent),ui(new Ui::Matriz){
    ui->setupUi(this);


}

Matriz::~Matriz()
{
    delete ui;
}

void Matriz::SetNameItem(QString name){
    this->item->setText(0,name);
}

QString Matriz::GetNameItem(){
    return this->item->text(0);
}

void Matriz::CreateItem(QTreeWidgetItem *p){
    item = new QTreeWidgetItem(p);
    item->setFlags(item->flags()|Qt::ItemIsEditable);
    item->setIcon(0,QIcon(":/new/prefix1/iconos/matriz2.png"));
}

void Matriz::SetFilas(int i){
    ui->m->setRowCount(i);
    ui->v->setRowCount(i);
}

void Matriz::SetColumnas(int i)
{
    ui->m->setColumnCount(i);
}

void Matriz::SetVectorVisible(bool ok)
{
    ui->ordenVector->setVisible(ok);
    ui->v->setVisible(ok);
}



void Matriz::on_ordenVector_clicked(){
//    auto inicio = std::chrono::system_clock::now();
        QString texto = ui->ordenVector->text();

        for(int i=0;i<ui->m->rowCount();++i){
            ui->v->setItem(i,0,new QTableWidgetItem(texto));
        }

        if(ui->ordenVector->text() == "0"){
            ui->ordenVector->setText("1");
        }
        else{
            ui->ordenVector->setText("0");
        }
//        auto final = std::chrono::system_clock::now();
//        std::chrono::duration<float> duracion = final - inicio;
        //ui->tiempo->setText(QString::number(duracion.count()));
}

