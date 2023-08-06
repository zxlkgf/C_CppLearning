#include <cstring>
#include <cctype>
#include "string2.h"

int String::num_strings = 0;

String::String(const char* s)
{
    num_strings ++ ;
    len = strlen(s);
    this->str = new char[len + 1];
    strcpy(this->str,s);

}

String::String()
{
    num_strings ++;
    len = 3;
    this->str = new char[len + 1];
    memset(this->str,0,4);
    strcpy(this->str,"C++");
}

String::String(const String& st)
{
    num_strings++;
    delete this->str;
    this->len = st.len;
    this->str = new char[len + 1];
    strcpy(this->str,st.str);
}

String::~String()
{
    --num_strings;
    delete[] this->str;
}

String& 
String::operator= (const String& st)
{
    num_strings++;
    this->len = st.len;
    delete[] this->str;
    this->str = new char[len + 1];
    strcpy(this->str,st.str);
    return *this;
}

String& 
String::operator= (const char* s)
{
    num_strings++;
    this->len = strlen(s);
    delete[] this->str;
    this->str = new char[len + 1];
    strcpy(this->str,s);
    return *this;
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

bool 
operator <(const String& str1, const String& str2)
{
    return (strcmp(str1.str,str2.str) < 0);
}

bool 
operator >(const String& str1, const String& str2)
{
    return (strcmp(str1.str,str2.str) > 0);
}

bool 
operator==(const String& str1, const String& str2)
{
    return (strcmp(str1.str,str2.str) == 0);
}

String
operator+ (const String& str1, const String& str2)
{
    char * temp = new char[str1.len + str2.len + 1];
    memset(temp,0,str1.len + str2.len + 1);
    strncpy(temp,str1.str,str1.len);
    strncpy(temp,str2.str,str2.len);
    String strtemp(temp);
    delete temp;
    return (strtemp);
}

void 
String::StringtoLower()
{
    for(int i = 0; i < this->len;i++)
    {
        this->str[i] = char(tolower(int(str[i])));
    }
}

void 
String::StringtoUpper()
{
    for(int i = 0; i < this->len;i++)
    {
        this->str[i] = char(toupper(int(str[i])));
    }
}

int 
String::countChar(const char &ch)const
{
    int cnt = 0;
    for(int i = 0; i < this->len; i++)
    {
        if(this->str[i] == ch)cnt++;
    }
    return cnt;
}

ostream& 
operator <<(ostream& os, const String& str)
{
    os << str.str ;
    return os;
}

istream& 
operator >>(istream& is, String& str)
{
    char temp[String::CINLIM];
    is.get(temp,String::CINLIM);
    if(is)
    {
        strcpy(str.str,temp);
    }
    while(is && is.get()!='\n')continue;
    return is;
}

int 
String::HowMany()
{
    return num_strings;
}