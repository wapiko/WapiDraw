#ifndef WDRAWITEM_H
#define WDRAWITEM_H

#include <wdrawobject.h>

class WDrawItem
{
public:
  WDrawItem(WDrawObject*);
  WDrawItem(WDrawObject*, WDrawItem*, WDrawItem*);
  void setObject(WDrawObject*);
  void setPrev(WDrawItem*);
  void setNext(WDrawItem*);
  
  WDrawObject* getObject();
  WDrawItem* getPrev();
  WDrawItem* getNext();



 private:
    WDrawObject* obj;
    WDrawItem* prev;
    WDrawItem* next;

};

#endif // WDRAWITEM_H
