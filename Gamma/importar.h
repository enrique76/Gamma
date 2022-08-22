#ifndef IMPORTAR_H
#define IMPORTAR_H

#include <QDialog>
#include<QTreeWidgetItem>

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

private slots:
    void on_ok_clicked();

    void on_Buscarruta_clicked();

private:
    Ui::importar *ui;
};

#endif // IMPORTAR_H
