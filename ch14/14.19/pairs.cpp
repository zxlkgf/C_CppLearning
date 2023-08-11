// pairs.cpp -- defining and using a Pair template
#include <iostream>
#include <string>

template<class T,class V>
class Pair
{
private:
    T a;
    V b;
public:
    T & first();
    V & second();
    T first() const {return a;}
    V second() const { return b;}
    Pair(const T & aval, const V & bval) : a(aval), b(bval){}
    Pair(){}
};

template<class T,class V>
T &
Pair<T,V>::first()
{
    return a;
}

template<class T,class V>
V &
Pair<T,V>::second()
{
    return b;
}

int main()
{
    using namespace std;
    Pair<string,int> rating[4] =
    { 
        Pair<string,int>{"Ther Purpled", 4},
        Pair<string,int>{"Jaquie's Frisco Al Fresco", 4},
        Pair<string,int>{"Cafe Souffle", 5},
        Pair<string,int>{"Bertie's Eats", 3}
    };
    int joints = sizeof(rating) / sizeof(Pair<string,int>);
    cout << "Rating:\t Eatert\n";
    for (int i = 0; i < joints; i++)
    {
        cout << rating[i].second() << " :\t "
            << rating[i].first() << endl;
    }
    cout << "Oops! Revised Rating:\n";
    rating[3].first() = "Bertie's Fab Eats";
    rating[3].second() = 6;
    cout << rating[3].second() << " :\t "
            << rating[3].first() << endl;
    return 0;
}
