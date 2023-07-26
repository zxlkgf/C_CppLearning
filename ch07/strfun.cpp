// strgfun.cpp -- function with a string argument
#include <iostream>
unsigned int c_in_str(const char* str, char ch);

int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	char mmm[15] = "minimum";				// string in an array
	// some systems require preceding char with static to enable array initialization

	const char* wail = "ululate";			// wail points to string

	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int ns = c_in_str(wail, 'u');
	cout << ms << " m characters in " << mmm << endl;
	cout << ns << " n characters in " << wail << endl;

	system("pause");
	return 0;
}
// this funciton counts the number of ch characters in the string str
unsigned int c_in_str(const char* str, char ch) {
	unsigned int count = 0;
	while (*str) {
		if (*str == ch) {					// quit when *str = '\0'
			count++;						// '\0' ASCII = 0
		}
		str++;								// move pointer to next char
	}
	return count;
}