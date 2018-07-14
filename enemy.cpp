#include "enemy.h"
void enemy::load(int num){
    char route[20]="://";
    route[3]=num+'0';
    route[4]='w';
    strcat(route,".png");
    wound.load(route);
    route[4]='z';
    action[0].load(route);
    for(int i=1;i<=8;i++){
        char act[20]="://action";
        act[9]=num+'0';
        act[10]=i+'0';
        strcat(act,".png");
        action[i].load(act);
    }

}
