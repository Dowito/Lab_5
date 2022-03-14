#ifndef OBJETO_H
#define OBJETO_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QString>
#include <QVector>

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
    Objeto(QString name);

    Objeto(QString name,
           bool state);

    Objeto(QString name,
           QVector<unsigned short> pos);

    Objeto(QString name,
           unsigned short width,
           unsigned short height);

    Objeto(QString name,
           QVector<unsigned short> pos,
           unsigned short width,
           unsigned short height);

    Objeto(QString name,
           bool state,
           unsigned short width,
           unsigned short height);

    Objeto(QString name,
           QVector<unsigned short> pos,
           bool state,
           unsigned short width,
           unsigned short height);

    unsigned int getWidth() const;
    void setWidth(unsigned int newWidth);

    unsigned int getHeight() const;
    void setHeight(unsigned int newHeight);

    bool getState() const;
    void setState(bool newState);

protected:
    bool state;
    unsigned short width;
    unsigned short height;
};

#endif // OBJETO_H
