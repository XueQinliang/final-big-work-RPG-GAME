#ifndef TASK_H
#define TASK_H
#include <qimage.h>
#include <qpainter.h>
#include <string.h>
#include "player.h"
#include"bagmange.h"
#include "simplebag.h"
#include <qfont.h>
class task{//任务的类
public:task(){
        for(int i=1;i<10;i++){//加载任务图片
            char route[20]="://task";
            route[7]=i+'0';
            strcat(route,".png");
            pic[i].load(route);
        }
    }
    void load(simplebag &bag){//传入背包的引用之后对背包内物品做修改
        this->bag=bag;
    }
    void load(player &p){//传入人物的引用对人物属性做修改
        this->p=p;
    }
    int getstate(int p){//得到当前任务完成状态
        return taskn[p];
    }
    void decide(int x,int y);//这个函数实现的功能为选择任务
    int get();//得到任务完成的奖励

    void complete(int n){//改变任务完成状态
        taskn[n]=2;//2代表以及完成
    }

    void showTask(QPainter &paint){
        paint.drawImage(300,50,pic[which]);
        if((which>1&&taskn[which-1]<=2)||(taskn[which]!=0)){
            paint.drawImage(853,468,QImage("://lingtask.png"));
        }
        if(taskn[which]!=2){
            paint.drawImage(850,520,QImage("://qutask.png"));
        }
    }
private:
    char* ctext[50];
    QImage pic[10];
    player p;
    simplebag bag;
    int which=1;
    int taskn[8]={0,0,0,0,0,0,0,0};
};
#endif // TASK_H
