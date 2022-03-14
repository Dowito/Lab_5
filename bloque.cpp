#include "bloque.h"

Bloque::Bloque(QString name,
               unsigned short width,
               unsigned short height,
               QVector<unsigned short> pos):Objeto(name, width, height)
{
    setPos(pos[0],pos[1]);
}
