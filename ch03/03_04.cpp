/**
  * @description 编写一个程序，要求用户以整数方式输入秒数（使用 long 或 long long 变量存储），
  * 然后以天、小时、分钟和秒的方式显示这段时间，使用符号常量来表示每天有多少小时、每小时有多少分钟，以及每分钟有多少秒
  */
#include <iostream>

int main(int argc,char * argv[])
{
    using namespace std;
    long total;
    cout << "Enter the number of seconds : ";
    cin >> total;

    const int HOUR = 24;
    const int MINUTE = 60;
    const int SECOND = 60;

    int day,hour,minute,second = 0;

    day = total / (HOUR * MINUTE * SECOND);
    hour = (total - HOUR * MINUTE * SECOND * day) / (MINUTE * SECOND);
    minute = (total - (HOUR * MINUTE * SECOND * day) - (MINUTE * SECOND * hour)) / SECOND;
    second = total - (HOUR * MINUTE * SECOND * day + MINUTE * SECOND * hour + SECOND * minute);

	cout << total << " 秒 = " 
		<< day << " 天，" 
		<< hour << " 小时，" 
		<< minute << " 分钟，" 
		<< second << " 秒" 
		<< endl;


    return 0;
}
