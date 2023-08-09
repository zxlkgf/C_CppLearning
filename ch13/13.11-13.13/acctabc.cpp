// acctabc.cpp -- bank account class methods
#include <iostream>
#include "acctabc.h"

using std::string;
using std::cout;
using std::endl;
using std::ios_base;

// abstract Base class

AcctABC::AcctABC(const std::string & s, long an, double bal):fullname(s),acctNum(an),balance(bal){}

void 
AcctABC::Deposit(double amt)
{
    if (amt < 0)
    {
        cout << "Negiative deposit not allowed; deposit is cancelled.\n";
    }
    else
    {
        this->balance += amt;
    }
}

void 
AcctABC::withDraw(double amt)
{
    balance -= amt;
}


AcctABC::Formatting 
AcctABC::SetFromat() const
{
    /// set up ###.## format
    Formatting f;
    f.flag = cout.setf(ios_base::fixed,ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}

void 
AcctABC::Restore(const Formatting & f)const
{
    cout.setf(f.flag);
    cout.precision(f.pr);
}


//BaseMethod
void 
Brass::withDraw(double amt)
{
    if (amt < 0)
    {
        cout << "WithDraw amount must be positive; withDraw canceled";
    }else if(amt <= Balance())
    {
        AcctABC::withDraw(amt);
    }
    else
    {
        cout << "WithDraw amount of $ " << amt << " excceds your balance.\n" << "WithDraw canceled." << endl;
    }
}

void 
Brass::viewAcct()const
{
    cout << "fullname: " << getFullName() << endl;
    cout << "account number: " << getAcctNum() << endl;
    cout << "balance: $" << Balance() << endl; 
}


// BrassPlus account methods
BrassPlus::BrassPlus(const string & name, 
    long an, 
    double bal, 
    double ml, 
    double r):AcctABC(name,an,bal),maxLon(ml),rate(r){}

BrassPlus::BrassPlus(const Brass & b, 
    double ml, 
    double r):AcctABC(b),maxLon(ml),rate(r){}


void 
BrassPlus::viewAcct()const
{
    Formatting f = SetFromat();
    cout << "fullname: " << getFullName() << endl;
    cout << "account number: " << getAcctNum() << endl;
    cout << "balance: $" << Balance() << endl; 
    cout << "Maxinum loan: $" << maxLon << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Rate of Loan: " << rate * 100 << "%" << endl;
    Restore(f);
}

void 
BrassPlus::withDraw(double amt)
{
    Formatting f = SetFromat();

    double bal = Balance();
    if (amt <= bal)
    {
        AcctABC::withDraw(amt);
    }
    else if( amt <= bal + maxLon - owesBank)
    {
        double advance = amt - bal;
        owesBank += (1 + rate) * advance;
        cout << "Bank advance: $" << advance << endl;
        cout << "Fiance charge: $" << advance * rate << endl;
        Deposit(advance);
        AcctABC::withDraw(amt);
    }
    else
    {
        cout << "Credit card limit exceeded. Transaction cancelled." << endl;
    }
}

void
BrassPlus::resetMax(double ml)
{
    maxLon = ml;
}

void 
BrassPlus::resetRate(double r)
{
    rate = r;
}
   
void 
BrassPlus::resetOwes(double owes)
{
    owesBank = owes;
}