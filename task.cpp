#include "task.h"
void task::decide(int x,int y){
    if(x>370&&x<625&&y>130&&y<170){
        which=1;
    }else if(x>370&&x<625&&y>190&&y<230){
        which=2;
    }else if(x>370&&x<625&&y>250&&y<290){
        which=3;
    }else if(x>370&&x<625&&y>310&&y<350){
        which=4;
    }else if(x>370&&x<625&&y>380&&y<420){
        which=5;
    }else if(x>370&&x<625&&y>450&&y<490){
        which=6;
    }else if(x>370&&x<625&&y>510&&y<550){
        which=7;
    }
    if(taskn[which]==0&&x>=850&&x<=980&&y>=470&&y<=500){
        taskn[which]=1;
    }
    if(taskn[which]==2&&x>=850&&x<=980&&y>=520&&y<=550){
        get();
        if(which==4) p.addexp(1000);
        if(which==5) p.addexp(2000);
        if(which==7) p.addexp(20000);
        taskn[which]=3;
    }
}
int task::get(){
    if(which==1){
        bag_sth s;
        s.load("://5.png");
        s.set(20,20,10,10,true);
        bag.sth.push_back(s);
        bag_sth t;
        t.load("://8.png");
        t.set(0,0,30,0,true);
        bag.sth.push_back(t);//将东西压入背包的容器中
        return 58;
    }
    if(which==2){
        bag_sth s;
        s.load("://1.png");
        s.set(50,0,0,0,false);
        bag.sth.push_back(s);
        bag_sth t;
        t.load("://2png");
        t.set(0,50,0,0,false);
        bag.sth.push_back(t);
        return 12;}
    if(which==3){
       bag_sth s;
        s.load("://3.png");
        s.set(40,40,30,30,true);
        bag.sth.push_back(s);
        bag_sth t;
        t.load("://6.png");
        t.set(0,0,60,0,true);
        bag.sth.push_back(t);
        return 36;}
    if(which==5){
       bag_sth s;
        s.load("://1.png");
        s.set(50,0,0,0,false);
        bag.sth.push_back(s);
        bag_sth t;
        t.load("://2png");
        t.set(0,50,0,0,false);
        bag.sth.push_back(t);
        return 21;}
    if(which==6){
        bag_sth s;
        s.load("://4.png");
        s.set(60,60,50,50,true);
        bag.sth.push_back(s);
        bag_sth t;
        t.load("://7.png");
        t.set(0,0,80,0,true);
        bag.sth.push_back(t);
        return 47;}
    if(which==7){
        bag_sth s;
        s.load("://1.png");
        s.set(50,0,0,0,false);
        bag.sth.push_back(s);
        bag_sth t;
        t.load("://2png");
        t.set(0,50,0,0,false);
        bag.sth.push_back(t);
        bag_sth S;
        S.load("://1.png");
        S.set(50,0,0,0,false);
        bag.sth.push_back(S);
        bag_sth T;
        T.load("://2png");
        T.set(0,50,0,0,false);
        bag.sth.push_back(T);
        return 1122;}
}
