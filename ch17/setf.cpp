// setf.cpp -- using setf() to control formatting
#include <iostream>

int main()
{
    using namespace std;
    int temperature = 63;
    cout << "Today's water temperature: ";
    cout.setf(ios_base::showpos);           // shou plus sign
    cout << temperature << endl;

    cout << "For our programming friends, that's\n";
    cout << std::hex << temperature <<endl;     // use uppercase in hex
    cout.setf(ios_base::uppercase);         //  use uppercase in hex
    cout.setf(ios_base::showbase);          // use 0x prefixe for hex
    cout << "or\n";
    cout << temperature << endl;
    cout << "How " << true << "!  oops -- How ";
    cout.setf(ios_base::boolalpha);
    cout << true << "!\n";

    return 0;
}
