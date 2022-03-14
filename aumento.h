#ifndef AUMENTO_H
#define AUMENTO_H
#include <objeto.h>

class Aumento : public Objeto
{
public:
    Aumento() {};
    Aumento(QString name,
            unsigned short label);

private:
    unsigned short label; //etiqueta que dire que tipo de aumento lleva
    //LLevaran sprite distinto segun la label
    //+bombas al jugador
    //+radio a bomba
    //+velocidad al jugador
};

#endif // AUMENTO_H
