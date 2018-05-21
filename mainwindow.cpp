#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPainter"
#include "QImage"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <QMouseEvent>
#include <QTimer>
#include <math.h>
#include "player.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(2000,1000);
    time=new QTimer(this);
    connect(time,SIGNAL(timeout()),this,SLOT(autop()));
    time->start(20);
}
void MainWindow::mousePressEvent(QMouseEvent *e){
    mouse_x = e->pos().x();//获取鼠标点击的相对坐标
    mouse_y = e->pos().y();
    repaint();
}
void MainWindow::autop(){
    map.playermove(mouse_x,mouse_y);
    repaint();
}

void MainWindow::paintEvent(QPaintEvent *){
    QPainter paint(this);
    map.show(paint);
}
MainWindow::~MainWindow()
{
    delete ui;
}
