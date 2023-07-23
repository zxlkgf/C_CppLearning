/**
 * 编写一个程序，读写键盘输入，直到遇到@符号为止,并回显输入(数字除外)
 * 同时将大写字母转成小写字母，将小写字母转换为大写字母
*/
#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    char ch;
    while((ch = cin.get())!='@')
    {
        if(isdigit(ch))return 0;
        if(islower(ch)){
            ch = char(toupper(ch));
        }else if(isupper(ch)){
            ch = char(tolower(ch));
        }
        cout << ch;
    }
    cout << endl;

    return 0;
}