#ifndef BAGMANGE_H
#define BAGMANGE_H
#include"imags.h"
#include<iostream>
#include <QPixmap>
#include <QPainter>
#include "player.h"
#include <QPaintEvent>
#include <string>
class bagMange//背包管理
{
public:
    bagMange();
    void pickUp(int id, player &p);
    void useOut(int i,QPainter &painter);
    void install(int x, int y);
    void uninstall(int x,int y);
    void open(QPainter &painter);
    void setout(int i,QPainter& paint);
protected:
    void paintEvent(QPaintEvent *);
private:
    static int count;
    player p;
    imags* Imags[40];
};

#endif // BAGMANGE_H
