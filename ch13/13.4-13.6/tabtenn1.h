// tabtenn1.h -- a table-tennis base class
#ifndef TABTENN1_H_
#define TABTENN1_H_
#include <string>
using std::string;
using namespace std;
// simple base class
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer(const string & fn = "none", const string & ln = "none", bool ht = false);
    void Name()const;
    bool HasTable() const;
    void ResetTable(bool flag);
};

// simple derived rating
class RatedPlayer : public TableTennisPlayer
{
private:
    unsigned int rating;
public:
    RatedPlayer (unsigned int r = 0, const string & fn = "none", const string & ln = "none", bool ht = false);
    RatedPlayer (unsigned int r,const TableTennisPlayer & tp);
    unsigned int Rating() const ;
    void ResetRating(unsigned int r);
};

#endif