// 08_05.cpp
#include <iostream>
using namespace std;

template <typename T>
const T & max5(T a[])
{
    unsigned index = 0;
    for(int i = 0; i < 5; i++)
    {
        if(a[index] <= a[i])
        {
            index = i;
        }
    }
    return a[index];
}

int main()
{
    int arr1[] = {2, -1, 99, 256, 9};
    double arr2[] = {-3.2, 221.22, 9.9, 0, 1};
    cout << max5(arr1) << endl;
    cout << max5(arr2) << endl;
    return 0;
}