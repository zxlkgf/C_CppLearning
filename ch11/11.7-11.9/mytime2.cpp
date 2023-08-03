// mytime2.cpp -- implementing Time methods
#include <iostream>
#include "mytime2.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{

    h > 0?hours = h : hours = 0;
    m > 0?minutes = m : minutes = 0;
    hours += (m / 60);
    minutes %= 60;
    hours %= 24;
}

void
Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    hours %= 24;
    minutes %= 60;
}

void
Time::AddHr(int h)
{
    hours += h;
    hours %= 24;
}

void
Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

void
Time::Show()const
{
    std::cout << hours << ":" << minutes << std::endl;
}

Time
Time::operator+(const Time& t)const
{
    return (Time(t.hours + hours, t.minutes + minutes));
}

Time
Time::operator-(const Time& t)const
{
    int total1, total2;
    total1 = this->hours * 60 + this->minutes;
    total2 = t.hours * 60 + t.minutes;
    return Time(0, total1 - total2);
}

Time
Time::operator*(double n)const
{
    int total = this->hours * 60 + this->minutes;
    total *= n;
    return Time(0, total);
}