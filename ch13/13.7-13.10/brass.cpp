// brass.cpp -- bank account class methods
#include <iostream>
#include "brass.h"
using std::cout;
using std::endl;
using std::string;

//formatting stuff
typedef std::ios_base::fmtflags format;
typedef std::streamsize precies;
format setFromat();
void restore(format f, precies p);

// brass method
Brass::Brass(const string & s, long an, double bal):fullname(s),acctNum(an),balance(bal){};

void
Brass::Deposit(double amt)
{
    if(amt < 0)
    {
        cout << "Negative deposit not allowed; deposit is cancelled.\n";
    }
    else
    {
        balance += amt;
    }
}

void
Brass::WithDraw(double amt)
{
    format initialState = setFromat();
    precies prec = cout.precision(2);
    if(amt < 0)
    {
        cout << "Withdrawal amount must be positive; withdrawal canceled.\n";
    }else if (amt <= balance)
    {
        balance -= amt;
    }
    else
    {
        cout << "Withdrawal amount of $" << amt << " exceeds your balance.\n" << "Withdrawal canceled.\n"; 
    }
}

double 
Brass::Balance()const
{
    return balance;
}

void Brass::ViewAcct()const
{
    //set up ###.##format
    format initialState = setFromat();
    precies prec = cout.precision(2);
    cout << "Client: " << fullname << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    restore(initialState,prec);
}

//BrassPlus Methods
BrassPlus::BrassPlus(const string & s , long an, double bal, double ml, double r):Brass(s,an,bal),maxLon(ml),rate(r){}

BrassPlus::BrassPlus(const Brass & ba, double ml, double r):Brass(ba),maxLon(ml),rate(r){}

void
BrassPlus::ViewAcct()const
{
    //set up ###.##format
    format initialState = setFromat();
    precies prec = cout.precision(2);
    Brass::ViewAcct();
    cout << "Maxinum loan: $" << maxLon << endl;
    cout << "Owed to bank: $" << owesBank << endl;
    cout.precision(3);
    cout << "Loan Rate: " << 100 * rate << "%" << endl;
    restore(initialState,prec);
}

void 
BrassPlus::WithDraw(double amt)
{
    //set up ###.##format
    format initialState = setFromat();
    precies prec = cout.precision(2);
    double bal = Balance();

    if(amt <= bal)
    {
        Brass::WithDraw(amt);
    }
    else if (amt <=bal + maxLon - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1 + rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        Brass::WithDraw(amt);
    }
    else{
        cout << "creadit limit exceeded, Transaction cancelled.\n";
    }
    restore(initialState,prec);
}

format setFromat()
{
    //set up ###.## format
    return cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
}

void restore(format f, precies p)
{
    cout.setf(f,std::ios_base::floatfield);
    cout.precision(p);
}