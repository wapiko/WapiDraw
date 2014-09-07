#ifndef WDRAWOBJECT_H
#define WDRAWOBJECT_H

#include <QPainter>

class WDrawObject
{
public:
    WDrawObject();
    int mode;
    
    int getMode();
    virtual void draw(QPainter*);
};

#endif // WDRAWOBJECT_H
