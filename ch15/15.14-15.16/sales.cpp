// sales.cpp -- Sales implementation
#include "sales.h"
using std::string;

Sales::bad_index::bad_index(int ix, const std::string & s)
: std::logic_error(s),bi(ix){};

Sales::Sales(int yy):year(yy){
    for(double &x:gross)x = 0;
}

Sales::Sales(int yy,const double *gr,int n):year(yy)
{
    int limit = (n < MONTHS) ? n : MONTHS;
    int i;
    for(i = 0; i < limit; i++)
    {
        gross[i] = gr[i];
    }
    for(i;i < MONTHS;i++)
    {
        gross[i] = 0;
    }
}

double 
Sales::operator[](int i)const
{
    if(i < 0 || i >= MONTHS)
    {
        throw bad_index(i);
    }
    return gross[i];
}

double & 
Sales::operator[](int i)
{
    if(i < 0 || i >= MONTHS)
    {
        throw bad_index(i);
    }
    return gross[i];
}

Sales::~Sales(){}


LabeledSales::nbad_index::nbad_index(const std::string & lb, int ix, const std::string & s):lbl(lb),bad_index(ix,s){}
LabeledSales::LabeledSales(const std::string & lb, int yy):label(lb),Sales(yy){}
LabeledSales::LabeledSales(const std::string &lb, int yy,const double * gr,int n):label(lb),Sales(yy,gr,n){};


double
LabeledSales::operator[](int i) const
{
    if(i < 0 || i >= MONTHS)
    {
        throw nbad_index(label,i);
    }
    return Sales::operator[](i);
}

double &
LabeledSales::operator[](int i)
{
    if(i < 0 || i >= MONTHS)
    {
        throw nbad_index(label,i);
    }
    return Sales::operator[](i);
}