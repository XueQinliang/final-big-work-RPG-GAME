#ifndef ENEMY_H
#define ENEMY_H
#include "player.h"
#include "object.h"
#include <QObject>
#include <QtMultimedia/QMediaPlayer>
class enemy:public player{//敌人的类
public:
    friend class fightplayer;
    enemy(){}
    void load(int num);
    void locate(char *route,int ox,int oy,int oz,int num){
        p.set(ox,oy,oz);
        p.pic(route,1,-num);
    }
    void show(QPainter &paint){
        p.show(paint);
    }
    object getobj()const{
        return p;
    }
    int getblood()const{
        return blood;
    }
    void fightshow(QPainter &paint,player* p){
        paint.drawRect(900,50,300,20);
        paint.setBrush(Qt::red);
        paint.drawRect(900,50,300*blood/fullblood,20);
        paint.setBrush(Qt::NoBrush);
        if(iswound==false&&attacking==false)
        paint.drawImage(1000,200,action[0]);
        else if(iswound==true&&attacking==false)paint.drawImage(1000,200,wound);
        else{
            num++;
            if(num==12)
            p->iswound=true;
            paint.drawImage(1000-num*60,200,action[num/2]);
            if(num==17) {
                attacking=false;
                num=0;
                p->iswound=false;
                p->wound((5*attack/p->getdefense())*fullblood/blood+20,10,10);
            }
        }
    }
    void set(int fullblood,int attack,int defense){
        this->fullblood=fullblood;
        this->blood=this->fullblood;
        this->attack=attack;
        this->defense=defense;
    }
    void setdianum(int n){
        dianum=n;
    }

    int getdianum()const{
        return dianum;
    }

private:object p;
    QImage action[9];
    QImage wound;
    int num=0;
    int dianum;
};

#endif // ENEMY_H
