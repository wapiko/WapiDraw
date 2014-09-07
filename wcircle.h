#ifndef WCIRCLE_H
#define WCIRCLE_H

#include <QPainter>

#include <wdrawobject.h>

class WCircle : public WDrawObject
{
public:
  WCircle(int,int,int,int,int);
  int x,y,w,h;
  virtual void draw(QPainter*);
};

#endif // WCIRCLE_H
