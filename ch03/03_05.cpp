/**
  * @description 编写一个程序，要求用户输入全球当前的人口（或其它国家的人口）。
  * 将这些信息存储在 long long 变量中，并让程序显示美国（或其它国家）的人口占全球人口的百分比。
  */
#include <iostream>
#define ll long long

int main(int argc,char * argv[])
{
    using namespace std;
    ll global_population = 0;
    ll us_population = 0;

	cout << "请输入全球当前人口: _____\b\b\b\b\b";
	cin >> global_population;
	cout << "请输入美国当前人口: _____\b\b\b\b\b";
    cin >> us_population;

    double result = double(us_population) / double(global_population);
    cout << "The population of the US is " << result * 100.0 <<"% of the world population"<<endl;
    return 0;
}
