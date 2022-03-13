#include "enemigo.h"

Enemigo::Enemigo(QString name, unsigned short vel):Objeto(name)
{
    state = true;
    this->vel = vel;
}

bool Enemigo::getState() const
{
    return state;
}

void Enemigo::setState(bool newState)
{
    state = newState;
}

unsigned short Enemigo::getVel() const
{
    return vel;
}

void Enemigo::setVel(unsigned short newVel)
{
    vel = newVel;
}
