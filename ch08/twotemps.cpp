// twotemps.cpp -- using overload template functions
#include <iostream>
template <class T>
void swap1(T &a,T &b);

template <class T>
void swap(T *a,T *b,int n);

void show(int a[]);
const int LIMIT = 8;

int main()
{
    using namespace std;
    int i = 10, j = 20;
    cout << "i = " << i << ", j = " << j << endl;
    cout << "Using compiler generated int swapper : \n";
    swap1(i,j);
    cout << "Now i = " << i << ", j = " << j << endl;

    int d1[LIMIT] = {0,7,0,4,1,7,7,6};
    int d2[LIMIT] = {0,7,2,0,1,9,6,9};
    cout << "Original arrays:\n";
    show(d1);
    show(d2);
    swap(d1,d2,LIMIT);
    cout << "Swapped array\n";
    show(d1);
    show(d2);

    return 0;
}

template <class T>
void swap1(T &a,T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <class T>
void swap(T *a,T *b,int n)
{
    T temp;
    for(int i = 0; i < n; i ++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

void show(int a[])
{
    using namespace std;
    cout << a[0] << a[1] << "/" << a[2] << a[3] << "/";
    for(int i = 4; i < LIMIT; i++)
    {
        cout << a[i];
    }
    cout << endl;
}