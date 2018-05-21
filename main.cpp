#include "mainwindow.h"
#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QGridLayout>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
