#include <iostream>
#include <typeinfo>

long indeed(int a)
{
    return long(a);
}

int main()
{
    using namespace std;
    double a = 9.9;
    decltype (indeed(3)) m;
    cout << typeid(a).name() << endl;
    cout << typeid(m).name() << endl;

    return 0;
}