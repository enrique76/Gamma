#ifndef MATRIZ_H
#define MATRIZ_H

#include <QWidget>
#include<QTreeWidgetItem>
#include<QTableWidget>

namespace Ui {
class matriz;
}

class matriz : public QWidget
{
    Q_OBJECT

public:
    explicit matriz(QWidget *parent = nullptr);
    ~matriz();
    void Crear(int,int,QString,bool);
    void setCapas(int);
    void AgregarValorMatriz(int,int,QString);
    void AgregarValorVector(int,QString);
    void CrearRama(QTreeWidgetItem *,QIcon);
    QString GetValor(int,int);
    int GetFilas();
    int GetColumnas();
    void SetFilas(int);
    void SetColumnas(int);
    void SetNombre(QString);
    QString getNombre();
    QString getComentario();
    void setComentario(QString);

public:
    Ui::matriz *ui;
    int filas,columnas;
    QString nombre;
    bool vector;
    QTreeWidgetItem *rama;
    QString Comentario;
};

#endif // MATRIZ_H
