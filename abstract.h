#ifndef ABSTRACT_H
#define ABSTRACT_H
#include <QPainter>
class abstract{//抽象类，人和物体的基类
public:
    int getx();
    int gety();
    virtual void show(QPainter &paint)=0;
protected:
    int px,py;
};

#endif // ABSTRACT_H
