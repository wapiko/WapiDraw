#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>

#include <WDrawMode.h>


class WCanvas : public QWidget
{
    Q_OBJECT
public:
    explicit WCanvas(QWidget *parent = 0);

    void setMode(int);

signals:

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);

private:
    int clickedX;
    int clickedY;
    int mode;
    
    QPoint *startPoint;
    QPoint *endPoint;
 
    void drawCircle(QPainter *painter);
    void drawRect(QPainter *painter);
    void drawText(QPainter *painter);

    void getPoints(int* x, int* y, int * w, int* h);
};

#endif // MAINWINDOW_H
