#ifndef PERSON_H_
#define PERSON_H_
#include <string>
using std::string;

class Person {
private:
	static const unsigned LIMIT = 25;
	string lname;                       // Person’s last name
	char fname[LIMIT];                  // Person’s first name
public:
	Person();
	Person(const string & ln, const char * fn = "Heyyou");
	// the following methods display lname and fname
	void Show() const; // firstname lastname format
	void FormalShow() const; // lastname, firstname format
};

#endif