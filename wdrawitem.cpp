#include "wdrawitem.h"

WDrawItem::WDrawItem(WDrawObject* o)
{
  this->obj = o;
  this->prev = 0;
  this->next = 0;
}

WDrawItem::WDrawItem(WDrawObject* o, WDrawItem* p, WDrawItem* n){
  this->obj = o;
  this->prev = p;
  this->next = n;
}

void WDrawItem::setObject(WDrawObject* o){
  this->obj = o;
}

void WDrawItem::setPrev(WDrawItem* p){
  this->prev = p;
}

void WDrawItem::setNext(WDrawItem* n){
  this->next = n;
}

WDrawObject* WDrawItem::getObject(){
  return this->obj;
}

WDrawItem* WDrawItem::getPrev(){
  return this->prev;
}

WDrawItem* WDrawItem::getNext(){
  return this->next;
}
