#include "personaje.h"

Personaje::Personaje(QString name):Objeto(name)
{
    estado = true;
    lifes = 9;
    vel = 2;
    bombs = 1;
}

bool Personaje::getEstado() const
{
    return estado;
}

void Personaje::setEstado(bool newEstado)
{
    estado = newEstado;
}

unsigned char Personaje::getLifes() const
{
    return lifes;
}

void Personaje::setLifes(unsigned char newLifes)
{
    lifes = newLifes;
}

unsigned char Personaje::getBombs() const
{
    return bombs;
}

void Personaje::setBombs(unsigned char newBombs)
{
    bombs = newBombs;
}

unsigned char Personaje::getVel() const
{
    return vel;
}

void Personaje::setVel(unsigned char newVel)
{
    vel = newVel;
}
