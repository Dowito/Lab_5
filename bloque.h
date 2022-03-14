#ifndef BLOQUE_H
#define BLOQUE_H

#include <objeto.h>

class Bloque : public Objeto
{
public:
    Bloque() {};
    Bloque(QString name,
           unsigned short width,
           unsigned short height,
           QVector<unsigned short> pos);
};

#endif // BLOQUE_H
