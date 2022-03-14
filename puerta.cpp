#include "puerta.h"

Puerta::Puerta(QString name,
               QVector<unsigned short> pos):Objeto(name, pos)
{
    state = false;
}
