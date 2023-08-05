// string1.h	-- fixed and argument string class defination
#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>
using std::ostream;
using std::istream;

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
	friend ostream& operator <<(ostream& os, const String& str);
	friend istream& operator >>(istream& is, String& str);
	static int HowMany();
};

#endif // !STRING1_H_