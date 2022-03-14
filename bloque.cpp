#include "bloque.h"

Bloque::Bloque(QString name,
               bool state,
               unsigned short width,
               unsigned short height,
               QVector<unsigned short> pos,
               bool destructible):Objeto(name, state, width, height)
{
    setPos(pos[0],pos[1]);
    this->destructible = destructible;
}

bool Bloque::getDestructible() const
{
    return destructible;
}

void Bloque::setDestructible(bool newDestructible)
{
    destructible = newDestructible;
}
