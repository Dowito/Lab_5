#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <objeto.h>

class Enemigo : public Objeto
{
public:
    Enemigo() {};
    Enemigo(QString name,
            unsigned short vel);

    unsigned short getVel() const;
    void setVel(unsigned short newVel);

private:
    unsigned short vel; //la velocidad sera un parametro del constructor, asi se crearan diferentes enemigos
};

#endif // ENEMIGO_H
