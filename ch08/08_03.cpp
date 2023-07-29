// 08_03.cpp
#include <iostream>
#include <string>
#include <cctype>
using namespace std;


void strToUpper(string & src)
{
    for(auto &e:src)
    {
        e = (char)toupper(e);
    }
    
}

int main()
{
    string str;
    while(1)
    {
        cout << "Enter a string (q to quit) : ";
        cin >> str;
        if(str == "q"||str == "Q")break;
        strToUpper(str);
        cout << str << endl;
    }
}