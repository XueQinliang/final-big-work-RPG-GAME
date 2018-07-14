#include "bagmange.h"
int bagMange::count=0;
bagMange::bagMange()
{

}
/*void bagMange::openFile(Ui::MainWindow ui){}
void bagMange::paintEvent(QPaintEvent *)
{

    mainWindow* obj = new mainWindow;
    QPainter painter(obj);
    int x1 = ui->view1Frame->pos().x();
    int y1 = ui->view1Frame->pos().y();
    painter.drawPixmap(x1,y1,ui->view1Frame->width(),ui->view1Frame->height(),image1);

    int x2 = obj->ui->view2Frame->pos().x();
    int y2 = ui->view2Frame->pos().y();
    painter.drawPixmap(x2,y2,ui->view2Frame->width(),ui->view2Frame->height(),image2);

    int x3 = ui->view3Frame->pos().x();
    int y3 = ui->view3Frame->pos().y();
    painter.drawPixmap(x3,y3,ui->view3Frame->width(),ui->view3Frame->height(),image3);

    int x4 = ui->view4Frame->pos().x();
    int y4 = ui->view4Frame->pos().y();
    painter.drawPixmap(x4,y4,ui->view4Frame->width(),ui->view4Frame->height(),image4);
}*/

/*void bagMange::paintEvent(QPaintEvent *)
{
    QPainter paint(MainWindow*);
    QPixmap pix;
    pix.load("1.png");
    paint.drawPixmap(0,0,100,100,pix);

    paint.translate(100,100); //将（100，100）设为坐标原点
    paint.drawPixmap(0,0,100,100,pix);
}*/

/*void bagMange::pickUp(int id,player &p)
{
    this->p=p;
    switch(id)
    {
    case 58:
        Imags[count++] = new imags(200,200,800,800,5);
        Imags[count++] = new imags(200,200,800,800,8);
        break;
     case 12:
        Imags[count++] = new imags(200,200,800,800,1);
        Imags[count++] = new imags(200,200,800,800,2);
        break;
    case 36:
        Imags[count++] = new imags(200,200,800,800,3);
        Imags[count++] = new imags(200,200,800,800,6);
        break;
    case 21:
        Imags[count++] = new imags(200,200,800,800,1);
        Imags[count++] = new imags(200,200,800,800,2);
        break;
    case 47:
        Imags[count++] = new imags(200,200,800,800,4);
        Imags[count++] = new imags(200,200,800,800,7);
        break;
    case 1122:
        Imags[count++] = new imags(200,200,800,800,1);
        Imags[count++] = new imags(200,200,800,800,1);
        Imags[count++] = new imags(200,200,800,800,2);
        Imags[count++] = new imags(200,200,800,800,2);
        break;
    default:break;
    }

    Imags[count++] = new imags(200,200,800,800,id);
}
void bagMange::open(QPainter &painter)
{
    for(int i = 0;i < count;i++)
    {
        std::string filename = ".png";
        std::string buf;
        char b[5];
        itoa(Imags[i]->id,b,10);
        buf = b;
        buf = buf + filename;
        painter.drawPixmap(Imags[i]->x1,Imags[i]->y1,Imags[i]->x2,Imags[i]->y2,QPixmap(buf.data()));
    }
}
void bagMange::install(int x,int y)
{
    int i = 0;
    while((x < Imags[i]->x1)||(y < Imags[i]->y1)||(x > Imags[i]->x2)||(y > Imags[i]->y2))
    {
        i++;
    }
    Imags[i]->AttributeSetting(Imags[i]->id,1,p);
    if((Imags[i]->id == 1)||(Imags[i]->id == 2))
    {
        //setout(i);//painter?
    }
}

void bagMange::uninstall(int x,int y)
{
    int i = 0;
    while((x < Imags[i]->x1)||(y < Imags[i]->y1)||(x > Imags[i]->x2)||(y > Imags[i]->y2))
    {
        i++;
    }
    Imags[i]->AttributeSetting(Imags[i]->id,-1,p);

}
void bagMange::useOut(int i,QPainter &painter)
{
    Imags[i]->id = 0;
    std::string filename = ".png";
    std::string buf;
    char b[5];
    itoa(Imags[i]->id,b,10);
    buf=b;
    buf = buf + filename;
    painter.drawPixmap(Imags[i]->x1,Imags[i]->y1,Imags[i]->x2,Imags[i]->y2,QPixmap(buf.data()));
}
void bagMange::setout(int i,QPainter &paint)
{

}
*/
