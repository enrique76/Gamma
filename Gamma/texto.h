#ifndef TEXTO_H
#define TEXTO_H

#include <QWidget>
#include<QTableWidget>
#include"matriz.h"

namespace Ui {
class texto;
}

class texto : public QWidget
{
    Q_OBJECT

public:
    explicit texto(QWidget *parent = nullptr);
    ~texto();
    void GenerarCodigo(matriz *);

private:
    Ui::texto *ui;
};

#endif // TEXTO_H
