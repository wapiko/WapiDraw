#ifndef WDRAWITEMS_H
#define WDRAWITEMS_H

#include <wdrawitem.h>

class WDrawItems
{
public:
    WDrawItems();
    WDrawItems(WDrawItem*);

    int getSize();
    WDrawItem* getHead();
    WDrawItem* getTail();

    bool isEmpty();

    void addItem(WDrawItem*);
    void deleteItem();
    

 private:
    int size;
    WDrawItem* head;
    WDrawItem* tail;

    void addSize(int);
    void setHead(WDrawItem*);
    void setTail(WDrawItem*);
};

#endif // WDRAWITEMS_H
