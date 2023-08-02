#include <iostream>
#include "account.h"
using std::cout;
using std::endl;
using std::string;

/*
public:
    Account();
    Account(const string name,const string accountId,const unsigned balance);
    ~Account();
    void showName() const;
    void showAccountId() const;
    void showBalance() const;
    void incDeposit(unsigned amount);
    void decDeposit(unsigned amount);
*/

Account::Account()
{

}

Account::Account(string name,string accountId,unsigned balance)
{
    this->name_ = name;
    this->accountId_ = accountId;
    this->balance_ = balance;
}

Account::~Account()
{
    cout << "析构函数"<<endl;
}

void
Account::showName() const
{
    cout << "name : " << this->name_ << endl;
}

void 
Account::showAccountId() const
{
    cout << "AccountId : " << this->accountId_ << endl;
}

void 
Account::showBalance() const
{
    cout << "Balance : " << this->balance_ << endl;
}

void
Account::incDeposit(unsigned amount)
{
    if(amount < 0)
    {
        cout << "存入金额不可为负数，该笔提交被驳回！"<<endl;
        return;
    }
    this->balance_ += amount;
}

void 
Account::decDeposit(unsigned amount)
{
    if(this->balance_ < amount)
    {
        cout << "取出金额超过余额,该笔提交被驳回！"<<endl;
        return;
    }
    this->balance_ -= amount;
}