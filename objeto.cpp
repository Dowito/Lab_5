#include "objeto.h"

Objeto::Objeto(QString name)
{
    setPixmap(QPixmap(name));
    width = 48;
    height = 48;
}

unsigned int Objeto::getWidth() const
{
    return width;
}

void Objeto::setWidth(unsigned int newWidth)
{
    width = newWidth;
}

unsigned int Objeto::getHeight() const
{
    return height;
}

void Objeto::setHeight(unsigned int newHeight)
{
    height = newHeight;
}
