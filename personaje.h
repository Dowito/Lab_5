#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <objeto.h>

class Personaje : public Objeto //herencia para obtener las propiedades para ser representado en ui y tener compatibilidad
{
public:
    Personaje() {};
    Personaje(QString name);

private:
    unsigned char lifes;
    unsigned char bombas; //cantidad de bombas que puede poner simumlta
};

#endif // PERSONAJE_H
