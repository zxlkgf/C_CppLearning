// strctfun.cpp -- functions with a structure argument
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
polar rect_to_polar(rect xypoa);
void show_polar(polar dapos);

int main(){
	using std::cout;
	using std::cin;
	using std::endl;
	rect rplace;
	polar pplace;
	
	cout << "Enter the x and y value: ";
	while (cin >> rplace.x >> rplace.y)		//slick use of cin
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
	system("pause");
	return 0;
}
// convert rectangular to polar coordinate
polar rect_to_polar(rect xypoa)
{
	using namespace std;
	polar res;
	res.distance = sqrt(xypoa.x * xypoa.x + xypoa.y * xypoa.y);
	res.angel = atan2(xypoa.y, xypoa.x);
	return res;
}
void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance;
	cout << ",angle = " << dapos.angel * Rad_to_deg << " degrees" << endl;
}