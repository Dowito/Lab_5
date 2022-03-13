#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <objeto.h>

class Enemigo : public Objeto
{
public:
    Enemigo() {};
    Enemigo(QString name);
private:
    unsigned short vel;
};

#endif // ENEMIGO_H
