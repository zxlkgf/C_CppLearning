// 08_04.cpp
#include <iostream>
using namespace std;
#include <cstring>              // for strlen() strcpy()
struct stringy
{
    char * str;                 // poingt to string
    int ct;                     //length of string (not count '\0)
};

// prototypes for set(),show(),and show() go here
void set(stringy &sg,const char * str)
{
    sg.ct = strlen(str);
    sg.str = new char[sg.ct + 1];
    strncpy(sg.str,str,sg.ct);
    sg.str[sg.ct + 1] = '\0';
}

void show(const stringy & sg,int n = 1)
{
    for(int i = 0;i < n; i++)
    {
        cout << sg.str << endl;
    }
}

void show(const char * str, int n = 1)
{
    for(int i = 0;i < n; i++)
    {
        cout << str << endl;
    }
}

void destroy(stringy &sg)
{
    delete [] sg.str;
    sg.str = NULL;
}

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany,testing);         // first argument is a reference;
                                // allocates space to hold copy of testing
                                // sets str number of beany to point to the new block,copies testing to new block and sets ct mumber of beany
    show(beany);                // prints member string once
    show(beany,2);              // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);              // prints testing string once;
    show(testing,3);            // prints testing string thrice
    show("DONE!");
    destroy(beany);
    return 0;
}