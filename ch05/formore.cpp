// formore.cpp -- more looping with for
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#define ll long long
const int ArSize = 16;				//example of external declaration


int main()
{
	ll factorials[ArSize] ;
	factorials[1] = factorials[0] = 1LL;
	for (int i = 2; i < ArSize; i++)
	{	
		factorials[i] = i * factorials[i - 1];
	}
	for (int i = 0; i < ArSize; i++) {
		cout << "factorials[" << i << "] = " << factorials[i] << endl;
	}

	return 0;
}