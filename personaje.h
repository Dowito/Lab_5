#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <objeto.h>

class Personaje : public Objeto //herencia para obtener las propiedades para ser representado en ui y tener compatibilidad
{
public:
    Personaje() {};
    Personaje(QString name);

    bool getEstado() const;
    void setEstado(bool newEstado);

    unsigned char getLifes() const;
    void setLifes(unsigned char newLifes);

    unsigned char getBombs() const;
    void setBombs(unsigned char newBombs);

    unsigned char getVel() const;
    void setVel(unsigned char newVel);

private:
    bool estado; //por defecto true
    unsigned char lifes; //vidas faltantes antes de terminar el juego
    unsigned char bombs; //defecto 1
    unsigned char vel; //por defecto 2

};

#endif // PERSONAJE_H
