// arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
//constant data
const int Seasons = 4;
const char * Sname[] = {"Spring","Summer","Fall","Winter"};

struct cost
{
    double expenses[Seasons];
};

// function to modify array object
void fill(cost* c);
// function that uses array object without modifying it
void show(const cost* c);

int main()
{
    cost c ;
    fill(&c);
    show(&c);
    return 0;
}

// function to modify array object
void fill(cost *c)
{
    using namespace std;
    for(int i = 0; i <Seasons; i++){
        cout << "Enter " << Sname[i] << " expenses: ";
        cin >>c->expenses[i]; 
    }
}
// function that uses array object without modifying it
void show(const cost *c)
{
    using namespace std;
    double total = 0.0;
    for(int i = 0;i < Seasons; i++)
    {
        cout << Sname[i] << ": $ " <<c->expenses[i] << endl;
        total += c->expenses[i];
    }
    cout << "Total Expenses: $ " << total << endl;
}
