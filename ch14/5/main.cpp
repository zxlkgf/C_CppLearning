#include "emp.h"
#include <iostream>
using namespace std;

int main()
{
	employee em("Trip", "Harris", "Thumper");
	cout << em << endl;
	//em.ShowAll();

	manager ma("Amorphia", "Spindragon", "Nuancer", 5);
	cout << ma << endl;
	//ma.ShowAll();
	
	flink fi("Matt", "Oggs", "Oiler", "Juno Barr");
	cout << fi << endl;
	//fi.ShowAll();

	highflink hf(ma, "Curly Kew"); // recruitment?
	cout << hf << endl;
	//hf.ShowAll();
	cout << endl;
	
	cout << "Press a key for next phase:\n";
	cin.get();
	highflink hf2;
	hf2.setAll();
	cout << endl;

	cout << "Using an abstr_emp * pointer:\n";
	abstr_emp * tri[4] = {&em, &fi, &hf, &hf2};
	for (int i = 0; i < 4; i++)
		tri[i]->showAll();
	
	return 0;
}