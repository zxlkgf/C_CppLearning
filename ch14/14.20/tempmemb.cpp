// tempmemb.cpp -- template members
#include <iostream>
using std::cout;
using std::endl;

template <class T>
class beta
{
private:
    template <class V>
    class hold
    {
    private:
        V val;
    public:
        hold(V v = 0):val(v){};
        void show() const { cout << val << endl;}
        V Value() const {return val;}
    };
    hold<T> q;
    hold<int> n;

public:
    beta(T t, int i):q(t), n(i){}
    template <class U>
    U blab(U u, T t){return (n.Value() + q.Value()) * u / t;}
    void show() const {q.show(),n.show();}
};

int main()
{
    using namespace std;
    beta<double> guy(3.5, 3);
    cout << "T was set to double \n";
    guy.show();
    cout << "V was set to T, which is double , then V was set to int\n";
    cout << guy.blab(10, 2.3) << endl;
    cout << "U was set to int " << endl;
    cout << guy.blab( 10.0, 2.3) << endl;
    cout << "U was set to double " << endl;
    cout << "Done\n";
    return 0;
}