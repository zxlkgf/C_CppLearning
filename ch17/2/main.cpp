#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char * argv[])
{
    using namespace std;
    if(argc < 2)
    {
        cerr << "Usage: " << argv[0] << ", filename\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout;
    fout.open(argv[1],ios_base::out | ios_base::app);

    const char end = '#';
    const unsigned int m_size = 128;
    char tempstr[m_size];

    cout << "请输入需要存入文件的字符串,文件尾设置为:"<< end << endl;
    while (cin.get(tempstr,m_size,end) && tempstr[0]!='#')
    {
        cout  << "当前输入为: " << tempstr << endl;
        fout.write(tempstr,strlen(tempstr));
        memset(tempstr,0,m_size);
        //清除状态
        cin.clear();
        if(cin.get()!='\n')
        {
            cin.ignore(m_size,'\n');
        }
        cout << "请输入需要存入文件的字符串,文件尾设置为:"<< end << endl;
    }

}