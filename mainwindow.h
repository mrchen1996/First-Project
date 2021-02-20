#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPainter>
#include<QWheelEvent>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
//声明绘图事件
    void paintEvent(QPaintEvent *event);
    QString src="";
    //声明鼠标滚轮事件
    void wheelEvent(QWheelEvent*ev);
 //缩放图片
    void  zoomPixmap(float zoom);
    //声明鼠标按压事件
    void mousePressEvent(QMouseEvent*ev);
    //声明鼠标移动事件
   void mouseMoveEvent(QMouseEvent*ev);


   int x=0;
   int y=0;

   int lastX;
   int lastY;

   int currentX;
   int currentY;

    int width=100;
    int height=100;

    QPoint current,last;
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
