// brass.h -- bank account classes
#ifndef BRASS_H_
#define BRASS_H_
#include <string>
// Brass Account Class
using std::string;

class Brass
{
    private:
        string fullname;
        long acctNum;
        double balance;
    public:
        Brass(const string & s = "Nullbody", long an = -1, double bal = 0.0);
        void Deposit(double amt);
        virtual void WithDraw(double amt);
        double Balance() const;
        virtual void ViewAcct() const;
        virtual ~Brass(){}
};

//Brass Pluss Account Class
class BrassPlus : public Brass
{
    private:
        double maxLon;
        double rate;
        double owesBank;
    public:
        BrassPlus(const string & s = "Nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
        BrassPlus(const Brass & ba, double ml = 500, double r = 0.11125);
        virtual void ViewAcct() const;
        virtual void WithDraw(double amt);
        void ResetMax(double m) {maxLon = m;};
        void ResetRate(double r) {rate = r;};
        void ResetOwes(){owesBank = 0;};
};

#endif