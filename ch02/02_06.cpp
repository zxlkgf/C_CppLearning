/**
  * @description 编写一个程序，其 main() 调用一个用户定义的函数（以光年值为参数，并返回对应天文单位的值）。该程序按下面的格式要求用户输入光年值，并显示结果：
  * Enter the number of light years: 5.2
  * 4.2 light years = 266508 astronmical units.
  * 
  * 天文单位是从地球到台样的平均距离（约 150000000 公里或 93000000 英里），光年是光一年走的距离（约 10万亿公里或 6 万亿英里）
  * （除太阳外，最近的恒星大约距离地球 4.2 光年）。请使用 double 类型(参见程序清单 2.4 )，转化公式为：
  * 
  * 1光年 = 63240天文单位。
  **/

#include <iostream>

double lightYearsToAstonomicalUnits(double);

int main(int argc,char * argv[])
{
    double lightYears = 0.0;
    std::cout << "Enter the number of light years:" << std::endl;
    std::cin >> lightYears;

    std::cout << lightYears<<" light years = " << lightYearsToAstonomicalUnits(lightYears) << " astronmical units."<< std::endl;

    return 0;
}

double lightYearsToAstonomicalUnits(double lightYears){
    return lightYears * 63240;
}