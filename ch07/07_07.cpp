// arrfun3.cpp -- array functions and const 
#include <iostream>
const int Max = 5;

//function prototypes
double * fill_array(double *ar, double *arend);
void show_array(const double *ar,double *arend);           // don't change data
void revalue(double r,double *ar,double *arend);

int main()
{
    using namespace std;
    double properties[Max];
    double * end = fill_array(properties,properties+Max);
    show_array(properties,end);
    if(end > properties){
        cout << "Enter revaluation factor: ";
        double factor;
        while( !(cin>>factor))                      // bad input 
        {
            cin.clear();
            while(cin.get()!='\n')continue;
            cout << "Bad input;please enter a number : ";
        }
        revalue(factor,properties,end);
        show_array(properties,end);
    }
    cout << "Done.\n";
    return 0;
}

double * fill_array(double *ar, double *arend)
{
    using namespace std;
    double temp;
    double * ptr = ar;
    while(ptr != arend)
    {
        cout << "Enter value : ";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get()!='\n')continue;
            cout << "Bad input;please enter a number : ";
            break;
        }else if( temp < 0) // signal to teminate
        {
            break;
        }
        *ptr = temp;
        ptr++;
    }
    return ptr;
}
// the following function can use, but not alter
// the array whose address is ar
void show_array(const double *ar,double *arend)  
{
    using namespace std;
    while(ar != arend)
    {
        cout << "Property : $";
        cout <<*ar<<endl;
        ar++;
    }
}
// multiplies each element of ar[] by r
void revalue(double r,double *ar,double *arend)
{
    while(ar != arend)
    {
        *ar *= r;
        ar++;
    }
}