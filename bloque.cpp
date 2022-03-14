#include "bloque.h"

Bloque::Bloque(QString name, QVector<unsigned short> pos):Objeto(name)
{
    setPos(pos[0],pos[1]);
}
