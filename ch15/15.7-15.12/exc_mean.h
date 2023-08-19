// exc_mean.h -- exception classes for hmean() gmean()

#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_

#include <iostream>

class bad_hmean
{
private:
    double v1;
    double v2;
public:
    bad_hmean(double a = 0, double b = 0):v1(a),v2(b){}
    void msg();
};

inline void bad_hmean::msg()
{
    std::cout << "hmean(" << v1 << "," << v2 << "):invalid arguments: a = -b" << std::endl;
}

class bad_gmean
{
public:
    double v1;
    double v2;
    bad_gmean(double a = 0,double b = 0):v1(a),v2(b){}
    const char * msg();
};

inline const char * bad_gmean::msg()
{
    return "gmean() arguments should be >= 0 ";
}


#endif


