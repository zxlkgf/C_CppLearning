#include "tabtenn0.h"
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