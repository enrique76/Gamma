/********************************************************************************
** Form generated from reading UI file 'config.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_config
{
public:
    QGridLayout *gridLayout;
    QTabWidget *area;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QToolButton *toolButton;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QCommandLinkButton *commandLinkButton;
    QDialogButtonBox *buttonBox_2;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listWidget;
    QTreeWidget *treeWidget;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox;
    QFontComboBox *fontComboBox;
    QLineEdit *lineEdit;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_5;
    QDateTimeEdit *dateTimeEdit;
    QScrollBar *horizontalScrollBar;
    QKeySequenceEdit *keySequenceEdit;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *Estilos;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;
    QWidget *tab_2;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_7;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLineEdit *nombre;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLineEdit *ruta;
    QPushButton *pushButton_2;
    QRadioButton *vv;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QSpinBox *filas;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QSpinBox *columnas;
    QSpacerItem *verticalSpacer;
    QTabWidget *base;

    void setupUi(QDialog *config)
    {
        if (config->objectName().isEmpty())
            config->setObjectName("config");
        config->resize(1174, 708);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos/configuracion.png"), QSize(), QIcon::Normal, QIcon::Off);
        config->setWindowIcon(icon);
        gridLayout = new QGridLayout(config);
        gridLayout->setObjectName("gridLayout");
        area = new QTabWidget(config);
        area->setObjectName("area");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setObjectName("gridLayout_6");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName("gridLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName("toolButton");

        horizontalLayout_2->addWidget(toolButton);

        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName("radioButton");

        horizontalLayout_2->addWidget(radioButton);

        checkBox = new QCheckBox(groupBox_2);
        checkBox->setObjectName("checkBox");

        horizontalLayout_2->addWidget(checkBox);

        commandLinkButton = new QCommandLinkButton(groupBox_2);
        commandLinkButton->setObjectName("commandLinkButton");

        horizontalLayout_2->addWidget(commandLinkButton);

        buttonBox_2 = new QDialogButtonBox(groupBox_2);
        buttonBox_2->setObjectName("buttonBox_2");
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_2->addWidget(buttonBox_2);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName("gridLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        listWidget = new QListWidget(groupBox_3);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");

        horizontalLayout_3->addWidget(listWidget);

        treeWidget = new QTreeWidget(groupBox_3);
        treeWidget->headerItem()->setText(0, QString());
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos/agregar-carpeta.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/iconos/matriz3.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/iconos/graficar.png"), QSize(), QIcon::Normal, QIcon::Off);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/iconos/probabilidad.png"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem->setIcon(0, icon1);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem1->setIcon(0, icon2);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem2->setIcon(0, icon2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem3->setIcon(0, icon3);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem3);
        __qtreewidgetitem4->setIcon(0, icon3);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem5->setIcon(0, icon4);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem5);
        __qtreewidgetitem6->setIcon(0, icon4);
        treeWidget->setObjectName("treeWidget");

        horizontalLayout_3->addWidget(treeWidget);

        tableWidget = new QTableWidget(groupBox_3);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem14);
        tableWidget->setObjectName("tableWidget");

        horizontalLayout_3->addWidget(tableWidget);


        gridLayout_3->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName("gridLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        comboBox = new QComboBox(groupBox_4);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_4->addWidget(comboBox);

        fontComboBox = new QFontComboBox(groupBox_4);
        fontComboBox->setObjectName("fontComboBox");

        horizontalLayout_4->addWidget(fontComboBox);

        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_4->addWidget(lineEdit);

        timeEdit = new QTimeEdit(groupBox_4);
        timeEdit->setObjectName("timeEdit");

        horizontalLayout_4->addWidget(timeEdit);

        dateEdit = new QDateEdit(groupBox_4);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_4->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        dateTimeEdit = new QDateTimeEdit(groupBox_4);
        dateTimeEdit->setObjectName("dateTimeEdit");

        horizontalLayout_5->addWidget(dateTimeEdit);

        horizontalScrollBar = new QScrollBar(groupBox_4);
        horizontalScrollBar->setObjectName("horizontalScrollBar");
        horizontalScrollBar->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalScrollBar);

        keySequenceEdit = new QKeySequenceEdit(groupBox_4);
        keySequenceEdit->setObjectName("keySequenceEdit");

        horizontalLayout_5->addWidget(keySequenceEdit);

        spinBox = new QSpinBox(groupBox_4);
        spinBox->setObjectName("spinBox");

        horizontalLayout_5->addWidget(spinBox);

        doubleSpinBox = new QDoubleSpinBox(groupBox_4);
        doubleSpinBox->setObjectName("doubleSpinBox");

        horizontalLayout_5->addWidget(doubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout_4->addLayout(verticalLayout, 0, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_4);


        gridLayout_5->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Estilos = new QComboBox(tab);
        Estilos->addItem(QString());
        Estilos->addItem(QString());
        Estilos->addItem(QString());
        Estilos->addItem(QString());
        Estilos->addItem(QString());
        Estilos->addItem(QString());
        Estilos->setObjectName("Estilos");
        Estilos->setMaximumSize(QSize(200, 16777215));

        horizontalLayout->addWidget(Estilos);

        buttonBox = new QDialogButtonBox(tab);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setMaximumSize(QSize(200, 16777215));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout_6->addLayout(verticalLayout_3, 0, 0, 1, 1);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/iconos/Estilo.png"), QSize(), QIcon::Normal, QIcon::Off);
        area->addTab(tab, icon5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_8 = new QGridLayout(tab_2);
        gridLayout_8->setObjectName("gridLayout_8");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName("groupBox_5");
        gridLayout_7 = new QGridLayout(groupBox_5);
        gridLayout_7->setObjectName("gridLayout_7");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(groupBox_5);
        label->setObjectName("label");

        horizontalLayout_6->addWidget(label);

        nombre = new QLineEdit(groupBox_5);
        nombre->setObjectName("nombre");

        horizontalLayout_6->addWidget(nombre);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName("label_2");

        horizontalLayout_7->addWidget(label_2);

        ruta = new QLineEdit(groupBox_5);
        ruta->setObjectName("ruta");

        horizontalLayout_7->addWidget(ruta);

        pushButton_2 = new QPushButton(groupBox_5);
        pushButton_2->setObjectName("pushButton_2");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/iconos/ruta.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon6);
        pushButton_2->setFlat(true);

        horizontalLayout_7->addWidget(pushButton_2);


        verticalLayout_4->addLayout(horizontalLayout_7);

        vv = new QRadioButton(groupBox_5);
        vv->setObjectName("vv");

        verticalLayout_4->addWidget(vv);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName("label_3");

        horizontalLayout_8->addWidget(label_3);

        filas = new QSpinBox(groupBox_5);
        filas->setObjectName("filas");

        horizontalLayout_8->addWidget(filas);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName("label_4");

        horizontalLayout_9->addWidget(label_4);

        columnas = new QSpinBox(groupBox_5);
        columnas->setObjectName("columnas");

        horizontalLayout_9->addWidget(columnas);


        verticalLayout_4->addLayout(horizontalLayout_9);


        gridLayout_7->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 1, 0, 1, 1);


        verticalLayout_5->addWidget(groupBox_5);


        horizontalLayout_10->addLayout(verticalLayout_5);

        base = new QTabWidget(tab_2);
        base->setObjectName("base");

        horizontalLayout_10->addWidget(base);


        gridLayout_8->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        area->addTab(tab_2, icon2, QString());

        gridLayout->addWidget(area, 0, 1, 1, 1);


        retranslateUi(config);

        area->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(config);
    } // setupUi

    void retranslateUi(QDialog *config)
    {
        config->setWindowTitle(QCoreApplication::translate("config", "Configuraciones", nullptr));
        groupBox->setTitle(QCoreApplication::translate("config", "Widgets", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("config", "Buttons", nullptr));
        pushButton->setText(QCoreApplication::translate("config", "PushButton", nullptr));
        toolButton->setText(QCoreApplication::translate("config", "Tool Button", nullptr));
        radioButton->setText(QCoreApplication::translate("config", "RadioButton", nullptr));
        checkBox->setText(QCoreApplication::translate("config", "CheckBox", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("config", "CommandLinkButton", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("config", "Item View", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("config", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("config", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("config", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("config", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("config", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("config", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("config", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("config", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("config", "New Item", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("config", "Matrices", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("config", "A", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem->child(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("config", "B", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("config", "Graficas", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("config", "AB", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("config", "Estadistica", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("config", "AB", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("config", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("config", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("config", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("config", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("config", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("config", "3", nullptr));

        const bool __sortingEnabled2 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("config", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("config", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("config", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(1, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("config", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("config", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("config", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(2, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("config", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(2, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("config", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(2, 2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("config", "9", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled2);

        groupBox_4->setTitle(QCoreApplication::translate("config", "Inputs", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("config", "1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("config", "2", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("config", "3", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("config", "4", nullptr));

        lineEdit->setText(QCoreApplication::translate("config", "Text", nullptr));
        Estilos->setItemText(0, QCoreApplication::translate("config", "Origin", nullptr));
        Estilos->setItemText(1, QCoreApplication::translate("config", "Adaptic", nullptr));
        Estilos->setItemText(2, QCoreApplication::translate("config", "Combinear", nullptr));
        Estilos->setItemText(3, QCoreApplication::translate("config", "Integrid", nullptr));
        Estilos->setItemText(4, QCoreApplication::translate("config", "Irrorater", nullptr));
        Estilos->setItemText(5, QCoreApplication::translate("config", "TCobra", nullptr));

        area->setTabText(area->indexOf(tab), QCoreApplication::translate("config", "Estilo", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("config", "Propiedades", nullptr));
        label->setText(QCoreApplication::translate("config", "Nombre:", nullptr));
        label_2->setText(QCoreApplication::translate("config", "Ruta", nullptr));
        pushButton_2->setText(QString());
        vv->setText(QCoreApplication::translate("config", "Vector Visible", nullptr));
        label_3->setText(QCoreApplication::translate("config", "Filas: ", nullptr));
        label_4->setText(QCoreApplication::translate("config", "Columnas: ", nullptr));
        area->setTabText(area->indexOf(tab_2), QCoreApplication::translate("config", "Matrices", nullptr));
    } // retranslateUi

};

namespace Ui {
    class config: public Ui_config {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
