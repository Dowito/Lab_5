#include "juego.h"
#include "ui_juego.h"
#include <QString>


Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);

    QString read;
    ui->textBrowser->setText("Ejemplo de mierda");
}

Juego::~Juego()
{
    delete ui;
}

