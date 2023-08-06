// string1.cpp -- String class methods
#include <cstring>
#include "string1.h"

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String(const char* s)
{
    this->len = strlen(s);
    this->str = new char[len + 1];
    memset(this->str,0,len + 1);
    strcpy(this->str,s);
    num_strings ++;

}
	
String::String()
{
    this->len = 3;
    this->str = new char[len + 1];
    memset(this->str,0,len + 1);
    strcpy(this->str,"C++");
    num_strings++;
}

String::String(const String& sb)
{
    num_strings ++;
    this->len = sb.len;
    delete[]this->str;
    this->str = new char[len + 1];
    memset(this->str, 0, len + 1);
    strcpy(this->str,sb.str);
}

String::~String()
{
    num_strings -- ;
    delete[] this->str;
    this->str = nullptr;
    std::cout << num_strings << " left." <<std::endl;
}

String& 
String::operator= (const String& sb)
{
    if(this == &sb)return *this;
    num_strings ++;
    this->len = sb.len;
    delete[] this->str;
    this->str = new char[len + 1];
    memset(this->str, 0, len + 1);
    strcpy(this->str,sb.str);
    return *this;
}

String& 
String::operator= (const char* s)
{
    num_strings ++;
    this->len = strlen(s);
    delete[] this->str;
    this->str = new char[len + 1];
    memset(this->str, 0, len + 1);
    strcpy(this->str,s);
    return *this;
}

char& 
String::operator[](int i)
{
    if(i < this->len)return this->str[i];
    else return this->str[0];
}

const char& 
String::operator[](int i)const
{
    if(i < this->len)return this->str[i];
    else return this->str[0];
}

bool 
operator <(const String& str1, const String& str2)
{
    return (strcmp(str1.str,str2.str) < 0);
}

bool operator >(const String& str1, const String& str2)
{
    return (strcmp(str1.str,str2.str) > 0);
}

bool operator==(const String& str1, const String& str2)
{
    return (strcmp(str1.str,str2.str) == 0);
}

ostream& operator <<(ostream& os, const String& str)
{
    os << str.str;
    return os;
}

istream& operator >>(istream& is, String& str)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if(is)
    {
        str = temp;
    }
    while(is && is.get()!='\n')continue;
    return is;
}