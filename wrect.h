#ifndef WRECT_H
#define WRECT_H

#include <wdrawobject.h>
#include <QPainter>

class WRect : public WDrawObject
{
public:
  WRect(int,int,int,int,int);
  int x, y, w, h;

  virtual void draw(QPainter*);
};

#endif // WRECT_H
