#include "aumento.h"

Aumento::Aumento(QString name,
                 unsigned short label):Objeto(name)
{
    state = 0;
    this->label = label;
}
