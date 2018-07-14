#ifndef UPLOAD_H
#define UPLOAD_H


#include <QMainWindow>
#include <QObject>

#include <QSharedDataPointer>
#include <QWidget>
#include <QDialog>
#include <QImage>
#include <QPainter>
namespace Ui {
class upload;
}

class upload : public QDialog
{
    Q_OBJECT

public:
    explicit upload(QWidget *parent = 0);
    ~upload();
    void paintEvent(QPaintEvent *e);
private slots:
    void on_pushButton_clicked();//与login关联的槽函数
    void on_pushButton_2_clicked();//与exit关联的槽函数
signals:
    void showmainwindow();//显示主窗口信号
    void quit();//退出信号
private:
    Ui::upload *ui;
    QDialog *dialog;

};

#endif // UPLOAD_H
