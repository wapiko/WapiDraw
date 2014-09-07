#include "wcanvas.h"

WCanvas::WCanvas(QWidget *parent) :
    QWidget(parent)
{
  startPoint = new QPoint();
  endPoint = new QPoint();
}

void WCanvas::mousePressEvent(QMouseEvent* event){
  startPoint->setX(event->x());
  startPoint->setY(event->y());
}

void WCanvas::mouseReleaseEvent(QMouseEvent* event){
  endPoint->setX(event->x());
  endPoint->setY(event->y());
  repaint();
}


void WCanvas::setMode(int setmode){
  this->mode = setmode;
}


void WCanvas::paintEvent(QPaintEvent* event)
{
    QPainter *painter = new QPainter(this);
    painter->setPen(Qt::blue);
    if(mode==NORMALMODE){
      this->drawText(painter);
    }
    else if(mode==CIRCLEMODE){
      this->drawCircle(painter);
    }
    else if(mode==RECTMODE){
      this->drawRect(painter);
    }
}


void WCanvas::drawCircle(QPainter *painter){
  int x, y, w, h;
  this->getPoints(&x, &y, &w, &h);
  painter->drawEllipse(x, y, w, h);
}

void WCanvas::drawRect(QPainter *painter){
  int x, y, w, h;
  this->getPoints(&x, &y, &w, &h);
  painter->drawRect(x, y, w, h);
}

void WCanvas::drawText(QPainter *painter){
  painter->drawText(clickedX, clickedY, "Hello, world.");
}


void WCanvas::getPoints(int* x, int * y, int * w, int* h){
    *x = endPoint->x();
    *w = startPoint->x() - endPoint->x();
    *y = endPoint->y();
    *h = startPoint->y() - endPoint->y();
}
