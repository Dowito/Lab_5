#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QKeyEvent>

class Personaje : public QObject, public QGraphicsPixmapItem //herencia para obtener las propiedades para ser representado en ui y tener compatibilidad
{
    Q_OBJECT
public:
    explicit Personaje(QObject *parent = nullptr);

    Personaje(QString name);


signals:

};

#endif // PERSONAJE_H
