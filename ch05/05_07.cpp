/**
  * 设计一个名为 car 的结构，用它存储下述有关汽车的信息：
  * 生成商（存储在字符数组或 string 对象中的字符串）、生产年份（整数）。
  * 编写一个程序，向用户询问有多少辆汽车。
  * 随后，程序使用 new 来创建一个由相应数量的 car 结构构成的动态数组。
  * 接下来，程序提示用户输入每辆车的生产商（可能由多个单词构成）和年份信息。请注意，这需要特别小心，因为它将交替读取数值和字符串（参见第 4 章）
  */

#include<iostream>
struct CarStruct {
	char* makeCompany;
	char* makeYear;
};

int main()
{
	int catalogCount = 0;
	CarStruct* cars[2];
	std::cout << "How many cars do you wish to catalog?" << std::endl;
	std::cin >> catalogCount;
	for (int i = 0; i < catalogCount; i++)
	{
		std::cout << "Car #" << i << ":" << std::endl;
		std::cout << "Plear enter the make: ";
		char* makeCompany;
		char makeCompanyCh;
		do {
			std::cin.get(makeCompanyCh);
		} while(makeCompanyCh != '\n');
	}
	return 0;
}