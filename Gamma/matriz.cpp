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

void Matriz::SetRuta(QString r){
    this->ruta = r;
}

QString Matriz::GetRuta(){
    return this->ruta;
}

int Matriz::GetFilas()
{
    return ui->m->rowCount();
}

int Matriz::GetColumnas()
{
    return ui->m->columnCount();
}

QString Matriz::GetValue(int f, int c)
{
    return ui->m->item(f,c)->text();
}

void Matriz::SetData(QString t){
    for(int i=0;i<ui->m->rowCount();i++){
        for(int j=0;j<ui->m->columnCount();j++){
            ui->m->setItem(i,j,new QTableWidgetItem(t));
        }

        ui->v->setItem(i,0,new QTableWidgetItem(t));
    }
}

void Matriz::SetIsSave(bool v)
{
    this->is = v;
}

bool Matriz::GetIsSave(){
    return this->is;
}

void Matriz::SetData(int f, int c, int d){
    ui->m->setItem(f,c,new QTableWidgetItem(QString::number(d)));
}

bool Matriz::GetV(){
    return this->cv;
}

void Matriz::SetDataV(int f, int d ){
    ui->v->setItem(f,0,new QTableWidgetItem(QString::number(d)));
}

void Matriz::Copi(Matriz *m){
    CreateItem(m->item->parent());
    item->setText(0,m->GetNameItem());
    this->cv = m->GetV();
    this->ruta = m->GetRuta();
    this->is = m->GetIsSave();

    // m

    SetFilas(m->GetFilas());
    SetColumnas(m->GetColumnas());

    for(int i=0;i<GetFilas();i++){
        for(int j=0;j<GetColumnas();j++){
            SetData(i,j,m->GetValue(i,j).toInt());
        }

        SetDataV(i,GetDataV(i).toInt());
    }
}

QString Matriz::GetDataV(int i){
       return ui->v->item(i,0)->text();
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


void Matriz::on_m_cellChanged(int row, int column){

}

