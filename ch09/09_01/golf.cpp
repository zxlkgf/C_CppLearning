#include <iostream>
#include <cstring>
#include <cstdlib>
#include "golf.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname,name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    string temp;
    cout <<"请输入姓名: ";
    getline(cin,temp);
    if("" == temp)return 0;
    strcpy(g.fullname,temp.c_str());

    cout << "请输入差点: ";
    int n = 0;
    cin >> n ;
    if(!n)
    {
        return 0;
    }
    g.handicap = n;
    cin.get();//    去除换行符

    return 1;
}


// function resets handicap to new value
void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

// function displays contents of golf structure
void showgolf(const golf & g)
{
    cout << "fullname : " << g.fullname << ", handicap : " << g.handicap << endl;
}