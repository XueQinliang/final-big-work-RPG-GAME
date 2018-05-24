#include "world.h"
world::world(){
    //放置各种物体
    map=3;
    gomap(map);
}
void world::gomap(int num){
    if(num==1)map1();
    if(num==2)map2();
    if(num==3)map3();
}
void world::map1(){//地图1
    for(int i=0;i<40;i++){
        for(int j=0+i%2;j<40;j+=2){
            for(int k=0;k<4;k++){
                object o(i,j,k,0);
                obj[i][j][k]=o;
            }
        }
    }
    obj[2][10][0].pic("://chest01.png",uncoverable,box);
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
    obj[10][10][0].pic(0,0,uncoverable);
    obj[10][16][0].pic(0,0,uncoverable);
    obj[13][13][0].pic(0,0,uncoverable);
    obj[7][13][0].pic(0,0,uncoverable);
    obj[10][10][1].pic(0,0,uncoverable);
    obj[10][16][1].pic(0,0,uncoverable);
    obj[13][13][1].pic(0,0,uncoverable);
    obj[7][13][1].pic(0,0,uncoverable);
    obj[11][11][2].pic(0,3,uncoverable);
    obj[12][12][2].pic(0,3,uncoverable);
    obj[9][11][2].pic(0,3,uncoverable);
    obj[8][12][2].pic(0,3,uncoverable);
    obj[12][14][2].pic(0,3,uncoverable);
    obj[11][15][2].pic(0,3,uncoverable);
    obj[8][14][2].pic(0,3,uncoverable);
    obj[9][15][2].pic(0,3,uncoverable);
    obj[10][10][2].pic(0,3,uncoverable);
    obj[10][16][2].pic(0,3,uncoverable);
    obj[13][13][2].pic(0,3,uncoverable);
    obj[7][13][2].pic(0,3,uncoverable);

    obj[30][36][0].pic(9,3,uncoverable,tomap2);
    obj[30][36][2].pic(0,0,uncoverable);
    obj[31][37][0].pic(0,0,uncoverable);
    obj[31][37][2].pic(0,0,uncoverable);
    obj[32][36][0].pic(0,0,uncoverable);
    obj[32][36][2].pic(0,0,uncoverable);
    obj[31][35][0].pic(0,0,uncoverable);
    obj[31][35][2].pic(0,0,uncoverable);

    obj[30][36][1].pic(9,6,uncoverable);
    obj[30][36][3].pic(9,2,uncoverable);
    obj[31][37][1].pic(9,6,uncoverable);
    obj[31][37][3].pic(9,2,uncoverable);
    obj[32][36][1].pic(9,6,uncoverable);
    obj[32][36][3].pic(9,2,uncoverable);
    obj[31][35][1].pic(9,6,uncoverable);
    obj[31][35][3].pic(9,2,uncoverable);

    obj[33][37][0].pic(0,0,uncoverable);
    obj[33][37][2].pic(0,0,uncoverable);
    obj[34][36][0].pic(0,0,uncoverable);
    obj[34][36][2].pic(0,0,uncoverable);
    obj[33][35][0].pic(0,0,uncoverable);
    obj[33][35][2].pic(0,0,uncoverable);

    obj[33][37][1].pic(9,6,uncoverable);
    obj[33][37][3].pic(9,2,uncoverable);
    obj[34][36][1].pic(9,6,uncoverable);
    obj[34][36][3].pic(9,2,uncoverable);
    obj[33][35][1].pic(9,6,uncoverable);
    obj[33][35][3].pic(9,2,uncoverable);

    obj[35][37][0].pic(0,0,uncoverable);
    obj[35][37][2].pic(0,0,uncoverable);
    obj[36][36][0].pic(0,0,uncoverable);
    obj[36][36][2].pic(0,0,uncoverable);
    obj[35][35][0].pic(0,0,uncoverable);
    obj[35][35][2].pic(0,0,uncoverable);

    obj[35][37][1].pic(9,6,uncoverable);
    obj[35][37][3].pic(9,2,uncoverable);
    obj[36][36][1].pic(9,6,uncoverable);
    obj[36][36][3].pic(9,2,uncoverable);
    obj[35][35][1].pic(9,6,uncoverable);
    obj[35][35][3].pic(9,2,uncoverable);
    //ground.pic(0,5,coverable);//地板
    pix.load("://火影忍者-工程地图-草地_爱给网_aigei_com.jpg");
    plx=160;
    ply=128;
}
void world::map2(){//地图2
    for(int i=0;i<40;i++){
        for(int j=0+i%2;j<40;j+=2){
            for(int k=0;k<4;k++){
                object o(i,j,k,1);
                obj[i][j][k]=o;
            }
        }
    }
    for(int j=14;j<40;j++){
        for(int i=0+j%2;i<40;i+=2){
            for(int k=0;k<4;k++){
                object o(i,j,k,0);
                obj[i][j][k]=o;
            }
        }
    }
    obj[35][15][0].pic(9,3,uncoverable,tomap3);
    pix.load("://t01349d5b16a4d95539_副本.png");
    plx=64;
    ply=400;
}
void world::map3(){//地图3
    for(int i=0;i<40;i++){
        for(int j=0+i%2;j<40;j+=2){
            for(int k=0;k<4;k++){
                object o(i,j,k,1);
                obj[i][j][k]=o;
            }
        }
    }
    for(int j=16;j<36;j++){
        for(int i=6+j%2;i<35;i+=2){
            for(int k=0;k<4;k++){
                object o(i,j,k,0);
                obj[i][j][k]=o;
            }
        }
    }
    obj[17][15][0].pic(9,3,uncoverable,tomap1);
    pix.load("://T1cESnFlFaXXXXXXXX_!!0-item_pic_副本.png");
    plx=800;
    ply=400;
}
void world::show(QPainter &paint){
    /*for(int j=0;j<40;j++){
        for(int i=0+j%2;i<40;i+=2){
            ground.show(i,j,0,paint);
        }
    }*/
    paint.drawPixmap(0,0,1500,800,pix);
    p1.setplayer(plx,ply,pdire);
    for(int j=0;j<40;j++){
        for(int k=0;k<4;k++){
            for(int i=0+j%2;i<40;i+=2){
                if(i==0+j%2&&k==0&&ply/y==j+2){
                     p1.show(paint);
                }
                obj[i][j][k].show(paint);
            }
        }
    }
    if(map==3){//地图三比较特殊，需要将人物夹在中间，上下各画一层
        QImage top;
        top.load("://Twang_副本.png");
        paint.drawImage(530,450,top);
    }
}
void world::playermove(int tx,int ty){//人物移动
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
bool world::cover(int dx,int dy){//判断所遇到的物体的性质
    int ix=plx/x-1;
    int iy=ply/y-3;
    for(int i=ix-3;i<ix+3;i++){
        for(int j=iy-3;j<iy+3;j++){
            if(obj[i][j][0].getsort()==1&&(2*(ply+dy-(j+3)*y)-(plx+dx-i*x)<=0
            &&2*(ply+dy-(j+3)*y)+(plx+dx-i*x)>=0
            &&2*(ply+dy-(j+3)*y)-(plx+dx-(i+2)*x)>=0
            &&2*(ply+dy-(j+3)*y)+(plx+dx-(i+2)*x)<=0)){
                if(obj[i][j][0].isbox()==true){
                    obj[i][j][0].pic("://chest05.png",uncoverable,0);
                }
                if(obj[i][j][0].tran()==true){
                    map=obj[i][j][0].getspecial();
                    gomap(map);
                }
                return false;
            }
        }
    }
    return true;
}
