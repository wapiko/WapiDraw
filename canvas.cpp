#include "canvas.h"

Canvas::Canvas(QWidget *parent) :
    QWidget(parent)
{
  clicked = false;

}

void Canvas::paintEvent(QPaintEvent* event)
{
  if(clicked){
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.drawText(clickedX, clickedY, "Hello, world.");
    if(mode==CIRCLEMODE){
      painter.drawEllipse(clickedX, clickedY, 400, 240);
    }
    else if(mode==RECTMODE){
      painter.drawRect(clickedX, clickedY, 400, 240);
    }
  }
}

void Canvas::mousePressEvent(QMouseEvent* event){
  clicked = true;
  clickedX = event->x();
  clickedY = event->y();
  repaint();
}


void Canvas::setMode(int setmode){
  this->mode = setmode;
}
