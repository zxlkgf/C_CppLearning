#include "emp.h"
#include <iostream>
#include <limits>
using namespace std;

abstr_emp::abstr_emp():fname("NONE"),lname("NONE"),job("NONE"){};
abstr_emp::abstr_emp(const string & fn, const string & ln, const string & j):fname(fn),lname(ln),job(j){};
void abstr_emp::showAll() const
{
	cout	<< "name: " << fname << ' ' << lname << '\n'
			<< "job: " << job << endl;
}
void abstr_emp::setAll()
{
	cout << "enter first name: ";
	cin >> fname;
	cin.clear();	// 清空输入缓冲区错误标志位
	cin.ignore(numeric_limits<streamsize>::max(), '\n');	// 清空输入缓冲区内容

	cout << "enter second name: ";
	cin >> lname;
	cin.clear();	// 清空输入缓冲区错误标志位
	cin.ignore(numeric_limits<streamsize>::max(), '\n');	// 清空输入缓冲区内容

	cout << "enter job: ";
	cin >> job;
	cin.clear();	// 清空输入缓冲区错误标志位
	cin.ignore(numeric_limits<streamsize>::max(), '\n');	// 清空输入缓冲区内容
}

ostream & operator<<(ostream &os,const abstr_emp & e)
{
    e.showAll();
    os << endl;
    return os;
}

abstr_emp::~abstr_emp(){}


// ============================ employee
employee::employee():abstr_emp(){}
employee::employee(const string & fn,const string & ln,const string & j):abstr_emp(fn,ln,j){};
void employee::showAll()const{abstr_emp::showAll();}
void employee::setAll(){abstr_emp::setAll();}

// ============================ manager
manager::manager():abstr_emp(){};
manager::manager(const string &fn, const string & ln, const string & j, int ico):abstr_emp(fn,ln,j),inchargeof(ico){};
manager::manager(const abstr_emp & e,int ico):abstr_emp(e),inchargeof(ico){};
manager::manager(const manager & m):abstr_emp((const abstr_emp &)m){};
void manager::showAll()const
{
    abstr_emp::showAll();
    cout << "inchargeof: " << this->inchargeof << endl;
}
void manager::setAll()
{
    abstr_emp::setAll();
	cout << "enter inchargeof: ";
	cin >> inchargeof;
	cin.clear();	// 清空输入缓冲区错误标志位
	cin.ignore(numeric_limits<streamsize>::max(), '\n');	// 清空输入缓冲区内容
}

// ============================ flink
flink::flink():abstr_emp(){};
flink::flink(const string & fn, const string & ln, const string &j, const string &repo):abstr_emp(fn,ln,j),reportsto(repo){};
flink::flink(const abstr_emp & e, const string & repo):abstr_emp(e),reportsto(repo){};
flink::flink(const flink & f):abstr_emp((const abstr_emp &)f),reportsto(f.reportsto){};
void flink::showAll()const
{
    abstr_emp::showAll();
    cout << "reportsto: " <<  this->reportsto << endl;
}
void flink::setAll()
{
    abstr_emp::setAll();
    cout << "enter reportsto: ";
    cin >> reportsto;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');	// 清空输入缓冲区内容
}

// ============================ highflink
highflink::highflink():abstr_emp(){};
highflink::highflink(const string & fn, const string & ln, const string &j, const string &repo,int ico):abstr_emp(fn,ln,j),manager(fn,ln,j,ico),flink(fn,ln,j,repo){};
highflink::highflink(const abstr_emp & e, const string &repo,int ico):abstr_emp(e),manager(e,ico),flink(e,repo){};
highflink::highflink(const flink & f, int ico):abstr_emp((abstr_emp &)f),manager((abstr_emp &)f,ico),flink(f){};
highflink::highflink(const manager & m, const string & repo):abstr_emp((abstr_emp&)m),manager(m),flink((abstr_emp &)m,repo){};
void highflink::showAll() const
{
    abstr_emp::showAll();
    cout << "inchargeof: " << inChargeOf() << endl;
    cout << "reportsto: " <<  ReportsTo() << endl;
}
void highflink::setAll()
{
    abstr_emp::setAll();
	cout << "enter inchargeof: ";
	cin >> inChargeOf();
	cin.clear();	// 清空输入缓冲区错误标志位
	cin.ignore(numeric_limits<streamsize>::max(), '\n');	// 清空输入缓冲区内容
    cout << "enter reportsto: ";
    cin >> ReportsTo();
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');	// 清空输入缓冲区内容
}