#include "bomba.h"

Bomba::Bomba(QString name, unsigned short delay):Objeto(name)
{
    this->radio = 1;
    this->delay = delay;
}

unsigned short Bomba::getRadio() const
{
    return radio;
}

void Bomba::setRadio(unsigned short newRadio)
{
    radio = newRadio;
}

unsigned short Bomba::getDelay() const
{
    return delay;
}

void Bomba::setDelay(unsigned short newDelay)
{
    delay = newDelay;
}
