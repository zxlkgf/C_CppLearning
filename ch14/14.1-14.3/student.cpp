// student.cpp -- Student class using containment
#include "studentc.h"
using std::ostream;
using std::cout;
using std::endl;
using std::istream;
using std::string;

double 
Student::Average() const
{
    if(scores.size() > 0)
    {
        return scores.sum() / scores.size();
    }
    return 0;
}

const std::string & 
Student::Name() const
{
    return this->name;
}

double 
Student::operator[](int i) const
{
    return scores[i];
}

double & 
Student::operator[](int i)
{
    return scores[i];
}


std::ostream & 
Student::arr_out(std::ostream &os)const
{
    int i;
    int limit = scores.size();
    if (limit > 0)
    {
        for (i = 0; i < limit; i++)
        {
            os << scores[i] << " ";
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
    is >> stu.name;
    return is;
}

std::istream & 
getline(std::istream & is,Student & stu)
{
    getline(is,stu.name);
    return is;
}


std::ostream & 
operator<<(std::ostream & os,const Student & stu)
{
    os << "Socres for " << stu.name << endl;
    stu.arr_out(os);
    return os;
}

