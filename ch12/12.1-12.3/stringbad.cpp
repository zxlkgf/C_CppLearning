// stringbad.cpp -- StringBad class method
#include <cstring>
#include "stringbad.h"
using std::cout;
using std::endl;

int StringBad::num_strings = 0;

StringBad::StringBad(const char* s)
{
    this->len = strlen(s);
    this->str = new char[len + 1];
    memset(this->str,'\0',len + 1);
    std::strcpy(this->str,s);
    this->num_strings++;
    cout << num_strings << ": \"" << str << "\" object created" << endl;
}

StringBad::StringBad()
{
    int len = 3;
    this->str = new char[len + 1];
    std::strcpy(this->str,"C++");
    num_strings++;
    cout << num_strings << ": \"" << str << "\" object created" << endl;
}

StringBad::~StringBad()
{
    cout << "\"" << str << "\" object deleted, ";
    --num_strings;
    cout << num_strings  << " left" << endl;
    delete[] this->str;
}             

std::ostream& operator<<(std::ostream& os, const StringBad& st)
{
    os << st.str ;
    return os;
}