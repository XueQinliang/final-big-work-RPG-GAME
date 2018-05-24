#ifndef WORLD_H
#define WORLD_H
#include "player.h"
#include <qpixmap.h>
#include "object.h"
#include "constnumber.h"
#include <QPainter>
#include <qimage.h>
#include <cmath>
#include <iostream>
class world{
public:
    world();
    void show(QPainter &paint);
    void playermove(int tx,int ty);
    int getpx(){return p1.getx();}
    int getpy(){return p1.gety();}
protected:
    const int box=-1;
    const int coverable=0;
    const int uncoverable=1;
    const int tomap1=1;
    const int tomap2=2;
    const int tomap3=3;
    player p1;
    bool cover(int dx,int dy);
    int plx=160,ply=128;
    int pdire;
    object obj[40][40][4];
    QPixmap pix;
    void gomap(int num);
    void map1();
    void map2();
    void map3();
    int map;//通过改变这个值来改变加载的地图及反映现在所加载的地图
    //object ground;
};

#endif // WORLD_H
