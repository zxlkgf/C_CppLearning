// numstr.cpp -- following number input with line input
#include <iostream>


int main(int argc,char * argv[])
{
    using namespace std;
    cout << "What year was your house build?\n";
    int year;
    cin >> year;
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address,80);
    cout << "Year build: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!" << endl;

    return 0;
}
