#include "texto.h"
#include "ui_texto.h"
#include "matriz.h"

texto::texto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::texto)
{
    ui->setupUi(this);
}

texto::~texto()
{
    delete ui;
}

void texto::GenerarCodigo(matriz *m){
    // Comentario

    QString c = "%%";





    /* \begin{table}[]
        \begin{tabular}{lllll}
        qq & q & w &   &   \\
           &   &   & e &   \\
           &   &   &   & e \\
           &   &   &   &
        \end{tabular}
        \end{table}
     */

    c+= "\begin{table}[] \n \begin{tabular}{|";

    for(int i=0;i<m->columnas;i++){
        c+= "c|";
    }

    c+= "}\n";




    ui->area->setText(c+"\n");
}
