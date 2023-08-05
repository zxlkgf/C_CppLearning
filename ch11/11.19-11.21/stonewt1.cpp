// stonewt1.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt1.h"


Stonewt::Stonewt()
{
	stone = pounds = pds_left = 0;
}

Stonewt::Stonewt(double lbs)
{
	this->stone = int(lbs) / Lbs_per_stn;
	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
	this->pounds = lbs;
}

Stonewt::Stonewt(int stn, double lbs)
{
	this->stone = stn;
	pds_left = lbs;
	pounds = stn * Lbs_per_stn + lbs;
}

Stonewt::~Stonewt()
{
}

void
Stonewt::show_stn()const
{
	cout << stone << " stone, " << pds_left << "pounds\n";
}

void
Stonewt::show_lbs()const
{
	cout << pounds << " pounds\n";
}

Stonewt::operator int() const
{
	return int(pounds + 0.5);

}

Stonewt::operator double() const
{
	return double(pounds);
}