#ifndef PROYECTO_H
#define PROYECTO_H

#include <QWidget>
#include "matriz.h"
#include <QVector>
#include<QTreeWidget>

namespace Ui {
class proyecto;
}

class proyecto : public QWidget
{
    Q_OBJECT

public:
    explicit proyecto(QWidget *parent = nullptr);
    ~proyecto();
    void setFilas(int);
    void setColumnas(int);
    void setVector(bool);
    void AgregarMatriz(int,int,QString,bool);
    void CerrarMatriz(QTreeWidget *);
    QString CurrentIndexText();
    void AgregarFigura(QString);
public:
    Ui::proyecto *ui;
    QVector<matriz *> matrices;
    QString nombreProyecto;
    QString nombreMatriz;

private slots:
    void on_pushButton_8_clicked();
};

#endif // PROYECTO_H
