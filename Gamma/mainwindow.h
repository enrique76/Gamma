#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "matriz.h"
#include<QTreeWidgetItem>
#include<QAction>
#include<chrono>
#include<QDir>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void GuardarMatriz(int );
    void irOperaciones();
    void irMatrices();
    void InicioProceso();
    void Proceso(double);
    void FinalProceso();
    void MatrizGlobal();
    void VerBotonesOperaciones(bool);
    void Inicio();
    void Final();

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

    void ContexMenuTreeWidget(QContextMenuEvent *);

    void on_actionLaTex_triggered();


    void on_arbol_itemDoubleClicked(QTreeWidgetItem *item, int column);

    void on_baseMatrices_currentChanged(int index);

    void on_actionGaficar_triggered();

    void on_actionImportar_triggered();

    void on_actionRenombrar_triggered();

    void AddHistorial(QString);

    void on_CM_activated(int index);

    void on_stackedWidget_currentChanged(int arg1);

    void on_CM_currentIndexChanged(int index);

    void on_cRuta_textChanged(const QString &arg1);

    void on_cNombreProyecto_editingFinished();

    void on_actionRenombrar_Etiquetas_triggered();

    void on_actionRenombrar_Matrices_triggered();

    void on_actionInformacion_triggered();

    void on_f_valueChanged(int arg1);

    void on_c_valueChanged(int arg1);

    void on_pushButton_clicked();

    void on_actionGuardar_triggered();


    void on_actionInterpolar_triggered();

    void on_actionExtrapolar_triggered();

    void on_actionExtras_triggered();

    void on_actionTrigonometria_triggered();


    void on_terminarOperaciones_clicked();

    void on_Operaciones_currentChanged(int index);

    void on_masEscalar_clicked();

    void on_MatricesEscalar_activated(int index);

    void on_baseSalidas_currentChanged(int arg1);

    void on_menosEscalar_clicked();

    void on_porEscalar_clicked();

    void on_sobreEscalar_clicked();

    void on_pushButton_9_clicked();

    void on_MatricesEscalar_currentIndexChanged(int index);

    void on_actionMatriz_Global_triggered();

    void on_Operaciones_tabBarClicked(int index);

    void on_AgregarMatrice_clicked();

    void on_QuitarMatrice_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_3_clicked();

    void on_elevadoEscalar_clicked();

    void on_Escalarelevado_clicked();

    void on_EscalarMenos_clicked();

    void on_EscalarSobre_clicked();

    void on_Par_clicked();

    void on_f_editingFinished();

    void on_c_editingFinished();

    void on_actionMatriz_de_Rigidez_triggered();

    void on_MatricesParaUtilizarMatriz_currentTextChanged(const QString &arg1);

    void on_QuitarMatrice_2_clicked();

    void on_masMatriz_clicked();

    void on_menosMatriz_clicked();

    void on_actionFunete_triggered();

    void on_actionColor_triggered();

    void on_actionAbrir_triggered();


    void on_actionReiniciar_triggered();

    void on_agregarMR_clicked();

    void on_pushButton_12_clicked();

    void on_tMR_cellClicked(int row, int column);

    void on_actionVariables_triggered();

    void on_addVariable_clicked();

    void on_viewVariables_cellClicked(int row, int column);

    void on_deleteVariable_clicked();

    void on_actionFunciones_triggered();

    void on_actionMatrices_triggered();

public:
    Ui::MainWindow *ui;
    ///proyecto *p = new proyecto();
    QTreeWidgetItem *ArbolProyecto = new QTreeWidgetItem();
    QTreeWidgetItem *Graficas = new QTreeWidgetItem();
    QTreeWidgetItem *Configuraciones = new QTreeWidgetItem();
    QTreeWidgetItem *Operaciones = new QTreeWidgetItem();
    QTreeWidgetItem *Historial = new QTreeWidgetItem();
    QString ruta;
    QVector<matriz *> ms;
    QVector<matriz *> mMR;
    int pos = 0;
    QString nProyecto;
    std::chrono::system_clock::time_point inicio,final;
    std::chrono::duration<float> duracion;
    QString nOperacion;
    QDir *directorio = new QDir();
    QVector<QString> v;
};
#endif // MAINWINDOW_H
