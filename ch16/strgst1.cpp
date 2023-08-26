// strgst1.cpp -- applying the STL to a string
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    using namespace std;
    string letters;
    cout << "Enter the letter grouping (quit to quit): ";
    while(cin >> letters && letters != "quit")
    {
        cout << "Permutations of " << letters << endl;
        cout << "sort before : "<< letters << endl;
        sort(letters.begin(),letters.end());
        cout << "sort after : "<< letters << endl;

        int i = 0;
        //调用next_permutawtion
        while(next_permutation(letters.begin(),letters.end()))
        {
            cout << "#" << ++i << ": " << letters << endl; 
        }
        cout << "Enter next sequence: (quit to quit): ";
    }
    
    return 0;
}