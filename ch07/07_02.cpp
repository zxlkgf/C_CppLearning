// 07_02.cpp
#include <iostream>
const int SIZE = 10;

int input_golfscores(double *,unsigned);
void show_golfscores(const double *,unsigned);
void calc_avg(const double *,unsigned);

int main()
{
    double golfscores[SIZE];
    int index = input_golfscores(golfscores,SIZE);
    show_golfscores(golfscores,index);
    calc_avg(golfscores,index);

    return 0;
}



int input_golfscores(double *ptr,unsigned len)
{
    using namespace std;
    cout << "请输入不超过"<< len <<"个高尔夫成绩" << endl;
    int index = 0;
    while(cin >> ptr[index] && index < len){
        index ++;
    }
    return index;
}
void show_golfscores(const double *ptr,unsigned len)
{
    using namespace std;
    for(int i = 0;i < len; i++)
    {
        cout << i+1 << "# : "<< ptr[i]<<endl;
    }
}
void calc_avg(const double *ptr,unsigned len)
{
    using namespace std;
    double total = 0.0;
    for(int i = 00; i < len; i++)
    {
        total += ptr[i];
    }
    cout << "avg = " << total / len << endl;
}