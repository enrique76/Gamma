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



    //QMenu *m = new QMenu();

    ui->arbol->addAction(ui->actionCerrar);
    ui->arbol->addAction(ui->actionRenombrar);
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

// Mostrar o ocultar la barra lateral
void MainWindow::on_actionArbol_triggered(){

    ui->ventanaArbol->setVisible(!ui->arbol->isVisible());
}

// nuevo proyecto
void MainWindow::on_actionNuevo_Proyecto_triggered(){
//    Nuevo n(this);

//    n.setWindowTitle("Nuevo Proyecto");
//    n.setWindowIcon(QIcon(":/new/prefix1/iconos/agregar-carpeta.png"));
//    n.exec();
//    ruta = n.ruta;
//    setWindowTitle(windowTitle()+" \t "+ruta);

//    if(n.ok){

//        ArbolProyecto->setText(0,n.nombreProyecto);
//        ArbolProyecto->setIcon(0,QIcon(":/new/prefix1/iconos/agregar-carpeta.png"));

//        QTreeWidgetItem *s = new QTreeWidgetItem(ArbolProyecto);

//        s->setText(0,n.nombreMatriz);
//        s->setIcon(0,QIcon(":/new/prefix1/iconos/matriz3.png"));

//        ui->arbol->addTopLevelItem(ArbolProyecto);

//        //p->nombreProyecto = n.nombreProyecto;

//        //p->AgregarMatriz(n.filas,n.columnas,n.nombreMatriz,n.ok);
//        //ui->proyecto->addWidget(p);



//        ui->ventanaArbol->setVisible(true);
//        ui->arbol->setVisible(true);
//        ui->actionEntre_Matrices->setEnabled(true);
//        ui->actionEntre_Escalar->setEnabled(true);
//        ui->actionTrigonometria->setEnabled(true);
//        ui->actionReaolver->setEnabled(true);
//        ui->actionImformacion->setEnabled(true);
//        ui->actionEstadistica->setEnabled(true);
//        ui->actionInterpolar->setEnabled(true);
//        ui->actionExtrapolar->setEnabled(true);
//        ui->actionGaficar->setEnabled(true);
//        ui->actionExtras->setEnabled(true);
//        ui->actionGuardar->setEnabled(true);
//        ui->actionGuardar_como->setEnabled(true);
//        ui->actionNuevo_Proyecto->setEnabled(false);
//    }

    ui->arbol->addTopLevelItem(ArbolProyecto);

    ArbolProyecto->setText(0,"Proyecto#1");
    ArbolProyecto->setIcon(0,QIcon(":/new/prefix1/iconos/agregar-carpeta.png"));


    Matriz *m = new Matriz();

    m->SetNameItem("Matriz Nueva");

    ui->area->addTab(m,m->GetNameItem());
    ui->area->setCurrentIndex(ui->area->currentIndex()+1);

    ArbolProyecto->addChild(m->item);

    ui->actionNuevo_Proyecto->setEnabled(false);

}

void MainWindow::on_actionNuevo_Archivo_triggered(){
//    Nuevo n(this);
//    n.setWindowTitle("Nueva Matriz");
//    n.setWindowIcon(QIcon(":/new/prefix1/iconos/nuevo-documento.png"));
//    n.AgregarMatriz();
//    n.AbrirArchivo();
//    n.exec();
//    ruta = n.ruta;
    //setWindowTitle(windowTitle()+" \t "+ruta);

    Matriz *m = new Matriz();

    m->SetNameItem("Matriz Nueva");

    ui->area->addTab(m,m->GetNameItem());
    ui->area->setCurrentIndex(ui->area->currentIndex()+1);

    ArbolProyecto->addChild(m->item);

}

void MainWindow::on_actionBarra_de_Herramientas_triggered()
{
    ui->toolBar->setVisible(!ui->toolBar->isVisible());
}


void MainWindow::on_actionTerminal_triggered()
{
    ui->terminal->setVisible(!ui->terminal->isVisible());
}


void MainWindow::on_actionCerrar_triggered(){

    QMessageBox::StandardButton reply;
    QMessageBox messageBox;

    reply = messageBox.question(this, "Eliminar Objeto", "Estas Seguro que quieres eliminarlo?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes){
        delete ui->arbol->currentItem();
        ui->area->removeTab(ui->area->currentIndex());

        QMessageBox::information(this,"Eliminar","El objeto se Elimino corectamente");
    }
    else{
        QMessageBox::information(this,"Eliminar","El objeto no Elimino");
    }
}


void MainWindow::on_arbol_itemClicked(QTreeWidgetItem *item, int column){
   qDebug()<<item->text(column);
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

void MainWindow::ContexMenuTreeWidget(QContextMenuEvent *e){
    QMenu *m = new QMenu();

    m->addAction(ui->actionCerrar);
    m->addAction(ui->actionRenombrar);
    m->addAction(ui->actionCopiar);
    m->addAction(ui->actionPegar);

    m->exec(QCursor::pos());
}


void MainWindow::on_actionLaTex_triggered(){
//    AgregarAlArbol(ui->actionLaTex,"LaTex");

//    texto *t = new texto();

//    p->AgregarTexto(t,"LaTex_"+p->CurrentIndexText());
}


void MainWindow::on_arbol_itemActivated(QTreeWidgetItem *item, int column){

}

