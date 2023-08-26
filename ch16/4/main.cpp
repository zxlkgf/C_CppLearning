#include <iostream>
#include <set>
#include <algorithm>

template<class T>
int reduce1(T a[],int n);

template<class T>
int reduce2(T a[],int n);

int main()
{
    using namespace std;
    int arr[]{1,2,3,4,5,6,7,8,9,9,9};
    double drr[]{1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,9.0};
    int asize = sizeof(arr) / sizeof(int);
    int dsize = sizeof(drr) / sizeof(double);
    cout << "arr size :" << reduce2(arr,asize) << endl;;
    cout << "drr size :" << reduce1(drr,dsize) << endl;;
    return 0;
}

template<class T>
int reduce1(T a[],int n)
{
    std::set<T> as(a, a+n);
    return as.size();
}

template<class T>
int reduce2(T a[],int n)
{
    std::sort(a,a + n);
    auto ptr = std::unique(a, a + n);
    return std::distance(a, ptr);
}