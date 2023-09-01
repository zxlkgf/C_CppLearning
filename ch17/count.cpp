// count.cpp -- couting characters in a list of files
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc,char * argv[])
{
    using namespace std;
    if (argc == 1)      // quit if no arguments
    {
        cerr << "Usage: " << argv[0] << " filenames[s]\n";
        exit(EXIT_FAILURE);
    }
    ifstream fin;               // open stream
    long cnt;
    long total = 0;
    char ch;

    for (int file = 1; file < argc; file ++)
    {
        fin.open(argv[file]);
        if(!fin.is_open())
        {
            cerr << "Can't open " <<  argv[file] << endl;
            fin.clear();
            continue;
        }
        cnt = 0;
        while (fin.get(ch))cnt++;
        cout << cnt << " characters in " << argv[file] << endl;
        total += cnt;
        fin.clear();
        fin.close();
    }
    cout << total << " characters in all files\n";

    return 0;
}