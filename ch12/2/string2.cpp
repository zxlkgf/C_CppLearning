#include <cstring>
#include <cctype>
#include <iostream>
#include "string2.h"

void
String::assign_member(const char* s)
{
    this->len = strlen(s);
    this->str = new char[len + 1];
    strcpy(this->str,s);
}

String::String(const char* s)
{
    assign_member(s);
}

String::String(const String& st)
{
    assign_member(st.str);
}

String::~String()
{
    delete[] this->str;
}

const char* 
String::toCStr(void)const
{
    return this->str;
}

void 
String::StringtoLower()
{
    for(unsigned i = 0; i < len; i++)
    {
        str[i] = char(tolower(int(str[i])));
    }
}

void 
String::StringtoUpper()
{
    for(unsigned i = 0; i < len; i++)
    {
        str[i] = char(toupper(int(str[i])));
    }
}

int 
String::countChar(const char &ch)const
{
    int cnt = 0;
    for(unsigned i = 0; i < len; i ++)
    {
        if(str[i] == ch)cnt++;
    }
    return cnt;
}

char& 
String::operator[](int i)
{
    return str[i];
}
	
const char& 
String::operator[](int i)const
{
    return str[i];
}


String& 
String::operator= (const String& st)
{
    if(this == &st)return *this;
    delete[] str;
    assign_member(st.str);
    return *this;
}
	
String& 
String::operator+=(const String& st)
{
    return (*this = *this + st);
}

ostream& operator <<(ostream& os, const String& st)
{
    os << st.toCStr();
    return os;
}


istream& 
operator >>(istream& is, String& str)
{
    char temp [String::CINLIM];
    if(is >> temp)
    {
        str = temp;
    }
    return is;
}

bool operator <(const String& str1, const String& str2)
{
    return (strcmp(str1.toCStr(),str2.toCStr()) < 0);
}

bool operator >(const String& str1, const String& str2)
{
    return str2 < str1;
}

bool operator==(const String& str1, const String& str2)
{
    return (strcmp(str1.toCStr(),str2.toCStr()) == 0);
}

String 
operator+ (const String& str1, const String& str2)
{
    char* temp = new char[str1.length() + str2.length() + 1];
    strcpy(temp,str1.toCStr());
    strcat(temp,str2.toCStr());
    String str(temp);
    delete[] temp;
    return str;
}