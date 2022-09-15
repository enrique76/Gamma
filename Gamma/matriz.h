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
    QString GetValor(int);
    int GetFilas();
    int GetColumnas();
    void SetFilas(int);
    void SetColumnas(int);
    bool getVector();
    void SetNombre(QString);
    QString getNombre();
    QString getComentario();
    void setComentario(QString);
    QString MinH();
    QString MaxH();
    QString MinV();
    QString MaxV();
    void setHL(QStringList);
    void setVL(QStringList);
    QStringList getHL();
    QStringList getVL();
    void Copy(QTableWidget *);
    void setRuta(QString);
    QString getRuta();
    void setDeterminante();
    double getDeterminante();
    void setMaximo();
    double getMaximo();
    void setMinimo();
    double getMinimo();
    void setSumatoria();
    double getSumatoria();
    void setFuente(QFont);
    void setColor(QColor);
    QString getColor(int,int);
    QString getFuente(int,int);

public:
    Ui::matriz *ui;
    int filas,columnas;
    QString nombre;
    bool vector;
    QTreeWidgetItem *rama;
    QString Comentario;
    QStringList h,v;
    QString ruta;
    double determinante,maximo,minimo,sumatoria,media,mediana,varianza,desviacion;
    QString Triangualar;
    QVector<double> moda;
    QVector<QTableWidgetItem *> its;
private slots:
    void on_m_itemEntered(QTableWidgetItem *item);
    void on_m_cellClicked(int row, int column);
};

#endif // MATRIZ_H
