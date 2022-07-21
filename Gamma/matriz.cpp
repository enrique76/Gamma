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
}

void Matriz::SetColumnas(int i)
{
    ui->m->setColumnCount(i);
}
