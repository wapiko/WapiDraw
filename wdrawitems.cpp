#include "wdrawitems.h"

WDrawItems::WDrawItems()
{
  this->size = 0;
}

WDrawItems::WDrawItems(WDrawItem* h){
  this->head = h;
  this->tail = h;
  this->size = 1;
}

int WDrawItems::getSize(){
  return this->size;
}

WDrawItem* WDrawItems::getHead(){
  return this->head;
}

WDrawItem* WDrawItems::getTail(){
  return this->tail;
}

bool WDrawItems::isEmpty(){
  if(this->size == 0) return true;
  else return false;
}

void WDrawItems::addItem(WDrawItem* item){
  if(this->isEmpty()){
    this->setTail(item);
  }
  else {
    this->head->setNext(item);
    item->setPrev(head);
  }
  this->addSize(1);
  this->setHead(item); 
}

void WDrawItems::deleteItem(){
  if(!(this->isEmpty())){
    WDrawItem* h = this->head;
    this->setHead(this->head->getPrev());
    this->head->setNext(0);
    this->addSize(-1);
    delete h;
  }
}

void WDrawItems::addSize(int i){
  int s = this->size;
  this->size = s + i;
}

void WDrawItems::setHead(WDrawItem* h){
  this->head = h;
}

void WDrawItems::setTail(WDrawItem* t){
  this->tail = t;
}
