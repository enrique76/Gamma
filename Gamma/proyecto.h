#ifndef PROYECTO_H
#define PROYECTO_H

#include <QWidget>
#include "matriz.h"
#include "texto.h"
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
    void SetValor(int,int,int,QString);
    QString GetValor(int,int,int);
    void SetFilasColumnasSplinBox(int,int);
    void AgregarTexto(texto *,QString);

public:
    Ui::proyecto *ui;
    QVector<matriz *> matrices;
    QString nombreProyecto;
    QString nombreMatriz;
    int pos = 0;
private slots:
    void on_pushButton_8_clicked();
    void on_filas_valueChanged(int arg1);
    void on_columnas_valueChanged(int arg1);
    void on_area_currentChanged(int index);
};

#endif // PROYECTO_H
