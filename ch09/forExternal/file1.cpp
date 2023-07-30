#include <iostream>
using namespace std;
int global = 1000;

void show(int x);

int main()
{
    cout << "global value is = " << global << endl;
    show(global);
    return 0;
}