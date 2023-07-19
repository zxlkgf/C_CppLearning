// forstr2.cpp -- reversing an array
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	getline(cin, word);

	// physically modify string object
	char temp;
	int i, j;
	for (i = 0, j = word.size() - 1;i < j;i++, j--) {
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << "now word = " << word << endl;
	return 0;
}