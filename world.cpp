#include "world.h"
world::world(){
    for(int i=0;i<40;i++){
        for(int j=0+i%2;j<40;j+=2){
            for(int k=0;k<3;k++){
                if(k==0){
                    object o(i,j,k,0);
                    obj[i][j][k]=o;
                }
                else {
                    object o(i,j,k,1);
                    obj[i][j][k]=o;
                }
            }
        }
    }
    //放置各种物体
    obj[4][0][0].pic(0,0,uncoverable);
    obj[3][1][0].pic(0,0,uncoverable);
    obj[5][1][0].pic(0,0,uncoverable);
    obj[2][2][0].pic(0,0,uncoverable);
    obj[6][2][0].pic(0,0,uncoverable);
    obj[1][3][0].pic(0,0,uncoverable);
    obj[7][3][0].pic(0,0,uncoverable);
    obj[8][4][0].pic(0,0,uncoverable);
    obj[0][4][0].pic(0,0,uncoverable);
    obj[7][5][0].pic(0,0,uncoverable);
    obj[6][6][0].pic(0,0,uncoverable);
    obj[4][4][0].pic(0,0,uncoverable);
    obj[3][5][0].pic(0,0,uncoverable);
    obj[2][6][0].pic(0,0,uncoverable);
    obj[3][7][0].pic(0,0,uncoverable);
    obj[5][7][0].pic(0,0,uncoverable);
    obj[4][8][0].pic(0,0,uncoverable);
    obj[7][3][1].pic(0,0,uncoverable);
    obj[8][4][2].pic(0,0,uncoverable);
    obj[8][4][1].pic(0,0,uncoverable);
    obj[10][8][0].pic(0,0,uncoverable);
    obj[10][12][0].pic(0,0,uncoverable);
    obj[12][10][0].pic(0,0,uncoverable);
    obj[8][10][0].pic(0,0,uncoverable);
    obj[10][8][1].pic(0,0,uncoverable);
    obj[10][12][1].pic(0,0,uncoverable);
    obj[12][10][1].pic(0,0,uncoverable);
    obj[8][10][1].pic(0,0,uncoverable);
    obj[10][8][2].pic(0,3,uncoverable);
    obj[10][12][2].pic(0,3,uncoverable);
    obj[12][10][2].pic(0,3,uncoverable);
    obj[8][10][2].pic(0,3,uncoverable);
    obj[9][9][2].pic(0,3,uncoverable);
    obj[11][11][2].pic(0,3,uncoverable);
    obj[11][9][2].pic(0,3,uncoverable);
    obj[9][11][2].pic(0,3,uncoverable);
    ground.pic(0,5,coverable);//地板
}
void world::show(QPainter &paint){
    for(int j=0;j<40;j++){
        for(int i=0+j%2;i<40;i+=2){
            ground.show(i,j,0,paint);
        }
    }
    p1.setplayer(plx,ply,pdire);
    for(int j=0;j<40;j++){
        for(int k=0;k<3;k++){
            for(int i=0+j%2;i<40;i+=2){
                if(i==0+j%2&&k==0&&ply/y==j+2){
                     p1.show(paint);
                }
                obj[i][j][k].show(paint);
            }
        }
    }
}
void world::playermove(int tx,int ty){
    if(sqrt((tx-p1.getx())*(tx-p1.getx())+(ty-p1.gety())*(ty-p1.gety()))>10){
        if(abs(ty-ply)*1.0/(abs(tx-plx)+1)<=0.414){
             if(tx<=plx) pdire=0;
             else pdire=4;
        }else if(abs(ty-ply)*1.0/(abs(tx-plx)+1)>=2.414){
            if(ty<=ply) pdire=2;
            else pdire=6;
        }else{
            if(ty<=ply&&tx<=plx) pdire=1;
            else if(ty<=ply&&tx>plx) pdire=3;
            else if(ty>ply&&tx>plx) pdire=5;
            else pdire=7;
        }
        int dx=(tx-p1.getx())*x/sqrt((tx-p1.getx())*(tx-p1.getx())+(ty-p1.gety())*(ty-p1.gety()));
        int dy=(ty-p1.gety())*2*y/sqrt((tx-p1.getx())*(tx-p1.getx())+(ty-p1.gety())*(ty-p1.gety()));
        if(cover(dx,dy)){
            plx=p1.getx();
            ply=p1.gety();
            plx+=(tx-plx)*10/(sqrt((tx-plx)*(tx-plx)+(ty-ply)*(ty-ply)));
            ply+=(ty-ply)*10/(sqrt((tx-plx)*(tx-plx)+(ty-ply)*(ty-ply)));
        }
    }
}
bool world::cover(int dx,int dy){//障碍判断
    int ix=plx/x-1;
    int iy=ply/y-3;
    for(int i=ix-3;i<ix+3;i++){
        for(int j=iy-3;j<iy+3;j++){
            if(obj[i][j][0].getsort()==1&&(2*(ply+dy-(j+3)*y)-(plx+dx-i*x)<=0
            &&2*(ply+dy-(j+3)*y)+(plx+dx-i*x)>=0
            &&2*(ply+dy-(j+3)*y)-(plx+dx-(i+2)*x)>=0
            &&2*(ply+dy-(j+3)*y)+(plx+dx-(i+2)*x)<=0))
                return false;
        }
    }
    return true;
}
