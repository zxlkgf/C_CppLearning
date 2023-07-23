#include <iostream>
#include <fstream>
#include <string>

int main()
{  
    using namespace std;
    string filename;
    cout <<"请输入需要打开的文件:"<<endl;
    cin >> filename;

    ifstream inFile;
    inFile.open(filename);
    int cnt = 0;
    char ch;
    while(inFile >> ch)
    {

        cnt ++;
    }

    cout << "该文件内总共有: " <<cnt <<" 个字符."<<endl;
    inFile.close();
    return 0;
}