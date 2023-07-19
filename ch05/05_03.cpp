// 编写一个要求用户输入数字的程序，每次输入后，程序都将报告到目前为止，所有数组的累计和。当用户输入 0 时，程序结束。

#include <iostream>
using namespace std;

int main()
{
    float input = 0.0F;
    float sum = 0.0F;
    do{
        cout <<"请输入一个数字,(输入0退出)" << endl;
        cin >> input;
        sum += input;
        cout << "输入数字的总和: " << sum << endl;
    }while(input != 0);
    return 0;
}