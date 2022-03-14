#include "llave.h"

Llave::Llave(QString name,
             QVector<unsigned short> pos,
             unsigned short width,
             unsigned short height):Objeto(name,pos,width,height)
{
    state = false;
}
