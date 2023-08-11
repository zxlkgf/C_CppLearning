// worker0.h -- working classes
#ifndef WORKER0_H_
#define WORKER0_H_

#include <string>
using std::string;

class Worker
{
private:
    string fullname;
    long id;
public:
    Worker() : fullname("NONE"), id(0L){}
    Worker(const string & s, long n) : fullname(s), id(n){}
    virtual ~Worker() = 0;
    virtual void set();
    virtual void show()const;
};


class Waiter : public Worker
{
private:
    int panache;
public:
    Waiter() : Worker(), panache(0){}
    Waiter(const string & s, long n, int p = 0) : Worker(s,n), panache(p){}
    Waiter(const Worker & wk, int  p = 0) : Worker(wk), panache(p){}
    void set();
    void show() const;
};

class Singer : public Worker
{
protected:
    enum {other, alto, contralto, soprano, bass, naritone, tenor};
    enum {Vtypes = 7};
private:
    static char * pv[Vtypes];
    int voice;
public:
    Singer() : Worker(), voice(other){}
    Singer(const string & s, long n, int v = other) : Worker(s,n), voice(v){}
    Singer(const Worker &wk, int v = other) : Worker(wk), voice(v){}
    void set();
    void show() const;
};

#endif