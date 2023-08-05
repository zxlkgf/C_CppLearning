#include "complex.h"
#include <limits>

namespace m_complex
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::numeric_limits;
    using std::streamsize;

    Complex::Complex(double real, double imaginary)
    {
        this->real_ = real;
        this->imaginary_ = imaginary;
    }

    Complex 
    Complex::operator*(double n)const
    {
        return Complex(this->real_ * n, this->imaginary_ * n);
    }

    std::ostream& operator<< (std::ostream& os,const Complex& cp)
    {
        os << "(" << cp.real_ << "," << cp.imaginary_ << "i)";
        return os;
    }

    std::istream& operator>> (std::istream& is,Complex& cp)
    {
        cout << "real: ";
        is >> cp.real_;
        if(!is)
        {
            is.ignore(numeric_limits<streamsize>::max(),'\n');
            return is;
        }

        cout << "imaginary: ";
        is >> cp.imaginary_;
        is.ignore(numeric_limits<streamsize>::max(),'\n');
        return is;
    }

    Complex operator~ (const Complex& cp)
    {
        return Complex(cp.real_,-cp.imaginary_);
    }

    Complex operator+ (const Complex& cp1, const Complex& cp2)
    {
        return Complex(cp1.real_ + cp2.real_, cp1.imaginary_ + cp2.imaginary_);
    }

    Complex operator- (const Complex& cp1, const Complex& cp2)
    {
        return Complex(cp1.real_ - cp2.real_, cp1.imaginary_ - cp2.imaginary_);
    }
    
    Complex operator* (const Complex& cp1, const Complex& cp2)
    {
        double real = (cp1.real_ * cp2.real_) - (cp1.imaginary_ * cp2.imaginary_);
        double imaginary = (cp1.real_ * cp2.imaginary_) + (cp2.real_ * cp1.imaginary_);
        return Complex(real,imaginary);
    }
    
    Complex operator* (const Complex& cp, double n)
    {
        return n * cp;
    }

}