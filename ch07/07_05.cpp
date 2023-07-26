//07_05.cpp
#include <iostream>

unsigned long long method(unsigned long long num);

int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	
	cout << "Enter a number to calc factorial:";
	long long unsigned num = 0;
	cin >> num;
	cout << num << "! = " << method(num) << endl;;

	cout << "Bye\n";
	return 0;
}

unsigned long long method(unsigned long long num)
{
	return (num == 0) ? 1 : num * method(num - 1);
}