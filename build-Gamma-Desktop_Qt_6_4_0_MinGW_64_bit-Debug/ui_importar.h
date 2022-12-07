/********************************************************************************
** Form generated from reading UI file 'importar.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMPORTAR_H
#define UI_IMPORTAR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_importar
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout;
    QLineEdit *ruta;
    QPushButton *Buscarruta;
    QLabel *label;
    QComboBox *cp;
    QPushButton *ok;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *pre;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *nombre;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *filas;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSpinBox *columnas;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *prevista_2;
    QGridLayout *gridLayout;
    QTableWidget *prevista;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *aceptar;
    QPushButton *cancelar;

    void setupUi(QDialog *importar)
    {
        if (importar->objectName().isEmpty())
            importar->setObjectName("importar");
        importar->resize(1008, 706);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos/importar.png"), QSize(), QIcon::Normal, QIcon::Off);
        importar->setWindowIcon(icon);
        gridLayout_2 = new QGridLayout(importar);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        ruta = new QLineEdit(importar);
        ruta->setObjectName("ruta");

        horizontalLayout->addWidget(ruta);

        Buscarruta = new QPushButton(importar);
        Buscarruta->setObjectName("Buscarruta");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos/ruta.png"), QSize(), QIcon::Normal, QIcon::Off);
        Buscarruta->setIcon(icon1);
        Buscarruta->setFlat(true);

        horizontalLayout->addWidget(Buscarruta);

        label = new QLabel(importar);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        cp = new QComboBox(importar);
        cp->addItem(QString());
        cp->addItem(QString());
        cp->addItem(QString());
        cp->addItem(QString());
        cp->addItem(QString());
        cp->addItem(QString());
        cp->setObjectName("cp");

        horizontalLayout->addWidget(cp);

        ok = new QPushButton(importar);
        ok->setObjectName("ok");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/iconos/run.png"), QSize(), QIcon::Normal, QIcon::Off);
        ok->setIcon(icon2);
        ok->setFlat(true);

        horizontalLayout->addWidget(ok);


        horizontalLayout_9->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_9);

        pre = new QHBoxLayout();
        pre->setObjectName("pre");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(importar);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        nombre = new QLineEdit(importar);
        nombre->setObjectName("nombre");

        horizontalLayout_2->addWidget(nombre);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(importar);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        filas = new QSpinBox(importar);
        filas->setObjectName("filas");
        filas->setMinimum(1);

        horizontalLayout_3->addWidget(filas);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(importar);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        columnas = new QSpinBox(importar);
        columnas->setObjectName("columnas");
        columnas->setMinimum(1);

        horizontalLayout_4->addWidget(columnas);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        pre->addLayout(horizontalLayout_5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        pre->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(pre);

        prevista_2 = new QGroupBox(importar);
        prevista_2->setObjectName("prevista_2");
        prevista_2->setMinimumSize(QSize(500, 500));
        prevista_2->setMaximumSize(QSize(1000, 1000));
        gridLayout = new QGridLayout(prevista_2);
        gridLayout->setObjectName("gridLayout");
        prevista = new QTableWidget(prevista_2);
        prevista->setObjectName("prevista");
        prevista->setMinimumSize(QSize(300, 300));

        gridLayout->addWidget(prevista, 0, 0, 1, 1);


        verticalLayout->addWidget(prevista_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        aceptar = new QPushButton(importar);
        aceptar->setObjectName("aceptar");

        horizontalLayout_6->addWidget(aceptar);

        cancelar = new QPushButton(importar);
        cancelar->setObjectName("cancelar");

        horizontalLayout_6->addWidget(cancelar);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        verticalLayout->addLayout(horizontalLayout_7);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(importar);

        QMetaObject::connectSlotsByName(importar);
    } // setupUi

    void retranslateUi(QDialog *importar)
    {
        importar->setWindowTitle(QCoreApplication::translate("importar", "Importar", nullptr));
        Buscarruta->setText(QString());
        label->setText(QCoreApplication::translate("importar", "Ceparador:", nullptr));
        cp->setItemText(0, QCoreApplication::translate("importar", ",", nullptr));
        cp->setItemText(1, QCoreApplication::translate("importar", ";", nullptr));
        cp->setItemText(2, QCoreApplication::translate("importar", ":", nullptr));
        cp->setItemText(3, QCoreApplication::translate("importar", "-", nullptr));
        cp->setItemText(4, QCoreApplication::translate("importar", "_", nullptr));
        cp->setItemText(5, QString());

        ok->setText(QString());
        label_2->setText(QCoreApplication::translate("importar", "Nombre:", nullptr));
        label_3->setText(QCoreApplication::translate("importar", "Filas:", nullptr));
        label_4->setText(QCoreApplication::translate("importar", "Columnas", nullptr));
        prevista_2->setTitle(QCoreApplication::translate("importar", "Prevista", nullptr));
        aceptar->setText(QCoreApplication::translate("importar", "Aceptar", nullptr));
        cancelar->setText(QCoreApplication::translate("importar", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class importar: public Ui_importar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMPORTAR_H
