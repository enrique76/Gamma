#ifndef GRAFICA_H
#define GRAFICA_H

#include <QWidget>
#include<QTreeWidgetItem>
#include"matriz.h"

namespace Ui {
class grafica;
}

class grafica : public QWidget
{
    Q_OBJECT

public:
    explicit grafica(QWidget *parent = nullptr);
    ~grafica();
    void CreateItem(QTreeWidgetItem *);
    void SetRutaPadre(QString);
    void SetRuta(QString);
    void SetNombre(QString);
    void SetIcono(QString);
    QString GetRutaPadre();
    QString GetRuta();
    QString GetNombre();
    QTreeWidgetItem * GetItem();
    void CreateGraph(Matriz *);

private:
    Ui::grafica *ui;
    QString rutaPadre;
    QString ruta;
    QString nombre;
    QString icono;
    QTreeWidgetItem *item;
};

#endif // GRAFICA_H
