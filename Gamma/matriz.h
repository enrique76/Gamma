#ifndef MATRIZ_H
#define MATRIZ_H

#include <QWidget>
#include<QTreeWidgetItem>
#include<QIcon>

namespace Ui {
class Matriz;
}

class Matriz : public QWidget
{
    Q_OBJECT

public:
    explicit Matriz(QWidget *parent = nullptr);
    ~Matriz();
    void SetNameItem(QString);
    QString GetNameItem();
    void CreateItem(QTreeWidgetItem *);

public:
    Ui::Matriz *ui;
    QTreeWidgetItem *item;
    const QIcon *icono = new QIcon(":/new/prefix1/iconos/matriz2.png");
};

#endif // MATRIZ_H
