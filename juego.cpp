#include "juego.h"

void Juego::moveEnemigo()
{
    enemigo[0]->setX(enemigo[0]->x()+enemigo[0]->getVel());
    enemigo[1]->setY(enemigo[1]->y()+enemigo[1]->getVel());
}

void Juego::keyPressEvent(QKeyEvent *i)
{
    if (i->key() == Qt::Key_D) {
        personaje->setX(personaje->x()+personaje->getVel());
    }
    else if (i->key()  == Qt::Key_A) {
        personaje->setX(personaje->x()-personaje->getVel());
    }
    else if (i->key() == Qt::Key_W) {
        personaje->setY(personaje->y()-personaje->getVel());
    }
    else if (i->key() == Qt::Key_S) {
        personaje->setY(personaje->y()+personaje->getVel());
    }
}

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    QVector<unsigned short> posB= {48,48};
    QVector<unsigned short> posD= {48*3,48};
    ui->setupUi(this);
    ui->display->setGeometry(0,0,width(),height());

    time = new QTimer;
    connect(time, SIGNAL(timeout()), this, SLOT(moveEnemigo()));

    //inicializando la escena
    escena = new QGraphicsScene;
    escena->setSceneRect(0,0,ui->display->width()-2,ui->display->height()-2);

    //inicializando personaje
    personaje = new Personaje(":/imagenes/Sprites/Personaje1- sprite.png");
    personaje->setPos(0,0);

    //inicializando enemigos
    enemigo[0] = new Enemigo(":/imagenes/Sprites/Hombre lobo.png",5);
    enemigo[0]->setPos(300,240);
    enemigo[1] = new Enemigo(":/imagenes/Sprites/Furro.png",3);
    enemigo[1]->setPos(48,0);

    //inicializando bloques
    bloque[0] = new Bloque(":/imagenes/Sprites/Bloque.png", true, 48, 48, posB, false);
    bloque[1] = new Bloque(":/imagenes/Sprites/Destruible.png", true, 48, 48, posD, true);

    //agregando elementos a mostrar en pantalla a la escena
    escena->addItem(personaje);
    escena->addItem(enemigo[0]);
    escena->addItem(enemigo[1]);
    escena->addItem(bloque[0]);
    escena->addItem(bloque[1]);

    //agregando la escena a graphcisview
    ui->display->setScene(escena);
    time->start(100);
}

Juego::~Juego()
{
    delete ui;
    delete personaje;
    delete escena;
}

