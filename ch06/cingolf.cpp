// cingolf.cpp  -- non-numeric input slopped
#include<iostream>
const int Max = 5;

int main()
{
    using namespace std;
    int golf[Max];
    cout << "please enter your golf scores.\n"
        <<"you must enter" << Max <<" rounds."<<endl;
    int i;
    for (i = 0;i < Max; i++){
        cout << "Round #"<<i+1 <<": ";
        while(!(cin>>golf[i])){
            cin.clear();
            while((cin.get())!='\n'){
                continue;
            }
            cout << "Please enter a number: ";
        }
    }
    // calculate average
    double total = 0.0;
    for(int x : golf){
        total += x;
    }
    // report results
    cout << total/Max << " = average score " << Max <<" rounds\n";
    
    return 0;
}