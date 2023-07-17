/**
 * 编写一个程序，它要求用户首先输入其名，然后输入其姓;然后程序使用一个逗号和空格将姓名组合起来，并存储和显示组合结果
 * 请使用string数组和头文件string中的函数。
*/
#include <iostream>
#include <string>

int main(int argc,char * argv[])
{
    using namespace std;
    cout << "Enter your first name :" <<endl;
    string first_name;
    getline(cin,first_name);
    cout << "Enter your last name :" <<endl;
    string last_name;
    getline(cin,last_name);
    
    string out = last_name + ", " + first_name;
    cout <<"Here's the information in a single string: " << out <<endl;


    return 0;
}

