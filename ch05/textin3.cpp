// textin3.cpp	-- reading chars to end of file
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	char ch;
	int count = 0;
	cin.get(ch);			// attempt to read a char
	while (cin.fail() == false) {
		cout << ch;			// echo character
		++count;
		std::cin.get(ch);			// attempt to read another char
	}
	cout << endl << count << " characters read\n";

	system("pause");
	return 0;
}
