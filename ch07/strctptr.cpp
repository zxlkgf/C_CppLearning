// strptr.cpp -- functions with a pointer arguments
#include <iostream>
#include <cmath>

// structure declaretions
struct polar
{
	double distance;				// distance from origin
	double angel;					// direction from origin
};
struct rect
{
	double x;						// horizontal distance from origin
	double y;						// vertical distance from origin
};

// prototypes
void rect_to_polar(const rect *pxy,polar * pda);
void show_polar(const polar *pda);

int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	rect rplace;
	polar pplace;
	
	cout << "Enter the x and y value: ";
	while (cin >> rplace.x >> rplace.y)		//slick use of cin
	{
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
	system("pause");
	return 0;
}
// convert rectangular to polar coordinate
void rect_to_polar(const rect* pxy, polar* pda)
{
	using namespace std;
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angel = atan2(pxy->y, pxy->x);
}
void show_polar(const polar* pda)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << pda->distance;
	cout << ",angle = " << pda->angel * Rad_to_deg << " degrees" << endl;
}
