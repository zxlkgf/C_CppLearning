// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype>
#include "stack.h"
int main()
{
    using namespace std;
    Stack st;                   // create an empty stack
    char ch;
    customer po;
    cout << "Please enter A to add a purchase order,\nP to process a PO,or Q to quit" << endl;
    while (cin >> ch && toupper(ch) !='Q')
    {
        while(cin.get() !='\n')
        {
            continue;
        }

        if(!isalpha(ch))
        {
            cout <<'\a';
            continue;
        }
        ch = char(toupper(ch));
        switch(ch)
        {
            case 'A':
            {
                cout << "Enter a PO number to add: ";
                cout << "Enter full name :";
                cin.getline(po.fullname,32);
                cout << "Enter payment: ";
                cin >> po.payment;
                cin.get();
                if(st.isFull())
                {
                    cout << "Stack already full\n";
                }else{
                    st.push(po);
                }
                break;
            }
            case 'P':
            {
                if (st.isEmpty())
                {
                    cout << "stack already empty\n";
                }
                else
                {
                    st.pop(po);
                    st.showItem(po);
                }
                break;
            }
        }
        cout << "Please enter A to add a purchase order,\nP to process a PO,or Q to quit" << endl;
    }
    cout << "Bye\n";
    return 0;
}