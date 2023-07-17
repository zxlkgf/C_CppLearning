// num_test.cpp  -- use numeric test in for loop
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc,char * argv[])
{
    cout << "Enter the starting countdown value :" << endl;
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--){
        cout << "i = " << i << endl;
    }
    cout << "Down now that i = " << i <<endl;

    return 0;
}
