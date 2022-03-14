#ifndef BLOQUE_H
#define BLOQUE_H

#include <objeto.h>

class Bloque : public Objeto
{
public:
    Bloque() {};
    Bloque(QString name,
           bool state,
           unsigned short width,
           unsigned short height,
           QVector<unsigned short> pos,
           bool destructible);

    bool getDestructible() const;
    void setDestructible(bool newDestructible);

private:
    bool destructible; //es un bloque destructible o no
};

#endif // BLOQUE_H
