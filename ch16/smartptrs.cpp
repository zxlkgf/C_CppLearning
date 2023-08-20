// smartptr.cpp -- using three kinds of smart pointer
// requirs support of C++11 shared_ptr and unique_ptr
#include <iostream>
#include <string>
#include <memory>
using std::string;
using std::cout;
using std::endl;

class Report
{
private:
    string str;
public:
    Report(const string s) : str(s){cout << "Object created!\n";}
    ~Report(){cout << "Object destroy!\n";}
    void comment() const{cout << str << endl;}
};

int main()
{
    {
        std::auto_ptr<Report> ps (new Report("using auto_ptr"));
        ps->comment();
    }

    {
        std::shared_ptr<Report> ps(new Report("using shared_ptr"));
        ps->comment();
    }
    {
        std::unique_ptr<Report> ps(new Report("using unique_ptr"));
        ps->comment();
    }
    return 0;
}