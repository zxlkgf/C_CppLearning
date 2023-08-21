#include <iostream>
#include <vector>
#include <string>
#define NUM 5

int main()
{
    using namespace std;
    vector<int> rattings(NUM);
    vector<string> titles(NUM);
    cout << "you will do exactly as told. you will enter\n" << NUM << " book titles and your ratings (1-10).\n";
    int i;
    for(i = 0; i < NUM; i++)
    {
        cout << "Enter title #" << i+1 <<": ";
        getline(cin,titles[i]);
        cout << "Enter rating(0 - 10): ";
        cin >> rattings[i];
        cin.get();
    }
    cout << "Thank you. You entered the following:\n"
          << "Rating\tBook\n";
    for(i = 0;i < NUM; i++)
    {
        cout << rattings[i] << "\t" << titles[i] << endl;
    }
    return 0;
}