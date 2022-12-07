/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNuevo_Proyecto;
    QAction *actionNuevo_Archivo;
    QAction *actionGuardar;
    QAction *actionGuardar_como;
    QAction *actionBarra_de_Herramientas;
    QAction *actionArbol;
    QAction *actionEntre_Matrices;
    QAction *actionEntre_Escalar;
    QAction *actionTrigonometria;
    QAction *actionReaolver;
    QAction *actionImformacion;
    QAction *actionEstadistica;
    QAction *actionAbrir;
    QAction *actionAbri_Archivo;
    QAction *actionInterpolar;
    QAction *actionExtrapolar;
    QAction *actionGaficar;
    QAction *actionExtras;
    QAction *actionTerminal;
    QAction *actionCerrar;
    QAction *actionRenombrar;
    QAction *actionCopiar;
    QAction *actionPegar;
    QAction *actionLaTex;
    QAction *actionDuplicar;
    QAction *actionRename_All;
    QAction *actionAyuda;
    QAction *actionConfiguracion;
    QAction *actionHorizontal;
    QAction *actionVertical;
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *amarillo;
    QFrame *line;
    QPushButton *rojo;
    QFrame *line_2;
    QPushButton *verde;
    QFrame *line_3;
    QPushButton *naranja;
    QPushButton *cafe;
    QFrame *line_4;
    QPushButton *azul;
    QPushButton *morado;
    QPushButton *rosa;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *inferior;
    QLabel *label_3;
    QDoubleSpinBox *auxiliar;
    QLabel *label_6;
    QSpinBox *superior;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpinBox *filas;
    QLabel *label_8;
    QSpinBox *columnas;
    QTabWidget *area;
    QHBoxLayout *horizontalLayout_5;
    QProgressBar *progreso;
    QSpacerItem *horizontalSpacer_3;
    QLabel *tiempo;
    QSpacerItem *horizontalSpacer_2;
    QLabel *contexto_2;
    QSpacerItem *horizontalSpacer;
    QLabel *isSave;
    QMenuBar *menubar;
    QMenu *menuArchivos;
    QMenu *menuVer;
    QMenu *menuFunciones;
    QMenu *menuGraficar;
    QMenu *menuSobre;
    QMenu *menuHerramientas;
    QDockWidget *ventanaArbol;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QTreeWidget *arbol;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1464, 736);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos/matriz.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNuevo_Proyecto = new QAction(MainWindow);
        actionNuevo_Proyecto->setObjectName(QString::fromUtf8("actionNuevo_Proyecto"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos/agregar-carpeta.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo_Proyecto->setIcon(icon1);
        actionNuevo_Archivo = new QAction(MainWindow);
        actionNuevo_Archivo->setObjectName(QString::fromUtf8("actionNuevo_Archivo"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/iconos/nuevo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo_Archivo->setIcon(icon2);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/iconos/guardar-el-archivo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon3);
        actionGuardar_como = new QAction(MainWindow);
        actionGuardar_como->setObjectName(QString::fromUtf8("actionGuardar_como"));
        actionGuardar_como->setIcon(icon3);
        actionBarra_de_Herramientas = new QAction(MainWindow);
        actionBarra_de_Herramientas->setObjectName(QString::fromUtf8("actionBarra_de_Herramientas"));
        actionArbol = new QAction(MainWindow);
        actionArbol->setObjectName(QString::fromUtf8("actionArbol"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/iconos/barra-lateral.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionArbol->setIcon(icon4);
        actionEntre_Matrices = new QAction(MainWindow);
        actionEntre_Matrices->setObjectName(QString::fromUtf8("actionEntre_Matrices"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/iconos/matriz3.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEntre_Matrices->setIcon(icon5);
        actionEntre_Escalar = new QAction(MainWindow);
        actionEntre_Escalar->setObjectName(QString::fromUtf8("actionEntre_Escalar"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/iconos/x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEntre_Escalar->setIcon(icon6);
        actionTrigonometria = new QAction(MainWindow);
        actionTrigonometria->setObjectName(QString::fromUtf8("actionTrigonometria"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/iconos/trigonometria.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTrigonometria->setIcon(icon7);
        actionReaolver = new QAction(MainWindow);
        actionReaolver->setObjectName(QString::fromUtf8("actionReaolver"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/iconos/resolver.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReaolver->setIcon(icon8);
        actionImformacion = new QAction(MainWindow);
        actionImformacion->setObjectName(QString::fromUtf8("actionImformacion"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/iconos/informacion.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImformacion->setIcon(icon9);
        actionEstadistica = new QAction(MainWindow);
        actionEstadistica->setObjectName(QString::fromUtf8("actionEstadistica"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/iconos/probabilidad.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEstadistica->setIcon(icon10);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/iconos/abriProyecto.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon11);
        actionAbri_Archivo = new QAction(MainWindow);
        actionAbri_Archivo->setObjectName(QString::fromUtf8("actionAbri_Archivo"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/prefix1/iconos/abrirArchivo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbri_Archivo->setIcon(icon12);
        actionInterpolar = new QAction(MainWindow);
        actionInterpolar->setObjectName(QString::fromUtf8("actionInterpolar"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/prefix1/iconos/interpolar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInterpolar->setIcon(icon13);
        actionExtrapolar = new QAction(MainWindow);
        actionExtrapolar->setObjectName(QString::fromUtf8("actionExtrapolar"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/prefix1/iconos/extrapolar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtrapolar->setIcon(icon14);
        actionGaficar = new QAction(MainWindow);
        actionGaficar->setObjectName(QString::fromUtf8("actionGaficar"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/prefix1/iconos/graficar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGaficar->setIcon(icon15);
        actionExtras = new QAction(MainWindow);
        actionExtras->setObjectName(QString::fromUtf8("actionExtras"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/new/prefix1/iconos/extra.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtras->setIcon(icon16);
        actionTerminal = new QAction(MainWindow);
        actionTerminal->setObjectName(QString::fromUtf8("actionTerminal"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/new/prefix1/iconos/terminal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminal->setIcon(icon17);
        actionCerrar = new QAction(MainWindow);
        actionCerrar->setObjectName(QString::fromUtf8("actionCerrar"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/new/prefix1/iconos/cerrarMatriz.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCerrar->setIcon(icon18);
        actionRenombrar = new QAction(MainWindow);
        actionRenombrar->setObjectName(QString::fromUtf8("actionRenombrar"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/new/prefix1/iconos/rename.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRenombrar->setIcon(icon19);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName(QString::fromUtf8("actionCopiar"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/new/prefix1/iconos/cortar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon20);
        actionPegar = new QAction(MainWindow);
        actionPegar->setObjectName(QString::fromUtf8("actionPegar"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/new/prefix1/iconos/pegar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPegar->setIcon(icon21);
        actionLaTex = new QAction(MainWindow);
        actionLaTex->setObjectName(QString::fromUtf8("actionLaTex"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/new/prefix1/iconos/OIP.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLaTex->setIcon(icon22);
        actionDuplicar = new QAction(MainWindow);
        actionDuplicar->setObjectName(QString::fromUtf8("actionDuplicar"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/new/prefix1/iconos/duplicar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDuplicar->setIcon(icon23);
        actionRename_All = new QAction(MainWindow);
        actionRename_All->setObjectName(QString::fromUtf8("actionRename_All"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/new/prefix1/iconos/renameAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRename_All->setIcon(icon24);
        actionAyuda = new QAction(MainWindow);
        actionAyuda->setObjectName(QString::fromUtf8("actionAyuda"));
        actionConfiguracion = new QAction(MainWindow);
        actionConfiguracion->setObjectName(QString::fromUtf8("actionConfiguracion"));
        actionConfiguracion->setCheckable(true);
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/new/prefix1/iconos/configuracion.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfiguracion->setIcon(icon25);
        actionHorizontal = new QAction(MainWindow);
        actionHorizontal->setObjectName(QString::fromUtf8("actionHorizontal"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/new/prefix1/iconos/horizontal-resize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHorizontal->setIcon(icon26);
        actionVertical = new QAction(MainWindow);
        actionVertical->setObjectName(QString::fromUtf8("actionVertical"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/new/prefix1/iconos/vertical-resize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVertical->setIcon(icon27);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        amarillo = new QPushButton(centralwidget);
        amarillo->setObjectName(QString::fromUtf8("amarillo"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/new/prefix1/iconos/amarillo.png"), QSize(), QIcon::Normal, QIcon::Off);
        amarillo->setIcon(icon28);
        amarillo->setFlat(true);

        horizontalLayout->addWidget(amarillo);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        rojo = new QPushButton(centralwidget);
        rojo->setObjectName(QString::fromUtf8("rojo"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/new/prefix1/iconos/rojo.png"), QSize(), QIcon::Normal, QIcon::Off);
        rojo->setIcon(icon29);
        rojo->setFlat(true);

        horizontalLayout->addWidget(rojo);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        verde = new QPushButton(centralwidget);
        verde->setObjectName(QString::fromUtf8("verde"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/new/prefix1/iconos/verde.png"), QSize(), QIcon::Normal, QIcon::Off);
        verde->setIcon(icon30);
        verde->setFlat(true);

        horizontalLayout->addWidget(verde);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        naranja = new QPushButton(centralwidget);
        naranja->setObjectName(QString::fromUtf8("naranja"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/new/prefix1/iconos/naranja.png"), QSize(), QIcon::Normal, QIcon::Off);
        naranja->setIcon(icon31);
        naranja->setFlat(true);

        horizontalLayout->addWidget(naranja);

        cafe = new QPushButton(centralwidget);
        cafe->setObjectName(QString::fromUtf8("cafe"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/new/prefix1/iconos/cafe.png"), QSize(), QIcon::Normal, QIcon::Off);
        cafe->setIcon(icon32);
        cafe->setFlat(true);

        horizontalLayout->addWidget(cafe);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        azul = new QPushButton(centralwidget);
        azul->setObjectName(QString::fromUtf8("azul"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/new/prefix1/iconos/azul.png"), QSize(), QIcon::Normal, QIcon::Off);
        azul->setIcon(icon33);
        azul->setFlat(true);

        horizontalLayout->addWidget(azul);

        morado = new QPushButton(centralwidget);
        morado->setObjectName(QString::fromUtf8("morado"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/new/prefix1/iconos/morado.png"), QSize(), QIcon::Normal, QIcon::Off);
        morado->setIcon(icon34);
        morado->setFlat(true);

        horizontalLayout->addWidget(morado);

        rosa = new QPushButton(centralwidget);
        rosa->setObjectName(QString::fromUtf8("rosa"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/new/prefix1/iconos/rosa.png"), QSize(), QIcon::Normal, QIcon::Off);
        rosa->setIcon(icon35);
        rosa->setFlat(true);

        horizontalLayout->addWidget(rosa);


        horizontalLayout_4->addLayout(horizontalLayout);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        inferior = new QSpinBox(groupBox);
        inferior->setObjectName(QString::fromUtf8("inferior"));
        inferior->setMinimum(-999999999);
        inferior->setMaximum(999999999);
        inferior->setValue(1);

        horizontalLayout_2->addWidget(inferior);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        auxiliar = new QDoubleSpinBox(groupBox);
        auxiliar->setObjectName(QString::fromUtf8("auxiliar"));
        auxiliar->setDecimals(5);
        auxiliar->setMinimum(-999999999999999983222784.000000000000000);
        auxiliar->setMaximum(99999999999999991433150857216.000000000000000);
        auxiliar->setValue(0.100000000000000);

        horizontalLayout_2->addWidget(auxiliar);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        superior = new QSpinBox(groupBox);
        superior->setObjectName(QString::fromUtf8("superior"));
        superior->setMinimum(-999999999);
        superior->setMaximum(999999999);
        superior->setValue(10);

        horizontalLayout_2->addWidget(superior);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        filas = new QSpinBox(groupBox_2);
        filas->setObjectName(QString::fromUtf8("filas"));
        filas->setMinimum(1);

        horizontalLayout_3->addWidget(filas);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        columnas = new QSpinBox(groupBox_2);
        columnas->setObjectName(QString::fromUtf8("columnas"));
        columnas->setMinimum(1);

        horizontalLayout_3->addWidget(columnas);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox_2);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        area = new QTabWidget(centralwidget);
        area->setObjectName(QString::fromUtf8("area"));

        gridLayout_5->addWidget(area, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        progreso = new QProgressBar(centralwidget);
        progreso->setObjectName(QString::fromUtf8("progreso"));
        progreso->setValue(0);
        progreso->setTextVisible(true);
        progreso->setOrientation(Qt::Horizontal);
        progreso->setTextDirection(QProgressBar::TopToBottom);

        horizontalLayout_5->addWidget(progreso);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        tiempo = new QLabel(centralwidget);
        tiempo->setObjectName(QString::fromUtf8("tiempo"));

        horizontalLayout_5->addWidget(tiempo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        contexto_2 = new QLabel(centralwidget);
        contexto_2->setObjectName(QString::fromUtf8("contexto_2"));

        horizontalLayout_5->addWidget(contexto_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        isSave = new QLabel(centralwidget);
        isSave->setObjectName(QString::fromUtf8("isSave"));

        horizontalLayout_5->addWidget(isSave);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout_6->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1464, 25));
        menuArchivos = new QMenu(menubar);
        menuArchivos->setObjectName(QString::fromUtf8("menuArchivos"));
        menuVer = new QMenu(menubar);
        menuVer->setObjectName(QString::fromUtf8("menuVer"));
        menuFunciones = new QMenu(menubar);
        menuFunciones->setObjectName(QString::fromUtf8("menuFunciones"));
        menuGraficar = new QMenu(menuFunciones);
        menuGraficar->setObjectName(QString::fromUtf8("menuGraficar"));
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        menuHerramientas = new QMenu(menubar);
        menuHerramientas->setObjectName(QString::fromUtf8("menuHerramientas"));
        MainWindow->setMenuBar(menubar);
        ventanaArbol = new QDockWidget(MainWindow);
        ventanaArbol->setObjectName(QString::fromUtf8("ventanaArbol"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        arbol = new QTreeWidget(dockWidgetContents);
        arbol->headerItem()->setText(0, QString());
        arbol->setObjectName(QString::fromUtf8("arbol"));
        arbol->setEnabled(true);
        arbol->setFrameShape(QFrame::StyledPanel);
        arbol->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        arbol->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        arbol->setTabKeyNavigation(true);
        arbol->setDragEnabled(true);
        arbol->setDragDropOverwriteMode(true);
        arbol->setDragDropMode(QAbstractItemView::NoDragDrop);
        arbol->setAlternatingRowColors(false);
        arbol->setSelectionMode(QAbstractItemView::SingleSelection);
        arbol->setSelectionBehavior(QAbstractItemView::SelectItems);
        arbol->setTextElideMode(Qt::ElideMiddle);
        arbol->setAutoExpandDelay(1);
        arbol->setUniformRowHeights(true);
        arbol->setSortingEnabled(false);
        arbol->setAnimated(true);
        arbol->setAllColumnsShowFocus(true);
        arbol->setWordWrap(true);
        arbol->header()->setVisible(false);

        gridLayout_2->addWidget(arbol, 0, 0, 1, 1);

        ventanaArbol->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, ventanaArbol);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        ventanaArbol->raise();

        menubar->addAction(menuArchivos->menuAction());
        menubar->addAction(menuVer->menuAction());
        menubar->addAction(menuFunciones->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menubar->addAction(menuHerramientas->menuAction());
        menuArchivos->addSeparator();
        menuArchivos->addAction(actionAbri_Archivo);
        menuArchivos->addAction(actionAbrir);
        menuArchivos->addAction(actionNuevo_Proyecto);
        menuArchivos->addAction(actionNuevo_Archivo);
        menuArchivos->addSeparator();
        menuArchivos->addAction(actionGuardar);
        menuArchivos->addAction(actionGuardar_como);
        menuArchivos->addSeparator();
        menuVer->addAction(actionBarra_de_Herramientas);
        menuVer->addAction(actionArbol);
        menuVer->addAction(actionTerminal);
        menuFunciones->addAction(actionEntre_Matrices);
        menuFunciones->addAction(actionEntre_Escalar);
        menuFunciones->addSeparator();
        menuFunciones->addAction(actionTrigonometria);
        menuFunciones->addSeparator();
        menuFunciones->addAction(actionReaolver);
        menuFunciones->addSeparator();
        menuFunciones->addAction(actionImformacion);
        menuFunciones->addSeparator();
        menuFunciones->addAction(actionEstadistica);
        menuFunciones->addSeparator();
        menuFunciones->addAction(actionInterpolar);
        menuFunciones->addAction(actionExtrapolar);
        menuFunciones->addSeparator();
        menuFunciones->addAction(menuGraficar->menuAction());
        menuFunciones->addSeparator();
        menuFunciones->addAction(actionExtras);
        menuFunciones->addSeparator();
        menuFunciones->addAction(actionLaTex);
        menuGraficar->addAction(actionHorizontal);
        menuGraficar->addAction(actionVertical);
        toolBar->addAction(actionAbrir);
        toolBar->addAction(actionAbri_Archivo);
        toolBar->addAction(actionNuevo_Proyecto);
        toolBar->addAction(actionNuevo_Archivo);
        toolBar->addSeparator();
        toolBar->addAction(actionGuardar);
        toolBar->addSeparator();
        toolBar->addAction(actionArbol);
        toolBar->addSeparator();
        toolBar->addAction(actionReaolver);
        toolBar->addAction(actionEstadistica);
        toolBar->addAction(actionGaficar);
        toolBar->addSeparator();
        toolBar->addAction(actionEntre_Matrices);
        toolBar->addAction(actionEntre_Escalar);
        toolBar->addSeparator();
        toolBar->addAction(actionTrigonometria);
        toolBar->addSeparator();
        toolBar->addAction(actionImformacion);
        toolBar->addSeparator();
        toolBar->addAction(actionInterpolar);
        toolBar->addAction(actionExtrapolar);
        toolBar->addSeparator();
        toolBar->addAction(actionExtras);
        toolBar->addSeparator();
        toolBar->addAction(actionLaTex);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GAMMA", nullptr));
        actionNuevo_Proyecto->setText(QCoreApplication::translate("MainWindow", "Nuevo Proyecto", nullptr));
#if QT_CONFIG(shortcut)
        actionNuevo_Proyecto->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNuevo_Archivo->setText(QCoreApplication::translate("MainWindow", "Nuevo Archivo", nullptr));
#if QT_CONFIG(shortcut)
        actionNuevo_Archivo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
#if QT_CONFIG(shortcut)
        actionGuardar->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGuardar_como->setText(QCoreApplication::translate("MainWindow", "Guardar como ...", nullptr));
        actionBarra_de_Herramientas->setText(QCoreApplication::translate("MainWindow", "Barra de Herramientas", nullptr));
        actionArbol->setText(QCoreApplication::translate("MainWindow", "Arbol", nullptr));
        actionEntre_Matrices->setText(QCoreApplication::translate("MainWindow", "Entre Matrices", nullptr));
        actionEntre_Escalar->setText(QCoreApplication::translate("MainWindow", "Entre Escalar", nullptr));
        actionTrigonometria->setText(QCoreApplication::translate("MainWindow", "Trigonometria", nullptr));
        actionReaolver->setText(QCoreApplication::translate("MainWindow", "Resolver", nullptr));
#if QT_CONFIG(tooltip)
        actionReaolver->setToolTip(QCoreApplication::translate("MainWindow", "Resolver", nullptr));
#endif // QT_CONFIG(tooltip)
        actionImformacion->setText(QCoreApplication::translate("MainWindow", "Imformacion", nullptr));
        actionEstadistica->setText(QCoreApplication::translate("MainWindow", "Estadistica", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir Proyecto", nullptr));
        actionAbri_Archivo->setText(QCoreApplication::translate("MainWindow", "Abri Archivo", nullptr));
        actionInterpolar->setText(QCoreApplication::translate("MainWindow", "Interpolar", nullptr));
        actionExtrapolar->setText(QCoreApplication::translate("MainWindow", "Extrapolar", nullptr));
        actionGaficar->setText(QCoreApplication::translate("MainWindow", "Graficar", nullptr));
        actionExtras->setText(QCoreApplication::translate("MainWindow", "Extras", nullptr));
        actionTerminal->setText(QCoreApplication::translate("MainWindow", "Terminal", nullptr));
        actionCerrar->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        actionRenombrar->setText(QCoreApplication::translate("MainWindow", "Renombrar", nullptr));
        actionCopiar->setText(QCoreApplication::translate("MainWindow", "Copiar", nullptr));
        actionPegar->setText(QCoreApplication::translate("MainWindow", "Pegar", nullptr));
        actionLaTex->setText(QCoreApplication::translate("MainWindow", "LaTex", nullptr));
        actionDuplicar->setText(QCoreApplication::translate("MainWindow", "Duplicar", nullptr));
        actionRename_All->setText(QCoreApplication::translate("MainWindow", "Rename All", nullptr));
#if QT_CONFIG(tooltip)
        actionRename_All->setToolTip(QCoreApplication::translate("MainWindow", "Renombrar Todos", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAyuda->setText(QCoreApplication::translate("MainWindow", "Ayuda", nullptr));
        actionConfiguracion->setText(QCoreApplication::translate("MainWindow", "Configuracion", nullptr));
        actionHorizontal->setText(QCoreApplication::translate("MainWindow", "Horizontal", nullptr));
        actionVertical->setText(QCoreApplication::translate("MainWindow", "Vertical", nullptr));
        amarillo->setText(QString());
        rojo->setText(QString());
        verde->setText(QString());
        naranja->setText(QString());
        cafe->setText(QString());
        azul->setText(QString());
        morado->setText(QString());
        rosa->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Limites", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Inferior", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "aux", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Superior", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Dimenciones", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Filas", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Columnas", nullptr));
        tiempo->setText(QString());
        contexto_2->setText(QCoreApplication::translate("MainWindow", "Hola", nullptr));
        isSave->setText(QCoreApplication::translate("MainWindow", "Save: False", nullptr));
        menuArchivos->setTitle(QCoreApplication::translate("MainWindow", "Archivos", nullptr));
        menuVer->setTitle(QCoreApplication::translate("MainWindow", "Ver", nullptr));
        menuFunciones->setTitle(QCoreApplication::translate("MainWindow", "Funciones", nullptr));
        menuGraficar->setTitle(QCoreApplication::translate("MainWindow", "Graficar", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("MainWindow", "Sobre", nullptr));
        menuHerramientas->setTitle(QCoreApplication::translate("MainWindow", "Herramientas", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
