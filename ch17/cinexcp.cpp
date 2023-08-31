// cinexcp.cpp -- having cin throw an exception
#include <iostream>
#include <exception>
#include <bitset>

int main()
{
    using namespace std;
    // have failbit cause an exception to be thrown
    cout << "ios_base::failebit = " << bitset<16>(ios_base::failbit) << endl;
    cin.exceptions(ios_base::failbit);
    int sum = 0;
    int input = 0;
    try
    {
        while(cin >> input)
        {
            sum += input;
        }
    }
    catch(ios_base::failure & bf)
    {
        std::cerr << bf.what() << '\n';
    }
    
    cout << "Last value entered = " << input << endl;
    cout << "Sum = " << sum << endl;
    

    return 0;
}