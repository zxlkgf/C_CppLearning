// nested.cpp -- nested loops and 2D array
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define CITIES 5
#define YEARS 4

int main()
{
    const char * cities[CITIES] =               //array of pointers
    {                                           // to 5 strings
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };

    int maxtemps[YEARS][CITIES] =               //2D array
    {                                           
        {96, 100, 87, 101, 105},                // values for maxtemps[0]
        {96, 98, 91, 107, 104},
        {97, 101, 03, 108, 107},
        {98, 103, 95, 109, 108}
    };

    cout << " Maxinum temperatures for 2008 - 2011" << endl;
    for (int city = 0; city < CITIES; ++city){
        cout << cities[city] <<": \t";
        for(int year = 0; year < YEARS; ++year){
            cout << maxtemps[year][city] << " \t";
        }
        cout << endl;
    }

    return 0;
}
