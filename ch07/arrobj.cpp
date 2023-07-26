// arrobj.cpp -- functions with array objects
#include <iostream>
#include <array>
#include <string>
//constant data
const int Seasons = 4;
const std::array<std::string,Seasons> Sname = {"Spring","Summer","Fall","Winter"};

// function to modify array object
void fill(std::array<double,Seasons> * pa);
// function that uses array object without modifying it
void show(std::array<double,Seasons> da);

int main()
{
    std::array<double,Seasons> expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

// function to modify array object
void fill(std::array<double,Seasons> * pa)
{
    using namespace std;
    for(int i = 0; i <Seasons; i++){
        cout << "Enter " << Sname[i] << " expenses: ";
        cin >> (*pa)[i]; 
    }
}
// function that uses array object without modifying it
void show(std::array<double,Seasons> da)
{
    using namespace std;
    double total = 0.0;
    for(int i = 0;i < Seasons; i++)
    {
        cout << Sname[i] << ": $ " <<da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $ " << total << endl;
}
