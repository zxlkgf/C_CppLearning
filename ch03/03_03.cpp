/**
  * @description 编写一个程序，要求用户以度、分、秒的方式输入一个纬度，然后以度为单位显示该纬度。
  1 度为 60分，1 分等于 60秒，请以符号常量的方式输入这些中。对于每个输入值，应使用一个独立的变量存储它
  * 
  */
#include <iostream>


int main(int argc,char * argv[])
{
    using namespace std;
    float degrees = 0;
    float minutes = 0;
    float seconds = 0;

    cout << "Enter a latitiue in degrees,minutes, and secondes : " << endl;
    cout << "First,enter the degrees : " ;
    cin >> degrees;
    cout << "Next, enter the minutes of arc : " ;
    cin >> minutes;
    cout << "Finalliy, enter the seconds of arc : ";
    cin >> seconds;

    float res = degrees + minutes / 60 + seconds / 60 / 60;
    cout << degrees << " degrees, " << minutes <<" minutes, " << seconds << " = " << res <<" degrees" << endl;

    return 0;
}
