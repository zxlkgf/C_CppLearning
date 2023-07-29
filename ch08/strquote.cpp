// strquote.cpp -- different designs
#include <iostream>
#include <string>
using namespace std;
string version1(const string & s1, const string & s2);
const string & version2(string & s1, const string & s2);
const string & version3(string & s1, const string & s2);

int main()
{
    string input;
    string copy;
    string result;

    cout << "Enter a string: ";
    getline(cin,input);
    copy = input;
    cout << "Your string as entered: " << input << endl;
    result = version1(input,"***");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your origin string: " << input << endl;

    result = version2(input,"###");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your origin string: " << input << endl;

    cout << "Resettig original string" << endl;
    input = copy;
    result = version3(input,"@@@");
    cout << "Your string enhanced: " << result << endl;
    cout << "Your origin string: " << input << endl;

    return 0;
}

string version1(const string & s1, const string & s2)
{
    string temp;

    temp = s2 + s1 + s2;
    return temp;
}
const string & version2(string & s1, const string & s2)
{
    s1 = s2 + s1 + s2;
    return s1;
}
const string & version3(string & s1, const string & s2)
{
    string temp;
    temp = s2 + s1 + s2;
    return temp;                                    //临时变量 函数消失就消失。
}