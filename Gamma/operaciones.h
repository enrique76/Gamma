#ifndef OPERACIONES_H
#define OPERACIONES_H

#include <QWidget>

namespace Ui {
class operaciones;
}

class operaciones : public QWidget
{
    Q_OBJECT

public:
    explicit operaciones(QWidget *parent = nullptr);
    ~operaciones();

private:
    Ui::operaciones *ui;
};

#endif // OPERACIONES_H
