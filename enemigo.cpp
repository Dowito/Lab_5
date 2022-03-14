#include "enemigo.h"

Enemigo::Enemigo(QString name, unsigned short vel):Objeto(name)
{
    this->vel = vel;
}

unsigned short Enemigo::getVel() const
{
    return vel;
}

void Enemigo::setVel(unsigned short newVel)
{
    vel = newVel;
}
