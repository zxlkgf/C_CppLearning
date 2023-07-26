// 07_06.cpp
#include <iostream>
using namespace std;
const int SIZE = 10;

int Fill_array(double *, int);
void Show_array(double *,int);
void Reverse_array(double *,int);

int main()
{
    double input[SIZE];
    int index = Fill_array(input,SIZE);
    Show_array(input,index);
    cout << " - " << endl;
    Reverse_array(input,index);
    Show_array(input,index);
    return 0;
}

int Fill_array(double *ptr, int len)
{
    int index = 0;
    cout << "请输入最大"<< SIZE <<"个double值: 输入非数字终止输入."<<endl; 
    while(cin>>ptr[index] && index < len) index++;
    return index;
}
void Show_array(double *ptr,int len)
{
    for(int i = 0; i < len; i++)
    {
        cout<< i+1 << "# : " << ptr[i] <<endl; 
    }
}
void Reverse_array(double *ptr,int len)
{
    int start = 0;
    int end = len - 1;
    double temp = 0;
    while(start < end)
    {
       temp = ptr[start];
       ptr[start++] = ptr[end];
       ptr[end--] = temp;
    }
}