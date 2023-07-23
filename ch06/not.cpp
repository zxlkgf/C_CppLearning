// not.cpp -- using the not operator
#include <iostream>
#include <climits>

bool is_int(double);

int main()
{
    using namespace std;
    double num;
    cout << "yo,dude!Enter an integer value: ";
    cin >> num;
    while(!is_int(num)){
        cout << "out of range -- please try again: ";
        cin >> num;
    }
    int value = int(num);
	cout << "You've entered the interger " << value << "\nBye\n";

    return 0;
}

bool is_int(double x){
    return x<=INT_MAX && x>INT_MIN;
}