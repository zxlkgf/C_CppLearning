// forstr1.cpp -- using for with a string
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	cout << "Enter a word :";
	string word;
	getline(cin, word);

	//display letters in reverse order
	for (int i = word.size();i >= 0;i--) {
		cout << word[i];
	}
	cout << endl;

	return 0;
}