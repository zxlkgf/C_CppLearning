// error4.cpp -- using exception classes
#include <iostream>
#include <cmath>
#include "exc_mean.h"

// function
double hmean(double a,double b);
double gmean(double a,double b);

int main()
{
    using namespace std;
    double x, y, z;
    while(cin >> x >> y)
    {
        try
        {
            z = hmean(x,y);
            cout << "Harmonic mean of " << x << " and " << y
                << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                << " is " << gmean(x,y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }
        catch(bad_hmean & bh)
        {
            bh.msg();
            cout << "try again。\n";
            continue;
        }
        catch(bad_gmean & bg)
        {
            cout << bg.msg();
            cout << "Values used: "<< bg.v1 << "," << bg.v2 << endl;
            cout << "sorry, you don't get to play any more" << endl;
            break;
        }

    }
    cout << "Bye!" <<endl;
    return 0;
}

double hmean(double a,double b)
{
    if( a == - b)
    {
        throw bad_hmean(a,b);
    }
    return 2.0 * a * b / (a + b);
}
double gmean(double a,double b)
{
    if( a < 0 || b < 0 )
    {
        throw bad_gmean(a,b);
    }
    return sqrt(a * b);
}