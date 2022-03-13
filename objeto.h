#ifndef OBJETO_H
#define OBJETO_H

#include <QObject>
#include <QString>
#include <QGraphicsPixmapItem>

class Objeto : public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Objeto() { };
    /*!
     * \brief Objeto inicia un objeto con su respectivo sprite
     * Como los sprites son de 48x48 pixeles, de se definen el ancho y la altura por defecto en 48
     * \param name nombre del sprite del objeto
     */
    Objeto(QString name); //Inicializar cuqluier objeto con su respectivo sprite inicial.

    unsigned int getWidth() const;
    void setWidth(unsigned int newWidth);

    unsigned int getHeight() const;
    void setHeight(unsigned int newHeight);

protected:
    unsigned short width;
    unsigned short height;
};

#endif // OBJETO_H
