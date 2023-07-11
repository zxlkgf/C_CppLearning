/**
  * @description 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
  * 
  * Enter your age: 29
  *
  */
#include <iostream>

int yearToMonth(int);


int main(int argc,char * argv[])
{
    int age = 0;
    std::cout << "Enter your age:" <<std::endl;
    std::cin >> age;

    std::cout << "month = " <<yearToMonth(age) <<std::endl;

    return 0;
}

int yearToMonth(int year){
    return year * 12;
}