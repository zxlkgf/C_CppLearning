// stack.cpp -- Stack member functions
#include <iostream>
#include "stack.h"

Stack::Stack()              // create an empty stack
{
    top = 0;
    total = 0.0;
}

bool 
Stack::isEmpty() const
{
    return top <= 0;
}

bool 
Stack::isFull() const
{
    return top >= MAX;
}

bool 
Stack::push(const Item & item)
{
    if(this->isFull())return false;
    this->items[top++] = item;
    return true;
}

bool
Stack::pop(Item & item)
{
    if(this->isEmpty())return false;
    item = this->items[--top];
    addPayment(item);
    showTotalPayment();
    return true;
}


void 
Stack::addPayment(const Item & item)
{
    this->total += item.payment;
}

void 
Stack::showTotalPayment()
{
    std::cout << "current total payment = " << this->total << std::endl;
}

void 
Stack::showItem(const Item & item)
{
    std::cout << item.fullname << ", " << item.payment << std::endl;
}