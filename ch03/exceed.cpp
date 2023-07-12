#include <iostream>
#define ZERO 0
#include <climits>


int main(int argc,char * argv[])
{
	using namespace std;
	short sam = SHRT_MAX;	// initialize a variable to max value
	unsigned short sue = sam; // okay if variable sam already define

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." <<endl
        << "Add $1 to each account." << endl << "Now ";

    sam = sam + 1;
    sue = sue + 1;

    cout << " Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nPoor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." <<endl
        << "Take $1 from each account." << endl << "Now ";

    sam = sam - 1;
    sue = sue - 1;

    cout << " Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\nLucky Sue!" << endl;

    return 0;
}
