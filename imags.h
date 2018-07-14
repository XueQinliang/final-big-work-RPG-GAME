#ifndef IMAGS_H
#define IMAGS_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <iostream>
#include"player.h"

class imags//背包中物品图像和属性
{
public:
    imags(){}
    imags(int x1,int y1,int x2,int y2,int id);
    friend class bagMange;
    void AttributeSetting(int id, int sign, player &p1);
    void setBlood(int n);
    void setMagic(int n);
    void setAttack(int n);
    void setDefense(int n);
private:
    int x1,x2,y1,y2;
    int id;
    int attack,defense,blood,magic;
};

#endif // IMAGS_H
