// get_gun.cpp -- using get() and getline()
#include <iostream>
const unsigned int LIM = 255;

int main()
{
    using namespace std;
    char input[LIM];

    cout << "Enter a string for getline() processing:\n";
    cin.getline(input, LIM, '#');
    cout << "Here is your input : " << input << endl;

    char ch;
    cin.get(ch);
    cout << "The next input character is " << ch << endl;
    if(ch != '\n')cin.ignore(LIM,'\n');

    cout << "Enter a string for get() processing:\n";
    cin.get(input,LIM, '#');
    cout << "Here is your input : " << input << endl;

    cin.get(ch);
    cout << "The next input character is " << ch << endl;
    return 0;
}