// vector.h -- Vector class with <<,mode state
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode {RECT,POL};
    private:
        double x_;
        double y_;
        double mag_;
        double ang_;
        Mode mode_;
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1, double n2, Mode from = RECT);
        void reset(double n1,double n2, Mode form = RECT);
        ~Vector();
        double xval(void) const;
        double yval(void) const;
        double magval(void) const;
        double angval(void) const;
        void polar_mode();
        void rect_mode();
        Vector operator+(const Vector & v)const;
        Vector operator-(const Vector & v)const;
        Vector operator*(double n)const;
        Vector operator-()const;
        friend Vector operator*(double n,const Vector & v);
        friend std::ostream & operator<< (std::ostream & os, const Vector & v);
    };
}

#endif