// tempover.cpp -- temolate overloading
#include <iostream>

template <typename T>                               //template A
const T showArray(T arr[], int n);

template <typename T>
const T showArray(T * arr[], int n);                      // template B

struct debts
{
    char name[50];
    double amount;
};

int main()
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_g[3] = {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout",1800.0}
    };
    double * pd[3];

    // set pointers to the amount members of the structures in mr_g
    for(int i = 0; i < 3; i++)
    {
        pd[i] = &mr_g[i].amount;
    }
    // things is an array of int
    cout << showArray(things,6) << endl;;            // use template A
    cout << "Listing Mr. E's ddebts:\n";
    // pd is an array of pointers to double
    cout << showArray(pd,3) << endl;                 // uses template B (more specialized)
    return 0;
}

template <typename T>
const T showArray(T arr[], int n)
{
    using namespace std;
    cout << "template A\n";
    T total = 0;
    for(int i = 0;i < n; i++)
    {
        total += arr[i];
    }
    return total;
}


template <typename T>
const T showArray(T * arr[], int n)
{
    using namespace std;
    cout << "template B\n";
    T total = 0;
    for(int i = 0;i < n; i++)
    {
        total += *arr[i];
    }
    return total;
}