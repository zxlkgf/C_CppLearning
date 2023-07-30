// static.cpp -- using a static local variable
#include <iostream>
// constants
const int ArSize = 10;

// funciton prototypes
void strucount(const char * str);

int main()
{
    using namespace std;
    char input[ArSize];
    char next;
    cout << "Enter a line:\n";
    cin.get(input,ArSize);
    while(cin)
    {
        cin.get(next);
        while(next != '\n')
        {
            cin.get(next);
        }
        strucount(input);
        cout << "Enter next line (empty line to quit) :\n";
        cin.get(input,ArSize);
    }
    return 0;
}

void strucount(const char * str)
{
    using namespace std;
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    while(*str++)
    {
        count ++;
    }
    total += count;
    cout << count << " characters\n" << total << " characters total\n";
}