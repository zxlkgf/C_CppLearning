#include <iostream>
#include "move.h"

using namespace std;

int main()
{
	Move one(12, 4);
	one.showmove();
	cout << endl;
	Move two(1, 1);
	one.add(two).showmove();
	cout << endl;
	one.reset();
	one.showmove();


	cout << endl;
	return (0);
}