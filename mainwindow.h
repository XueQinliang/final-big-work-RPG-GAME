#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <QTime>
#include "world.h"
#include "player.h"
#include "constnumber.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *e);
    ~MainWindow();
protected slots:
    void autop();
private:
    Ui::MainWindow *ui;
    QPoint pt;
    QTimer *time;
    world map;
    int mouse_x,mouse_y;
};

#endif // MAINWINDOW_H
