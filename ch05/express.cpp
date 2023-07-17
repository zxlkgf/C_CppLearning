// express.cpp -- values of expressions
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int x;

	cout << "The expression x = 100 has the value";

	cout << (x = 100)  << endl;
	cout << "Now x = " << x << endl;
	cout << "The expression x <  3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x >  3 has the value ";
	cout << (x > 3) << endl;
	cout.setf(std::ios_base::boolalpha); // a newer C++ feature
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x >  3 has the value ";
	cout << (x > 3) << endl;

    return 0;
}