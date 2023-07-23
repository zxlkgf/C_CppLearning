/**
 * 编写一个程序，最多将10个donation值读入到一个double数组中（如果你愿意，也可以使用模板类array)
 * 程序遇到非数字输入时将结束输入，并报告这个数字的平均值以及数组中有多少个数字大于平均值
*/

#include <iostream>
const int D_Size = 10;

int main()
{
    using namespace std;
    int index = 0;
    double total = 0.0;
    double array[D_Size];
    double num ;
    int cnt = 0 ;

    while(index < D_Size && cin >>array[index])
    {
        total += array[index++];
    }
    
    double avg = total / index;
    for(int i = 0; i < index ; i++){
        if(array[i]<avg)continue;
        cnt ++;
    }
    cout << "平均值为" << avg << "，超过平均值的有" << cnt << "个。" << endl;

    return 0;
}