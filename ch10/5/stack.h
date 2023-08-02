// stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_

struct customer
{
    char fullname[32];
    double payment;
};

typedef customer Item;

class Stack
{
private:
    enum{MAX = 10};                     // constant specific to class
    Item items[MAX];                    // holds stack items
    int top;                            // index for top stack item
    double total;
public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    // push() return false if stack already is full, true otherwise
    bool push(const Item & item);       // add item to stack
    // pop() return false if stack already is empty, true otherwise
    bool pop(Item & item);       // pop top into item
    void addPayment(const Item & item);
    void showTotalPayment();
    void showItem(const Item & item);
};

#endif