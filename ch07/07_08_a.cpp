// arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
//constant data
const int Seasons = 4;
const char * Sname[] = {"Spring","Summer","Fall","Winter"};

// function to modify array object
void fill(double []);
// function that uses array object without modifying it
void show(const double *);

int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

// function to modify array object
void fill(double d[])
{
    using namespace std;
    for(int i = 0; i <Seasons; i++){
        cout << "Enter " << Sname[i] << " expenses: ";
        cin >> d[i]; 
    }
}
// function that uses array object without modifying it
void show(const double * d)
{
    using namespace std;
    double total = 0.0;
    for(int i = 0;i < Seasons; i++)
    {
        cout << Sname[i] << ": $ " <<d[i] << endl;
        total += d[i];
    }
    cout << "Total Expenses: $ " << total << endl;
}
