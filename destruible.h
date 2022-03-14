#ifndef DESTRUIBLE_H
#define DESTRUIBLE_H
#include <bloque.h>

class Destruible : public Bloque
{
public:
    Destruible() {};
    Destruible(QString name,
               QVector<unsigned short> pos,
               bool state,
               unsigned short width,
               unsigned short height,
               bool drop,
               char content);

    bool getDrop() const;
    void setDrop(bool newDrop);



    char getContent() const;
    void setContent(char newContent);

private:
    bool drop;
    char content; //provisional
};

#endif // DESTRUIBLE_H
