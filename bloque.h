#ifndef BLOQUE_H
#define BLOQUE_H

#include <objeto.h>
#include <QVector>
class Bloque : public Objeto
{
public:
    Bloque() {};
    Bloque(QString name, QVector<unsigned short> pos); //se inicializan con la pos, ya que sus ubicaciones son exactas

private:
    //La unica propiedad que tienes es que no es atravesable.
};

#endif // BLOQUE_H
