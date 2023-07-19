// textin1.cpp -- reading chars with a while loop
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	char ch;
	int count = 0;		//use basic input
	cout << "Enter characters; enter # to quit;" << endl;
	cin >> ch;			// get a character
	while (ch != '#')	// test the character
	{
		cout << ch;		// echo the character
		++count;		// count the character
		cin >> ch;		// get the next character
	}
	cout << endl << count << " character read." << endl;

	system("pause");
	return 0;
}
