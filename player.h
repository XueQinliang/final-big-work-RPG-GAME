#ifndef PLAYER_H
#define PLAYER_H
#include <qimage.h>
#include <qpainter.h>
#include <abstract.h>
#include "constnumber.h"
class player:public abstract{
public:
    player();
    int getdire(){
        return dire;
    }
    void setplayer(int px,int py,int dire){
        this->px=px;
        this->py=py;
        this->dire=dire;
    }
    void show(QPainter &paint);
    ~player(){}
protected:
    int fullblood,fullmagic,fullexp,blood,magic,exp,level;
    int dire,action;
private:
    QImage pic[8][8];
};
#endif // PLAYER_H
