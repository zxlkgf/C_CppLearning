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
	while (numGolfers < size && golfers[numGolfers].setgolf()) {
		++numGolfers;
	}

	for (unsigned i = 0; i < numGolfers; ++i) {
		golfers[i].showgolf();
	}
	return	(0);
} 