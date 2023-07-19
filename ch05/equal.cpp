// equal.cpp -- equality vs assignment
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	int quizscores[10] = { 20,20,20,20,20,19,20,18,20,20 };
	cout << "Doing it right:\n";
	int i;
	for (int i = 0;quizscores[i] == 20;i++) {
		cout << "quiz " << i << " is a 20\n";
	}

	//Warning : you may prefer reading about this program
	// to actually running it.
	cout << "Doing it dangerously wrong:\n";
	for (int i = 0;quizscores[i] == 20;i++) {
		cout << "quiz " << i << " is a 20 \n";
	}

	return 0;
}