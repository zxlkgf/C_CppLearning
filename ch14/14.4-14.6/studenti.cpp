// studenti.cpp -- Student class using private inheritance
#include "studenti.h"
using std::ostream;
using std::istream;
using std::string;
using std::endl;

double 
Student::Average() const
{
    if(ArrayDb::size() > 0)
    {
        return ArrayDb::sum() / ArrayDb::size();
    }
    return 0.0;
}

const std::string & 
Student::Name() const
{
    return (const string &)*this;
}

double & 
Student::operator[](int i)
{
    return ArrayDb::operator[](i);
}

double 
Student::operator[](int i) const
{
    return ArrayDb::operator[](i);
}

std::ostream & 
Student::arr_out(std::ostream & os) const
{
    int i;
    int limit = ArrayDb::size();
    if (limit > 0)
    {
        for (i = 0; i < limit; i++)
        {
            os << ArrayDb::operator[](i) << " ";
            if (i % 5 == 4)
            {
                os << endl;
            }
        }
        if (i % 5 != 0)
        {
            os << endl;
        }
    }
    else
    {
        os << " empty array ";
    }
    return os;
}


std::istream & 
operator>>(std::istream & is,Student & stu)
{
    is >> (string &)stu;
    return is;
}


std::istream & 
getline(std::istream & is,Student & stu)
{
    getline(is,(string &)stu);
    return is;
}

std::ostream & operator<<(std::ostream & os, const Student & stu)
{
    os << "Socres for " << (string &)stu << endl;
    stu.arr_out(os);
    return os;
}