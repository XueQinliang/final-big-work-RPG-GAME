#ifndef WORLD_H
#define WORLD_H
#include "player.h"
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
    const int coverable=0;
    const int uncoverable=1;
    player p1;
    bool cover(int dx,int dy);
    int plx=160,ply=128;
    int pdire;
    object obj[40][40][3];
    object ground;
};

#endif // WORLD_H
