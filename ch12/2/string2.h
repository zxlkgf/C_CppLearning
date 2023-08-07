#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using namespace std;

class String
{
private:
	char* str;
	int len;
	static const int CINLIM = 256;
	void assign_member(const char* s);

public:
	String(const char* s = "");
	String(const String&);
	~String();
	
	int length()const { return len; }
	String& operator= (const String&);
	String& operator+=(const String&);
	const char* toCStr(void)const;

	void StringtoLower();
    void StringtoUpper();
    int countChar(const char &ch)const;

	char& operator[](int i);
	const char& operator[](int i)const;
	friend istream& operator >>(istream& is, String& str);
};

ostream& operator <<(ostream& os, const String& st);
bool operator <(const String& str1, const String& str2);
bool operator >(const String& str1, const String& str2);
bool operator==(const String& str1, const String& str2);
String operator+ (const String& str1, const String& str2);

#endif