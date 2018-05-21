#ifndef OBJECT_H
#define OBJECT_H
#include <QPainter>
#include <QImage>
#include "abstract.h"
#include "constnumber.h"
class object:public abstract{
public:
    object(){
        sort=0;
    }
    object(int ox,int oy,int oz,int sort):sort(sort){
        this->px=x*ox;
        this->py=y*oy;
        this->pz=z*oz;
    }
    void pic(int picx,int picy,int sort,int sizex=2*x,int sizey=4*y){//从素材图片上的位置截取相应的东西
        picture=all.copy(picx*2*x,picy*4*y,sizex,sizey);
        this->sort=sort;
    }
    void show(QPainter &paint){//如果物体有z坐标，则用y减两个单位长度来在二维平面表现立体效果
        paint.drawImage(px,py-pz,picture);
    }
    void show(int ox,int oy,int oz,QPainter &paint){//把东西放置在具体的某位置
        paint.drawImage(ox*x,oy*y-oz*z,picture);
    }

    int getsort(){
        return sort;
    }
protected:
    int pz,sort=0;
    QImage picture;
    static QImage all;
};
#endif // OBJECT_H
