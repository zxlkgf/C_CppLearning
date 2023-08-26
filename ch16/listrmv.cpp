// listrmv.cpp -- applying the STL to a string
#include <iostream>
#include <list>
#include <algorithm>

void show(int a){std::cout << a << ' ';}
const int LIM = 10;

int main()
{
    using namespace std;
    int ar[LIM] = {4, 5, 4, 2, 2, 3, 4, 8, 1, 4};
    list<int> la(ar, ar + LIM);
    list<int> lb(la);

    cout << "Original List contest:\n";
    cout << "la:\t";
    for_each(la.begin(), la.end(), show);
    cout << endl;
    cout << "Original List Size: " << la.size() << endl;
    la.remove(4);
    cout << "After using the remove() method:\n";
    cout << "la:\t";
    for_each(la.begin(), la.end(), show);
    cout << endl;
    cout << "la Size: " << la.size() << endl;

    list<int>::iterator last;
    last = remove(lb.begin(), lb.end(), 4);
    cout << "After using the remove() method:\n";
    cout << "lb\t";
    for_each(lb.begin(), lb.end(), show);
    cout << endl;
    cout << "lb.size: " << lb.size() << endl;
    lb.erase(last,lb.end());
    cout << "After using the earse() method:\n";
    cout <<"lb:\t";
    for_each(lb.begin(), lb.end(), show);
    cout << endl;
    cout << "lb.size: " << lb.size() << endl;

    return 0;
}