#include "juego.h"

void Juego::moveEnemigo()
{
    enemigo[0]->setX(enemigo[0]->x()+5);
    enemigo[1]->setY(enemigo[1]->y()+3);
}

void Juego::keyPressEvent(QKeyEvent *i)
{
    if (i->key() == Qt::Key_D) {
        personaje->setX(personaje->x()+2);
    }
    else if (i->key()  == Qt::Key_A) {
        personaje->setX(personaje->x()-2);
    }
    else if (i->key() == Qt::Key_W) {
        personaje->setY(personaje->y()-2);
    }
    else if (i->key() == Qt::Key_S) {
        personaje->setY(personaje->y()+2);
    }
}

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    ui->display->setGeometry(0,0,width(),height());

    time = new QTimer;
    connect(time, SIGNAL(timeout()), this, SLOT(moveEnemigo()));
    time->start(100);
    //inicializando la escena
    escena = new QGraphicsScene;
    escena->setSceneRect(0,0,ui->display->width()-2,ui->display->height()-2);

    personaje = new Personaje(":/imagenes/Sprites/Personaje1- sprite.png");
    personaje->setPos(0,0);

    enemigo[0] = new Enemigo(":/imagenes/Sprites/Hombre lobo.png");
    enemigo[0]->setPos(300,240);

    enemigo[1] = new Enemigo(":/imagenes/Sprites/Furro.png");
    enemigo[1]->setPos(48,0);

    //agregando elementos a mostrar en pantalla a la escena
    escena->addItem(personaje);
    escena->addItem(enemigo[0]);
    escena->addItem(enemigo[1]);
    //agregando la escena a graphcisview
    ui->display->setScene(escena);

}

Juego::~Juego()
{
    delete ui;
    delete personaje;
    delete escena;
}

