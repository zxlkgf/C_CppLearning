// strback.cpp -- a function that returns a pointer to char
#include <iostream>
char* buildstr(char c, int n);			//prototype

int main(){
	using std::cout;
	using std::cin;
	using std::endl;

	int times;
	char ch;

	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> times;
	char* ptr = buildstr(ch, times);
	cout << ptr << endl;
	delete[] ptr;						// free memory
	ptr = buildstr('+', 20);			// reuse pointer
	cout << ptr << "-DONE-" << ptr << endl;
	delete[] ptr;
	system("pause");
	return 0;
}
// builds string mode of n c characters
char* buildstr(char c, int n) 
{
	char* ptr = new char[n + 1];
	ptr[n] = '\0';
	while (n-- > 0) {
		ptr[n] = c;
	}
	return ptr;
}