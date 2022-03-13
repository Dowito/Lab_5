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
    /*!
     * \brief estado si esta vivo o muerto, cambiara el estado si es tocado por la explosion de una bomba, si se acaba el
     * tiempo o si es tocado por un enemigo.
     */
    bool estado; //por defecto true

    unsigned char lifes; //vidas faltantes antes de terminar el juego
    /*!
     * \brief bombs cantidad de bombas que puede poner simultaneamente.
     * aumentara la cantidad a medida que vaya recolectando aumentos.
     */
    unsigned char bombs; //defecto 1
    /*!
     * \brief vel velocidad con la que se mueve el personaje.
     * aumentara a medida que vaya recolectando aumentos.
     */
    unsigned char vel; //por defecto 2

};

#endif // PERSONAJE_H
