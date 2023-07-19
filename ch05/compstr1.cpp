// compstr1.cpp -- comparing strings using arrays
#include <iostream>
#include <cstring>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	char word[] = "?ate";
	for (char ch = 'a';strcmp(word, "mate");ch++) {
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;
	return 0;
}
