//07_04.cpp
#include <iostream>

long double calc_probability(unsigned number, unsigned pick);

int main(){
	using std::cout;
	using std::cin;
	using std::endl;

	long double probability = calc_probability(47, 5) * calc_probability(27, 1);
	cout << "你有" << std::ios_base::fixed << 1.0 / probability << "的几率" << endl;

	cout << "Bye\n";
	return 0;
}

long double calc_probability(unsigned number, unsigned pick)
{
	long double res = 1.0;
	while (pick > 0)
	{
		res *= number / pick;
		--number;
		--pick;
	}
	return res;
}