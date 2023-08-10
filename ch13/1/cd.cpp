#include "cd.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::cin;

void cpChar(char * dest, const char * src, unsigned dest_size)
{
    unsigned s_len = strlen(src) < dest_size ? strlen(src) : dest_size;
    strncpy(dest,src,s_len);
    dest[s_len] = 0;
}

Cd::Cd(const char * s1,const char * s2, int n, double x):selections(n),playtime(x)
{
    cpChar(performers,s1,50);
    cpChar(label,s2,20);
}

Cd::Cd(const Cd & d):selections(d.selections),playtime(d.playtime)
{
    memset(performers,0,50);
    memset(label,0,20);
    cpChar(performers,d.performers,50);
    cpChar(label,d.label,20);
}

Cd::Cd():selections(0),playtime(0.0)
{
    memset(performers,0,50);
    memset(label,0,20);
    cpChar(performers,"NONE",50);
    cpChar(label,"NONE",20);
}

Cd::~Cd()
{
    memset(performers,0,50);
    memset(label,0,20);
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
    cpChar(performers,d.performers,50);
    cpChar(label,d.label,20);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}


Classic::Classic(const char * songList,const char * s1, const char * s2, int n, double x):Cd(s1,s2,n,x)
{
    memset(m_song,0,max_num);
    cpChar(m_song,songList,max_num);
}

void 
Classic::Report() const
{
    Cd::Report();
    cout << "Song name : " << m_song << endl;
} 