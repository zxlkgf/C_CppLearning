#include <iostream>
#include "mytime2.h"


int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    Time weeding(4, 35);
    Time waxing(2, 47);
    Time total;
    Time diff;
    Time adjusted;

    cout << "weeding time = ";
    weeding.Show();

    cout << "waxing time = ";
    waxing.Show();

    cout << "total work time = ";
    total = weeding + waxing;   // use operator+();
    total.Show();

    diff = weeding - waxing;    // use operator-();
    cout << " weeding itme - waxing time = ";
    diff.Show();

    adjusted = total * 1.5;     // use operator*();
    cout << "adjusted work time = ";
    adjusted.Show();

    return 0;
}