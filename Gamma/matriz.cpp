#include "matriz.h"
#include "ui_matriz.h"
#include<QTreeWidgetItem>

Matriz::Matriz(QWidget *parent) :QWidget(parent),ui(new Ui::Matriz){
    ui->setupUi(this);
    item = new QTreeWidgetItem();
    item->setIcon(0,QIcon(":/new/prefix1/iconos/matriz2.png"));
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
