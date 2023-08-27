// write()
// basic_ostream<charT,traits>& write(const char_type * s, streamsize n);

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    const char * state1 = "Florida";
    const char * state2 = "Kansas";
    const char * state3 = "Euphoria";
    int len = strlen(state2);
    cout << "Increasing loop index:\n";
    int i;
    for (i = 1; i <= len; i++)
    {
        cout.write(state2,i);
        cout << endl;
    }

    // concatenate output
    cout << "Decreasing loop index :\n";
    for(i = len; i > 0; i--)
    {
        cout.write(state2,i) << endl;
    }
    // exceed string length
    cout << "Exceeding string length:\n";
    cout.write(state2, len + 5) << endl;
    return 0;
}