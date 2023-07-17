/**
 * 编写一个程序，它要求用户首先输入其名，然后输入其姓;然后程序使用一个逗号和空格将姓名组合起来，并存储和显示组合结果
 * 请使用char数组和头文件cstirng中的函数。
*/
#include <iostream>
#include <cstring>
#define MaxStr 64

int main(int argc,char * argv[])
{
    using namespace std;
    cout << "Enter your first name :" <<endl;
    char first_name[MaxStr];
    cin.get(first_name,MaxStr).get();
    cout << "Enter your last name :" <<endl;
    char last_name[MaxStr];
    cin.get(last_name,MaxStr);

    char * str = new char[strlen(first_name)+strlen(last_name)+3];
    memset(str,0,sizeof(str));
    strncpy(str,last_name,strlen(last_name));
    strcat(str,", ");
    strncat(str,first_name,strlen(first_name));
    
    cout << "Size of str  = " << strlen(str) << endl;
    cout <<"Here's the information in a single string: " << str<<endl;

    return 0;
}
