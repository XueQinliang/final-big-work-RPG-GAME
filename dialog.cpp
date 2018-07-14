#include "dialog.h"
//#pragma execution_character_set("utf-8")
dialog::dialog(int p,int w){
    FILE* fp;
    if((fp=fopen("dialog.txt","r"))==NULL){
        std::cout<<"diabug";
    }
    while((!feof(fp))){
        fgets(ctext,50,fp);
        if(((count/5)*10+count%5)==-10*p+w){
            std::cout<<((count/5)*10+count%5)<<" "<<-10*p+w<<"\n";
            break;
        }
        count++;
    }
}
void dialog::show(QPainter &paint)const{
    paint.drawImage(0,400,QImage("://dialog.png"));
    QFont font;
    font.setPointSize(40);
    font.setFamily("华文隶书");
    font.setLetterSpacing(QFont::AbsoluteSpacing,0);
    paint.setFont(font);
    paint.drawText(QPoint(50,500),QString::fromLocal8Bit(ctext));//通过这种方式来加载出中文打印到屏幕上
}
