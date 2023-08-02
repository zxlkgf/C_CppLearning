#include <iostream>
#include <cstring>
#include "person.h"
using std::string;

Person::Person()
{
    this->lname = ""; 
    this->fname[0] = '\0'; 
}

Person::Person(const string & ln, const char * fn)
{
    this->lname = ln;
    std::strcpy(this->fname,fn);
}

void
Person::Show()const
{
    std::cout << this->lname << " " << this->fname  << std::endl;
}

void 
Person::FormalShow() const
{
    std::cout << this->lname << ", " << this->fname  << std::endl;
}