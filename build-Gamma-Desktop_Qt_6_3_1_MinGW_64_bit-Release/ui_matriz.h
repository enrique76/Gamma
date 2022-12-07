/********************************************************************************
** Form generated from reading UI file 'matriz.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Matriz
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTableWidget *m;
    QVBoxLayout *verticalLayout;
    QPushButton *ordenVector;
    QTableWidget *v;

    void setupUi(QWidget *Matriz)
    {
        if (Matriz->objectName().isEmpty())
            Matriz->setObjectName(QString::fromUtf8("Matriz"));
        Matriz->resize(896, 662);
        gridLayout = new QGridLayout(Matriz);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m = new QTableWidget(Matriz);
        m->setObjectName(QString::fromUtf8("m"));

        horizontalLayout->addWidget(m);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ordenVector = new QPushButton(Matriz);
        ordenVector->setObjectName(QString::fromUtf8("ordenVector"));
        ordenVector->setMaximumSize(QSize(150, 16777215));

        verticalLayout->addWidget(ordenVector);

        v = new QTableWidget(Matriz);
        if (v->columnCount() < 1)
            v->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        v->setHorizontalHeaderItem(0, __qtablewidgetitem);
        v->setObjectName(QString::fromUtf8("v"));
        v->setMaximumSize(QSize(150, 16777215));
        v->setRowCount(0);
        v->setColumnCount(1);
        v->horizontalHeader()->setVisible(false);

        verticalLayout->addWidget(v);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        retranslateUi(Matriz);

        QMetaObject::connectSlotsByName(Matriz);
    } // setupUi

    void retranslateUi(QWidget *Matriz)
    {
        Matriz->setWindowTitle(QCoreApplication::translate("Matriz", "Form", nullptr));
        ordenVector->setText(QCoreApplication::translate("Matriz", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Matriz: public Ui_Matriz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRIZ_H
