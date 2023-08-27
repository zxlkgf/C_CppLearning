/*
cout.setf(ios_base::showpoint);
*/
// showpt.cpp -- settting the precision, showing trailing point
#include <iostream>

int main()
{
    using namespace std;
    float price1 = 20.40;
    float price2 = 1.9 + 8.0 / 9.0;

    cout << "Basic : \n";
    cout << "\"Furry Friends\" is $" << price1 << "!\n";
    cout << "\"Fiery Fiends\" is $" << price2 << "!\n";

    cout.setf(ios_base::showpoint);
    cout << "use showpoint : \n";
    cout << "\"Furry Friends\" is $" << price1 << "!\n";
    cout << "\"Fiery Fiends\" is $" << price2 << "!\n";

    cout.precision(2);
    cout << "use showpoint && precision : \n";
    cout << "\"Furry Friends\" is $" << price1 << "!\n";
    cout << "\"Fiery Fiends\" is $" << price2 << "!\n";

    return 0;
}

