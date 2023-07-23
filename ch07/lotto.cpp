// lotto.cpp -- probability of winning
#include <iostream>
// Note : some implementions require double instead of long double
long double probability(unsigned numbers,unsigned picks);

int main()
{
    using namespace std;
    double total,choices;
    cout <<"Enter the total number of choices on the game card and the number of pick allowed: "<<endl;
    while((cin>>total >> choices) && choices <= total)
    {
        cout << "You have one chance in " << probability(total,choices) <<" of winning." <<endl;
        cout << "Next two numbers(q to quit): ";
    }
    cout <<"bye\n";

    return 0;
}

// the following function calculates the probablity of picking picks
// numbers correctly form numbers choices
long double probability(unsigned numbers,unsigned picks){
    long double result = 1.0;               // here come some local variable
    long double n;
    unsigned p;
    
    for(n = numbers, p = picks;p>0;p--,n--){
        result *= n/p;
    }
    return result;
}