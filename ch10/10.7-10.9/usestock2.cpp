// usestock2.cpp -- using the stock class
// compile with stock20.cpp
#include <iostream>
#include "stock20.h"

const int STKS = 4;
int main()
{
    using std::cout;
    using std::endl;
    // create an array of initialized objects
    Stock stocks[STKS] = {
        Stock{"NanoSmart", 12, 20.0},
        Stock{"Boffo Objects", 200, 2.0},
        Stock{"Monolithic Obelisks", 130, 3.25},
        Stock{"Fleep Enterprises", 60, 6.5}
    };
    cout << "Stock holding: " << endl;
    int st;
    for (st = 0; st < STKS; st++)
    {
        stocks[st].show();
    }
    // set pointer to first element
    const Stock * top = & stocks[0];
    for (st = 1; st < STKS; st++)
    {
        top = &(top->topval(stocks[st]));
    }
    //now top points to the most valuable holding
    cout << "\nMost valuable holding:\n";
    top->show();
    return 0;
}