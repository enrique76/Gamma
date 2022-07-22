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
    void SetRuta(QString);
    QString GetRuta();
    int GetFilas();
    int GetColumnas();
    QString GetValue(int,int);
    void SetData(QString);
    void SetIsSave(bool);
    bool GetIsSave();
    void SetData(int,int,int);
    bool GetV();
    void SetDataV(int,int);
    void Copi(Matriz *);
    QString GetDataV(int);


public:
    Ui::Matriz *ui;
    QTreeWidgetItem *item;
    bool cv;
    QString ruta;
    bool is = false;
private slots:
    void on_ordenVector_clicked();
    void on_m_cellChanged(int row, int column);
};

#endif // MATRIZ_H
