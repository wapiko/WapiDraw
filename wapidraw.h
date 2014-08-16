#ifndef WAPIDRAW_H
#define WAPIDRAW_H

#include <QWidget>
#include <QPaintEvent>
#include <QPainter>
#include <QMouseEvent>


class WapiDraw : public QWidget
{
    Q_OBJECT

public:
    explicit WapiDraw(QWidget *parent = 0);

 protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent* event);
   
private:
    bool clicked;
    int clickedX;
    int clickedY;
};

#endif // WAPIDRAW_H
