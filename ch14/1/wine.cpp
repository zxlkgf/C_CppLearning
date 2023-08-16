#include <iostream>
#include "wine.h"

namespace m_wine
{
    Wine::Wine(const string & n, unsigned years_total, unsigned vintage_year[], unsigned bottles_total_[]):
    name_(n),
    years_total_(years_total),
    vintage_year_and_bottles_total_(ArrayInt(vintage_year,years_total_),ArrayInt(bottles_total_,years_total_))
    {}


    Wine::Wine(const string & n, unsigned years_total):name_(n),years_total_(years_total){}

    const string & 
    Wine::getLabel(void)const
    {
        return name_;
    }

    void 
    Wine::getBottles(void)
    {
        std::cout << "Enter "<< name_ << " data for " << years_total_ << " year(s) ---- \n";

		for (unsigned i = 0; i < years_total_; ++i) {
			unsigned	vintage_year;
			std::cout << "Enter year: ";
			std::cin >> vintage_year;
			if (!std::cin) {
				std::cerr << "ERREOR! " << __FILE__ << ", " << __LINE__ << std::endl;
				exit(EXIT_FAILURE);
			}
			vintage_year_and_bottles_total_.first[i] = vintage_year;

			unsigned	bottles_total;
			std::cout << "Enter bottles for that year: ";
			std::cin >> bottles_total;
			if (!std::cin) {
				std::cerr << "ERREOR! " << __FILE__ << ", " << __LINE__ << std::endl;
				exit(EXIT_FAILURE);
			}
			vintage_year_and_bottles_total_.second[i] = bottles_total;
		}
    }

	void
	Wine::show (void) const
	{
		std::cout << "Wine: " << name_ << '\n';

		std::cout << '\t' << "Year" << '\t' << "Bottles" << '\n';
		for (unsigned i = 0; i < years_total_; ++i) {
			std::cout << '\t' << vintage_year_and_bottles_total_.first[i] << '\t' << vintage_year_and_bottles_total_.second[i] << std::endl;
		}
	}

	unsigned
	Wine::sum (void) const
	{
		return (vintage_year_and_bottles_total_.second.sum());
	}
}