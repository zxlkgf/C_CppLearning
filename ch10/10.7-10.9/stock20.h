// stock20.h -- argument version
// version 20

#ifndef STOCK20_H_
#define STOCK20_H_

#include <string>

class Stock                 // class declaration
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot()
    {
        total_val = shares * share_val;
    }
public:
    Stock();                //default constructor
    Stock(const std::string& co, long n, double pr);
    ~Stock();
    void acquire(const std::string& co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock& topval(const Stock& s)const;
};


#endif