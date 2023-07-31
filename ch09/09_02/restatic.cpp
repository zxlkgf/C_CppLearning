// static.cpp -- using a static local variable
#include <iostream>
#include <string>
using std::string;

// funciton prototypes
void strucount(const string & str);

int main()
{
    using namespace std;
    string input;
    cout << "Enter a line:\n";
    getline(cin,input);
    while(cin && "" != input)
    {
        strucount(input);
        cout << "Enter next line (empty line to quit) :\n";
        getline(cin,input);
    }
    return 0;
}

void strucount(const string & str)
{
    using namespace std;
    static size_t total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    total += str.size();
    cout << str.size() << " characters\n" << total << " characters total\n";
}