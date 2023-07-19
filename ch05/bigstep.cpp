// bigstep.cpp -- count as directed
#include <iostream>
using std::cout;
using std::cin;
using std::endl;



int main()
{
	cout << "Enter an Integer" << endl;
	int step;
	cin >> step;
	cout << "Counting step " << step << endl;
	for (int i = 0;i < 100;i += step) {
		cout << i << endl;
	}

	return 0;
}
