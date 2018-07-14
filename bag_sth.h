#ifndef BAG_STH_H
#define BAG_STH_H
#include <qimage.h>
#include "abstract.h"
class bag_sth:abstract{//背包中要装的东西
public:bag_sth(){}
    void load(char *route){
        pic.load(route);
    }
    void set(int blood,int magic,int attack,int defense,bool reuse){
        quality[0]=blood;
        quality[1]=magic;
        quality[2]=attack;
        quality[3]=defense;
        this->reuse=reuse;
    }
    void set(int x,int y){
        this->px=x;
        this->py=y;
    }

    int* getquality(){
        return quality;
    }

    void show(QPainter &paint);
    virtual ~bag_sth(){}
protected:
    QImage pic;
    bool reuse;
    int quality[4];
};
#endif // BAG_STH_H
