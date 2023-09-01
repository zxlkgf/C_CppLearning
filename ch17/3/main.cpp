#include <iostream>
#include <fstream>
#include <cstring>


int main(int argc, char *argv[])
{
    using namespace std;

    if(argc != 3)
    {
        cerr << "Usage:" << argv[0] << " readFile writeFile" << endl;
        exit(EXIT_FAILURE); 
    }
    
    ifstream fin;
    fin.open(argv[1],ios_base::in);
    ofstream fout;
    fout.open(argv[2],ios_base::out);
    if(!fin.is_open() || !fin.is_open())
    {
        cerr << "文件打不开" << endl;
        exit(EXIT_FAILURE);
    }

    char buf[128];
    while(fin.getline(buf,128))
    {
        fout << buf << endl;;
    }
    cout << "Done!" << endl;

    return 0;
}