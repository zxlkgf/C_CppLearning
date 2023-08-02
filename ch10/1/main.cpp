#include <iostream>
#include "account.h"
using namespace std;

int main()
{
    Account ac("ZXL","1101",1024);
    ac.showName();
    ac.showAccountId();
    ac.showBalance();

    ac.incDeposit(100);
    ac.showName();
    ac.showAccountId();
    ac.showBalance();

    ac.decDeposit(1000);
    ac.showName();
    ac.showAccountId();
    ac.showBalance();

    ac.decDeposit(100000);

    return 0;
}