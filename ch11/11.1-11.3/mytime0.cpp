// mytime0.cpp -- implementing Time methods
#include <iostream>
#include "mytime0.h"

Time::Time()
{
    hours = minutes = 0;
}

Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
    hours += (m / 60);
    minutes %= 60;
    hours %= 24;
}

void 
Time::AddMin (int m)
{
    minutes += m;
    hours += minutes / 60;
    hours %=24;
    minutes %= 60;
}

void 
Time::AddHr (int h)
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

Time
Time::Sum(const Time & t) const
{
    return (Time(t.hours+hours,t.minutes+minutes));
}

void
Time::Show()const
{
    std::cout << hours << ":" << minutes << std::endl;
}