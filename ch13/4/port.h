#ifndef PORT_H_
#define PORT_H_
#include <iostream>
#include <cstring>
class Port
{
private:
    char * brand;
    char * style;
    int bottles;
public:
    Port(const char * br = "NONE", const char * st = "NONE", int b = 0);
    Port(const Port & p);
    virtual ~Port();
    Port & operator= (const Port & p);
    Port & operator+= (int b);
    Port & operator-= (int b);
    int BootleCount() const {return bottles;}
    virtual void show()const;
    friend std::ostream& operator<<(std::ostream &os,const Port & p);
};

class VintageProt:public Port
{
private:
    char *nickname;
    int year;
public:
    VintageProt(const char * br = "NONE", const char * st = "NONE",int b = 0, const char *nn = "NONE", int y = 0);
    VintageProt(const VintageProt & vp);
    ~VintageProt(){delete[] nickname;}
    VintageProt & operator=(const VintageProt & vp);
    void show()const;
    friend std::ostream& operator<<(std::ostream &os,const VintageProt & p);
};

static char* cpStr(const char * src);
#endif