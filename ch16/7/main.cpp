#include <iostream>
#include <vector>
#include <unordered_set>
#include <ctime>
#include <algorithm>

std::vector<int> lotto(int,int);
void show(int n){ std::cout << n << " ";}

int main()
{   
    using namespace std;
    vector<int> ans = lotto(51,6);
    for_each(ans.begin(),ans.end(),show);
    cout << endl;
    return 0;
}

std::vector<int> lotto(int range,int total)
{
    using namespace std;
    unordered_set<int> ans;
    if(range < total)
    {
        return vector<int>(ans.begin(),ans.end());
    }

    srand(time(0));
    while(ans.size() < total)
    {
        ans.insert((rand() % range) + 1);
    }
    return vector<int>(ans.begin(),ans.end());
}