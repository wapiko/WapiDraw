#include "wcircle.h"

WCircle::WCircle(int m, int x, int y, int w, int h)
{
  this->mode = m;
  this->x = x;
  this->y = y;
  this->w = w;
  this->h = h;
  
}

void WCircle::draw(QPainter* painter){
  painter->drawEllipse(this->x, this->y, this->w, this->h);
}
