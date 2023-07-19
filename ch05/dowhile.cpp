// dowhile.cpp -- exit condition loop
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	int n;

	cout << "Enter numbers in the range 1 - 10 to find";
	cout << "My favorite number \n";
	do {
		cin >> n;		//excute body
	} while (n != 7);
	cout << "Yes, 7 is my favorite number.\n";

	system("pause");
	return 0;
}