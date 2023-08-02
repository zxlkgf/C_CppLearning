// stock20.cpp -- argument version
// version 20
#include <iostream>
#include "stock20.h"

// constructors (verbose versions)
Stock::Stock()				// default constructor
{
	std::cout << "Default constructor called." << std::endl;
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;

}

Stock::Stock(const std::string& co, long n, double pr)
{
	std::cout << "Constructor using " << co << " called" << std::endl;
	this->company = co;
	if (n < 0)
	{
		std::cout << "Number of shares cant't be negative;"
			<< company << "share set to 0" << std::endl;
	}
	else {
		shares = n;
	}
	share_val = pr;
	set_tot();
}

// class destructor
Stock::~Stock()
{
}

void
Stock::buy(long num, double price)
{
	if (num < 0)
	{
		std::cout << "Number of shares puchased can't be negative:"
			<< "Transaction is aborted." << std::endl;
	}
	else {
		shares += num;
		share_val = price;
		set_tot();
	}
}

void 
Stock::sell(long num, double price)
{
	using std::cout;
	using std::endl;
	if (num < 0)
	{
		cout << "Number of shares sold can't be negative:"
			<< "Transaction is aborted." << endl;
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have!"
			<< "Transaction is aborted." << endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void
Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void
Stock::show() const
{
	using std::cout;
	using std::endl;
	// setformat to #.###
	std::ios_base::fmtflags orig =
		cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
	std::streamsize prec = std::cout.precision(3);

	cout << "Company: " << company
		<< ", Shares: " << shares << endl;
	cout << " Share Price: $" << share_val;
	// setformat to #.##
	cout.precision(2);
	cout << " Total Worth: $" << total_val << endl;
	// restore original format
	cout.setf(orig);
	cout.precision(prec);
}

const Stock& Stock::topval(const Stock& s)const
{
	if (s.total_val > this->total_val)
	{
		return s;
	}
	else
	{
		return *this;
	}
}