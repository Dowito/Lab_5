#ifndef DESTRUIBLE_H
#define DESTRUIBLE_H
#include <bloque.h>

class Destruible : public Bloque
{
public:
    Destruible() {};
    Destruible(QString name,
               unsigned short width,
               unsigned short height,
               QVector<unsigned short> pos,
               bool state,
               bool drop,
               QString content);

    bool getDrop() const;
    void setDrop(bool newDrop);

    const QString &getContent() const;
    void setContent(const QString &newContent);

private:
    bool drop;
    QString content;
};

#endif // DESTRUIBLE_H
