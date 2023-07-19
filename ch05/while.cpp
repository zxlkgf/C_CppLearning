// while.cpp -- introducing the while loop
#include <iostream>
#define ArSize 20
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	char name[ArSize];
	memset(name, 0, ArSize);
	cout << "Your first name please: ";
	cin >> name;
	cout << "Here is your name,verticalized and ASCIIized:\n";
	int i = 0;												//start at Begining of string
	while (name[i] != '\0') {								// process to end of string
		cout << name[i] << " ; " << int(name[i]) << endl;	
		i++;
	}
	return 0;
}