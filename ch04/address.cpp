// address.cpp -- using the & operator to find address
#include<iostream>

int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts value = " << donuts;

	cout << " and donuts address = " << &donuts << endl;

	// Note: you may need to use unsigned (&donuts)
	// and unsgned (&cups)
	cout << "cups vlaue = " << cups;
	cout << " and cups address = " << &cups << endl;

	return 0;
}