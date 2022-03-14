#include "personaje.h"

Personaje::Personaje(QString name):Objeto(name)
{
    lifes = 9;
    vel = 2;
    bombs = 1;
    key = false;
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
