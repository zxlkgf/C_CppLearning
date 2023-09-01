#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const unsigned int m_size = 64;
    const char ch = '$';
    char tempstr[m_size];
    unsigned int cnt = 0;
    
    while(cin.get(tempstr,m_size,ch))
    {
        cnt += strlen(tempstr);
    }

    cout << "在第一个$之前共有:" << cnt << "个字符。" << endl;

    cin.clear();
    char next;
    cin.get(next);
    cout <<"下一个字符是: " << next << endl;

    // if(cin.get()!='\n')
    // {
    //     cin.ignore(255,'\n');
    // }

    // cin.getline(tempstr,m_size,ch);
    // cout << "在第一个$之前共有:" << cnt << "个字符。" << endl;

    // cin.clear();
    // cin.get(next);
    // cout <<"下一个字符是: " << next << endl;
    return 0;
}


/*
 * cin.get(buffer,长度,终止符)会模拟到文件尾，从而返回false，需要使用cin.getline()清除掉异常。并且其在读到末尾时不会将最后的字符丢去
 * cin.getline(buffer,长度,终止符)会返回读取到的数字，而且会丢弃读取到的文件尾。
 * 
*/