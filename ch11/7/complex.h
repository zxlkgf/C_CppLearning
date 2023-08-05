#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>

namespace m_complex
{
    using std::cout;
    using std::cin;
    using std::endl;

    class Complex
    {
    private:
        double real_;
        double imaginary_;

    public:
        Complex(double real = 0, double imaginary = 0);
        Complex operator*(double n)const;
        friend std::ostream& operator<< (std::ostream& os,const Complex& cp);
        friend std::istream& operator>> (std::istream& is,Complex& cp);
        friend Complex operator~ (const Complex& cp);
        friend Complex operator+ (const Complex& cp1, const Complex& cp2);
        friend Complex operator- (const Complex& cp1, const Complex& cp2);
        friend Complex operator* (const Complex& cp1, const Complex& cp2);
        friend Complex operator* (const Complex& cp, double n);
    };
}


#endif