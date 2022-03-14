#include "aumento.h"

Aumento::Aumento(QString name,
                 QVector<unsigned short> pos,
                 char label):Objeto(name, pos)
{
    state = false;
    this->label = label;
}

char Aumento::getLabel() const
{
    return label;
}

void Aumento::setLabel(char newLabel)
{
    label = newLabel;
}
