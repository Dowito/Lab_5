#ifndef LLAVE_H
#define LLAVE_H
#include <objeto.h>

class Llave : public Objeto
{
public:
    Llave() {};
    Llave(QString name,
          QVector<unsigned short> pos,
          unsigned short width,
          unsigned short height); //Se inicia en state en false
};

#endif // LLAVE_H
