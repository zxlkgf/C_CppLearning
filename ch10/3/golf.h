#ifndef GOLF_H_
#define GOLF_H_

class golf
{
private:
	static const int Len = 40;
	char fullname[Len];
	int handicap;

public:
    golf(const char * name = "", int hc = 0);
    ~golf();
    int setgolf(void);
    void showgolf(void) const;
    void sethandicap(int hc);
};

#endif