// acctabc.h -- bank account classes
#ifndef ACCTABC_H_
#define ACCTABC_H_

#include <iostream>
#include <string>

//Abstract Base Class
class AcctABC
{
private:
    std::string fullname;
    long acctNum;
    double balance;

protected:
    struct Formatting 
    {
         std::ios_base::fmtflags flag;
         std::streamsize pr;
    };
    const std::string & getFullName() const{return fullname;}
    long getAcctNum() const{return acctNum;}
    Formatting SetFromat() const;
    void Restore(const Formatting & f)const;
public:
    AcctABC(const std::string & s = "NONENAME", long an = -1, double bal = 0);
    void Deposit(double amt);
    virtual void withDraw(double amt) = 0;  // pure Virtual function
    double Balance() const{return balance;}
    virtual void viewAcct() const = 0 ;      // pure Virtual function
};

//Brass Account class;
class Brass : public AcctABC
{
public:
    Brass(const std::string & s = "NONENAME", long an = -1, double bal = 0) : AcctABC(s,an,bal){}
    virtual void withDraw(double amt);
    virtual void viewAcct()const;
};

//BrassPlus Account class;
class BrassPlus:public AcctABC
{
private:
    double maxLon;
    double rate;
    double owesBank;
public:
    BrassPlus(const std::string & name = "NONENAME", 
    long an = -1, 
    double bal = 0, 
    double ml = 500, 
    double r =  0.10);

    BrassPlus(const Brass & b, 
    double ml = 500, 
    double r = 0.01);

    virtual void viewAcct()const;
    virtual void withDraw(double amt);
    void resetMax(double ml);
    void resetRate(double r);
    void resetOwes(double owes);
};

#endif