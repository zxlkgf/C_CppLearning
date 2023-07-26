// 07_10.cpp
#include <iostream>
using namespace std;

double add(double x,double y);
double sub(double x,double y);
double multi(double x,double y);
double div(double x,double y);

double calculate1(double x,double y,double (*ptr)(double x,double y));
void calculate2(double x,double y,double (*ptr[])(double x,double y));

int main()
{
    double x,y;
    cout <<"请输入2个double数字: (输入q退出)"<<endl;
    double (*pf)(double x,double y) = add;
    while(cin >> x >> y)
    {
        cout << "calculate1 = " << calculate1(x,y,pf) << endl;;
    }
    
    cin.clear();
    while( cin.get()!='\n')continue;
    cout <<"请输入2个double数字: (输入q退出)"<<endl;
    double (*pff[])(double x,double y) = {add,sub,multi,div};

    while(cin >> x >> y)
    {
        calculate2(x,y,pff);
    }

}

double calculate1(double x,double y,double (*ptr)(double x,double y))
{
    return (*ptr)(x,y);
}

void calculate2(double x,double y,double (*ptr[])(double x,double y))
{
    double *result = new double[4];
    for(int i = 0; i < 4 ; i++)
    {
       result[i] =  ptr[i](x,y);
    }
    cout << "add = " << result[0] << endl;
    cout << "sub = " << result[1] << endl;
    cout << "multi = " << result[2] << endl;
    cout << "div = " << result[3] << endl;
    delete[] result;
}

double add(double x,double y)
{
    return x + y;
}
double sub(double x,double y)
{
    return x - y;
}
double multi(double x,double y)
{
    return x * y;
}
double div(double x,double y)
{
    return x / y;
}