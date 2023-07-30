#include <iostream>

extern int global;

using std::cout;
using std::endl;
void show(int x)
{
    cout << "show external value = " << x << endl;
}