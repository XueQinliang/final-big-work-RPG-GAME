#include "player.h"
player::player(){
    dire=0;
    action=0;
    QImage all;
    all.load("://《空中轨迹FC》人物怪物8方向行走素材-人物00001(CH_爱给网_aigei_com.png");
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            pic[j][i]=all.copy(4*x*j,8*y*i,4*x,8*y);
      }
void player::show(QPainter &paint){
    action++;//来表现人物跑步的动作
    if(action==8){
        action=0;
    }
    paint.drawImage(px-2*x,py-6*y,pic[action][dire]);
}
