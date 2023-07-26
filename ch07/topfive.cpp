// tofive.cpp -- handing an array of string objects
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);

int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	string list[SIZE];						// an array holding 5 string object
	cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
	for (int i = 0;i < SIZE; i++)
	{
		cout << i + 1 << ":";
		getline(cin,list[i]);
	}
	cout << "Your list:\n";
	display(list, SIZE);

	system("pause");
	return 0;
}

void display(const string sa[], int n)
{
	for (int i = 0;i < SIZE;i++) {
		cout << i + 1 << " : " << sa[i] << endl;
	}
}
