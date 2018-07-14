#include "upload.h"


#include<string>
upload::upload(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::upload)
{
    ui->setupUi(this);
    //setWindowTitle("menu");
    //ui->passwardLine->setEchoMode(QLineEdit::Password);//当输入密码时，显示为******
    QImage bg;
    bg.load(("://loadpicture.jpg"));
    _bg = bg.copy(QRect(0*32, 0*32, 40*32, 24*32));
}

upload::~upload()
{
    delete ui;
}
void upload::paintEvent(QPaintEvent *e){
    QPainter *pa;
    pa = new QPainter();
    pa->begin(this);
    pa->drawImage(0,0,_bg);
    pa->end();
    delete pa;
}
void upload::on_pushButton_clicked()
{
    this->hide();//隐藏登录对话框
    emit showmainwindow();//显示主窗口
}

void upload::on_pushButton_2_clicked()
{
    emit quit();
}
