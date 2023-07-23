// protos.cpp -- using prototyes and function calls
#include <iostream>
void cheers(int);                                   // prototype : no return value
double cube(double);                                // protptype : returns a double
int main()
{
    using namespace std;
    cheers(5);
    cout << "Give me a number: ";
    double side;
    cin >> side;
    double volume = cube(side);
    cout <<"A " << side <<"-foot cube has a volume of "<< volume <<" cube feet.\n";
    cheers(cube(2));
    return 0;
}

void cheers(int n)
{
    using namespace std;
    for(int i = 0; i < n; i++){
        cout <<"Cheers! ";
    }
    cout <<endl;
}

double cube(double x){
    return x*x*x;
}