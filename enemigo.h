#ifndef ENEMIGO_H
#define ENEMIGO_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QString>
#include <QVector>
struct VectorEnemigo{
    QString imagen;
    QVector<int> pos; //(0,0,x,y)
};

class Enemigo : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemigo(QString name);
};

#endif // ENEMIGO_H
