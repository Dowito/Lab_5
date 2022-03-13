#include "juego.h"


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

    //estableciando tamaño del display
    ui->display->setGeometry(0,0,width(),height());
    //inicializando la escena
    //escena = new QGraphicsScene;
    escena->setSceneRect(0,0,ui->display->width()-2,ui->display->height()-2);

    //inicializando personaje
    //personaje = new Personaje(":/imagenes/Sprites/Personaje1.png");

    //agregando elementos a mostrar en pantalla a la escena
    escena->addItem(personaje);

    //agrenado la escena a graphcisview
    ui->display->setScene(escena);
}

Juego::~Juego()
{
    delete ui;
    delete personaje;
    delete escena;
}

