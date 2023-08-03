#include <iostream>
#include "mytime3.h"
int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;
    cout << "Aida and Tosca:" << endl;
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;        //operator+()
    cout << "aida + tosca = " << temp << endl;
    temp = aida * 1.17;     // member operator*();
    cout << "aida * 1.17 = " << temp << endl;
    cout << "10.0 * tosca = " << 10.0 * tosca << endl;

    return 0;
}
