#ifndef BLOQUE_H
#define BLOQUE_H

#include <objeto.h>

class Bloque : public Objeto
{
public:
    Bloque() {};
    Bloque(QString name,
           QVector<unsigned short> pos,
           unsigned short width,
           unsigned short height);
};

#endif // BLOQUE_H
