// instr1.cpp -- reading more than one string
#include <iostream>


int main(int argc,char * argv[])
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name :\n";
    cin.getline(name,ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert,ArSize);
    cout << "I have some deliciouts "<< dessert;
    cout << " for you, "<<name << ".\n";

    return 0;
}
