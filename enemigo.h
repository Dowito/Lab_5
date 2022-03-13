#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <objeto.h>

class Enemigo : public Objeto
{
public:
    Enemigo() {};
    Enemigo(QString name, unsigned short vel);

    bool getState() const;
    void setState(bool newEstado);

    unsigned short getVel() const;
    void setVel(unsigned short newVel);

private:
    /*!
     * \brief estado si esta vivo o muerto, morira si es tocado por la explosion de una bomba.
     * al morir, se reproduce la animacion de muerte. y mientras este en false, no aparecera en pantalla
     */
    bool state; //por defecto true

    unsigned short vel; //la velocidad sera un parametro del constructor, asi se crearan diferentes enemigos
};

#endif // ENEMIGO_H
