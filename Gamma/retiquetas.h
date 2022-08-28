#ifndef RETIQUETAS_H
#define RETIQUETAS_H

#include <QDialog>

namespace Ui {
class rEtiquetas;
}

class rEtiquetas : public QDialog
{
    Q_OBJECT

public:
    explicit rEtiquetas(QWidget *parent = nullptr);
    ~rEtiquetas();
    void setTitle(QString);
    void setIcon(QIcon);
    void getListH(QStringList &);
    void getListV(QStringList &);
    void setF(int);
    void setC(int);
    bool getV();
    void setE(bool);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::rEtiquetas *ui;
    QStringList h,v;
    int f,c;
    bool V = false;
    bool E = false;
};

#endif // RETIQUETAS_H
