#include "wapidraw.h"
#include "ui_wapidraw.h"

WapiDraw::WapiDraw(QWidget *parent) :
    QWidget(parent)
{
  clicked = false;
}


void WapiDraw::paintEvent(QPaintEvent* event)
{
  if(clicked){
    QPainter painter(this);
    painter.setPen(Qt::blue);
    //painter.drawText(rect(), Qt::AlignCenter, "Hello, world.");
    painter.drawText(clickedX, clickedY, "Hello, world.");
  }

}

void WapiDraw::mousePressEvent(QMouseEvent* event){
  clicked = true;
  clickedX = event->x();
  clickedY = event->y();
  repaint();
}
 
