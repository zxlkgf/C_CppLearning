// tempparm.cpp -- template as parameters
#include <iostream>
#include "stacktp.hpp"

template< template <class T> class V>
class Crab
{
private:
    V<int> s1;
    V<double> s2;

public:
    Crab(){}
    bool push(int a, double x) {return s1.push(a) && s2.push(x);}
    bool pop(int &a, double &x) {return s1.pop(a) && s2.pop(x);}
};

int main()
{
    using namespace std;
    Crab<Stack> nebula;

    int ni;
    double nb;
    cout << "Enetr int double pairs, such as 4 3.5 (0 0 to end):\n";
    while (cin >> ni >> nb && ni > 0 && nb > 0)
    {
        if(!nebula.push(ni,nb))break;
    }

    while(nebula.pop(ni,nb))
    {
        cout<< "ni: " << ni << "\nnb: " << nb <<endl;
    }
    cout <<"Done" << endl;

    return 0;
}