#ifndef EMP_H_
#define EMP_H_
#include <iostream>
#include <string>

using std::string;

class abstr_emp
{
private:
    string fname;
    string lname;
    string job;
public:
    abstr_emp();
    abstr_emp(const string & fn, const string & ln, const string & j);
    virtual void showAll() const;
    virtual void setAll();
    friend std::ostream & operator<<(std::ostream &os,const abstr_emp & e);
    virtual ~abstr_emp() = 0;
};

class employee : public abstr_emp
{
public:
    employee();
    employee(const string & fn,const string & ln,const string & j);
    virtual void showAll() const;
    virtual void setAll();
};

class manager : virtual public abstr_emp
{
private:
    int inchargeof;
protected:
    int inChargeOf() const {return inchargeof;}
    int & inChargeOf() {return inchargeof;}
public:
    manager();
    manager(const string &fn, const string & ln, const string & j, int ico = 0);
    manager(const abstr_emp & e, int ico);
    manager(const manager & m);
    virtual void showAll() const;
    virtual void setAll();
};

class flink : virtual public abstr_emp
{
private:
    string reportsto;
protected:
    const string ReportsTo() const{return this->reportsto;}
    string & ReportsTo(){return this->reportsto;}
public:
    flink();
    flink(const string & fn, const string & ln, const string &j, const string &repo);
    flink(const abstr_emp & e, const string & repo);
    flink(const flink & f);
    virtual void showAll() const;
    virtual void setAll();
};

class highflink : public manager, public flink
{
public:
    highflink();
    highflink(const string & fn, const string & ln, const string &j, const string &repo,int ico);
    highflink(const abstr_emp & e, const string &repo,int ico);
    highflink(const flink & f, int ico);
    highflink(const manager & m, const string & repo);
    //highflink(const highflink & h);
    virtual void showAll() const;
    virtual void setAll();
};




#endif