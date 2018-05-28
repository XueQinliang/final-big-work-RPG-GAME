#include "player.h"
#include <qfont.h>
player::player(){
    dire=0;
    action=0;
    level=0;
    QImage all;
    all.load("://《空中轨迹FC》人物怪物8方向行走素材-人物00001(CH_爱给网_aigei_com.png");
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            pic[j][i]=all.copy(4*x*j,8*y*i,4*x,8*y);
      }
void player::show(QPainter &paint){
    fullblood=100+level*20;
    fullmagic=100+level*20;
    fullexp=100+level*level*20;
    blood=fullblood;
    magic=fullmagic;
    exp=200;
    action++;//来表现人物跑步的动作
    if(action==8){
        action=0;
    }
    if(exp>=fullexp){
        exp-=fullexp;
        level++;
    }
    QImage info;
    info.load("://juanzhouy.png");
    paint.drawImage(1150,0,info);
    paint.setPen(QPen(Qt::black,1));//画人物上面的经验条、血条、蓝条
    paint.drawRect(1170,12,100,10);
    paint.drawRect(1170,27,100,10);
    paint.drawRect(1170,42,100,10);
    paint.setBrush(Qt::red);
    paint.drawRect(1170,12,(blood/fullblood)*100,10);
    paint.setBrush(Qt::blue);
    paint.drawRect(1170,27,(magic/fullmagic)*100,10);
    paint.setBrush(Qt::green);
    paint.drawRect(1170,42,(exp/fullexp)*100,10);
    paint.setBrush(Qt::yellow);
    paint.drawEllipse(1310,5,16,16);
    paint.setBrush(Qt::NoBrush);
    QFont font;
    font.setPointSize(10);
    font.setFamily("Bernard MT Condensed");
    font.setLetterSpacing(QFont::AbsoluteSpacing,0);
    font.setPointSize(8);
    paint.setFont(font);
    char str[10],m[5];
    itoa(blood,str,10);
    itoa(fullblood,m,10);
    strcat(str,"/");
    strcat(str,m);
    paint.drawText(QPoint(1220-strlen(str)*2,22),str);
    itoa(magic,str,10);
    itoa(fullmagic,m,10);
    strcat(str,"/");
    strcat(str,m);
    paint.drawText(QPoint(1220-strlen(str)*2,37),str);
    itoa(exp,str,10);
    itoa(fullexp,m,10);
    strcat(str,"/");
    strcat(str,m);
    paint.drawText(QPoint(1220-strlen(str)*2,52),str);
    itoa(level,str,10);
    font.setPointSize(12);
    paint.setFont(font);
    paint.drawText(QPoint(1310+8-strlen(str)*4,20),str);
    paint.drawImage(px-2*x,py-6*y,pic[action][dire]);
}
