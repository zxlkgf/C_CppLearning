#include "port.h"
using namespace std;

int main()
{
    Port port1("gallo", "tawny", 20);
	cout << port1 << endl;
	VintageProt	vp("gallo", "NONE",24, "nice", 16);
	VintageProt	vp2(vp);
	cout << vp2 << endl << endl;
	VintageProt	vp3;
	vp3 = vp;
	cout << vp3 << endl << endl;
	Port*	p_port;
	p_port = &port1;
	p_port->show();
	cout << endl;
	p_port = &vp;
	p_port->show();
	cout << endl;
	return 0;
}