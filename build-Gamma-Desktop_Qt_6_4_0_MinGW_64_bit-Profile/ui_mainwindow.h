/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
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
    QAction *actionImportar;
    QAction *actionRenombrar_Etiquetas;
    QWidget *centralwidget;
    QGridLayout *gridLayout_9;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_7;
    QTextEdit *textEdit;
    QFrame *line_14;
    QTextEdit *textEdit_2;
    QWidget *page;
    QGridLayout *gridLayout;
    QTabWidget *base;
    QWidget *tab;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QFrame *line;
    QPushButton *pushButton_2;
    QFrame *line_4;
    QPushButton *pushButton_3;
    QFrame *line_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QFrame *line_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *li;
    QLabel *label_2;
    QDoubleSpinBox *aux;
    QLabel *label_3;
    QSpinBox *ls;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *f;
    QLabel *label_5;
    QSpinBox *c;
    QTabWidget *baseMatrices;
    QWidget *tab_6;
    QGridLayout *gridLayout_11;
    QStackedWidget *baseSalidas;
    QWidget *page_2;
    QGridLayout *gridLayout_12;
    QLabel *label_7;
    QWidget *page_4;
    QLabel *label_8;
    QWidget *page_5;
    QGridLayout *gridLayout_13;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QLineEdit *cNombreProyecto;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QLineEdit *cRuta;
    QPushButton *cBuscarRuta;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_15;
    QLabel *cNM;
    QComboBox *CM;
    QLabel *label_17;
    QLabel *CF;
    QLabel *label_19;
    QLabel *CC;
    QWidget *page_6;
    QGridLayout *gridLayout_5;
    QTextEdit *historial;
    QMenuBar *menubar;
    QMenu *menuArchivos;
    QMenu *menuVer;
    QMenu *menuFunciones;
    QMenu *menuSobre;
    QMenu *menuMatrices;
    QStatusBar *statusbar;
    QDockWidget *ventanaArbol;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QTreeWidget *arbol;
    QDockWidget *terminal;
    QWidget *dockWidgetContents_2;
    QGridLayout *gridLayout_3;
    QTextEdit *textoTerminal;
    QToolBar *toolBaMain;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1348, 736);
        MainWindow->setMinimumSize(QSize(50, 50));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos/matriz.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNuevo_Proyecto = new QAction(MainWindow);
        actionNuevo_Proyecto->setObjectName("actionNuevo_Proyecto");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos/agregar-carpeta.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo_Proyecto->setIcon(icon1);
        actionNuevo_Archivo = new QAction(MainWindow);
        actionNuevo_Archivo->setObjectName("actionNuevo_Archivo");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/iconos/nuevo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuevo_Archivo->setIcon(icon2);
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("actionGuardar");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/iconos/guardar-el-archivo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuardar->setIcon(icon3);
        actionGuardar_como = new QAction(MainWindow);
        actionGuardar_como->setObjectName("actionGuardar_como");
        actionGuardar_como->setIcon(icon3);
        actionBarra_de_Herramientas = new QAction(MainWindow);
        actionBarra_de_Herramientas->setObjectName("actionBarra_de_Herramientas");
        actionArbol = new QAction(MainWindow);
        actionArbol->setObjectName("actionArbol");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/iconos/barra-lateral.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionArbol->setIcon(icon4);
        actionEntre_Matrices = new QAction(MainWindow);
        actionEntre_Matrices->setObjectName("actionEntre_Matrices");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/iconos/matriz3.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEntre_Matrices->setIcon(icon5);
        actionEntre_Escalar = new QAction(MainWindow);
        actionEntre_Escalar->setObjectName("actionEntre_Escalar");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/iconos/x.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEntre_Escalar->setIcon(icon6);
        actionTrigonometria = new QAction(MainWindow);
        actionTrigonometria->setObjectName("actionTrigonometria");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/iconos/trigonometria.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTrigonometria->setIcon(icon7);
        actionReaolver = new QAction(MainWindow);
        actionReaolver->setObjectName("actionReaolver");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/iconos/resolver.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReaolver->setIcon(icon8);
        actionImformacion = new QAction(MainWindow);
        actionImformacion->setObjectName("actionImformacion");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/prefix1/iconos/informacion.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImformacion->setIcon(icon9);
        actionEstadistica = new QAction(MainWindow);
        actionEstadistica->setObjectName("actionEstadistica");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/prefix1/iconos/probabilidad.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEstadistica->setIcon(icon10);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/prefix1/iconos/abriProyecto.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon11);
        actionAbri_Archivo = new QAction(MainWindow);
        actionAbri_Archivo->setObjectName("actionAbri_Archivo");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/new/prefix1/iconos/abrirArchivo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbri_Archivo->setIcon(icon12);
        actionInterpolar = new QAction(MainWindow);
        actionInterpolar->setObjectName("actionInterpolar");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/prefix1/iconos/interpolar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInterpolar->setIcon(icon13);
        actionExtrapolar = new QAction(MainWindow);
        actionExtrapolar->setObjectName("actionExtrapolar");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/new/prefix1/iconos/extrapolar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtrapolar->setIcon(icon14);
        actionGaficar = new QAction(MainWindow);
        actionGaficar->setObjectName("actionGaficar");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/new/prefix1/iconos/graficar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGaficar->setIcon(icon15);
        actionExtras = new QAction(MainWindow);
        actionExtras->setObjectName("actionExtras");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/new/prefix1/iconos/extra.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtras->setIcon(icon16);
        actionTerminal = new QAction(MainWindow);
        actionTerminal->setObjectName("actionTerminal");
        actionCerrar = new QAction(MainWindow);
        actionCerrar->setObjectName("actionCerrar");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/new/prefix1/iconos/cerrarMatriz.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCerrar->setIcon(icon17);
        actionRenombrar = new QAction(MainWindow);
        actionRenombrar->setObjectName("actionRenombrar");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/new/prefix1/iconos/rename.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRenombrar->setIcon(icon18);
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName("actionCopiar");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/new/prefix1/iconos/cortar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopiar->setIcon(icon19);
        actionPegar = new QAction(MainWindow);
        actionPegar->setObjectName("actionPegar");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/new/prefix1/iconos/pegar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPegar->setIcon(icon20);
        actionLaTex = new QAction(MainWindow);
        actionLaTex->setObjectName("actionLaTex");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/new/prefix1/iconos/OIP.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        actionLaTex->setIcon(icon21);
        actionImportar = new QAction(MainWindow);
        actionImportar->setObjectName("actionImportar");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/new/prefix1/iconos/importar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImportar->setIcon(icon22);
        actionRenombrar_Etiquetas = new QAction(MainWindow);
        actionRenombrar_Etiquetas->setObjectName("actionRenombrar_Etiquetas");
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/new/prefix1/iconos/barra-de-desplazamiento.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRenombrar_Etiquetas->setIcon(icon23);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_9 = new QGridLayout(centralwidget);
        gridLayout_9->setObjectName("gridLayout_9");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_10 = new QGridLayout(page_3);
        gridLayout_10->setObjectName("gridLayout_10");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_9 = new QLabel(page_3);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(200, 200));
        label_9->setMaximumSize(QSize(200, 200));
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/iconos/matriz.png);"));

        horizontalLayout_6->addWidget(label_9);

        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        QFont font;
        font.setPointSize(48);
        label_6->setFont(font);

        horizontalLayout_6->addWidget(label_6, 0, Qt::AlignHCenter);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        textEdit = new QTextEdit(page_3);
        textEdit->setObjectName("textEdit");
        textEdit->setReadOnly(true);

        horizontalLayout_7->addWidget(textEdit);

        line_14 = new QFrame(page_3);
        line_14->setObjectName("line_14");
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line_14);

        textEdit_2 = new QTextEdit(page_3);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setReadOnly(true);

        horizontalLayout_7->addWidget(textEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_7);


        gridLayout_10->addLayout(verticalLayout_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page = new QWidget();
        page->setObjectName("page");
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName("gridLayout");
        base = new QTabWidget(page);
        base->setObjectName("base");
        base->setTabPosition(QTabWidget::South);
        base->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_8 = new QGridLayout(tab);
        gridLayout_8->setObjectName("gridLayout_8");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/new/prefix1/iconos/amarillo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon24);
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        line = new QFrame(groupBox);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/new/prefix1/iconos/rojo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon25);
        pushButton_2->setFlat(true);

        horizontalLayout->addWidget(pushButton_2);

        line_4 = new QFrame(groupBox);
        line_4->setObjectName("line_4");
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/new/prefix1/iconos/verde.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon26);
        pushButton_3->setFlat(true);

        horizontalLayout->addWidget(pushButton_3);

        line_5 = new QFrame(groupBox);
        line_5->setObjectName("line_5");
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_5);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/new/prefix1/iconos/naranja.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon27);
        pushButton_4->setFlat(true);

        horizontalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName("pushButton_5");
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/new/prefix1/iconos/cafe.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon28);
        pushButton_5->setFlat(true);

        horizontalLayout->addWidget(pushButton_5);

        line_9 = new QFrame(groupBox);
        line_9->setObjectName("line_9");
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_9);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName("pushButton_6");
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/new/prefix1/iconos/azul.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon29);
        pushButton_6->setFlat(true);

        horizontalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName("pushButton_7");
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/new/prefix1/iconos/morado.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon30);
        pushButton_7->setFlat(true);

        horizontalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName("pushButton_8");
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/new/prefix1/iconos/rosa.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon31);
        pushButton_8->setFlat(true);

        horizontalLayout->addWidget(pushButton_8);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName("gridLayout_6");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(groupBox_2);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        li = new QSpinBox(groupBox_2);
        li->setObjectName("li");
        li->setMinimum(-999999999);
        li->setMaximum(999999999);
        li->setValue(1);

        horizontalLayout_3->addWidget(li);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        aux = new QDoubleSpinBox(groupBox_2);
        aux->setObjectName("aux");
        aux->setDecimals(3);
        aux->setMinimum(-9999999999999999635896294965248.000000000000000);
        aux->setMaximum(9999999999999999932209486743616279764617084419440640.000000000000000);
        aux->setValue(0.500000000000000);

        horizontalLayout_3->addWidget(aux);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        ls = new QSpinBox(groupBox_2);
        ls->setObjectName("ls");
        ls->setValue(10);

        horizontalLayout_3->addWidget(ls);


        gridLayout_6->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(tab);
        groupBox_5->setObjectName("groupBox_5");
        gridLayout_7 = new QGridLayout(groupBox_5);
        gridLayout_7->setObjectName("gridLayout_7");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        f = new QSpinBox(groupBox_5);
        f->setObjectName("f");
        f->setMinimum(1);

        horizontalLayout_4->addWidget(f);

        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        c = new QSpinBox(groupBox_5);
        c->setObjectName("c");
        c->setMinimum(1);

        horizontalLayout_4->addWidget(c);


        gridLayout_7->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        horizontalLayout_5->addWidget(groupBox_5);


        verticalLayout->addLayout(horizontalLayout_5);

        baseMatrices = new QTabWidget(tab);
        baseMatrices->setObjectName("baseMatrices");

        verticalLayout->addWidget(baseMatrices);


        gridLayout_8->addLayout(verticalLayout, 0, 0, 1, 1);

        base->addTab(tab, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        gridLayout_11 = new QGridLayout(tab_6);
        gridLayout_11->setObjectName("gridLayout_11");
        baseSalidas = new QStackedWidget(tab_6);
        baseSalidas->setObjectName("baseSalidas");
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_12 = new QGridLayout(page_2);
        gridLayout_12->setObjectName("gridLayout_12");
        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");

        gridLayout_12->addWidget(label_7, 0, 0, 1, 1);

        baseSalidas->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_8 = new QLabel(page_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(140, 240, 63, 20));
        baseSalidas->addWidget(page_4);

        gridLayout_11->addWidget(baseSalidas, 0, 0, 1, 1);

        base->addTab(tab_6, QString());

        gridLayout->addWidget(base, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        gridLayout_13 = new QGridLayout(page_5);
        gridLayout_13->setObjectName("gridLayout_13");
        scrollArea = new QScrollArea(page_5);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1194, 358));
        gridLayout_14 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_14->setObjectName("gridLayout_14");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName("label_11");
        label_11->setMinimumSize(QSize(150, 150));
        label_11->setMaximumSize(QSize(150, 150));
        label_11->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/iconos/configuraciones.png);"));

        horizontalLayout_8->addWidget(label_11);

        label_10 = new QLabel(scrollAreaWidgetContents);
        label_10->setObjectName("label_10");
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        label_10->setFont(font1);

        horizontalLayout_8->addWidget(label_10);


        verticalLayout_4->addLayout(horizontalLayout_8);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName("label_12");

        horizontalLayout_2->addWidget(label_12);

        cNombreProyecto = new QLineEdit(scrollAreaWidgetContents);
        cNombreProyecto->setObjectName("cNombreProyecto");

        horizontalLayout_2->addWidget(cNombreProyecto);

        label_14 = new QLabel(scrollAreaWidgetContents);
        label_14->setObjectName("label_14");
        label_14->setMinimumSize(QSize(50, 50));
        label_14->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/iconos/agregar-carpeta.png);"));

        horizontalLayout_2->addWidget(label_14);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName("label_13");

        horizontalLayout_9->addWidget(label_13);

        cRuta = new QLineEdit(scrollAreaWidgetContents);
        cRuta->setObjectName("cRuta");

        horizontalLayout_9->addWidget(cRuta);

        cBuscarRuta = new QPushButton(scrollAreaWidgetContents);
        cBuscarRuta->setObjectName("cBuscarRuta");
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/new/prefix1/iconos/ruta.png"), QSize(), QIcon::Normal, QIcon::Off);
        cBuscarRuta->setIcon(icon32);
        cBuscarRuta->setFlat(true);

        horizontalLayout_9->addWidget(cBuscarRuta);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName("label_15");

        horizontalLayout_10->addWidget(label_15);

        cNM = new QLabel(scrollAreaWidgetContents);
        cNM->setObjectName("cNM");

        horizontalLayout_10->addWidget(cNM);

        CM = new QComboBox(scrollAreaWidgetContents);
        CM->setObjectName("CM");

        horizontalLayout_10->addWidget(CM);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName("label_17");

        horizontalLayout_10->addWidget(label_17);

        CF = new QLabel(scrollAreaWidgetContents);
        CF->setObjectName("CF");

        horizontalLayout_10->addWidget(CF);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName("label_19");

        horizontalLayout_10->addWidget(label_19);

        CC = new QLabel(scrollAreaWidgetContents);
        CC->setObjectName("CC");

        horizontalLayout_10->addWidget(CC);


        verticalLayout_3->addLayout(horizontalLayout_10);


        verticalLayout_4->addLayout(verticalLayout_3);


        gridLayout_14->addLayout(verticalLayout_4, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_13->addWidget(scrollArea, 0, 0, 1, 1);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        gridLayout_5 = new QGridLayout(page_6);
        gridLayout_5->setObjectName("gridLayout_5");
        historial = new QTextEdit(page_6);
        historial->setObjectName("historial");

        gridLayout_5->addWidget(historial, 0, 0, 1, 1);

        stackedWidget->addWidget(page_6);

        gridLayout_9->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1348, 25));
        menuArchivos = new QMenu(menubar);
        menuArchivos->setObjectName("menuArchivos");
        menuVer = new QMenu(menubar);
        menuVer->setObjectName("menuVer");
        menuFunciones = new QMenu(menubar);
        menuFunciones->setObjectName("menuFunciones");
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName("menuSobre");
        menuMatrices = new QMenu(menubar);
        menuMatrices->setObjectName("menuMatrices");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        ventanaArbol = new QDockWidget(MainWindow);
        ventanaArbol->setObjectName("ventanaArbol");
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName("dockWidgetContents");
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        arbol = new QTreeWidget(dockWidgetContents);
        arbol->headerItem()->setText(0, QString());
        arbol->setObjectName("arbol");
        arbol->setStyleSheet(QString::fromUtf8(""));
        arbol->setFrameShape(QFrame::NoFrame);
        arbol->setFrameShadow(QFrame::Sunken);
        arbol->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        arbol->setTextElideMode(Qt::ElideMiddle);
        arbol->setAnimated(true);
        arbol->header()->setVisible(true);

        gridLayout_2->addWidget(arbol, 0, 0, 1, 1);

        ventanaArbol->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, ventanaArbol);
        terminal = new QDockWidget(MainWindow);
        terminal->setObjectName("terminal");
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName("dockWidgetContents_2");
        gridLayout_3 = new QGridLayout(dockWidgetContents_2);
        gridLayout_3->setObjectName("gridLayout_3");
        textoTerminal = new QTextEdit(dockWidgetContents_2);
        textoTerminal->setObjectName("textoTerminal");
        textoTerminal->setReadOnly(true);

        gridLayout_3->addWidget(textoTerminal, 0, 0, 1, 1);

        terminal->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(Qt::BottomDockWidgetArea, terminal);
        toolBaMain = new QToolBar(MainWindow);
        toolBaMain->setObjectName("toolBaMain");
        toolBaMain->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBaMain);

        menubar->addAction(menuArchivos->menuAction());
        menubar->addAction(menuVer->menuAction());
        menubar->addAction(menuFunciones->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menubar->addAction(menuMatrices->menuAction());
        menuArchivos->addSeparator();
        menuArchivos->addAction(actionAbri_Archivo);
        menuArchivos->addAction(actionAbrir);
        menuArchivos->addAction(actionImportar);
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
        menuFunciones->addAction(actionGaficar);
        menuFunciones->addSeparator();
        menuFunciones->addAction(actionExtras);
        menuFunciones->addSeparator();
        menuFunciones->addAction(actionLaTex);
        menuMatrices->addAction(actionCerrar);
        menuMatrices->addAction(actionRenombrar);
        menuMatrices->addAction(actionCopiar);
        menuMatrices->addAction(actionPegar);
        menuMatrices->addSeparator();
        menuMatrices->addAction(actionRenombrar_Etiquetas);
        toolBaMain->addAction(actionNuevo_Proyecto);
        toolBaMain->addAction(actionNuevo_Archivo);
        toolBaMain->addAction(actionImportar);
        toolBaMain->addAction(actionAbrir);
        toolBaMain->addAction(actionAbri_Archivo);
        toolBaMain->addSeparator();
        toolBaMain->addAction(actionGuardar);
        toolBaMain->addSeparator();
        toolBaMain->addAction(actionArbol);
        toolBaMain->addSeparator();
        toolBaMain->addAction(actionReaolver);
        toolBaMain->addAction(actionEstadistica);
        toolBaMain->addAction(actionGaficar);
        toolBaMain->addSeparator();
        toolBaMain->addAction(actionEntre_Matrices);
        toolBaMain->addAction(actionEntre_Escalar);
        toolBaMain->addSeparator();
        toolBaMain->addAction(actionTrigonometria);
        toolBaMain->addSeparator();
        toolBaMain->addAction(actionImformacion);
        toolBaMain->addSeparator();
        toolBaMain->addAction(actionInterpolar);
        toolBaMain->addAction(actionExtrapolar);
        toolBaMain->addSeparator();
        toolBaMain->addAction(actionExtras);
        toolBaMain->addSeparator();
        toolBaMain->addAction(actionLaTex);
        toolBaMain->addSeparator();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        base->setCurrentIndex(0);
        baseSalidas->setCurrentIndex(1);


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
        actionImportar->setText(QCoreApplication::translate("MainWindow", "Importar", nullptr));
        actionRenombrar_Etiquetas->setText(QCoreApplication::translate("MainWindow", "Renombrar Etiquetas", nullptr));
        label_9->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Bienvenido a GAMMA", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Gamma es un proyecto con el objetivo de manejar matrices, en Gamma puedes:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	1. Hacer Cualquier tipo de operaciones matriciales </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	2. Obtener reprecentacion Grafica de cada Matriz </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-lef"
                        "t:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	3. Optener un buen manejo de todo tu proyecto</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	4. Optener reportes en PDF, codigo Latex e imagenes de Graficas </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Esta herramienta esta escrita en C++ utilizando QT-Creator.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Creador: CRUZ ACOSTA LUIS ENRIQUE - Ing. Mecanico.</p>\n"
"<p style=\"-qt-parag"
                        "raph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">	Redes: </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">		GitHub: <a href=\"https://github.com/enrique76\"><span style=\" text-decoration: underline; color:#007af4;\">https://github.com/enrique76</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://github.com/enrique76\"><span style=\" text-decoration: underline; color:#ffffff;\">		</span></a><a href=\"https://github.com/enrique76\"><span style=\" text-decoration: underline; color:#000000;\">YouTube: </span></a><a href=\"https://www.youtube.com/channel/UCLuiLXC89Ji--gmacl6Zt3g\"><span style=\" text-decoration: underline"
                        "; color:#007af4;\">https://www.youtube.com/channel/UCLuiLXC89Ji--gmacl6Zt3g</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://www.youtube.com/channel/UCLuiLXC89Ji--gmacl6Zt3g\"><span style=\" text-decoration: underline; color:#ffffff;\">		</span></a><a href=\"https://www.youtube.com/channel/UCLuiLXC89Ji--gmacl6Zt3g\"><span style=\" text-decoration: underline; color:#000000;\">Instagram:</span></a><a href=\"https://www.youtube.com/channel/UCLuiLXC89Ji--gmacl6Zt3g\"><span style=\" text-decoration: underline; color:#ffffff;\"> </span></a><a href=\"https://www.instagram.com/luis_cruz_xd/\"><span style=\" text-decoration: underline; color:#007af4;\">https://www.instagram.com/luis_cruz_xd/</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://www.instagram.com/luis_cruz_xd/\"><span style=\" text-decoration: "
                        "underline; color:#ffffff;\">		</span></a><a href=\"https://www.instagram.com/luis_cruz_xd/\"><span style=\" text-decoration: underline; color:#000000;\">Gmail: kikecruz01@gmail.com</span></a></p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Para Empezar....</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">1. Nuevo Proyecto -&gt; </span><img src=\":/new/prefix1"
                        "/iconos/agregar-carpeta.png\" width=\"40\" height=\"40\" /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">Ya puedes comenzar</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /><"
                        "/p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Modificadores", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Limites", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Inferior", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Aux", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Superior", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "Dimenciones", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Filas", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Columnas", nullptr));
        base->setTabText(base->indexOf(tab), QCoreApplication::translate("MainWindow", "Matrices", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Resolver", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "GRaficar", nullptr));
        base->setTabText(base->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Salidas", nullptr));
        label_11->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "Configuraciones", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Nombre del Proyecto", nullptr));
        label_14->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "Ruta", nullptr));
        cBuscarRuta->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "# Matrices", nullptr));
        cNM->setText(QString());
        label_17->setText(QCoreApplication::translate("MainWindow", "Filas:", nullptr));
        CF->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "Columnas:", nullptr));
        CC->setText(QString());
        menuArchivos->setTitle(QCoreApplication::translate("MainWindow", "Archivos", nullptr));
        menuVer->setTitle(QCoreApplication::translate("MainWindow", "Ver", nullptr));
        menuFunciones->setTitle(QCoreApplication::translate("MainWindow", "Funciones", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("MainWindow", "Sobre", nullptr));
        menuMatrices->setTitle(QCoreApplication::translate("MainWindow", "Matrices", nullptr));
        toolBaMain->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
