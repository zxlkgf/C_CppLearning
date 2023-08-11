// stacktp.h -- a stack template
#ifndef STACKTP_H_
#define STACKTP_H_
template <class T>
class Stack
{
private:
    enum{MAX = 10};
    T items[MAX];
    int top;
public:
    Stack();
    bool isEmpty();
    bool isFull();
    bool push(const T & item);
    bool pop(T & item);
};

template<class T>
Stack<T>::Stack()
{
    top = -1;
}

template<class T>
bool
Stack<T>::isEmpty()
{
    return top == -1;
}

template<class T>
bool
Stack<T>::isFull()
{
    return top == MAX;
}

template<class T>
bool
Stack<T>::push(const T & item)
{
    if(top > MAX) return false;
    items[++top] = item;
    return true;
}

template<class T>
bool
Stack<T>::pop(T & item)
{
    if(top <=-1)return false;
    item = items[top--];
    return true;
}

#endif