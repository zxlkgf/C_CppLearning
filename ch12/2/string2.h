#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using namespace std;

class String
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;
public:
	String(const char* s);
	String();
	String(const String&);
	~String();
	int length()const { return len; }
	String& operator= (const String&);
	String& operator= (const char*);
	char& operator[](int i);
	const char& operator[](int i)const;
	friend bool operator <(const String& str1, const String& str2);
	friend bool operator >(const String& str1, const String& str2);
	friend bool operator==(const String& str1, const String& str2);
    friend String operator+ (const String& str1, const String& str2);
    void StringtoLower();
    void StringtoUpper();
    int countChar(const char &ch)const;
	friend ostream& operator <<(ostream& os, const String& str);
	friend istream& operator >>(istream& is, String& str);
	static int HowMany();
};


#endif