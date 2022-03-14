#include "destruible.h"


Destruible::Destruible(QString name,
                       QVector<unsigned short> pos,
                       bool state,
                       unsigned short width,
                       unsigned short height,
                       bool drop,
                       QString content):Bloque(name, pos, width, height)
{
    this->state = state;
    if (state) { //Quisas haga las exepciones por fuera, con una funcion especifica para generar los bloques y su contenido
        this->drop = drop;
        this->content = content; //probablemente no se asigne por dentor del constructor.
    }
    else {
        this->drop = false;
        this->content = "";
    }
}

bool Destruible::getDrop() const
{
    return drop;
}

void Destruible::setDrop(bool newDrop)
{
    drop = newDrop;
}

const QString &Destruible::getContent() const
{
    return content;
}

void Destruible::setContent(const QString &newContent)
{
    content = newContent;
}
