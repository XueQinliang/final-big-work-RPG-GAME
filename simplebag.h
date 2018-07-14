#ifndef SIMPLEBAG_H
#define SIMPLEBAG_H
#include <qimage.h>
#include <qpainter.h>
#include <utility>
#include <vector>
#include "bag_sth.h"
#include <iostream>
using namespace std;
class simplebag{//一个简易的背包
public:simplebag(){
        ico.load("://bag.png");
    }
    friend class task;
    void showicon(QPainter& paint)const{
        paint.drawImage(1150,600,ico);
    }
    void show(QPainter& paint){
        paint.drawImage(400,200,QImage("://table.png"));
        vector<bag_sth>::iterator it;
        for(it=this->sth.begin();it!=this->sth.end();it++){
            (*it).show(paint);

        }
    }

protected:
    QImage ico;
    vector<bag_sth>sth;
};

#endif // SIMPLEBAG_H
