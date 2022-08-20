#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nuevo.h"
#include "texto.h"
#include<QTreeWidgetItem>
#include<QTreeWidget>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);



    // iniciando el proyecto
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
    ui->actionAbri_Archivo->setEnabled(false);
    ui->actionAbrir->setEnabled(false);
    ui->actionImportar->setEnabled(false);
    ui->actionLaTex->setEnabled(false);

    // arbol

    //QMenu *m = new QMenu();

    ui->arbol->addAction(ui->actionCerrar);
    ui->arbol->addAction(ui->actionRenombrar);
    ui->arbol->addAction(ui->actionCopiar);
    ui->arbol->addAction(ui->actionPegar);

    ui->arbol->setContextMenuPolicy(Qt::ActionsContextMenu);

    // arbol

    ArbolProyecto->setText(0,"Matrices");
    ArbolProyecto->setIcon(0,QIcon(":/new/prefix1/iconos/agregar-carpeta.png"));

    Graficas->setText(0,"Graficas");
    Graficas->setIcon(0,QIcon(":/new/prefix1/iconos/graficar.png"));

    Configuraciones->setText(0,"Configuraciones");
    Configuraciones->setIcon(0,QIcon(":/new/prefix1/iconos/configuraciones.png"));

    Operaciones->setText(0,"Operaciones");
    Operaciones->setIcon(0,QIcon(":/new/prefix1/iconos/matematicas.png"));

    ui->arbol->addTopLevelItem(ArbolProyecto);
    ui->arbol->addTopLevelItem(Graficas);
    ui->arbol->addTopLevelItem(Operaciones);
    ui->arbol->addTopLevelItem(Configuraciones);

     //

     ui->stackedWidget->setCurrentIndex(0);

     //

     ui->base->setCurrentIndex(0);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AgregarAlArbol(QString nombre){
//    QTreeWidgetItem *s = new QTreeWidgetItem(ArbolProyecto);

//    s->setText(0,nombre);
//    s->setIcon(0,QIcon(":/new/prefix1/iconos/matriz3.png"));
//    ui->arbol->addTopLevelItem(ArbolProyecto);
}

void MainWindow::AgregarAlArbol(QAction * a, QString text){
//    QTreeWidgetItem *s = new QTreeWidgetItem(ArbolProyecto);

//    s->setText(0,a->text()+"_"+text);
//    s->setIcon(0,a->icon());
//    ui->arbol->addTopLevelItem(ArbolProyecto);
}

void MainWindow::CrearMatriz(int filas,int columnas,QString nombre,bool ok){
    //p->AgregarMatriz(filas,columnas,nombre,ok);
   // ui->proyecto->addWidget(p);
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
    //setWindowTitle(windowTitle()+" \t "+ruta);

    if(n.ok){

//        ArbolProyecto->setText(0,n.nombreProyecto);
//        ArbolProyecto->setIcon(0,QIcon(":/new/prefix1/iconos/agregar-carpeta.png"));

        QTreeWidgetItem *s = new QTreeWidgetItem(ArbolProyecto);

        s->setText(0,n.nombreMatriz);
        s->setIcon(0,QIcon(":/new/prefix1/iconos/matriz3.png"));



        // creando matriz

        matriz *m = new matriz();

        m->Crear(n.filas,n.columnas,n.nombreMatriz,n.ok);

        ms.push_back(m);

        ui->f->setValue(n.filas);
        ui->c->setValue(n.columnas);



        ui->baseMatrices->addTab(ms.at(ms.size()-1),n.GetNombreMatriz());

//        p->nombreProyecto = n.nombreProyecto;

//        p->AgregarMatriz();
//        //ui->proyecto->addWidget(p);

//        //ui->widget->setParent(p);



        ui->ventanaArbol->setVisible(true);
        ui->arbol->setVisible(true);
        ui->actionEntre_Matrices->setEnabled(true);
        ui->actionEntre_Escalar->setEnabled(true);
        ui->actionTrigonometria->setEnabled(true);
        ui->actionReaolver->setEnabled(true);
        ui->actionImformacion->setEnabled(true);
        ui->actionEstadistica->setEnabled(true);
        ui->actionInterpolar->setEnabled(true);
        ui->actionExtrapolar->setEnabled(true);
        ui->actionGaficar->setEnabled(true);
        ui->actionExtras->setEnabled(true);
        ui->actionGuardar->setEnabled(true);
        ui->actionGuardar_como->setEnabled(true);
        ui->actionNuevo_Proyecto->setEnabled(false);
    }

    //ui->toolBaMain->setVisible(false);

    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_actionNuevo_Archivo_triggered(){
    Nuevo n(this);
    n.setWindowTitle("Nueva Matriz");
    n.setWindowIcon(QIcon(":/new/prefix1/iconos/nuevo-documento.png"));
    n.AgregarMatriz();
    n.AbrirArchivo();
    n.exec();
    ruta = n.ruta;
    setWindowTitle(windowTitle()+" \t "+ruta);

    if(n.ok){
        QTreeWidgetItem *s = new QTreeWidgetItem(ArbolProyecto);

        s->setText(0,n.nombreMatriz);
        s->setIcon(0,QIcon(":/new/prefix1/iconos/matriz3.png"));
       //ui->arbol->addTopLevelItem(ArbolProyecto);

        matriz *m = new matriz();

        m->Crear(n.filas,n.columnas,n.nombreMatriz,n.ok);

        ms.push_back(m);

        ui->f->setValue(n.filas);
        ui->c->setValue(n.columnas);



        ui->baseMatrices->addTab(ms.at(ms.size()-1),n.GetNombreMatriz());
        ui->baseMatrices->setCurrentIndex(ui->baseMatrices->count()-1);

    }
}

void MainWindow::on_actionBarra_de_Herramientas_triggered()
{
   // ui->toolBar->setVisible(!ui->toolBar->isVisible());
}


void MainWindow::on_actionTerminal_triggered()
{
    ui->terminal->setVisible(!ui->terminal->isVisible());
}


void MainWindow::on_actionCerrar_triggered()
{
    //p->CerrarMatriz(ui->arbol);
}


void MainWindow::on_arbol_itemClicked(QTreeWidgetItem *item, int column){
   //qDebug()<<item->text(column);
}

// Funciones
void MainWindow::on_actionReaolver_triggered(){
    // resolver
    ui->base->setCurrentIndex(1);
    ui->baseSalidas->setCurrentIndex(0);

    QTreeWidgetItem *a = new QTreeWidgetItem(Operaciones);

    a->setText(0,"Variables "+ms.at(ui->baseMatrices->currentIndex())->nombre);
    a->setIcon(0,QIcon(":/new/prefix1/iconos/resolver.png"));
}

void MainWindow::on_actionEstadistica_triggered(){
    //AgregarAlArbol(ui->actionEstadistica,p->CurrentIndexText());
    CrearMatriz(10,10,"Estadistica",true);
}


void MainWindow::on_actionEntre_Matrices_triggered(){
    //AgregarAlArbol(ui->actionEntre_Matrices,p->CurrentIndexText());
    CrearMatriz(10,10,"EntreMatrices",true);
}


void MainWindow::on_actionEntre_Escalar_triggered()
{
   // AgregarAlArbol(ui->actionEntre_Escalar,p->CurrentIndexText());
    CrearMatriz(10,10,"EntreEscalar",true);
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

    //p->AgregarTexto(t,"LaTex_"+p->CurrentIndexText());
}


void MainWindow::on_baseMatrices_tabBarClicked(int index){

}


void MainWindow::on_arbol_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if(item->parent() == ArbolProyecto){
        ui->stackedWidget->setCurrentIndex(0);
        ui->base->setCurrentIndex(0);
        ui->baseMatrices->setCurrentIndex(ArbolProyecto->indexOfChild(item));
    }
    else if(item == Configuraciones){
        ui->stackedWidget->setCurrentIndex(2);
    }


}


void MainWindow::on_baseMatrices_currentChanged(int index)
{
    ui->f->setValue(ms.at(ui->baseMatrices->currentIndex())->GetFilas());
    ui->c->setValue(ms.at(ui->baseMatrices->currentIndex())->GetColumnas());
}


void MainWindow::on_actionGaficar_triggered()
{
    ui->base->setCurrentIndex(1);
    ui->baseSalidas->setCurrentIndex(1);

    QTreeWidgetItem *a = new QTreeWidgetItem(Graficas);

    a->setText(0,"Grafica "+ms.at(ui->baseMatrices->currentIndex())->nombre);
    a->setIcon(0,QIcon(":/new/prefix1/iconos/graficar.png"));
}

