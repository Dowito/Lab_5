#include "objeto.h"

Objeto::Objeto(QString name)
{
    setPixmap(QPixmap(name));
    state = true;
    width = 48;
    height = 48;
}

Objeto::Objeto(QString name, bool state)
{
    setPixmap(QPixmap(name));
    this->state = state;
    width = 48;
    height = 48;
}

Objeto::Objeto(QString name, QVector<unsigned short> pos)
{
    setPixmap(QPixmap(name));
    setPos(pos[0],pos[1]);
    state = true;
    width = 48;
    height = 48;
}

Objeto::Objeto(QString name, unsigned short width, unsigned short height)
{
    setPixmap(QPixmap(name).scaled(width,height));
    state = true;
    this->width = width;
    this->height = height;
}

Objeto::Objeto(QString name, QVector<unsigned short> pos, unsigned short width, unsigned short height)
{
    setPixmap(QPixmap(name).scaled(width,height));
    setPos(pos[0],pos[1]);
    state = true;
    this->width = width;
    this->height = height;
}

Objeto::Objeto(QString name, bool state, unsigned short width, unsigned short height)
{
    setPixmap(QPixmap(name).scaled(width,height));
    this->state = state;
    this->width = width;
    this->height = height;
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

bool Objeto::getState() const
{
    return state;
}

void Objeto::setState(bool newState)
{
    state = newState;
}
