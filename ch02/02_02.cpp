/**
  * @description 编写一个C++程序，它要求用户输入一个 以 long 为单位的距离，然后将它转为码(一 long 等于 220 码)
  *
  **/

#include <iostream>

double transferLong(double);

int main(int argc,char * argv[])
{
    double inputNum;
    std::cout<<"请输入需要转化的值:";
    std::cin>>inputNum;

    std::cout<<"转化后的值为:"<<transferLong(inputNum)<<std::endl;
    return 0;
}

double transferLong(double a){
    return a * 220.0;
}