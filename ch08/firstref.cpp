// firstref.cpp -- defining and using a reference
#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;                       // rodents is a reference
    cout << "rats = " << rats << ",rodaents = " << rodents << endl;
    rodents ++;
    cout << "rats = " << rats << ",rodaents = " << rodents << endl;

    // some implementations require type casting the following address to type unsigned
    cout << "rats address = " << &rats << ", rodents address = " << &rodents << endl;
}