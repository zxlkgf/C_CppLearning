/**
  * @description 编写一个程序，其中的 main() 调用一个用户定义的函数（以摄氏问度值为参数，并返回相应的华氏问度值）该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
  * 
  * Please enter a Celsius value: 20
  * 20 degrees Celsius is 68 degrees Fahrenheit
  * 
  * 下面是转化公式
  * 
  * 华氏温度 = 1.8 * 摄氏温度  + 32.0
  */
#include <iostream>

double celsiusToFahrenheit(double celsius);


int main(int argc,char * argv[])
{
    double celsius = 0.0;
    std::cout << "Please enter a Celsius value:"<< std::endl;
    std::cin >> celsius;

    std::cout << celsius <<" degrees Celsius is "<<celsiusToFahrenheit(celsius)<<" degrees Fahrenheit" << std::endl;

    return 0;
}

double celsiusToFahrenheit(double celsius){
    return (1.8 * celsius) + 32.0;
}