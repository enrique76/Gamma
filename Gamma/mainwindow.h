#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "matriz.h"
#include<QTreeWidgetItem>
#include<QAction>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void AgregarAlArbol(QString);
    void AgregarAlArbol(QAction *,QString);
    void CrearMatriz(int,int,QString,bool);
    void AgregarMatriz(QString,int,int);
    void EliminarMatriz(int);

private slots:
    void on_actionArbol_triggered();
    void on_actionNuevo_Proyecto_triggered();

    void on_actionNuevo_Archivo_triggered();

    void on_actionBarra_de_Herramientas_triggered();

    void on_actionTerminal_triggered();

    void on_actionCerrar_triggered();

    void on_arbol_itemClicked(QTreeWidgetItem *item, int column);

    void on_actionReaolver_triggered();

    void on_actionEstadistica_triggered();


    void on_actionEntre_Matrices_triggered();

    void on_actionEntre_Escalar_triggered();
    

    void on_actionLaTex_triggered();


    void on_arbol_itemDoubleClicked(QTreeWidgetItem *item, int column);

    void on_arbol_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

    void on_actionRenombrar_triggered();

    void on_arbol_windowIconTextChanged(const QString &iconText);

    void on_arbol_windowTitleChanged(const QString &title);

    void on_actionGuardar_triggered();

public:
    Ui::MainWindow *ui;
    QTreeWidgetItem *ArbolProyecto = new QTreeWidgetItem();
    QTreeWidgetItem *ArbolMatrices = new QTreeWidgetItem();
    QString ruta;
    //QVector<matriz> ms;
    int pos = 0;
    QVector<Matriz *> matrices;
    bool isSave = false;
};
#endif // MAINWINDOW_H
