//07_03.cpp
#include <iostream>
struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(const box);
void calc_volume_value(box *);

int main(){
	using std::cout;
	using std::cin;
	using std::endl;

	box	b = { "BigBro", 12, 8, 6, 0 };

	calc_volume_value(&b);
	show_box(b);

	cout << "Bye\n";
	return 0;
}

void show_box(const box b)
{
	using namespace std;
	cout << "maker name : " << b.maker
		<< "\n height : " << b.height
		<< "\n weight : " << b.width
		<< "\n length : " << b.length
		<< "\n volume : " << b.volume << endl;
}
void calc_volume_value(box* b)
{
	b->volume = b->height * b->width * b->length;
}

