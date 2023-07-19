// 使用 array 对象（而不是数组）和 long double （而不是 long long）重新编写程序清单 5.4，并计算 100! 的值。
// 程序清单 5.4 formore.cpp -- more looping with for

#include <iostream>
#include <array>
using std::cout;
using std::cin;
using std::endl;
const int ArSize = 100;	// example of external declaration

int main()
{
	std::array<long double, ArSize> factorials;

	factorials[1] = factorials[0] = 1;
    
	for (int i = 2; i < ArSize; i++)
	{
		factorials[i] = i * factorials[i - 1];
	}
	std::cout << factorials[ArSize - 1] << std::endl;

	return 0;
}