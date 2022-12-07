/********************************************************************************
** Form generated from reading UI file 'rutas.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUTAS_H
#define UI_RUTAS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_rutas
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *ruta;
    QPushButton *obtenerRuta;
    QComboBox *extension;
    QRadioButton *ed;
    QPushButton *go;

    void setupUi(QDialog *rutas)
    {
        if (rutas->objectName().isEmpty())
            rutas->setObjectName("rutas");
        rutas->resize(585, 90);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos/direcciones.png"), QSize(), QIcon::Normal, QIcon::Off);
        rutas->setWindowIcon(icon);
        gridLayout = new QGridLayout(rutas);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        ruta = new QLineEdit(rutas);
        ruta->setObjectName("ruta");

        horizontalLayout->addWidget(ruta);

        obtenerRuta = new QPushButton(rutas);
        obtenerRuta->setObjectName("obtenerRuta");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos/ruta.png"), QSize(), QIcon::Normal, QIcon::Off);
        obtenerRuta->setIcon(icon1);
        obtenerRuta->setFlat(true);

        horizontalLayout->addWidget(obtenerRuta);

        extension = new QComboBox(rutas);
        extension->addItem(QString());
        extension->addItem(QString());
        extension->setObjectName("extension");

        horizontalLayout->addWidget(extension);

        ed = new QRadioButton(rutas);
        ed->setObjectName("ed");

        horizontalLayout->addWidget(ed);


        verticalLayout->addLayout(horizontalLayout);

        go = new QPushButton(rutas);
        go->setObjectName("go");

        verticalLayout->addWidget(go);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(rutas);

        QMetaObject::connectSlotsByName(rutas);
    } // setupUi

    void retranslateUi(QDialog *rutas)
    {
        rutas->setWindowTitle(QCoreApplication::translate("rutas", "Ruta", nullptr));
        obtenerRuta->setText(QString());
        extension->setItemText(0, QCoreApplication::translate("rutas", ".txt", nullptr));
        extension->setItemText(1, QCoreApplication::translate("rutas", ".csv", nullptr));

        ed->setText(QString());
        go->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class rutas: public Ui_rutas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUTAS_H
