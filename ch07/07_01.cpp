// 07_01.cpp
#include <iostream>

double calc_harmonic_mean (unsigned x, unsigned y);

int main()
{
    using namespace std;
    cout << "请输入两个正整数x,y,(输入0退出)"<< endl;
    unsigned x,y;
    while(cin >> x >> y)
    {
        if(x == 0 ||y == 0)
        {
            break;
        }
        cout << calc_harmonic_mean(x,y)<<endl;
    }

    return 0;
}

double calc_harmonic_mean (unsigned x, unsigned y)
{
    return (2.0 * x * y) /(x + y);
}