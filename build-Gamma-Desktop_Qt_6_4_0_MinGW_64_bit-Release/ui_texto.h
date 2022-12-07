/********************************************************************************
** Form generated from reading UI file 'texto.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTO_H
#define UI_TEXTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_texto
{
public:
    QGridLayout *gridLayout;
    QTextEdit *area;

    void setupUi(QWidget *texto)
    {
        if (texto->objectName().isEmpty())
            texto->setObjectName("texto");
        texto->resize(786, 572);
        gridLayout = new QGridLayout(texto);
        gridLayout->setObjectName("gridLayout");
        area = new QTextEdit(texto);
        area->setObjectName("area");

        gridLayout->addWidget(area, 0, 0, 1, 1);


        retranslateUi(texto);

        QMetaObject::connectSlotsByName(texto);
    } // setupUi

    void retranslateUi(QWidget *texto)
    {
        texto->setWindowTitle(QCoreApplication::translate("texto", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class texto: public Ui_texto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTO_H
