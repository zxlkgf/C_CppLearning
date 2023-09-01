// binary.cpp -- binary file IO
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>

inline void eatline(void){while(std::cin.get() !='\n')continue;}

struct planet
{
    char name[20];
    double population;
    double g;
};

int main(int argc, char * argv[])
{
    using namespace std;
    if(argc < 2)
    {
        cerr << "Usage: " << argv[0] << ", filename:\n";
        exit(EXIT_FAILURE);
    }
    planet pl;
    char ch;
    cout << fixed << right;
    
    // show initial contents
    ifstream fin;
    // fin.open(argv[1], ios_base::in | ios_base::binary);
    // if (fin.is_open())
    // {
    //     cout << "文件:" << argv[1] <<" 内容为: ";
    //     while(fin.read((char *)&pl,sizeof(pl)))
    //     {
    //         cout << setw(20) << pl.name << ": " 
    //         << setprecision(0) << setw(12) << pl.population
    //         << setprecision(2) << setw(16) << pl.g << endl;
    //     }
    //     fin.close();
    // }
    // add new Data
    ofstream fout(argv[1],  ios_base::out | ios_base::app | ios_base::binary);
    //NOTE: some systems don't accept the ios::binary mode
    if (!fout.is_open())
    {
        cerr << "Can't open " << argv[1] << " file for output:\n";
        exit(EXIT_FAILURE);
    }
    
    cout << "Enter planet name (enter a blank line to quit):\n";
    cin.get(pl.name, 20);
    while (pl.name[0] != '\0')
    {
        eatline();
        cout << "Enter planetary population: ";
        cin >> pl.population;
        cout << "Enter planet's acceleration of gravity: ";
        cin >> pl.g;
        eatline();
        fout.write((char *) &pl, sizeof pl);
        cout << "Enter planet name (enter a blank line "
                "to quit):\n";
        cin.get(pl.name, 20);
    }
    fout.close();

    // show input data
    fin.open(argv[1], ios_base::in | ios_base::binary);
    if(fin.is_open())
    {
        cout << "文件:" << argv[1] <<" 内容为: ";
        while(fin.read((char *)&pl,sizeof(pl)))
        {
            cout << setw(20) << pl.name << ": " 
            << setprecision(0) << setw(12) << pl.population
            << setprecision(2) << setw(16) << pl.g << endl;
        }
        fin.close();
    }
    cout << "Done!\n";
    return 0;
}