#ifndef PUERTA_H
#define PUERTA_H
#include <objeto.h>

class Puerta : public Objeto
{
public:
    Puerta() {};
    Puerta(QString name,
           QVector<unsigned short> pos);
};

#endif // PUERTA_H
