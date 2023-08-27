// mainip.cpp -- using format manipulators
#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter an integer: ";
    int n ;
    cin >> n;

    cout << n << "       ";
    cout << n * n << " (decimal)\n";            // 10进制

    //set to hex mode;
    cout .width(3);
    cout << hex;
    cout << n << "       ";
    cout << n * n << " (hexdecimal)\n";         // 16进制

    // set to octal mode
    cout << oct;
    cout << n << "       ";
    cout << n * n << " (octdecimal)\n";         // 8进制

    // alternative way to call a manipulator
    dec(cout);
    cout << n << "       ";
    cout << n * n << " (decimal)\n";
    return 0;
}

// 可以看出输出的字段并未对其，可以使用width成员函数将长度不同的数字放到宽度相同的字段中。
// int width();
// int width(int i);
// 只对下面第一个输出有效,之后字符段宽度会回复默认值