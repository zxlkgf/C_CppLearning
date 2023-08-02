#include <iostream>
#include "List.h"

using std::cout;
using std::endl;
using std::cin;

template <typename T>
List<T>::List()
{
    this->size_ = 20;
    this->head_ = this->pre_ = this->tail_ = new T[this->size_];
}

template <typename T>
List<T>::List(const T array[],int len)
{
    this->size_ = len;
    this->head_ = new T[this->size_];
    for(int i = 0;i < this->size_; i++)
    {
        head_[i] = array[i];
    }
    pre_ = head_;
    tail_ = head_[len-1];
}

template <class T>
bool 
List<T>::isEmpty()
{
    return head_ == tail_;
}

template <class T>
bool 
List<T>::isFull()
{
    return tail_ == (head_ + size_);
}


template <class T>
bool 
List<T>::add(T item)
{
    if(isFull())return 0;
    head_[size_++] = item;
    tail_ = head_[size_];
}

template <class T>
bool 
List<T>::remove(int index)
{
    if(index >= size_) return 0;
    for(int i = index + 1; i < size_; index++)
    {
        head_[i - 1] = head_[i];
    }
}

template <class T>
void
List<T>::showAll() const
{
    for(int i = 0; i < size_; i++)
    {
        std::cout << *(T *)head_[i] << " ";
    }
    std::cout <<std::endl;
}

template <class T>
List<T>::~List()
{
    delete[] this->head_;
    this->head_ = this->pre_ = this->tail_ = NULL;
}