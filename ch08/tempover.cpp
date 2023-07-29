// tempover.cpp -- temolate overloading
#include <iostream>

template <typename T>                               //template A
void showArray(T arr[], int n);

template <typename T>
void showArray(T * arr[], int n);                      // template B

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
    showArray(things,6);            // use template A
    cout << "Listing Mr. E's ddebts:\n";
    // pd is an array of pointers to double
    showArray(pd,3);                // uses template B (more specialized)
    return 0;
}

template <typename T>
void showArray(T arr[], int n)
{
    using namespace std;
    cout << "template A\n";
    for(int i = 0;i < n; i++)
    {
        cout << arr[i] <<' ';
    }
    cout << endl;
}


template <typename T>
void showArray(T * arr[], int n)
{
    using namespace std;
    cout << "template B\n";
    for(int i = 0;i < n; i++)
    {
        cout << *arr[i] <<' ';
    }
    cout << endl;
}