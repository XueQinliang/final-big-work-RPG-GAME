#ifndef BAG_H
#define BAG_H
#include <qimage.h>
#include "abstract.h"
template<class T>//类模板
class bag:public abstract{
public:bag();
    void add(T& x);
    void sub(T& x);
    void show(QPainter &paint);
    void show(int x,int y,QPainter &paint);
    void showinfo(QPainter &paint);
protected:
    QImage info;
};

#endif // BAG_H
