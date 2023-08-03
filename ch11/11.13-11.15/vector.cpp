// vector.cpp -- methods for the vector class
#include <iostream>
#include <cmath>
#include "vector.h"
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;
using std::endl;

namespace VECTOR
{
	// compute degrees in one radian
	const double RAD_TO_DEG = 45.0 / atan(1.0);
	// should be about 57.295795130823
	
	// private methods
	// calculates magnitude from x and y
	void Vector::set_mag()
	{
		mag_ = sqrt(x_ * x_ + y_ * y_);
	}

	void Vector::set_ang()
	{
		if (x_ == 0 && y_ == 0)
		{
			ang_ = 0.0;
		}
		else
		{
			ang_ = atan2(y_, x_);
		}
	}

	// set x from polar coordinate
	void Vector::set_x()
	{
		x_ = mag_ * cos(ang_);
	}

	// set y from polar coordinate
	void Vector::set_y()
	{
		y_ = mag_ * sin(ang_);
	}
	
	// public methods
	Vector::Vector()
	{
		x_ = y_ = mag_ = ang_ = 0.0;
		mode_ = RECT;
	}

	double Vector::xval(void) const
	{
		return this->x_;
	}
        
	double Vector::yval(void) const
	{
		return this->y_;
	}

    double Vector::magval(void) const
	{
		return this->mag_;
	}
        
	double Vector::angval(void) const
	{
		return this->ang_;
	}

	// 
	Vector::Vector(double n1, double n2, Mode form)
	{
		mode_ = form;
		switch (mode_)
		{
			case RECT:
			{
				x_ = n1;
				y_ = n2;
				set_mag();
				set_ang();
				break;
			}
			case POL:
			{
				mag_ = n1;
				ang_ = n2 /RAD_TO_DEG;
				set_x();
				set_y();
				break;
			}
			default:
			{
				cout << "Incorrect 3rd argument to Vector() -- ";
				cout << "vector set to 0" << endl;
				x_ = y_ = mag_ = ang_ = 0.0;
				mode_ = RECT;
				break;
			}
		}
	}

	void Vector::reset(double n1, double n2, Mode form)
	{
		mode_ = form;
		switch (mode_)
		{
			case RECT:
			{
				x_ = n1;
				y_ = n2;
				set_mag();
				set_ang();
				break;
			}
			case POL:
			{
				mag_ = n1;
				ang_ = n2 /RAD_TO_DEG;
				set_x();
				set_y();
				break;
			}
			default:
			{
				cout << "Incorrect 3rd argument to Vector() -- ";
				cout << "vector set to 0" << endl;
				x_ = y_ = mag_ = ang_ = 0.0;
				mode_ = RECT;
				break;
			}
		}
	}

	// destructor
	Vector::~Vector()
	{

	}

	//
	void Vector::polar_mode()
	{
		mode_ = POL;
	}

	void Vector::rect_mode()
	{
		mode_ = RECT;
	}

	Vector Vector::operator+(const Vector& v)const
	{
		return Vector(x_ + v.x_, y_ + v.y_);
	}

	Vector Vector::operator-(const Vector& v)const
	{
		return Vector(x_ - v.x_, y_ - v.y_);
	}

	Vector Vector::operator-()const
	{
		return Vector(-x_, -y_);
	}

	Vector Vector::operator *(double n)const
	{
		return Vector(n * x_, n * y_);
	}

	Vector operator *(double n, const Vector& v)
	{
		return v * n;
	}
	std::ostream& operator <<(std::ostream& os, const Vector& v)
	{
		if (v.mode_ == Vector::RECT)
		{
			os << "(x,y) = (" << v.x_ << "," << v.y_ << ")";
		}
		else if (v.mode_ == Vector::POL)
		{
			os << "(m,a) = (" << v.mag_ << "," << v.ang_ * RAD_TO_DEG << ")";
		}
		else
		{
			os << "Vector object mode is invalid";
		}
		return os;
	}
}