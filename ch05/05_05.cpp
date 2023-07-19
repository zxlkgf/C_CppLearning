/**
  * 假设要销售《C++ For Fools》一书，输入全年每个月的销售量（图书数量，而不是销售额）。
  * 程序通过循环，使用初始化为月份字符串的 char* 数组（或 string 对象数组）逐月进行提示，并将输入的数据储存在一个 int 数组中。
  * 然后，程序计算数组中各元素的总数，并报告这一年的销售情况。
  */

#include<iostream>
#include<array>
#include<string>

int main595()
{

	/*const char* month[] = {
		"1月",
		"2月",
		"3月",
		"4月",
		"5月",
		"6月",
		"7月",
		"8月",
		"9月",
		"10月",
		"11月",
		"12月"
	};*/

	std::string month[] = {
		"1月",
		"2月",
		"3月",
		"4月",
		"5月",
		"6月",
		"7月",
		"8月",
		"9月",
		"10月",
		"11月",
		"12月"
	};
	std::array<int, 12> monthSale;
	const int len = sizeof(month) / sizeof(month[0]);
	// std::cout << sizeof(month) << " " << month->size() << " " << sizeof(month[0]) << " " << len << std::endl;
	int yearSale = 0;
	for (int i = 0; i < len; i++)
	{      
		std::cout << "请输入" << month[i] <<  "营业额:" << std::endl;
		std::cin >> monthSale[i];
		yearSale += monthSale[i];
	}

	std::cout << "年收入:" << yearSale << std::endl;

	return 0;
}