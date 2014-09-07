#include "wrect.h"

WRect::WRect(int m, int x, int y, int w, int h)
{
  this->mode = m;
  this->x = x;
  this->y = y;
  this->w = w;
  this->h = h;
}

void WRect::draw(QPainter* painter){
  painter->drawRect(this->x, this->y, this->w, this->h);
}
