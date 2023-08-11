#include <iostream>
using namespace std;

template<class T>void counts();
template<class T>void report(T &);

template<class V>
class HasFriend
{
private:
    V item;
    static int ct;
public:
    HasFriend(const V & v):item(v){ct++;}
    ~HasFriend(){ct--;}
    friend void counts<V>();
    friend void report<>(HasFriend<V> &);
};

template<class V>
int 
HasFriend<V>::ct = 0;


template<class T>
void counts()
{
    cout <<HasFriend<T>::ct<<endl;
}

template<class T>
void report(T & c)
{
    cout << c.item << endl;
}


int main()
{
    counts<int>();
    HasFriend<int> hfi1(10);
    HasFriend<int> hfi2(20);
    HasFriend<double> hfdb(10.5);
    report(hfi1);  // generate report(HasFriendT<int> &)
    report(hfi2);  // generate report(HasFriendT<int> &)
    report(hfdb);  // generate report(HasFriendT<double> &)
    cout << "counts<int>() output:\n";
    counts<int>();
    cout << "counts<double>() output:\n";
    counts<double>();
    // std::cin.get();
    return 0; 
}