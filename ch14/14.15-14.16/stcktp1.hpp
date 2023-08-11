#ifndef STCKTP1_H_
#define STCKTP1_H_

template<class T>
class Stack
{
private:
    enum {SIZE = 10};
    int stacksize;
    T * items;
    int top;
public:
    explicit Stack(int ss = SIZE);
    Stack(const Stack & st);
    ~Stack();
    bool isEmpty(){return top == 0;}
    bool isFull(){return top == stacksize;}
    bool push(const T & item);
    bool pop(T & item);
    Stack & operator=(const Stack & st);
};

template<class T>
Stack<T>::Stack(int ss):stacksize(ss),top(0)
{
    items = new T [stacksize];
}

template<class T>
Stack<T>::Stack(const Stack & st)
{
    stacksize = st.stacksize;
    top = st.top;
    items = new T[stacksize];
    for (int i = 0; i < stacksize; i++)
    {
        items[i] = st.items[i];
    }
}

template<class T>
Stack<T>::~Stack()
{
    delete[] items;
}
template <class Type>
bool Stack<Type>::push(const Type & item)
{
    if (top < stacksize)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

template <class Type>
bool Stack<Type>::pop(Type & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}

template<class T>
Stack<T> & 
Stack<T>::operator=(const Stack<T> & st)
{
    if(this == &st) return *this;
    delete[] items;
    stacksize = st.stacksize;
    top = st.top;
    for (int i = 0; i < top; i++)
    {
        items[i] = st.items[i];
    }
    return *this;
}


#endif