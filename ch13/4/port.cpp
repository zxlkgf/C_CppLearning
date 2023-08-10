#include "port.h"


char * cpStr(const char * src)
{
    unsigned int s_len = strlen(src) ;
    char * dest = new char[s_len + 1];
    strncpy(dest,src,s_len);
    dest[s_len] = 0;
    return dest;
}

Port::Port(const char * br, const char * st, int b):bottles(b)
{
    brand = cpStr(br);
    style = cpStr(st);
}

Port::Port(const Port & p):bottles(p.bottles)
{
    brand = cpStr(p.brand);
    style = cpStr(p.style);
}

Port::~Port()
{
    delete[] brand;
    delete[] style;
}

Port & 
Port::operator= (const Port & p)
{
    if(this == & p)return *this;
    delete[] brand;
    delete[] style;
    brand = cpStr(p.brand);
    style = cpStr(p.style);
    bottles = p.bottles;
    return *this;
}

Port & 
Port::operator+= (int b)
{
    bottles+=b;
    return *this;
}
    
Port & 
Port::operator-= (int b)
{
    bottles-=b;
    return *this;
}

void 
Port::show()const
{
    std::cout << "Brand:" <<brand << std::endl;
    std::cout << "style: " << style << std::endl;
    std::cout << "bottles: " << bottles << std::endl;
}

std::ostream& operator<<(std::ostream &os,const Port & p)
{
    os << "Brand:" <<p.brand << "\n";
    os << "style: " << p.style << "\n";
    os << "bottles: " << p.bottles << "\n";
    return os;
}


VintageProt::VintageProt(const char * br, const char * st ,int b, const char *nn , int y):Port(br,st,b),year(y)
{
    nickname = cpStr(nn);
}

VintageProt::VintageProt(const VintageProt & vp):Port(vp),year(vp.year)
{
    nickname = cpStr(vp.nickname);
}

VintageProt & 
VintageProt::operator=(const VintageProt & vp)
{
    if(this == &vp)return *this;
    Port::operator=(vp);
    delete[] nickname;
    nickname = cpStr(vp.nickname);
    year = vp.year;
    return *this;
}

void 
VintageProt::show()const
{
    Port::show();
    std::cout << "nickname: " << nickname << std::endl;
    std::cout << "year : " << year << std::endl;
}

std::ostream& operator<<(std::ostream &os,const VintageProt & p)
{

    os << "nickname: " << p.nickname << "\nyear: " << p.year << std::endl;
    return os;

}