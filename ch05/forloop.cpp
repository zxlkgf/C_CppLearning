// forloop.cpp -- introducing the for loop
#include <iostream>

using std :: cout;
using std :: endl;

int main(int argc,char * argv[])
{
    
    int i;              // create a counter
    //  initialize; test; update
    for(i = 0;i < 5 ; i ++)
        cout << "C++ knows loops.\n";
    cout << "C++ knows when to stop." << endl;

    return 0;
}
