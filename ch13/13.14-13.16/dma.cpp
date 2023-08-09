// dma.cpp -- dma class methods

#include <iostream>
#include "dma.h"

//baseDMA methods
baseDMA::baseDMA(const char * l, int r):rating(r)
{
    this->label = new char[std::strlen(l) + 1];
    std::strncpy(this->label,l,std::strlen(l));
}
    
baseDMA::baseDMA(const baseDMA & rs)
{
    this->label = new char[std::strlen(rs.label) + 1];
    std::strncpy(this->label,rs.label,std::strlen(rs.label));
}

baseDMA::~baseDMA()
{
    delete[] this->label;
}

baseDMA & 
baseDMA::operator= (const baseDMA & rs)
{
    if (this == &rs)return *this;
    delete[] this->label;
    this->label = new char[std::strlen(rs.label) + 1];
    strncpy(this->label,rs.label,std::strlen(rs.label));
    this->rating = rs.rating;
    return *this;
}

std::ostream& 
operator<<(std::ostream & os, const baseDMA & rs)
{
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}


//lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r):baseDMA(l,r)
{
    strncpy(this->color,c,39);
    this->color[30] = '\0';
}

lacksDMA::lacksDMA(const char * c,const baseDMA & rs):baseDMA(rs)
{
    strncpy(this->color,c,39);
    this->color[30] = '\0';
}

std::ostream& operator<<(std::ostream & os, const lacksDMA & rs)
{
    os << (const baseDMA &)rs;
    os << "Color: " << rs.color << std::endl;
    return os;
}

//hasDMA methods
hasDMA::hasDMA(const char * s, const char * l,int r):baseDMA(l,r)
{
    this->style = new char[std::strlen(s) + 1];
    strncpy(this->style,s,std::strlen(s));
}

hasDMA::hasDMA(const char * s, const baseDMA & rs):baseDMA(rs)
{
    this->style = new char[std::strlen(s) + 1];
    strncpy(this->style,s,std::strlen(s));
}

hasDMA::hasDMA(const hasDMA & hs):baseDMA((const baseDMA &)hs)
{
    this->style = new char[std::strlen(hs.style) + 1];
    strncpy(this->style,hs.style,std::strlen(hs.style));
}

hasDMA::~hasDMA()
{
    delete[] this->style;
}

hasDMA & 
hasDMA::operator=(const hasDMA & hs)
{
    if(this == &hs)return *this;
    delete[] this->style;
    this->style = new char[std::strlen(hs.style) + 1];
    strncpy(this->style,hs.style,std::strlen(hs.style));
    return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & rs)
{
    os << (const baseDMA &)rs;
    os << "Style: " << rs.style << std::endl;
    return os;
}