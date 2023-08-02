// stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
    enum{MAX = 4};                     // constant specific to class
    Item items[MAX];                    // holds stack items
    int top;                            // index for top stack item
public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    // push() return false if stack already is full, true otherwise
    bool push(const Item & item);       // add item to stack
    // pop() return false if stack already is empty, true otherwise
    bool pop(Item & item);       // pop top into item
};

#endif