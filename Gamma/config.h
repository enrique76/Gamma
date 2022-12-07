#ifndef CONFIG_H
#define CONFIG_H

#include <QDialog>
#include"matriz.h"

namespace Ui {
class config;
}

class config : public QDialog
{
    Q_OBJECT

public:
    explicit config(QWidget *parent = nullptr);
    ~config();
    QString GetEstilo();
    void SetS(QString);
    void SetData(QVector<Matriz *>);


private slots:
    void on_buttonBox_accepted();

    void on_Estilos_currentTextChanged(const QString &arg1);

    void on_Estilos_currentIndexChanged(int index);

    void on_base_tabBarClicked(int index);

    void on_pushButton_2_clicked();

private:
    Ui::config *ui;
    QString estilo;
    QVector<Matriz *> m;
};

#endif // CONFIG_H
