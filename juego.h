#ifndef JUEGO_H
#define JUEGO_H
#include <QMainWindow>
#include "ui_juego.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QTimer>
#include <QString>

#include <objeto.h>
#include <personaje.h>
#include <enemigo.h>
#include <bloque.h>
#include <bomba.h>


QT_BEGIN_NAMESPACE
namespace Ui { class Juego; }
QT_END_NAMESPACE

class Juego : public QMainWindow
{
    Q_OBJECT
public:

    void keyPressEvent(QKeyEvent *i);
    Juego(QWidget *parent = nullptr);
    ~Juego();

public slots:
    void moveEnemigo();

private:
    //Puede cargar todas las letras aqui, e ir cambiandoles la posicion
    Personaje *personaje;
    Enemigo *enemigo[2];
    Bloque *bloque;
    Bomba *bomba;
    Explotion *explocion;
    Objeto *caracteres[100];
    Ui::Juego *ui;
    QGraphicsScene *escena;
    QTimer *time;
};
#endif // JUEGO_H
