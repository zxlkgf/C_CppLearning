#include "cd1.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

char * cpChar(const char * src)
{
    unsigned s_len = strlen(src);
    char *dest = new char[s_len + 1];
    strncpy(dest,src,s_len);
    dest[s_len] = 0;
    return dest;
}

Cd::Cd(const char * s1,const char * s2, int n, double x):selections(n),playtime(x)
{
    performers = cpChar(s1);
    label = cpChar(s2);
}

Cd::Cd(const Cd & d):selections(d.selections),playtime(d.playtime)
{
    performers = cpChar(d.performers);
    label = cpChar(d.label);
}

Cd::Cd():selections(0),playtime(0.0)
{
    performers = cpChar("NONE");
    label = cpChar("NONE");
}

Cd::~Cd()
{
    std::cout << "delete performers" << std::endl;
    delete[] performers;
    delete[] label;
}

void 
Cd::Report() const
{
    cout << "performers : " << performers << endl;
    cout << "label : " << label << endl;
    cout << "selections : " << selections << endl;
    cout << "playtimes : " << playtime << endl;
}

Cd & 
Cd::operator=(const Cd & d)
{
    if(this == &d)return *this;
    performers = cpChar(d.performers);
    label = cpChar(d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


Classic::Classic(const char * songList,const char * s1, const char * s2, int n, double x):Cd(s1,s2,n,x)
{
    m_song = cpChar(songList);
}

void 
Classic::Report() const
{
    Cd::Report();
    cout << "Song name : " << m_song << endl;
} 

Classic & 
Classic::operator= (const Classic & c)
{
    if(this == &c)return *this;
    delete[] m_song;
    m_song = cpChar(c.m_song);
    Cd::operator=((const Cd &)c);
    return *this;
}

Classic::Classic (const Classic & c):Cd(c)
{
    m_song = cpChar(c.m_song);
}

 
Classic::~Classic()
{
    std::cout << "delete m_song" << std::endl;
    delete[] m_song;
}