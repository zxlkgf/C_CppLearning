// calling.cpp -- defining,prototyping,and calling a function
#include <iostream>

void simple();                          // function prototye

int main()
{
    using namespace std;
    cout << "main() will call the simple() function:\n";
    simple();
    cout << "main() is finished with the simple() funciton.\n";

    return 0;
}

//funciton definition
void simple(){
    using namespace std;
    cout << "I'm but a simple function.\n";
}