/**
  * 编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间（包括这两个整数）所有整数的和。
  * 这里假设先输入较小的数。例如用户输入的是 2 和 9，则程序将指出 2 ~ 9 之间所有整数的和为 44
  */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "请输入左边界值:";
    int left;
    cin >> left;

    cout << "请输入右边界值:";
    int right;
    cin >> right;

    int total = 0;
    for( int i = left; i <= right;i++){
        total += i;
    }
    cout << left <<" ~ " << right <<"所有的整数和为 "<<total<<endl; 

    return 0;
 }