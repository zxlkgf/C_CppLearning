// addpntrs.cpp -- pointer ddition
#include<iostream>

int main()
{
	using namespace std;
	double wages[3] = { 10000.0, 20000.0, 30000.0 };
	short stacks[3] = { 3, 2, 1 };

	// Here are two ways to get the address of an array
	double* pw = wages;	// name of an array = address;
	// stacks[0] 相当于 *stacks， 也即 stacks 是指向数组第 0 位元素的指针, stacks[0] 相当于调用
	// *stacks，也即对 stacks 这个指针进行解引用
	// &stacks[0] 相当于&(*stacks)，也就是 先获取 数组第0位元素值，然后获取这个值的地址,
	// 然后把这个地址赋值给 ps 这个指针
	short* ps = &stacks[0];	// or use address operator
	

	// with array element
	cout << "pw = " << pw << ", *pw = " << *pw << endl;	// 地址,10000.0
	pw = pw + 1;	// 指针运算，地址 + sizeof(double)，此时 pw 指向数组第二位
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";	// 地址 + sizeof(double)，20000.0


	cout << "ps = " << ps << ", *ps = " << *ps << endl;	// 地址，3
	ps = ps + 1;	// 指针运算，地址 + sizeof(short)，此时 ps 指向数组第二位
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n"; // 地址 + sizeof(short)，2

	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0]				// 相当于 *stacks, 返回 3
		<< ", stacks[1] = " << stacks[1] << endl;	// 相当于 *(stacks+1)，返回 2 

	cout << "access tow elements with pointer notation\n";
	cout << "*stacks = " << *stacks					// 3
		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;	// 2

	cout << sizeof(wages) << " = size of wages array\n"; // 3 * sizeof(double) 字节,即 24,因为wages 是一个double的数组且有3个元素
	cout << sizeof(pw) << " = size of pw pointer\n";// sizeof(short) 字节， 即2。因为 pw 是一个short类型指针

	cout << "sizeof double = " << sizeof(double) << endl;	// 8
	cout << "sizeof short = " << sizeof(short) << endl;	// 2
	return 0;
}