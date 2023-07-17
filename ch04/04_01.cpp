#include <iostream>
#include <string>

int main(int argc,char * argv[])
{
    using namespace std;
    cout << "What is your first name?" <<endl;
    string name;
    getline(cin,name);
    
    cout << "what is your last name?" <<endl;
    string last_name;
    getline(cin,last_name);

    cout << "what letter grade do you deserve?" << endl;
    char letter;
    cin.get(letter);

    cout << "What is your age?" << endl;
    int age;
    cin >> age;

    cout << "Name : " << last_name <<"," << name <<endl;
    cout << "Grade : " <<letter << endl;
    cout << "Age : " << age <<endl;

    return 0;
}
