#ifndef NUEVO_H
#define NUEVO_H

#include <QDialog>

namespace Ui {
class Nuevo;
}

class Nuevo : public QDialog
{
    Q_OBJECT

public:
    explicit Nuevo(QWidget *parent = nullptr);
    ~Nuevo();
    void AgregarMatriz();
    void AbrirArchivo();
    QString GetNameMatriz();
    QString GetNameProyect();
    bool IsCreateVector();


private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_buscarRuta_clicked();

public:
    Ui::Nuevo *ui;
    QString nombreProyecto,nombreMatriz,descripccion,ruta;
    bool vector,ok=false;
    int filas,columnas;
};

#endif // NUEVO_H
