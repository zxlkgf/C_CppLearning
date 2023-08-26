#include <iostream>
#include <algorithm>
#include <cctype>

bool check1(const std::string & str);
bool check2(const std::string & str);
void strToLower(std::string & str);

int main()
{
    using namespace std;
    cout << "请输入字符(quit to quit): ";
    string temp;
    while(cin >> temp && temp != "quit")
    {
        if(check1(temp))
        {
            cout << temp << "是回文串！";
        }
        else
        {
            cout << temp << "不是回文串！";
        }
        cout << "\n请输入字符(quit to quit): ";
    }
    return 0;
}

bool check1(const std::string & str)
{
    std::string temp(str);
    strToLower(temp);
    std::string rStr(temp.rbegin(),temp.rend());
    return rStr == temp;
}
bool check2(const std::string & str)
{
    std::string temp(str);
    strToLower(temp);
    std::string rStr(temp);
    int start = 0;
    int end = str.size() -1;

    while(start < end)
    {
        char temp = rStr[start];
        rStr[start++] = rStr[end];
        rStr[end--] = temp;
    }
    return rStr == temp;
}

void strToLower(std::string & str)
{
    for(int i = 0; i < str.size(); i++)
    {
        str[i] = char(tolower(str[i]));
    }
}
