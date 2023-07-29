// 08_02.cpp
#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calories;
};

void input(CandyBar& cb,const char * brand = "Millennuum",double weight = 2.85,int calories = 350)
{
    cb.brand = brand;
    cb.weight = weight;
    cb.calories = calories;

}
void show(const CandyBar &cb)
{
    cout << " Brand : \t" << cb.brand
    << "\t, weight : \t" << cb.weight
    << "\t, calories : \t" << cb.calories << endl;
}

int main()
{
    CandyBar cb1,cb2;
    input(cb1);
    show(cb1);
    input(cb2,"zxl",3.9,200);
    show(cb2);
    return 0;
}