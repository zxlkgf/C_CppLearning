#include <iostream>
#include <memory>

int main()
{
    using namespace std;
    auto_ptr<int> pa(new int[10]);
    return 0;
}