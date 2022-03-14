#include "destruible.h"


Destruible::Destruible(QString name,
                       unsigned short width,
                       unsigned short height,
                       QVector<unsigned short> pos,
                       bool state,
                       bool drop,
                       QString content):Bloque(name, width, height, pos)
{
    this->state = state;
    if (state) { //Quisas haga las exepciones por fuera, con una funcion especifica para generar los bloques y su contenido
        this->drop = drop;
        this->content = content; //probablemente no se asigne.
    }
    else {
        this->drop = false;
        this->content = "";
    }
}
