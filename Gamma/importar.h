#ifndef IMPORTAR_H
#define IMPORTAR_H

#include <QDialog>
#include<QTreeWidgetItem>
#include<QTableWidget>
#include<QSpinBox>
#include"matriz.h"

namespace Ui {
class importar;
}

class importar : public QDialog
{
    Q_OBJECT

public:
    explicit importar(QWidget *parent = nullptr);
    ~importar();
    void setMatrices(QTreeWidgetItem *);
    void PararDatos(matriz *,QSpinBox *,QSpinBox *);
    bool getV();
    QString getRuta();
    int getFilas();
    int getColumnas();
    QString getCeparador();


private slots:
    void on_ok_clicked();

    void on_Buscarruta_clicked();

    void on_aceptar_clicked();

private:
    Ui::importar *ui;
    bool V = false;
};

#endif // IMPORTAR_H
