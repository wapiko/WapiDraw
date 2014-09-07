#include "wcanvas.h"

WCanvas::WCanvas(QWidget *parent) :
    QWidget(parent)
{
  startPoint = new QPoint();
  endPoint = new QPoint();

  wdrawlist = new WDrawItems();
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

    int i = 0;
    WDrawItem* nowitem = this->wdrawlist->getTail();
    for(i = 0; i < this->wdrawlist->getSize(); i++){
      WDrawObject* obj = nowitem->getObject();
      obj->draw(painter);
      nowitem = nowitem->getNext();
    }
}


void WCanvas::drawCircle(QPainter *painter){
  int x, y, w, h;
  this->getPoints(&x, &y, &w, &h);

  WCircle* r = new WCircle(CIRCLEMODE, x, y, w, h);
  WDrawItem* item = new WDrawItem(r); 
  this->wdrawlist->addItem(item);

}

void WCanvas::drawRect(QPainter *painter){
  int x, y, w, h;
  this->getPoints(&x, &y, &w, &h);

  WRect* r = new WRect(RECTMODE, x, y, w, h);
  WDrawItem* item = new WDrawItem(r); 
  this->wdrawlist->addItem(item);
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
