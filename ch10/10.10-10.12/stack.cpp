// stack.cpp -- Stack member functions
#include "stack.h"

Stack::Stack()              // create an empty stack
{
    top = 0;
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
    return true;
}