/********************************************************************************
** Form generated from reading UI file 'matriz.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRIZ_H
#define UI_MATRIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_matriz
{
public:
    QGridLayout *gridLayout_2;
    QStackedWidget *capas;
    QWidget *page;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTableWidget *m;
    QVBoxLayout *verticalLayout;
    QPushButton *cambioVector;
    QTableWidget *v;
    QWidget *page_2;

    void setupUi(QWidget *matriz)
    {
        if (matriz->objectName().isEmpty())
            matriz->setObjectName("matriz");
        matriz->resize(938, 604);
        gridLayout_2 = new QGridLayout(matriz);
        gridLayout_2->setObjectName("gridLayout_2");
        capas = new QStackedWidget(matriz);
        capas->setObjectName("capas");
        page = new QWidget();
        page->setObjectName("page");
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        m = new QTableWidget(page);
        m->setObjectName("m");

        horizontalLayout->addWidget(m);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        cambioVector = new QPushButton(page);
        cambioVector->setObjectName("cambioVector");
        cambioVector->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(cambioVector);

        v = new QTableWidget(page);
        v->setObjectName("v");
        v->setMaximumSize(QSize(100, 16777215));
        v->horizontalHeader()->setVisible(false);

        verticalLayout->addWidget(v);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        capas->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        capas->addWidget(page_2);

        gridLayout_2->addWidget(capas, 0, 0, 1, 1);


        retranslateUi(matriz);

        capas->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(matriz);
    } // setupUi

    void retranslateUi(QWidget *matriz)
    {
        matriz->setWindowTitle(QCoreApplication::translate("matriz", "Form", nullptr));
        cambioVector->setText(QCoreApplication::translate("matriz", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class matriz: public Ui_matriz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIZ_H
