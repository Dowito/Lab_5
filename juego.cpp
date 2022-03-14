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
    QVector<unsigned short> posPiso = {2*48,2*48};
    QVector<unsigned short> posP= {48*2,48};
    QVector<unsigned short> posPuerta = {48*3,0};
    QVector<unsigned short> posLlave = {0*48+(24/2),3*48+(24/2)};
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
    bloque = new Bloque(":/imagenes/Sprites/Bloque.png", posB, 48, 48);
    destruible[0] = new Destruible(":/imagenes/Sprites/piso.png", posPiso, false, 48, 48, false, 0);
    destruible[1] = new Destruible(":/imagenes/Sprites/Destruible.png", posD, true, 48, 48, true, '1');

    //inicializando llave
    llave = new Llave(":/imagenes/Sprites/Llave.png", posLlave, 24, 24);
    //inicializando puerta
    puerta = new Puerta(":/imagenes/Sprites/puerta.png", posPuerta);

    //agregando elementos a mostrar en pantalla a la escena
    escena->addItem(personaje);
    escena->addItem(enemigo[0]);
    escena->addItem(enemigo[1]);
    escena->addItem(bloque);
    escena->addItem(destruible[0]);
    escena->addItem(destruible[1]);
    escena->addItem(llave);
    escena->addItem(puerta);

    //agregando la escena a graphcisview
    ui->display->setScene(escena);
    time->start(100);
}

Juego::~Juego()
{
    delete ui;
    delete escena;
    delete time;
    delete personaje;
    delete *enemigo;
    delete bloque;
    delete *destruible;
    delete bomba;
    delete explocion;
    delete aumento;
    delete llave;
    delete puerta;
}

