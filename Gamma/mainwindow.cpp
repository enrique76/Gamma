#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nuevo.h"
#include "matriz.h"
#include "rutas.h"
#include<QTreeWidgetItem>
#include<QTreeWidget>
#include<QMessageBox>
#include<QFile>
#include<time.h>
#include<chrono>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    srand(time(NULL));

    //ui->arbol->setVisible(true);


    // iniciando el proyecto
//    ui->actionLaTex->setVisible(false);
   ui->ventanaArbol->setVisible(false);
   //ui->terminal->setVisible(false);
//    ui->actionEntre_Matrices->setEnabled(false);
//    ui->actionEntre_Escalar->setEnabled(false);
//    ui->actionTrigonometria->setEnabled(false);
//    ui->actionReaolver->setEnabled(false);
//    ui->actionImformacion->setEnabled(false);
//    ui->actionEstadistica->setEnabled(false);
//    ui->actionInterpolar->setEnabled(false);
//    ui->actionExtrapolar->setEnabled(false);
//    ui->actionGaficar->setEnabled(false);
//    ui->actionExtras->setEnabled(false);
//    ui->actionGuardar->setEnabled(false);
//    ui->actionGuardar_como->setEnabled(false);

    // arbol

    ui->arbol->addTopLevelItem(this->ArbolProyecto);
    ui->arbol->expandItem(this->ArbolProyecto);

    //QMenu *m = new QMenu();

    menu = new QMenu(ui->arbol);

    ui->arbol->addAction(ui->actionCopiar);
    ui->arbol->addAction(ui->actionPegar);
    //ui->arbol->addSeparator();
    ui->arbol->addAction(ui->actionCerrar);
    //ui->arbol->addSeparator();
    ui->arbol->addAction(ui->actionDuplicar);
    //ui->arbol->addSeparator();
    ui->arbol->addAction(ui->actionRenombrar);
    ui->arbol->addAction(ui->actionRename_All);




//    ui->arbol->addAction(ui->actionCerrar);
//    //ui->arbol->addAction(ui->actionRenombrar);
//    ui->arbol->addAction(ui->actionCopiar);
//    ui->arbol->addAction(ui->actionPegar);
//    ui->arbol->addAction(ui->actionDuplicar);
//    ui->arbol->addAction(ui->actionRename_All);

    ui->arbol->setContextMenuPolicy(Qt::ActionsContextMenu);

    ui->isSave->setStyleSheet("QLabel {color : red}");

    ui->actionPegar->setEnabled(false);
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
    this->ArbolMatrices->setText(0,nombre);

    this->ArbolProyecto->addChild(ArbolMatrices);
}

void MainWindow::AgregarMatriz(QString nombre,QString ruta, int f, int c, bool ok){
    Matriz *m = new Matriz();

    m->CreateItem(ArbolMatrices);

    matrices.append(m);

    m->SetNameItem(nombre);

    m->SetFilas(f);
    m->SetColumnas(c);
    m->SetVectorVisible(ok);
    m->SetRuta(ruta+"/Matrices");
    m->SetData("0");


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
    this->ruta = n.GetRuta();

    ui->contexto_2->setText(this->ruta);


    ArbolProyecto->setText(0,n.nombreProyecto);
    ArbolProyecto->setIcon(0,QIcon(":/new/prefix1/iconos/agregar-carpeta.png"));

    AgregarMatriz(n.GetNameMatriz(),n.GetRuta()+"/"+n.GetNameProyect(),n.filas,n.columnas,n.IsCreateVector());
    ui->ventanaArbol->setVisible(true);
    ui->actionNuevo_Proyecto->setEnabled(false);

    this->pos = 0;


    qDebug()<<this->ruta;
}

void MainWindow::on_actionNuevo_Archivo_triggered(){
    Nuevo n(this);
    n.setWindowTitle("Nueva Matriz");
    n.setWindowIcon(QIcon(":/new/prefix1/iconos/nuevo-documento.png"));
    n.AgregarMatriz();
    n.AbrirArchivo();
    n.exec();
    //ruta = n.ruta;
    //setWindowTitle(windowTitle()+" \t "+ruta);
    //Cambio();

    AgregarMatriz(n.GetNameMatriz(),this->ruta+"/"+n.GetNameProyect(),n.filas,n.columnas,n.IsCreateVector());
}

void MainWindow::on_actionBarra_de_Herramientas_triggered()
{
    ui->toolBar->setVisible(!ui->toolBar->isVisible());
}

void MainWindow::on_actionTerminal_triggered()
{
    //ui->terminal->setVisible(!ui->terminal->isVisible());
}

void MainWindow::EliminarMatriz(int i){
qDebug()<<i;
    ui->area->removeTab(i);
    this->ArbolMatrices->removeChild(matrices.at(i)->item);
    matrices.removeAt(i);
}

void MainWindow::GuardarMatrices(QString r){
    /*
    QString ruta;
    direccion d(this);
    d.nombre("Abrir");
    d.ver(false);
    d.titulo("Ruta   ruta/nombre.extencion");
    d.en_text("Desencriptar");
    d.exec();
    d.ruta(ruta);
    //ruta = "C:/Users/enriq/Desktop/A.txt";


    QFile a(ruta);
    auto inicio = std::chrono::system_clock::now();

    if(a.exists()){
        a.open(QFile::ReadOnly | QFile::Text);

        QTextStream out(&a);
        QString texto = a.readAll();

        QStringList tf = texto.split(',');
        int tam = tf.size()-1;

        // dandole tama;o a la matriz
        int pfa,pca;
        bool p = true;

        pfa = pca = floor(sqrt(tam));

        do{
            if(((pfa*pca) != tam) && (p == true)){
                pca++;
                p = false;
            }
            else if(((pfa*pca) != tam) && (p == false)){
                pfa--;
                p = true;
            }
        }while((pfa*pca) != tam);
        //
        ui->fa->setValue(pfa);
        ui->ca->setValue(pca);

        ui->A->setRowCount(pfa);
        ui->A->setColumnCount(pca);

        x = 0;

        if(d.en_checked()){
            for(int i=0;i<fa;i++){
                ui->A->setHorizontalHeaderItem(i,new QTableWidgetItem("x"+QString::number(i+1)));
                ui->A->setColumnWidth(i,50);
                for(int j=0;j<ca;j++){
                    if(tf[x].count("\n") == 1){
                        tf[x].remove("\n");
                    }
                    ui->A->setItem(i,j,new QTableWidgetItem(QString::number(tf[x].toDouble() / 2)));
                    if(x == tam-1){
                        x = 0;
                    }
                    else{
                        x++;
                    }
                }
            }
        }
        else{
            for(int i=0;i<fa;i++){
                ui->A->setHorizontalHeaderItem(i,new QTableWidgetItem("x"+QString::number(i+1)));
                ui->A->setColumnWidth(i,50);
                for(int j=0;j<ca;j++){
                    if(tf[x].count("\n") == 1){
                        tf[x].remove("\n");
                    }
                    ui->A->setItem(i,j,new QTableWidgetItem(tf[x]));
                    if(x == tam-1){
                        x = 0;
                    }
                    else{
                        x++;
                    }
                }
            }
        }


        a.flush();
        a.close();
    }
    else{
        QMessageBox::critical(this,"Abrir Archivo","El archivo no existe");
    }
    auto final = std::chrono::system_clock::now();
    std::chrono::duration<float> duracion = final - inicio;
    ui->tiempo->setText(QString::number(duracion.count()));
    */




    for(int i=0;i<ArbolMatrices->childCount();i++){
        GuardarMatriz(i);
    }

    ui->isSave->setText("Save: True");
    ui->isSave->setStyleSheet("QLabel {color: green}");

}

void MainWindow::GuardarMatriz(int i){
    qDebug()<<matrices.at(i)->GetRuta();

    QString r = matrices.at(i)->GetRuta()+"/"+ArbolMatrices->child(i)->text(0)+".txt";

    qDebug()<<r;

    QFile a(r);

    a.open(QFile::WriteOnly | QFile::Text);

    if(a.exists()){
        QString texto;
        QTextStream out(&a);

        for(int z=0;z<matrices.at(i)->GetFilas();z++){
            for(int j=0;j<matrices.at(i)->GetColumnas();j++){
               texto += matrices.at(i)->GetValue(z,j) + ",";
            }
            texto+="\n";
            out << texto;
            texto.clear();
        }
        a.flush();
        a.close();

        matrices.at(i)->SetIsSave(true);
    }
    else{
        QMessageBox::critical(this,"Error",a.errorString());

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

void MainWindow::IniciarTiempo(float &i){

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

    ui->contexto_2->setText(matrices.at(this->pos)->GetRuta()+" \t\t Pos: "+QString::number(this->pos)+" \t\t Matrices: "+QString::number(ArbolMatrices->childCount()));

    if(matrices.at(this->pos)->GetIsSave()){
        ui->isSave->setStyleSheet("QLabel {color: green}");
        ui->isSave->setText("Save: True");
    }
    else{
        ui->isSave->setStyleSheet("QLabel {color: red}");
         ui->isSave->setText("Save: False");
    }
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
    if(this->ArbolMatrices->childCount() >= 0){
        ui->area->setTabText(this->pos,ArbolMatrices->child(this->pos)->text(0));
    }
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

    GuardarMatrices("s");
}

void MainWindow::on_arbol_itemChanged(QTreeWidgetItem *item, int column){
    ui->area->setTabText(this->pos,item->text(column));
}


void MainWindow::on_area_currentChanged(int index)
{
    qDebug()<<"Cambio";
}

// botones de colores
void MainWindow::on_amarillo_clicked(){

    auto inicio =  std::chrono::system_clock::now();

    int am,av;

    for(int i=0;i<matrices.at(this->pos)->GetFilas();i++){
        for(int j=0;j<matrices.at(this->pos)->GetColumnas();j++){
            am = (ui->inferior->value() + rand()%(ui->superior->value()-ui->inferior->value()));
            matrices.at(this->pos)->SetData(i,j,am);

            if(matrices.at(this->pos)->GetV()){
                av = (ui->inferior->value() + rand()%(ui->superior->value()-ui->inferior->value()));
                matrices.at(this->pos)->SetDataV(i,av);
            }
        }
    }

    auto final = std::chrono::system_clock::now();
    std::chrono::duration<float> duracion = final - inicio;
    ui->tiempo->setText(QString::number(duracion.count()));
}


void MainWindow::on_area_tabBarClicked(int index)
{
    this->pos = index;
}


void MainWindow::on_actionCopiar_triggered(){
    this->cm = true;
    ui->actionCopiar->setEnabled(false);
    ui->actionPegar->setEnabled(true);

    this->Cm->Copi(matrices.at(this->pos));

    qDebug()<<"Matriz"<<this->pos<<" Copiada";
}


void MainWindow::on_actionPegar_triggered(){
    this->cm = false;
    ui->actionCopiar->setEnabled(true);
    ui->actionPegar->setEnabled(false);

    //this->Cm->Copi(matrices.at(this->pos));

    qDebug()<<"Matriz"<<this->pos<<" Pegada";
}

