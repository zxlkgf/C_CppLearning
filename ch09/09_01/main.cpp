#include <string>
#include <iostream>
#include "golf.h"

using namespace std;


int
main (void) 
{     
	const unsigned	size = 4;
	golf	golfers[size];
	unsigned	numGolfers = 0;
	while (numGolfers < size && setgolf(golfers[numGolfers])) {
		++numGolfers;
	}

	for (unsigned i = 0; i < numGolfers; ++i) {
		showgolf(golfers[i]);
		cout << endl;
	}


	cout << endl;
	return	(0);
} 