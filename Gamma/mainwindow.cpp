#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nuevo.h"
#include<QTreeWidgetItem>
#include<QTreeWidget>
#include"importar.h"
#include<QDateTime>
#include<QMessageBox>
#include<QDir>
#include"retiquetas.h"
#include<time.h>
#include<chrono>
#include<QTextStream>
#include<QFile>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    srand(time(NULL));

    // iniciando el proyecto
    ui->ventanaArbol->setVisible(false);
    ui->terminal->setVisible(false);
    ui->actionEntre_Matrices->setEnabled(false);
    ui->actionEntre_Escalar->setEnabled(false);
    ui->actionTrigonometria->setEnabled(false);
    ui->actionReaolver->setEnabled(false);
    ui->actionInformacion->setEnabled(false);
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
    ui->actionNuevo_Archivo->setEnabled(false);

    // arbol

    //QMenu *m = new QMenu();

    ui->arbol->addAction(ui->actionCerrar);
    ui->arbol->addAction(ui->actionRenombrar);
    ui->arbol->addAction(ui->actionRenombrar_Matrices);
    ui->arbol->addAction(ui->actionCopiar);
    ui->arbol->addAction(ui->actionPegar);
    ui->arbol->addAction(ui->actionRenombrar_Etiquetas);
    ui->arbol->addAction(ui->actionInformacion);

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

    Historial->setText(0,"Historial");
    Historial->setIcon(0,QIcon(":/new/prefix1/iconos/historial.png"));

    ui->arbol->addTopLevelItem(ArbolProyecto);
    ui->arbol->addTopLevelItem(Graficas);
    ui->arbol->addTopLevelItem(Operaciones);
    ui->arbol->addTopLevelItem(Configuraciones);
    ui->arbol->addTopLevelItem(Historial);

     //



     ui->stackedWidget->setCurrentIndex(0);

     //

     ui->base->setCurrentIndex(0);

     AddHistorial("Inicio de Gamma");



    ui->progressBar->setVisible(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::GuardarMatriz(int z){

    if(ms.at(z)->getVector()){
        QFile a(ms.at(z)->getRuta()+"/"+ms.at(z)->getNombre()+".txt");
        QFile v(ms.at(z)->getRuta()+"/v.txt");
        QFile hl(ms.at(z)->getRuta()+"/hl.txt");
        QFile vl(ms.at(z)->getRuta()+"/vl.txt");

        a.open(QFile::WriteOnly | QFile::Text);
        v.open(QFile::WriteOnly | QFile::Text);
        hl.open(QFile::WriteOnly | QFile::Text);
        vl.open(QFile::WriteOnly | QFile::Text);

        //qDebug()<<a.fileName();

        QTextStream out(&a);
        QTextStream out2(&v);
        QTextStream outh(&hl);
        QTextStream outv(&vl);

        QString texto;
        QString texto2;
        QStringList H,V;

        H = ms.at(z)->getHL();
        V = ms.at(z)->getVL();


        //qDebug()<<H;
        //qDebug()<<V;

        for(int i=0;i<ms.at(z)->GetFilas();i++){
            for(int j=0;j<ms.at(z)->GetColumnas();j++){
                texto += ms.at(z)->GetValor(i,j)+",";
            }

            texto2 += ms.at(z)->GetValor(i)+",";

            texto += "\n";
            out<<texto;
            out2<<texto2;

            texto.clear();
        }

        v.flush();
        v.close();
        a.flush();
        a.close();

        for(int i=0;i<H.size();i++){
            outh<<H.at(i)+",";
        }

        hl.flush();
        hl.close();

        for(int i=0;i<V.size();i++){
            outv<<V.at(i)+",";
        }

        vl.flush();
        vl.close();
    }
    else{
        QFile a(ms.at(z)->getRuta()+"/"+ms.at(z)->getNombre()+".txt");
        QFile hl(ms.at(z)->getRuta()+"/hl.txt");
        QFile vl(ms.at(z)->getRuta()+"/vl.txt");

        a.open(QFile::WriteOnly | QFile::Text);
        hl.open(QFile::WriteOnly | QFile::Text);
        vl.open(QFile::WriteOnly | QFile::Text);

        //qDebug()<<a.fileName();

        QTextStream out(&a);
        QTextStream outh(&hl);
        QTextStream outv(&vl);

        QString texto;
        QStringList H,V;

        H = ms.at(z)->getHL();
        V = ms.at(z)->getVL();

        for(int i=0;i<ms.at(z)->GetFilas();i++){
            for(int j=0;j<ms.at(z)->GetColumnas();j++){
                texto += ms.at(z)->GetValor(i,j)+",";
            }

            texto += "\n";
            out<<texto;

            texto.clear();
        }

        a.flush();
        a.close();

        for(int i=0;i<H.size();i++){
            outh<<H.at(i)+",";
        }

        hl.flush();
        hl.close();

        for(int i=0;i<V.size();i++){
            outv<<V.at(i)+",";
        }

        vl.flush();
        vl.close();
    }


}

void MainWindow::irOperaciones()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->base->setCurrentIndex(1);
    ui->baseSalidas->setCurrentIndex(1);

}

void MainWindow::irMatrices()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->base->setCurrentIndex(0);
}

void MainWindow::InicioProceso(){
    ui->progressBar->setValue(0);

    ui->progressBar->setVisible(true);

    this->inicio = std::chrono::system_clock::now();

}

void MainWindow::Proceso(double a){
    ui->progressBar->setValue(ui->progressBar->value()+(ui->progressBar->maximum()/(a)));
}

void MainWindow::FinalProceso(){
    this->final = std::chrono::system_clock::now();
    this->duracion = this->final-this->inicio;

    ui->tiempo->setText(QString::number(this->duracion.count()));

    ui->progressBar->setVisible(false);
}


// Mostrar o ocultar la barra lateral
void MainWindow::on_actionArbol_triggered(){

    //ui->ventanaArbol->setVisible(!ui->arbol->isVisible());
}

// nuevo proyecto
void MainWindow::on_actionNuevo_Proyecto_triggered(){
    Nuevo n(this);

    n.setWindowTitle("Nuevo Proyecto");
    n.setWindowIcon(QIcon(":/new/prefix1/iconos/agregar-carpeta.png"));
    n.exec();
    this->ruta = n.ruta;
    //setWindowTitle(windowTitle()+" \t "+ruta);

    if(n.ok){

//        ArbolProyecto->setText(0,n.nombreProyecto);
//        ArbolProyecto->setIcon(0,QIcon(":/new/prefix1/iconos/agregar-carpeta.png"));

        QTreeWidgetItem *s = new QTreeWidgetItem(ArbolProyecto);

        s->setText(0,n.nombreMatriz);
        s->setIcon(0,QIcon(":/new/prefix1/iconos/matriz3.png"));

        //s->setFlags(s->flags() | Qt::ItemIsEditable);



        // creando matriz

        matriz *m = new matriz();

        m->Crear(n.filas,n.columnas,n.nombreMatriz,n.GetV());

        m->setRuta(this->ruta+"/Matrices");

        ms.push_back(m);

        ui->f->setValue(n.filas);
        ui->c->setValue(n.columnas);

        nProyecto = n.nombreProyecto;



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
        ui->actionInformacion->setEnabled(true);
        ui->actionEstadistica->setEnabled(true);
        ui->actionInterpolar->setEnabled(true);
        ui->actionExtrapolar->setEnabled(true);
        ui->actionGaficar->setEnabled(true);
        ui->actionExtras->setEnabled(true);
        ui->actionGuardar->setEnabled(true);
        ui->actionGuardar_como->setEnabled(true);
        ui->actionNuevo_Archivo->setEnabled(true);
        ui->actionImportar->setEnabled(true);
        ui->actionNuevo_Proyecto->setEnabled(false);

        ui->stackedWidget->setCurrentIndex(1);

        QString t;

        t += "Creacion de Proyecto: "+n.nombreProyecto;
        t += "\n\n \t\t Matriz: "+n.nombreMatriz;
        t += "\n\n \t\t Filas: "+QString::number(n.filas);
        t += "\n\n \t\t Columnas: "+QString::number(n.columnas);
        t += "\n\n \t\t Etiquetas-Filas: "+m->MinH()+"..."+m->MaxH();
        t += "\n\n \t\t Etiquetas-Columnas: "+m->MinV()+"..."+m->MaxV();
        t += "\n\n \t\t Ruta: "+m->getRuta();
        t += "\n\n \t\t Comentario: "+n.GetComentario();
        t += "\n\n \t\t Vector: "+QString::number(n.GetV());

        AddHistorial(t);

        ui->cNombreProyecto->setText(n.nombreProyecto);
        ui->cRuta->setText(this->ruta);
        ui->CM->addItem(n.nombreMatriz);
        ui->cNM->setText("0");
        ui->CF->setText(QString::number(n.filas));
        ui->CC->setText(QString::number(n.columnas));

        ui->nMatrices->setText(QString::number(ArbolProyecto->childCount())+" Matrices");
    }

    //ui->toolBaMain->setVisible(false);



}

void MainWindow::on_actionNuevo_Archivo_triggered(){
    Nuevo n(this);
    n.setWindowTitle("Nueva Matriz");
    n.setWindowIcon(QIcon(":/new/prefix1/iconos/nuevo-documento.png"));
    n.AgregarMatriz();
    n.AbrirArchivo();
    n.exec();
    //setWindowTitle(windowTitle()+" \t "+ruta);

    if(n.ok){
        QTreeWidgetItem *s = new QTreeWidgetItem(ArbolProyecto);

        s->setText(0,n.nombreMatriz);
        s->setIcon(0,QIcon(":/new/prefix1/iconos/matriz3.png"));
       //ui->arbol->addTopLevelItem(ArbolProyecto);
        s->setFlags(s->flags() | Qt::ItemIsEditable);

        matriz *m = new matriz();

        m->Crear(n.filas,n.columnas,n.nombreMatriz,n.GetV());
        m->setRuta(this->ruta+"/Matrices");

        ms.push_back(m);

        ui->f->setValue(n.filas);
        ui->c->setValue(n.columnas);



        ui->baseMatrices->addTab(ms.at(ms.size()-1),n.GetNombreMatriz());
        ui->baseMatrices->setCurrentIndex(ui->baseMatrices->count()-1);

        QString t;

        t += "Creacion de Matriz: "+n.nombreMatriz;
        t += "\n\n \t\t Filas: "+QString::number(n.filas);
        t += "\n\n \t\t Columnas: "+QString::number(n.columnas);
        t += "\n\n \t\t Etiquetas-Filas: "+m->MinH()+"..."+m->MaxH();
        t += "\n\n \t\t Etiquetas-Columnas: "+m->MinV()+"..."+m->MaxV();
        t += "\n\n \t\t Ruta: "+m->getRuta();
        t += "\n\n \t\t Comentario: "+n.GetComentario();
        t += "\n\n \t\t Vector: "+QString::number(n.GetV());

        AddHistorial(t);

        ui->cNombreProyecto->setText(n.nombreProyecto);
        ui->cRuta->setText(this->ruta);
        ui->CM->addItem(n.nombreMatriz);
        ui->cNM->setText(QString::number(ui->cNM->text().toInt()+1));

        ui->nMatrices->setText(QString::number(ArbolProyecto->childCount())+" Matrices");

    }


}

void MainWindow::on_actionBarra_de_Herramientas_triggered()
{
   // ui->toolBar->setVisible(!ui->toolBar->isVisible());
}


void MainWindow::on_actionTerminal_triggered()
{
    //ui->terminal->setVisible(!ui->terminal->isVisible());
}


void MainWindow::on_actionCerrar_triggered()
{
        QMessageBox::StandardButton reply;
          QMessageBox messageBox;

          reply = messageBox.question(this, "Eliminar Matriz", "Seguro que quiere eliminar la matriz "+ArbolProyecto->child(ui->baseMatrices->currentIndex())->text(0),
                                      QMessageBox::Yes | QMessageBox::No);
          if (reply == QMessageBox::Yes){
              QString t;

              t += "Eliminacion de Matriz: "+ArbolProyecto->child(ui->baseMatrices->currentIndex())->text(0);

              AddHistorial(t);

              ArbolProyecto->removeChild(ArbolProyecto->child(ui->baseMatrices->currentIndex()));
              ms.remove(ui->baseMatrices->currentIndex());
              ui->baseMatrices->removeTab(ui->baseMatrices->currentIndex());

              ui->nMatrices->setText(QString::number(ArbolProyecto->childCount()) + "Matrices");
          }
}


void MainWindow::on_arbol_itemClicked(QTreeWidgetItem *item, int column){
   if(item->parent() == ArbolProyecto){
       pos = ArbolProyecto->indexOfChild(item);

   }
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

void MainWindow::ContexMenuTreeWidget(QContextMenuEvent *e){
    QMenu *m = new QMenu();

    m->addAction(ui->actionCerrar);
    m->addAction(ui->actionRenombrar);
    m->addAction(ui->actionCopiar);
    m->addAction(ui->actionPegar);
    m->addAction(ui->actionRenombrar_Etiquetas);

    m->exec(QCursor::pos());
}


void MainWindow::on_actionLaTex_triggered(){
//    AgregarAlArbol(ui->actionLaTex,"LaTex");

//    texto *t = new texto();

    //p->AgregarTexto(t,"LaTex_"+p->CurrentIndexText());
}

void MainWindow::on_arbol_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    if(item->parent() == ArbolProyecto){
        ui->stackedWidget->setCurrentIndex(1);
        ui->base->setCurrentIndex(0);
        ui->baseMatrices->setCurrentIndex(ArbolProyecto->indexOfChild(item));
    }
    else if(item == Configuraciones){
        ui->stackedWidget->setCurrentIndex(2);
    }
    else if(item == Historial){
        ui->stackedWidget->setCurrentIndex(3);
    }
    else if(item == Operaciones){
        irOperaciones();
        ui->Operaciones->setCurrentIndex(0);
    }


}

void MainWindow::on_baseMatrices_currentChanged(int index)
{
    ui->f->setValue(ms.at(ui->baseMatrices->currentIndex())->GetFilas());
    ui->c->setValue(ms.at(ui->baseMatrices->currentIndex())->GetColumnas());
}

void MainWindow::on_actionImportar_triggered(){
    importar *i = new importar();



    i->exec();

    if(i->getV()){
        i->PararDatos(ms.at(ui->baseMatrices->currentIndex()),ui->f,ui->c);

        // cambiar el nombre

        ui->baseMatrices->setTabText(ui->baseMatrices->currentIndex(),ms.at(ui->baseMatrices->currentIndex())->getNombre());
        ArbolProyecto->child(ui->baseMatrices->currentIndex())->setText(0,ms.at(ui->baseMatrices->currentIndex())->getNombre());

        QString t;

        t += "Importacion de Datos hacia "+ms.at(ui->baseMatrices->currentIndex())->nombre;
        t += "\n\n \t\t Desde: "+i->getRuta();
        t += "\n\n \t\t Filas: "+QString::number(i->getFilas());
        t += "\n\n \t\t Columnas: "+QString::number(i->getColumnas());
        t += "\n\n \t\t Ceparador: "+i->getCeparador();


        AddHistorial(t);

        ui->CM->clear();

        for(int i=0;i<ArbolProyecto->childCount();i++){
            ui->CM->addItem(ms.at(i)->getNombre());
        }
    }

}


void MainWindow::on_actionRenombrar_triggered(){
//    ArbolProyecto->child(pos)->setFlags(ArbolProyecto->flags() | Qt::ItemIsEditable);

//    ArbolProyecto->child(pos)->


}

void MainWindow::AddHistorial(QString t){
    QString texto;

    texto += "\n\n======================================================"+QDateTime::currentDateTime().toString()+"======================================================"+"\n \t >> ";

    texto += t;

    ui->historial->insertPlainText(texto);

}

void MainWindow::on_CM_activated(int index)
{
    ui->CF->setText(QString::number(ms.at(index)->GetFilas()));
    ui->CC->setText(QString::number(ms.at(index)->GetColumnas()));
}


void MainWindow::on_stackedWidget_currentChanged(int arg1){ /// this
//    ui->CM->clear();

//    for(int i=0;i<ArbolProyecto->childCount();i++){
//        ui->CM->addItem(ms.at(i)->getNombre());
//    }

////    ui->CF->setText(QString::number(ms.at(0)->GetFilas()));
////    ui->CC->setText(QString::number(ms.at(0)->GetColumnas()));

//    ui->cNM->setText(QString::number(ms.size()));

//    ui->cNombreProyecto->setText(this->nProyecto);
}


void MainWindow::on_CM_currentIndexChanged(int index)
{
//    ui->CF->setText(QString::number(ms.at(index)->GetFilas()));
//    ui->CC->setText(QString::number(ms.at(index)->GetColumnas()));
}


void MainWindow::on_cRuta_textChanged(const QString &arg1){
//    QMessageBox::StandardButton reply;
//      QMessageBox messageBox;

//      reply = messageBox.question(this, "Cambiar", "Quiere Cambiar la ruta del proyecto?",
//                                  QMessageBox::Yes | QMessageBox::No);
//      if (reply == QMessageBox::Yes){
//          QDir *directorio = new QDir();

//          this->ruta = ui->cRuta->text();

//          directorio->mkpath(ruta);
//      }

}


void MainWindow::on_cNombreProyecto_editingFinished(){
//    QMessageBox::StandardButton reply;
//      QMessageBox messageBox;

//      reply = messageBox.question(this, "Cambiar", "Quiere Cambiar el nombre del proyecto?",
//                                  QMessageBox::Yes | QMessageBox::No);
//      if (reply == QMessageBox::Yes){

//         this->nProyecto = ui->cNombreProyecto->text();
//      }
//      else{
//          ui->cNombreProyecto->setText(this->nProyecto);
//      }
}


void MainWindow::on_actionRenombrar_Etiquetas_triggered()
{
    rEtiquetas e(this);

    e.setTitle("Renombrar Etiquetas");
    e.setIcon(ui->actionRenombrar_Etiquetas->icon());

    e.setF(ms.at(ui->baseMatrices->currentIndex())->GetFilas());
    e.setC(ms.at(ui->baseMatrices->currentIndex())->GetColumnas());

    e.exec();

    QStringList h,v;

    if(e.getV()){
        e.getListH(h);

        //qDebug()<<h;
        ms.at(ui->baseMatrices->currentIndex())->setHL(h);

        e.getListV(v);

       // qDebug()<<v;

       ms.at(ui->baseMatrices->currentIndex())->setVL(v);
    }
}


void MainWindow::on_actionRenombrar_Matrices_triggered(){
    rEtiquetas e(this);

    e.setTitle("Renombrar Matrices");
    e.setIcon(ui->actionRenombrar_Matrices->icon());

    e.setF(ArbolProyecto->childCount());


    e.setE(true);

    e.exec();

    QStringList n;

    if(e.getV()){
        e.getListH(n);

        int aux = ArbolProyecto->childCount();


        for(int i=0;i<aux;i++){
            // arbol
            ArbolProyecto->child(i)->setText(0,n.at(i));

            // matrices
            ms.at(i)->SetNombre(n.at(i));

            // basematrices
            ui->baseMatrices->setTabText(i,n.at(i));

            // cambiar ruta de matrices
            ms.at(i)->setRuta(this->ruta+"/Matrices");
        }

    }


}

void MainWindow::on_actionInformacion_triggered(){
    ui->stackedWidget->setCurrentIndex(1);
    ui->base->setCurrentIndex(1);
    ui->baseSalidas->setCurrentIndex(2);

    ms.at(ui->baseMatrices->currentIndex())->Copy(ui->tableWidget);

    ui->iNombre->setText(ms.at(ui->baseMatrices->currentIndex())->getNombre());
    //ui->iRuta->setText(ms.at(ui->baseMatrices->currentIndex()))

    ui->iFilas->setText(QString::number(ms.at(ui->baseMatrices->currentIndex())->GetFilas()));
    ui->iColumnas->setText(QString::number(ms.at(ui->baseMatrices->currentIndex())->GetColumnas()));

    ui->iComentario->setText(ms.at(ui->baseMatrices->currentIndex())->getComentario());
}


void MainWindow::on_f_valueChanged(int arg1){
    //ms.at(ui->baseMatrices->currentIndex())->SetFilas(arg1);
    qDebug()<<arg1;


}


void MainWindow::on_c_valueChanged(int arg1)
{
    //ms.at(ui->baseMatrices->currentIndex())->SetColumnas(arg1);
    qDebug()<<arg1;
}

// Amarillo - Valores Aleatorios
void MainWindow::on_pushButton_clicked(){

    InicioProceso();

    if(ui->li->value() < ui->ls->value()){

        if(ms.at(ui->baseMatrices->currentIndex())->getVector()){


            ui->progressBar->setVisible(true);

            int f = ms.at(ui->baseMatrices->currentIndex())->GetFilas();
            int c = ms.at(ui->baseMatrices->currentIndex())->GetColumnas();

            int aux;

            for(int i=0;i<f;i++){
                for(int j=0;j<c;j++){
                    aux = ui->li->value() + rand()%(ui->ls->value());

                    ms.at(ui->baseMatrices->currentIndex())->AgregarValorMatriz(i,j,QString::number(aux));

                    Proceso(f*c);

                }

                aux = ui->li->value() + rand()%(ui->ls->value());

                ms.at(ui->baseMatrices->currentIndex())->AgregarValorVector(i,QString::number(aux));
            }



            ;
        }
        else{

            ui->progressBar->setVisible(true);
            ui->progressBar->setValue(0);

            int f = ms.at(ui->baseMatrices->currentIndex())->GetFilas();
            int c = ms.at(ui->baseMatrices->currentIndex())->GetColumnas();

            int aux;

            for(int i=0;i<f;i++){
                for(int j=0;j<c;j++){
                    aux = ui->li->value() + rand()%(ui->ls->value());

                    ms.at(ui->baseMatrices->currentIndex())->AgregarValorMatriz(i,j,QString::number(aux));

                    Proceso(f*c);

                }
            }

        }

        FinalProceso();
    }
    else{
        QMessageBox::critical(this,"Error","El limite inferior debe ser mas pequeño que el limite superior");
    }
}


void MainWindow::on_actionGuardar_triggered(){
    // matrices

    InicioProceso();

    for(int i=0;i<ms.size();i++){
        //qDebug()<<"#"<<i;
        GuardarMatriz(i);

        Proceso(ms.size());
    }

    FinalProceso();
}


// Operaciones


void MainWindow::on_actionEstadistica_triggered(){
    irOperaciones();

    ui->Operaciones->setCurrentIndex(0);
}

void MainWindow::on_actionGaficar_triggered()
{
   irOperaciones();
   ui->Operaciones->setCurrentIndex(1);
}

void MainWindow::on_actionEntre_Matrices_triggered(){
    irOperaciones();
    ui->Operaciones->setCurrentIndex(2);
}

void MainWindow::on_actionEntre_Escalar_triggered(){
    irOperaciones();
    ui->Operaciones->setCurrentIndex(3);
    ui->MatricesEscalar->clear();
    for(int i=0;i<ArbolProyecto->childCount();i++){

        ui->MatricesEscalar->addItem(ArbolProyecto->child(i)->text(0));

    }

    int index = ui->baseMatrices->currentIndex();

    int f = ms.at(index)->GetFilas();
    int c = ms.at(index)->GetColumnas();

    ui->resultado->setRowCount(f);
    ui->resultado->setColumnCount(c);
    ui->resultadoV->setRowCount(f);
    ui->resultadoV->setColumnCount(1);

    QStringList h,v;

    h = ms.at(index)->getHL();
    v = ms.at(index)->getVL();

    ui->resultado->setHorizontalHeaderLabels(h);
    ui->resultado->setVerticalHeaderLabels(v);

    ui->resultadoV->setVisible(ms.at(index)->getVector());

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            ui->resultado->setItem(i,j,new QTableWidgetItem(ms.at(index)->GetValor(i,j)));
        }

        if(ms.at(index)->getVector()){
            ui->resultadoV->setItem(i,0,new QTableWidgetItem(ms.at(index)->GetValor(i)));
        }
    }

    ui->MatricesEscalar->setCurrentIndex(ui->baseMatrices->currentIndex());

}

void MainWindow::on_actionTrigonometria_triggered()
{
    irOperaciones();
    ui->Operaciones->setCurrentIndex(4);
}

void MainWindow::on_actionInterpolar_triggered()
{
    irOperaciones();
    ui->Operaciones->setCurrentIndex(5);
}

void MainWindow::on_actionExtrapolar_triggered()
{
    irOperaciones();
    ui->Operaciones->setCurrentIndex(6);
}

void MainWindow::on_actionExtras_triggered()
{
    irOperaciones();
    ui->Operaciones->setCurrentIndex(7);
}

void MainWindow::on_terminarOperaciones_clicked()
{
    irMatrices();
}


void MainWindow::on_Operaciones_currentChanged(int index){
    if(index == 3){
        ui->MatricesEscalar->clear();
        for(int i=0;i<ArbolProyecto->childCount();i++){

            ui->MatricesEscalar->addItem(ArbolProyecto->child(i)->text(0));

        }

        int index = ui->baseMatrices->currentIndex();

        int f = ms.at(index)->GetFilas();
        int c = ms.at(index)->GetColumnas();

        ui->resultado->setRowCount(f);
        ui->resultado->setColumnCount(c);
        ui->resultadoV->setRowCount(f);
        ui->resultadoV->setColumnCount(1);

        QStringList h,v;

        h = ms.at(index)->getHL();
        v = ms.at(index)->getVL();

        ui->resultado->setHorizontalHeaderLabels(h);
        ui->resultado->setVerticalHeaderLabels(v);

        ui->resultadoV->setVisible(ms.at(index)->getVector());

        for(int i=0;i<f;i++){
            for(int j=0;j<c;j++){
                ui->resultado->setItem(i,j,new QTableWidgetItem(ms.at(index)->GetValor(i,j)));
            }

            if(ms.at(index)->getVector()){
                ui->resultadoV->setItem(i,0,new QTableWidgetItem(ms.at(index)->GetValor(i)));
            }
        }
    }
}

void MainWindow::on_MatricesEscalar_activated(int index){

    int f = ms.at(index)->GetFilas();
    int c = ms.at(index)->GetColumnas();

    ui->resultado->setRowCount(f);
    ui->resultado->setColumnCount(c);
    ui->resultadoV->setRowCount(f);
    ui->resultadoV->setColumnCount(1);

    QStringList h,v;

    h = ms.at(index)->getHL();
    v = ms.at(index)->getVL();

    ui->resultado->setHorizontalHeaderLabels(h);
    ui->resultado->setVerticalHeaderLabels(v);

    ui->resultadoV->setVisible(ms.at(index)->getVector());

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            ui->resultado->setItem(i,j,new QTableWidgetItem(ms.at(index)->GetValor(i,j)));
        }

        if(ms.at(index)->getVector()){
            ui->resultadoV->setItem(i,0,new QTableWidgetItem(ms.at(index)->GetValor(i)));
        }
    }
}


void MainWindow::on_baseSalidas_currentChanged(int arg1){
    if(arg1 == 1){
        int index = ui->baseMatrices->currentIndex();

        int f = ms.at(index)->GetFilas();
        int c = ms.at(index)->GetColumnas();

        ui->resultado->setRowCount(f);
        ui->resultado->setColumnCount(c);
        ui->resultadoV->setRowCount(f);
        ui->resultadoV->setColumnCount(1);

        QStringList h,v;

        h = ms.at(index)->getHL();
        v = ms.at(index)->getVL();

        ui->resultado->setHorizontalHeaderLabels(h);
        ui->resultado->setVerticalHeaderLabels(v);

        ui->resultadoV->setVisible(ms.at(index)->getVector());

        for(int i=0;i<f;i++){
            for(int j=0;j<c;j++){
                ui->resultado->setItem(i,j,new QTableWidgetItem(ms.at(index)->GetValor(i,j)));
            }

            if(ms.at(index)->getVector()){
                ui->resultadoV->setItem(i,0,new QTableWidgetItem(ms.at(index)->GetValor(i)));
            }
        }
    }
}

void MainWindow::on_pushButton_9_clicked(){

    irMatrices();

    matriz *m = new matriz();

    m->Crear(ui->resultado->rowCount(),ui->resultado->columnCount(),this->nOperacion,ui->resultadoV->isVisible());

    m->setRuta(this->ruta+"/Operaciones");



    ui->f->setValue(ui->resultado->rowCount());
    ui->c->setValue(ui->resultado->columnCount());

    QStringList h,v;

    for(int i=0;i<ui->resultado->rowCount();i++){
        h << ui->resultado->horizontalHeaderItem(i)->text();
    }

    m->setHL(h);

    for(int i=0;i<ui->resultado->columnCount();i++){
        v << ui->resultado->verticalHeaderItem(i)->text();
    }

    m->setVL(v);

    for(int i=0;i<ui->resultado->rowCount();i++){
        for(int j=0;j<ui->resultado->columnCount();j++){
            m->AgregarValorMatriz(i,j,ui->resultado->item(i,j)->text());
        }

        if(ui->resultadoV->isVisible()){
            m->AgregarValorVector(i,ui->resultadoV->item(i,0)->text());
        }
    }

    ms.push_back(m);

    ui->baseMatrices->addTab(m,nOperacion);
    ui->baseMatrices->setCurrentIndex(ui->baseMatrices->count()-1);

    // Agregar a Arbol

    QTreeWidgetItem *s = new QTreeWidgetItem(ArbolProyecto);

    s->setText(0,this->nOperacion);
    s->setIcon(0,QIcon(":/new/prefix1/iconos/matriz3.png"));

    QString t;

    t += "Operacion : "+this->nOperacion;
    t += "\n\n \t\t Ruta : "+m->getRuta();

    AddHistorial(t);

}

// operaciones Escalar

// + x

void MainWindow::on_masEscalar_clicked(){

    InicioProceso();



    int a = ui->MatricesEscalar->currentIndex();
    double e = ui->escalar->value();

    this->nOperacion = QString::number(e) + " + " + ms.at(a)->getNombre();

    int f = ui->resultado->rowCount();
    int c = ui->resultado->columnCount();

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            ui->resultado->setItem(i,j,new QTableWidgetItem(QString::number(e + ui->resultado->item(i,j)->text().toDouble())));

            ui->progressBar->setValue(ui->progressBar->value()+(ui->progressBar->maximum()/(f*c)));

            Proceso(f*c);
        }

        if(ui->resultadoV->isVisible()){
            ui->resultadoV->setItem(i,0,new QTableWidgetItem(QString::number(e  + ui->resultadoV->item(i,0)->text().toDouble())));
        }
    }

    FinalProceso();
}

// - x

void MainWindow::on_menosEscalar_clicked(){
    InicioProceso();

    int a = ui->MatricesEscalar->currentIndex();
    double e = ui->escalar->value();

    this->nOperacion =  ms.at(a)->getNombre() + " - " + QString::number(e);

    int f = ui->resultado->rowCount();
    int c = ui->resultado->columnCount();

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            ui->resultado->setItem(i,j,new QTableWidgetItem(QString::number(ui->resultado->item(i,j)->text().toDouble() - e)));

            ui->progressBar->setValue(ui->progressBar->value()+(ui->progressBar->maximum()/(f*c)));

            Proceso(f*c);
        }

        if(ui->resultadoV->isVisible()){
            ui->resultadoV->setItem(i,0,new QTableWidgetItem(QString::number(ui->resultadoV->item(i,0)->text().toDouble() - e)));
        }
    }

    FinalProceso();
}

// * x
void MainWindow::on_porEscalar_clicked(){
    InicioProceso();

    int a = ui->MatricesEscalar->currentIndex();
    double e = ui->escalar->value();

    this->nOperacion = QString::number(e) + " * " + ms.at(a)->getNombre();


    int f = ui->resultado->rowCount();
    int c = ui->resultado->columnCount();

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            ui->resultado->setItem(i,j,new QTableWidgetItem(QString::number(e * ui->resultado->item(i,j)->text().toDouble())));

            ui->progressBar->setValue(ui->progressBar->value()+(ui->progressBar->maximum()/(f*c)));

            Proceso(f*c);
        }

        if(ui->resultadoV->isVisible()){
            ui->resultadoV->setItem(i,0,new QTableWidgetItem(QString::number(e  * ui->resultadoV->item(i,0)->text().toDouble())));
        }
    }

    FinalProceso();
}

// / x
void MainWindow::on_sobreEscalar_clicked(){
    if(ui->escalar->value() != 0){
        InicioProceso();

        int a = ui->MatricesEscalar->currentIndex();
        double e = ui->escalar->value();

        this->nOperacion =  ms.at(a)->getNombre() + " / " + QString::number(e);

        int f = ui->resultado->rowCount();
        int c = ui->resultado->columnCount();

        for(int i=0;i<f;i++){
            for(int j=0;j<c;j++){
                ui->resultado->setItem(i,j,new QTableWidgetItem(QString::number(ui->resultado->item(i,j)->text().toDouble() / e )));

                ui->progressBar->setValue(ui->progressBar->value()+(ui->progressBar->maximum()/(f*c)));

                Proceso(f*c);
            }

            if(ui->resultadoV->isVisible()){
                ui->resultadoV->setItem(i,0,new QTableWidgetItem(QString::number(ui->resultadoV->item(i,0)->text().toDouble() / e)));
            }
        }

        FinalProceso();
    }
    else{
        QMessageBox::critical(this,"Error","No se puede dividir sobre 0");
    }
}




