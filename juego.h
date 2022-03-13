#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include "ui_juego.h"
#include <QString>
#include <QGraphicsScene>
#include <personaje.h>

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

private:
    Ui::Juego *ui;
    QGraphicsScene *escena = new QGraphicsScene;
    Personaje *personaje = new Personaje(":/imagenes/Sprites/Personaje1 - sprite.png");
};
#endif // JUEGO_H
