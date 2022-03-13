#include "personaje.h"

Personaje::Personaje(QObject *parent) : QObject(parent)
{

}

Personaje::Personaje(QString name)
{
    setPixmap(QPixmap(name));
    setX(350);
    setY(240);
}
