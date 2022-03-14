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
#include <destruible.h>
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
    Ui::Juego *ui;
    QGraphicsScene *escena;
    QTimer *time;
    Personaje *personaje;
    Enemigo *enemigo[2];
    Bloque *bloque;
    Destruible *destruible;
    Bomba *bomba;
    Explotion *explotion;
};
#endif // JUEGO_H
