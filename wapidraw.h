#ifndef WAPIDRAW_H
#define WAPIDRAW_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QMouseEvent>
#include <QGridLayout>
#include <QPushButton>

#include <canvas.h>


class WapiDraw : public QWidget
{
    Q_OBJECT

public:
    explicit WapiDraw(QWidget *parent = 0);

public slots:
  void pushedCircleB();
  void pushedRectB();

protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent* event);
   
private:
    
    QPushButton *circleButton;
    QPushButton *rectButton;

    bool clicked;
    int clickedX;
    int clickedY;
};

#endif // WAPIDRAW_H
