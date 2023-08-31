// peeker.cpp -- some istream methods
#include <iostream>
#include <bitset>

int main()
{
    using namespace std;
    // read and echo input up to a # character
    char ch;
    
    while(cin.get(ch))
    {
        if(ch != '#') cout << ch;
        else
        {
            cin.putback(ch);
            break;
        }
    }
    cout << bitset<16>(cout.eofbit);
    if(cin.eof())
    {
        cout << "End of file reached.\n";
        exit(0);
    }
    else
    {
        cin.get(ch);
        cout << endl << ch << " is next input character.\n";
    }

    while(cin.peek()!='#')
    {
        cin.get(ch);
        cout << ch;
    }

    if(!cin.eof())
    {
        cin.get(ch);
        cout << endl << ch << " is next input character.\n";
    }else
    {
        cout << "End of file reached.\n";
    }
    return 0;
}