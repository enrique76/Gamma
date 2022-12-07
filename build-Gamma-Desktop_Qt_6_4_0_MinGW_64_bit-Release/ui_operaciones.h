/********************************************************************************
** Form generated from reading UI file 'operaciones.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERACIONES_H
#define UI_OPERACIONES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_operaciones
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *operaciones)
    {
        if (operaciones->objectName().isEmpty())
            operaciones->setObjectName("operaciones");
        operaciones->resize(953, 632);
        gridLayout = new QGridLayout(operaciones);
        gridLayout->setObjectName("gridLayout");
        buttonBox = new QDialogButtonBox(operaciones);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 0, 0, 1, 1);


        retranslateUi(operaciones);

        QMetaObject::connectSlotsByName(operaciones);
    } // setupUi

    void retranslateUi(QWidget *operaciones)
    {
        operaciones->setWindowTitle(QCoreApplication::translate("operaciones", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class operaciones: public Ui_operaciones {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERACIONES_H
