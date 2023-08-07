#include "tabtenn1.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string & fn, const string & ln, bool ht ) : firstname(fn),lastname(ln),hasTable(ht)
{
}

void 
TableTennisPlayer::Name()const
{
    std::cout << this->lastname << ", " << this->firstname ;
}

bool 
TableTennisPlayer::HasTable() const
{
    return this->hasTable;
}

void 
TableTennisPlayer::ResetTable(bool flag)
{
    this->hasTable = flag;
}

RatedPlayer::RatedPlayer (unsigned int r , const string & fn, const string & ln, bool ht) : TableTennisPlayer(fn,ln,ht),rating(r)
{
}

RatedPlayer::RatedPlayer (unsigned int r,const TableTennisPlayer & tp) : TableTennisPlayer(tp),rating(r)
{
}

unsigned int 
RatedPlayer::Rating() const
{
    return rating;
}

void 
RatedPlayer::ResetRating(unsigned int r)
{
    rating = r;
}