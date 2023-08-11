// worker0.cpp -- working class methods
#include "worker0.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

Worker::~Worker(){}

void
Worker::set()
{
    cout << "Enter worker's name: ";
    getline(cin,fullname);
    cout << "Enter worker's ID: ";
    cin >> this->id;
    while(cin.get() != '\n')continue;
}

void
Worker::show()const
{
    cout << "Name : " << fullname << ", Id : " << id << endl;
}


//Waiter methods
void
Waiter::set()
{
    Worker::set();
    cout << "Enter Waiter's panache rating: ";
    cin >> panache;
    while(cin.get()!='\n')continue;
}

void
Waiter::show()const
{
    cout << "Category: Waiter\n";
    Worker::show();
    cout << "Panache rating: " << panache << endl;
}

// Singer methods;
char * Singer::pv[] = {"other", "alto", "contralto","soprano", "bass", "baritone", "tenor"};

void Singer::set()
{
    Worker::set();
    cout << "Enter number for singer's vocal range:\n";
    int i;
    for (i = 0; i < Vtypes; i++)
    {
        cout << i << ": " << pv[i] << "   ";
        if ( i % 4 == 3)
            cout << endl;
    }
    if (i % 4 != 0)
        cout << endl;
    while (cin >>  voice && (voice < 0 || voice >= Vtypes) )
        cout << "Please enter a value >= 0 and < " << Vtypes << endl;
    while (cin.get() != '\n')
        continue;
}


void Singer::show() const
{
    cout << "Category: singer\n";
    Worker::show();
    cout << "Vocal range: " << pv[voice] << endl;
}