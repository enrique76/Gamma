#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nuevo.h"
#include "matriz.h"
#include<QTreeWidgetItem>
#include<QTreeWidget>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    //ui->arbol->setVisible(true);


    // iniciando el proyecto
    ui->actionLaTex->setVisible(false);
    ui->ventanaArbol->setVisible(false);
    ui->terminal->setVisible(false);
    ui->actionEntre_Matrices->setEnabled(false);
    ui->actionEntre_Escalar->setEnabled(false);
    ui->actionTrigonometria->setEnabled(false);
    ui->actionReaolver->setEnabled(false);
    ui->actionImformacion->setEnabled(false);
    ui->actionEstadistica->setEnabled(false);
    ui->actionInterpolar->setEnabled(false);
    ui->actionExtrapolar->setEnabled(false);
    ui->actionGaficar->setEnabled(false);
    ui->actionExtras->setEnabled(false);
    ui->actionGuardar->setEnabled(false);
    ui->actionGuardar_como->setEnabled(false);

    // arbol

    ui->arbol->addTopLevelItem(this->ArbolProyecto);
    ui->arbol->expandItem(this->ArbolProyecto);

    //QMenu *m = new QMenu();

    ui->arbol->addAction(ui->actionCerrar);
    //ui->arbol->addAction(ui->actionRenombrar);
    ui->arbol->addAction(ui->actionCopiar);
    ui->arbol->addAction(ui->actionPegar);

    ui->arbol->setContextMenuPolicy(Qt::ActionsContextMenu);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AgregarAlArbol(QString nombre){
    QTreeWidgetItem *s = new QTreeWidgetItem(ArbolProyecto);

    s->setText(0,nombre);
    s->setIcon(0,QIcon(":/new/prefix1/iconos/matriz3.png"));
    ui->arbol->addTopLevelItem(ArbolProyecto);
}

void MainWindow::AgregarAlArbol(QAction * a, QString text){
    QTreeWidgetItem *s = new QTreeWidgetItem(ArbolProyecto);

    s->setText(0,a->text()+"_"+text);
    s->setIcon(0,a->icon());
    ui->arbol->addTopLevelItem(ArbolProyecto);
}

void MainWindow::CrearMatriz(int filas,int columnas,QString nombre,bool ok){
    //p->AgregarMatriz(filas,columnas,nombre,ok);
    //ui->proyecto->addWidget(p);
}

void MainWindow::AgregarMatriz(QString nombre, int f, int c, bool ok){
    Matriz *m = new Matriz();

    m->CreateItem(ArbolMatrices);

    matrices.append(m);

    m->SetNameItem(nombre);

    m->SetFilas(f);
    m->SetColumnas(c);
    m->SetVectorVisible(ok);

    ui->area->addTab(m,m->GetNameItem());
    ui->area->setCurrentIndex(ui->area->currentIndex()+1);

    this->ArbolMatrices->addChild(m->item);
    this->ArbolMatrices->setIcon(0,QIcon(":/new/prefix1/iconos/matriz2.png"));
    this->ArbolMatrices->setText(0,"Matrices");

    this->ArbolProyecto->addChild(ArbolMatrices);


}

// Mostrar o ocultar la barra lateral
void MainWindow::on_actionArbol_triggered(){

    ui->ventanaArbol->setVisible(!ui->arbol->isVisible());
}

// nuevo proyecto
void MainWindow::on_actionNuevo_Proyecto_triggered(){
    Nuevo n(this);

    n.setWindowTitle("Nuevo Proyecto");
    n.setWindowIcon(QIcon(":/new/prefix1/iconos/agregar-carpeta.png"));
    n.exec();
    ruta = n.ruta;

    ArbolProyecto->setText(0,n.nombreProyecto);
    ArbolProyecto->setIcon(0,QIcon(":/new/prefix1/iconos/agregar-carpeta.png"));

    AgregarMatriz(n.GetNameMatriz(),n.filas,n.columnas,n.IsCreateVector());
    ui->ventanaArbol->setVisible(true);
    ui->actionNuevo_Proyecto->setEnabled(false);

}

void MainWindow::on_actionNuevo_Archivo_triggered(){
    Nuevo n(this);
    n.setWindowTitle("Nueva Matriz");
    n.setWindowIcon(QIcon(":/new/prefix1/iconos/nuevo-documento.png"));
    n.AgregarMatriz();
    n.AbrirArchivo();
    n.exec();
    ruta = n.ruta;
    //setWindowTitle(windowTitle()+" \t "+ruta);
    //Cambio();

    AgregarMatriz(n.GetNameMatriz(),n.filas,n.columnas,n.IsCreateVector());

}

void MainWindow::on_actionBarra_de_Herramientas_triggered()
{
    ui->toolBar->setVisible(!ui->toolBar->isVisible());
}

void MainWindow::on_actionTerminal_triggered()
{
    ui->terminal->setVisible(!ui->terminal->isVisible());
}

void MainWindow::EliminarMatriz(int i){
qDebug()<<i;
    ui->area->removeTab(i);
    this->ArbolMatrices->removeChild(matrices.at(i)->item);
    matrices.removeAt(i);
}

void MainWindow::GuardarMatrices(){
    for(int i=0;i<ArbolMatrices->childCount();i++){

    }
}

void MainWindow::Cambio(){


    if(this->isSave){
        this->isSave = false;
         ArbolProyecto->setText(0,ArbolProyecto->text(0));
    }
    else{
        this->isSave = true;
        ArbolProyecto->setText(0,ArbolProyecto->text(0).remove("*"));
    }


}

void MainWindow::on_actionCerrar_triggered(){
    QMessageBox::StandardButton reply;
    QMessageBox messageBox;

    reply = messageBox.question(this, "Eliminar Objeto", "Estas Seguro que quieres eliminarlo?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes){
        QMessageBox::information(this,"Eliminar","El objeto se Elimino corectamente");
        EliminarMatriz(this->pos);

    }
    else{
        QMessageBox::information(this,"Eliminar","El objeto no Elimino");
    }
}

void MainWindow::on_arbol_itemClicked(QTreeWidgetItem *item, int column){
    this->pos = this->ArbolMatrices->indexOfChild(item);
    ui->area->setCurrentIndex(this->ArbolMatrices->indexOfChild(item));

    qDebug()<<this->pos;
}

// Funciones
void MainWindow::on_actionReaolver_triggered(){
//    AgregarAlArbol(ui->actionReaolver,p->CurrentIndexText());
//    CrearMatriz(10,10,"Resolver",true);
}

void MainWindow::on_actionEstadistica_triggered(){
//    AgregarAlArbol(ui->actionEstadistica,p->CurrentIndexText());
//    CrearMatriz(10,10,"Estadistica",true);
}

void MainWindow::on_actionEntre_Matrices_triggered(){
//    AgregarAlArbol(ui->actionEntre_Matrices,p->CurrentIndexText());
//    CrearMatriz(10,10,"EntreMatrices",true);
}

void MainWindow::on_actionEntre_Escalar_triggered()
{
//    AgregarAlArbol(ui->actionEntre_Escalar,p->CurrentIndexText());
//    CrearMatriz(10,10,"EntreEscalar",true);
}

void MainWindow::on_actionLaTex_triggered(){
//    AgregarAlArbol(ui->actionLaTex,"LaTex");

//    texto *t = new texto();

//    p->AgregarTexto(t,"LaTex_"+p->CurrentIndexText());
}

void MainWindow::on_arbol_itemDoubleClicked(QTreeWidgetItem *item, int column){
    ui->area->setTabText(this->pos,ArbolMatrices->child(this->pos)->text(0));
}

void MainWindow::on_arbol_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous){

}

void MainWindow::on_actionRenombrar_triggered(){
    //ArbolProyecto->child(this->pos)->setFlags(ArbolProyecto->child(this->pos)->flags() | Qt::ItemIsEditable | Qt::ItemIsEnabled | Qt::ItemIsSelectable);
    //ui->area->setTabText(this->pos,ArbolProyecto->child(this->pos)->text(0));
}

void MainWindow::on_arbol_windowIconTextChanged(const QString &iconText){
//    qDebug()<<iconText;
//    ui->area->setTabText(this->pos,iconText);
}

void MainWindow::on_arbol_windowTitleChanged(const QString &title)
{
    qDebug()<<title;
    ui->area->setTabText(this->pos,title);
}

void MainWindow::on_actionGuardar_triggered(){

}

