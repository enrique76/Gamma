/********************************************************************************
** Form generated from reading UI file 'retiquetas.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETIQUETAS_H
#define UI_RETIQUETAS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_rEtiquetas
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QLabel *label_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *manual1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *manual2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QComboBox *separador;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *rEtiquetas)
    {
        if (rEtiquetas->objectName().isEmpty())
            rEtiquetas->setObjectName("rEtiquetas");
        rEtiquetas->resize(432, 209);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos/barra-de-desplazamiento.png"), QSize(), QIcon::Normal, QIcon::Off);
        rEtiquetas->setWindowIcon(icon);
        gridLayout = new QGridLayout(rEtiquetas);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(rEtiquetas);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(tab);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        spinBox = new QSpinBox(tab);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimum(-999);
        spinBox->setMaximum(999);
        spinBox->setValue(1);

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_4 = new QGridLayout(tab_2);
        gridLayout_4->setObjectName("gridLayout_4");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(tab_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        manual1 = new QLineEdit(tab_2);
        manual1->setObjectName("manual1");

        horizontalLayout_2->addWidget(manual1);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(tab_2);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        manual2 = new QLineEdit(tab_2);
        manual2->setObjectName("manual2");

        horizontalLayout_3->addWidget(manual2);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout_2);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        separador = new QComboBox(groupBox);
        separador->addItem(QString());
        separador->addItem(QString());
        separador->addItem(QString());
        separador->addItem(QString());
        separador->addItem(QString());
        separador->addItem(QString());
        separador->setObjectName("separador");

        gridLayout_3->addWidget(separador, 0, 0, 1, 1);


        horizontalLayout_4->addWidget(groupBox);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(rEtiquetas);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(rEtiquetas);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(rEtiquetas);
    } // setupUi

    void retranslateUi(QDialog *rEtiquetas)
    {
        rEtiquetas->setWindowTitle(QCoreApplication::translate("rEtiquetas", "Renombrar Etiquetas Por ..", nullptr));
        label->setText(QCoreApplication::translate("rEtiquetas", "Caracter: ", nullptr));
        label_2->setText(QCoreApplication::translate("rEtiquetas", "n1,n2,n3,n4,...,n", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("rEtiquetas", "Automatico", nullptr));
        label_3->setText(QCoreApplication::translate("rEtiquetas", "Filas", nullptr));
        label_4->setText(QCoreApplication::translate("rEtiquetas", "Columnas", nullptr));
        groupBox->setTitle(QCoreApplication::translate("rEtiquetas", "Separacion", nullptr));
        separador->setItemText(0, QCoreApplication::translate("rEtiquetas", ",", nullptr));
        separador->setItemText(1, QCoreApplication::translate("rEtiquetas", "-", nullptr));
        separador->setItemText(2, QCoreApplication::translate("rEtiquetas", "_", nullptr));
        separador->setItemText(3, QCoreApplication::translate("rEtiquetas", ";", nullptr));
        separador->setItemText(4, QCoreApplication::translate("rEtiquetas", ":", nullptr));
        separador->setItemText(5, QString());

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("rEtiquetas", "Manual", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rEtiquetas: public Ui_rEtiquetas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETIQUETAS_H
