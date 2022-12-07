/********************************************************************************
** Form generated from reading UI file 'proyecto.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROYECTO_H
#define UI_PROYECTO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_proyecto
{
public:
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_8;
    QFrame *line;
    QPushButton *pushButton_7;
    QFrame *line_2;
    QPushButton *pushButton_6;
    QFrame *line_3;
    QPushButton *pushButton;
    QPushButton *pushButton_5;
    QFrame *line_4;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpinBox *inferior;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_5;
    QSpinBox *superior;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *filas;
    QLabel *label_2;
    QSpinBox *columnas;
    QTabWidget *area;

    void setupUi(QWidget *proyecto)
    {
        if (proyecto->objectName().isEmpty())
            proyecto->setObjectName(QString::fromUtf8("proyecto"));
        proyecto->resize(1174, 745);
        gridLayout_5 = new QGridLayout(proyecto);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_8 = new QPushButton(proyecto);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/iconos/amarillo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon);
        pushButton_8->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_8);

        line = new QFrame(proyecto);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line);

        pushButton_7 = new QPushButton(proyecto);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/iconos/rojo.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon1);
        pushButton_7->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_7);

        line_2 = new QFrame(proyecto);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_2);

        pushButton_6 = new QPushButton(proyecto);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/iconos/verde.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon2);
        pushButton_6->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_6);

        line_3 = new QFrame(proyecto);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_3);

        pushButton = new QPushButton(proyecto);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/iconos/naranja.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setFlat(true);

        horizontalLayout_4->addWidget(pushButton);

        pushButton_5 = new QPushButton(proyecto);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/iconos/cafe.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_5);

        line_4 = new QFrame(proyecto);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_4);

        pushButton_4 = new QPushButton(proyecto);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/iconos/azul.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon5);
        pushButton_4->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(proyecto);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/iconos/morado.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon6);
        pushButton_3->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(proyecto);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/iconos/rosa.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon7);
        pushButton_2->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_2);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_2 = new QGroupBox(proyecto);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        inferior = new QSpinBox(groupBox_2);
        inferior->setObjectName(QString::fromUtf8("inferior"));
        inferior->setMinimum(-9999);
        inferior->setMaximum(9999);
        inferior->setValue(1);

        horizontalLayout_2->addWidget(inferior);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        doubleSpinBox = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(4);
        doubleSpinBox->setMinimum(-100000000.000000000000000);
        doubleSpinBox->setMaximum(10000000000000.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        superior = new QSpinBox(groupBox_2);
        superior->setObjectName(QString::fromUtf8("superior"));
        superior->setMinimum(-9999);
        superior->setMaximum(9999);
        superior->setValue(10);

        horizontalLayout_2->addWidget(superior);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox_2);

        groupBox = new QGroupBox(proyecto);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        filas = new QSpinBox(groupBox);
        filas->setObjectName(QString::fromUtf8("filas"));
        filas->setMinimum(1);

        horizontalLayout->addWidget(filas);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        columnas = new QSpinBox(groupBox);
        columnas->setObjectName(QString::fromUtf8("columnas"));
        columnas->setMinimum(1);

        horizontalLayout->addWidget(columnas);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        area = new QTabWidget(proyecto);
        area->setObjectName(QString::fromUtf8("area"));
        area->setTabShape(QTabWidget::Rounded);
        area->setDocumentMode(false);
        area->setTabsClosable(false);
        area->setMovable(true);
        area->setTabBarAutoHide(true);

        verticalLayout_2->addWidget(area);


        gridLayout_5->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(proyecto);

        QMetaObject::connectSlotsByName(proyecto);
    } // setupUi

    void retranslateUi(QWidget *proyecto)
    {
        proyecto->setWindowTitle(QCoreApplication::translate("proyecto", "Form", nullptr));
        pushButton_8->setText(QString());
        pushButton_7->setText(QString());
        pushButton_6->setText(QString());
        pushButton->setText(QString());
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("proyecto", "Limites", nullptr));
        label_4->setText(QCoreApplication::translate("proyecto", "Inferior: ", nullptr));
        label_3->setText(QCoreApplication::translate("proyecto", "Aux:", nullptr));
        label_5->setText(QCoreApplication::translate("proyecto", "Superior: ", nullptr));
        groupBox->setTitle(QCoreApplication::translate("proyecto", "Dimenciones", nullptr));
        label->setText(QCoreApplication::translate("proyecto", "Filas: ", nullptr));
        label_2->setText(QCoreApplication::translate("proyecto", "Columnas: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class proyecto: public Ui_proyecto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROYECTO_H
