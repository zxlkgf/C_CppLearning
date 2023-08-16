#include "wine.h"
#include <iostream>
using std::cout;
using std::endl;

namespace m_wine
{
    Wine::Wine(const string & n, unsigned years_total, unsigned vintage_year[], unsigned bottles_total_[])
    : string(n),
    years_total_(years_total),
    pair<ArrayInt,ArrayInt>(
        ArrayInt(vintage_year,years_total),
        ArrayInt(bottles_total_,years_total)
        ){};
    
    Wine::Wine(const string & n, unsigned years_total)
    : string(n),
    years_total_(years_total),
    pair<ArrayInt,ArrayInt>(
        ArrayInt(years_total),
        ArrayInt(years_total)
        ){};

    const string & 
    Wine::getLabel(void)const
    {
        return (const string &)*this;
    }

    void 
    Wine::getBottles(void)
    {
        std::cout << "Enter "<< getLabel() << " data for " << years_total_ << " year(s) ---- \n";
        auto&	vintage_year_and_bottles_total = (pair<ArrayInt, ArrayInt>&)*this;
		for (unsigned i = 0; i < years_total_; ++i) {
			unsigned	vintage_year;
			std::cout << "Enter year: ";
			std::cin >> vintage_year;
			if (!std::cin) {
				std::cerr << "ERREOR! " << __FILE__ << ", " << __LINE__ << std::endl;
				exit(EXIT_FAILURE);
			}
			vintage_year_and_bottles_total.first[i] = vintage_year;

			unsigned	bottles_total;
			std::cout << "Enter bottles for that year: ";
			std::cin >> bottles_total;
			if (!std::cin) {
				std::cerr << "ERREOR! " << __FILE__ << ", " << __LINE__ << std::endl;
				exit(EXIT_FAILURE);
			}
			vintage_year_and_bottles_total.second[i] = bottles_total;
		}
    }

    void 
    Wine::show(void)const
    {
		std::cout << "Wine: " << (string &)*this << '\n';

		std::cout << '\t' << "Year" << '\t' << "Bottles" << '\n';
		for (unsigned i = 0; i < years_total_; ++i) {
			std::cout << '\t' << pair<ArrayInt,ArrayInt>::first[i] << '\t' << pair<ArrayInt,ArrayInt>::second[i] << std::endl;
		}
    }

	unsigned
	Wine::sum (void) const
	{
		return (pair<ArrayInt,ArrayInt>::second.sum());
	}

}