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
    painter.drawEllipse(clickedX, clickedY, 400, 240);
  }
}

void Canvas::mousePressEvent(QMouseEvent* event){
  clicked = true;
  clickedX = event->x();
  clickedY = event->y();
  repaint();
}
