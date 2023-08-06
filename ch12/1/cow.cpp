#include <iostream>
#include <cstring>
#include "cow.h"



Cow::Cow()
{
    memset(name,0,20);
    strcpy(name,"NONENAME");
    hobby = new char[64];
    memset(hobby,0,64);
    strcpy(hobby,"NONEHOBBY");
    weight = 0.0;
}

Cow::Cow(const char * nm,const char * ho, double wt)
{
    strcpy(name,nm);
    hobby =  new char[strlen(ho) + 1];
    strcpy(hobby,ho);
    weight = wt;
}

Cow::Cow(const Cow &c)
{
    strcpy(name,c.name);
    hobby =  new char[strlen(c.hobby) + 1];
    strcpy(hobby,c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    memset(this->name,'0',strlen(name));
    delete[] this->hobby;
    weight = 0;
}

Cow & 
Cow::operator=(const Cow & c)
{
    if(this == &c)return *this;
    strcpy(name,c.name);
    hobby =  new char[strlen(c.hobby) + 1];
    strcpy(hobby,c.hobby);
    weight = c.weight;
    return *this;
}

void 
Cow::ShowCow() const
{
    std::cout << "name: " << this->name 
        <<", hobby: " << this->hobby 
        <<", weight: " << this->weight
        << std::endl;
}