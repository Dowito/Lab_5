#ifndef BOMBA_H
#define BOMBA_H
#include <objeto.h>
#include <explotion.h>

class Bomba : public Objeto
{
public:
    Bomba() {};
    Bomba(QString name);

    unsigned short getRadio() const;
    void setRadio(unsigned short newRadio);

    unsigned short getDelay() const;
    void setDelay(unsigned short newDelay);

private:
    unsigned short radio;
    unsigned short delay; //ms que demora en estallar no tiene sentido que demore mas de 1min por defecto 5000
};

#endif // BOMBA_H
