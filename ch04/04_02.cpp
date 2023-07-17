#include <iostream>
#include <string>

int main(int argc,char * argv[])
{
    using namespace std;
    string name;
    string dessert;

    cout << "Enter your name :\n";
    getline(cin,name);
    cout << "Enter your favorite dessert:\n";
    getline(cin,dessert);
    cout << "I have some deliciouts "<< dessert;
    cout << " for you, "<<name << ".\n";

    return 0;
}
