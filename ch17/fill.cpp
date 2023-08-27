// fill.cpp -- changing fill character for fields
#include <iostream>

int main()
{
    using namespace std;
    cout.fill('*');
    const char * stuff[2] = {"Waldo Whipsnade", "Wilmarie Wooper"};
    long bounus[2] = {900, 1350};
    for (int i = 0; i < 2; i ++)
    {
        cout << stuff[i] << ": $";
        cout.width(7);
        cout << bounus[i] << endl;
    }
    return 0;
}

// 注意 cout.fill()填充的字符长期有效。