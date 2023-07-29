// funtemp.cpp -- using a function template
#include <iostream>
//function template prototype
template <class T>
void Swap(T &a, T &b);

int main()
{
    using namespace std;
    int i = 10;
    int j = 20;
    cout << "i = " << i << ", j = " << j << endl;
    cout << "Using compiler generated int swapper : \n";
    Swap(i,j);
    cout << "Now i = " << i << ", j = " << j << endl;

    double x = 24.5;
    double y = 81.7;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "Using compiler generated double swapper : \n";
    Swap(x,y);
    cout << "Now x = " << x << ", y = " << y << endl;

    return 0;
}

template <class T>
void Swap(T &a, T &b)
{
    T temp = 0;
    temp  = a;
    a = b;
    b = temp;
}