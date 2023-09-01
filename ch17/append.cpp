// append.cpp -- appending information to a file
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int argc, char * argv[])
{
    using namespace std;
    if(argc <= 1)
    {
        cerr << "Usage : " << argv[0] << " , filename.\n";
    }
    char ch;

    // show initial contents
    ifstream fin;
    fin.open(argv[1], ios_base::in);

    if(fin.is_open())
    {
        cout << "Here are the current contents of the " << argv[1] << " file:\n";
        while(fin.get(ch))
        {
            cout << ch;
        }
        fin.close();
    }

    // add new names;
    ofstream fout(argv[1], ios_base::out | ios_base::app);
    if(!fout.is_open())
    {
        cerr << "Can't open " << argv[1] << " file for output.\n";
        exit(EXIT_FAILURE);
    }

    cout << "Enter guest names (enter a blank line to quit: \n";
    string name;
    while(getline(cin, name) && name.size() > 0)
    {
        fout << name << endl;
    }
    fout.close();

    // show revised file
    fin.clear();
    fin.open(argv[1]);
    if (fin.is_open())
    {
        cout << "Here are the new contents of the " << argv[1] << " file:\n";
        while(fin.get(ch))
        {
            cout << ch;
        }
        fin.close();
    }
    cout << "Done.\n";
    return 0;
}