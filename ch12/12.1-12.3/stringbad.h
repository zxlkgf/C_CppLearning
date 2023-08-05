// stringbad.h -- follow string class definition
#include <iostream>

#ifndef STRINGBAD_H_
#define STRINGBAD_H_

class StringBad
{
private:
	char* str;				// pointer to string
	int len;				// length to string
	static int num_strings;	//number of objects
public:
	StringBad(const char* s);
	StringBad();
	~StringBad();                       
	friend std::ostream& operator<<(std::ostream& os, const StringBad& st);
};

#endif // !STRINGBAD_H_