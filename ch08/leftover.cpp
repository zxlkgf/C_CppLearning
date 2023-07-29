// leftover.cpp -- overloading the left() funciton
#include <iostream>
unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);

int main()
{
    using namespace std;
    const char * trip = "Hawaiii!!";
    unsigned long n = 12345678;
    int i = 0;
    char * temp;
    for(i = 1; i < 10; i++)
    {
        cout << left(n,i) << endl;
        temp = left(trip,i);
        cout << temp << endl;
        delete [] temp;
    }
    return 0;
}
// the function returns the first ct digits of the number num;
unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;
    if(ct == 0 || num == 0)
    {
        return 0;           // return 0 if no digits
    }
    while(n/=10)
    {
        digits++;
    }
    if(digits > ct)
    {
        ct = digits - ct;
        while(ct --)
        {
            num /= 10;
        }
        return num;
    }else
    {
        return num;
    }
}
char * left(const char * str, int n)
{
    if(n < 0)
    {
        n = 0;
    }
    char *ps = new char[n + 1];
    int i;
    for(i = 0; i < n && str[i];i++)
    {
        ps[i] = str[i];
    }
    while(i <= n)
    {
        ps[i++] = '\0';
    }
    return ps;
}