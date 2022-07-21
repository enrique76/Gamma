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
    void SetFilas(int);
    void SetColumnas(int);
    void SetVectorVisible(bool);

public:
    Ui::Matriz *ui;
    QTreeWidgetItem *item;
    bool cv;
private slots:
    void on_ordenVector_clicked();
};

#endif // MATRIZ_H
