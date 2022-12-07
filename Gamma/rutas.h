#ifndef RUTAS_H
#define RUTAS_H

#include <QDialog>

namespace Ui {
class rutas;
}

class rutas : public QDialog
{
    Q_OBJECT

public:
    explicit rutas(QWidget *parent = nullptr);
    ~rutas();
    void SetRuta(QString);
    QString GetRuta();
    void SetContex(QString);
    void SetIE(bool);

private slots:
    void on_obtenerRuta_clicked();

private:
    Ui::rutas *ui;
    QString contexto;
    bool iE;
};

#endif // RUTAS_H
