#include <iostream>
#include <fstream>

int main(int argc, char * argv[])
{
    using namespace std;
    if(argc != 4)
    {
        cerr << "Usage " << argv[1] << "inputfile1 inputfil2 outputfile" << endl;
        exit(EXIT_FAILURE);
    }
    const unsigned m_size = 256;
    char buf[m_size];

    ifstream fin1;
    fin1.open(argv[1],ios_base::in);
    ifstream fin2;
    fin2.open(argv[2],ios_base::in);

    ofstream fout;
    fout.open(argv[3],ios_base::out);

    if(!fin1.is_open() || !fin2.is_open() || !fout.is_open())
    {
        cerr << "文件打开错误!"<<endl;
        exit(EXIT_FAILURE);
    }

    while(1)
    {   string left,right;
        getline(fin1,left);
        getline(fin2,right);
        fout << left << ' ' << right << endl;
        if(fin1.eof() && fin2.eof())
        {
            break;
        }
    }
    cout << "DONE!" << endl;
    return 0;
}