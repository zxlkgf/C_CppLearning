// queuetp.h -- queue template with a nested class 
#ifndef QUEUETP_H_
#define QUEUETP_H_

template <class T>
class QueueTP
{
private:
    enum {Q_SIZE = 10};
    // Node class
    class Node
    {
    public:
        T item;
        Node * next;
        Node(const T & i):item(i),next(nullptr){}
    };
    Node * front;
    Node * rear;
    unsigned int items;
    const int qsize;
    QueueTP(const QueueTP & q):qsize(0){}
    QueueTP & operator== (const QueueTP & q){return * this;}
public:
    QueueTP(int qs = Q_SIZE);
    ~QueueTP();
    bool isEmpty(){return items == 0;}
    bool isFully(){return items == Q_SIZE;}
    int queueCount(){return items;}
    bool enqueue(const T & item);
    bool dequeue(T & item);
};

template <class T>
QueueTP<T>::QueueTP(int qs):qsize(qs)
{
    front = rear = nullptr;
    items = 0;
}

template <class T>
QueueTP<T>::~QueueTP()
{
    Node * temp;
    while(front != nullptr)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <class T>
bool
QueueTP<T>::enqueue(const T & item)
{
    if(isFully())return false;
    Node * add = new Node(item);
    items++;
    if(front == nullptr)
    {
        front = add;
    }else
    {
        rear->next = add;
    }
    rear = add;
    return true;
}

template <class T>
bool
QueueTP<T>::dequeue(T & item)
{
    if(isEmpty())return false;
    item = front->item;
    items -- ;
    Node * temp = front;
    front = front->next;
    delete temp;
    if(items == 0)rear = nullptr;
    return true; 
}

#endif