// twoswap.cpp -- specialization override a template
#include <iostream>
template <class T>
void Swap(T &a,T &b);

struct job
{
    char name[40];
    double salary;
    int floor;
};

// explicit specialization
template <> void Swap<job> (job &j1,job &j2);
void show(const job &j);


int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios_base::fixed,ios::floatfield);
    int i = 10;
    int j = 20;
    cout << "i = " << i << ", j = " << j << endl;
    cout << "Using compiler generated int swapper : \n";
    Swap(i,j);
    cout << "Now i = " << i << ", j = " << j << endl;

    job sue = {"Susan Yaffee",73000.60,7};
    job sidney = {"Sidney Taffee",78060.72,9};
    cout << "Before job swapping : \n";
    show(sue);
    show(sidney);
    Swap(sue,sidney);
    cout << " After job swapping :\n";
    show(sue);
    show(sidney);
    return 0;
}

template <class T>
void Swap(T &a,T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// swaps just the salary and floor fields of a job structure
template <> void Swap<job> (job &j1,job &j2)
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}
void show(const job &j)
{
    using namespace std;
    cout << "name: " << j.name
    <<", salary: " << j.salary
    <<", floor: " << j.floor << endl;
}