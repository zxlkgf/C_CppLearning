#include <iostream>
#include <algorithm>

bool check1(const std::string & str);
bool check2(const std::string & str);

int main()
{
    using namespace std;
    cout << "请输入字符(quit to quit): ";
    string temp;
    while(cin >> temp && temp != "quit")
    {
        if(check2(temp))
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
    std::string rStr(str.rbegin(),str.rend());
    return rStr == str;
}
bool check2(const std::string & str)
{
    std::string rStr(str);
    int start = 0;
    int end = str.size() -1;

    while(start < end)
    {
        char temp = rStr[start];
        rStr[start++] = rStr[end];
        rStr[end--] = temp;
    }
    return rStr == str;
}

