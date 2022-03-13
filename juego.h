#ifndef JUEGO_H
#define JUEGO_H

#include <QMainWindow>
#include "ui_juego.h"
#include <QString>
#include <QGraphicsScene>
#include <personaje.h>
#include <enemigo.h>
#include <QKeyEvent>
#include <QTimer>

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
    Personaje *personaje;
    Enemigo *enemigo[2];
    QTimer *time;
};
#endif // JUEGO_H
