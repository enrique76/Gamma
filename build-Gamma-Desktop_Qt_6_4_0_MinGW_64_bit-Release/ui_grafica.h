/********************************************************************************
** Form generated from reading UI file 'grafica.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAFICA_H
#define UI_GRAFICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_grafica
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QCustomPlot *base;
    QWidget *page_2;

    void setupUi(QWidget *grafica)
    {
        if (grafica->objectName().isEmpty())
            grafica->setObjectName("grafica");
        grafica->resize(836, 563);
        gridLayout = new QGridLayout(grafica);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(grafica);
        stackedWidget->setObjectName("stackedWidget");
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName("gridLayout_2");
        base = new QCustomPlot(page);
        base->setObjectName("base");

        gridLayout_2->addWidget(base, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(grafica);

        QMetaObject::connectSlotsByName(grafica);
    } // setupUi

    void retranslateUi(QWidget *grafica)
    {
        grafica->setWindowTitle(QCoreApplication::translate("grafica", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grafica: public Ui_grafica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAFICA_H
