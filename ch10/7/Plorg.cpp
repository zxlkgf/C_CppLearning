#include <iostream>
#include <cstring>
#include "Plorg.h"

using std::cout;
using std::endl;

Plorg::Plorg(const char * name)
{
    strncpy(this->funnname,name,this->SIZE);
    this->ci = 50;
}

void
Plorg::setCi(unsigned ci)
{
    this->ci = ci;
}

void
Plorg::show() const
{
    cout << this->funnname <<" , " << this->ci << endl;
}