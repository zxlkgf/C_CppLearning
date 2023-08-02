#ifndef LIST_H_
#define LIST_H_

template <typename T>
class List
{
private:
    T *head_;
    unsigned size_;
    T *pre_;
    T *tail_;
public:
    List();
    List(const T array[],int len);
    ~List();
    bool add(T item);
    bool remove(int index);
    bool isEmpty();
    bool isFull();
    void showAll() const;
};


#endif