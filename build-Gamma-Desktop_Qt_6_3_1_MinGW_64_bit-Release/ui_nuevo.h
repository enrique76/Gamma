/********************************************************************************
** Form generated from reading UI file 'nuevo.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUEVO_H
#define UI_NUEVO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Nuevo
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nombre;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *nombreMatriz;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *filas;
    QLabel *label_3;
    QSpinBox *columnas;
    QSpacerItem *horizontalSpacer;
    QRadioButton *vector;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QTextEdit *descipcion;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *ruta;
    QPushButton *buscarRuta;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Nuevo)
    {
        if (Nuevo->objectName().isEmpty())
            Nuevo->setObjectName(QString::fromUtf8("Nuevo"));
        Nuevo->resize(514, 460);
        gridLayout = new QGridLayout(Nuevo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(Nuevo);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        nombre = new QLineEdit(Nuevo);
        nombre->setObjectName(QString::fromUtf8("nombre"));

        horizontalLayout->addWidget(nombre);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(Nuevo);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        nombreMatriz = new QLineEdit(Nuevo);
        nombreMatriz->setObjectName(QString::fromUtf8("nombreMatriz"));

        horizontalLayout_5->addWidget(nombreMatriz);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(Nuevo);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        filas = new QSpinBox(Nuevo);
        filas->setObjectName(QString::fromUtf8("filas"));
        filas->setMinimum(1);
        filas->setValue(10);

        horizontalLayout_2->addWidget(filas);

        label_3 = new QLabel(Nuevo);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        columnas = new QSpinBox(Nuevo);
        columnas->setObjectName(QString::fromUtf8("columnas"));
        columnas->setMinimum(1);
        columnas->setValue(10);

        horizontalLayout_2->addWidget(columnas);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);

        vector = new QRadioButton(Nuevo);
        vector->setObjectName(QString::fromUtf8("vector"));
        vector->setChecked(true);

        verticalLayout_2->addWidget(vector);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_4 = new QLabel(Nuevo);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        descipcion = new QTextEdit(Nuevo);
        descipcion->setObjectName(QString::fromUtf8("descipcion"));

        horizontalLayout_3->addWidget(descipcion);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(Nuevo);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        ruta = new QLineEdit(Nuevo);
        ruta->setObjectName(QString::fromUtf8("ruta"));

        horizontalLayout_4->addWidget(ruta);

        buscarRuta = new QPushButton(Nuevo);
        buscarRuta->setObjectName(QString::fromUtf8("buscarRuta"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos/ruta.png"), QSize(), QIcon::Normal, QIcon::Off);
        buscarRuta->setIcon(icon);
        buscarRuta->setFlat(true);

        horizontalLayout_4->addWidget(buscarRuta);


        verticalLayout_2->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(Nuevo);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(Nuevo);

        QMetaObject::connectSlotsByName(Nuevo);
    } // setupUi

    void retranslateUi(QDialog *Nuevo)
    {
        Nuevo->setWindowTitle(QString());
        label->setText(QCoreApplication::translate("Nuevo", "Nombre Proyecto: ", nullptr));
        nombre->setText(QCoreApplication::translate("Nuevo", "MyProyect", nullptr));
        label_6->setText(QCoreApplication::translate("Nuevo", "Nombre Matriz: ", nullptr));
        nombreMatriz->setText(QCoreApplication::translate("Nuevo", "A", nullptr));
        label_2->setText(QCoreApplication::translate("Nuevo", "Filas: ", nullptr));
        label_3->setText(QCoreApplication::translate("Nuevo", "Columnas:", nullptr));
        vector->setText(QCoreApplication::translate("Nuevo", "Vector Resultante", nullptr));
        label_4->setText(QCoreApplication::translate("Nuevo", "Descripcion: ", nullptr));
        label_5->setText(QCoreApplication::translate("Nuevo", "Ruta: ", nullptr));
        buscarRuta->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Nuevo: public Ui_Nuevo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUEVO_H
