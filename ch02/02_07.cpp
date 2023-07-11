/**
  * @description  编写一个程序，要求用户输入小时数和分钟数。在 main() 函数中，将这两个值传递给一个 void 函数，后者以下面这样的格式显示这两个值：
  * Enter the number of hours: 9
  * Enter the number of minutes: 28
  * Time: 9:28
  **/

 #include <iostream>
 
 void showTimeFormat(int hour,int minute);
 
 int main(int argc,char * argv[])
 {
    int hour = 0;
    std::cout << "Enter the number of hours:"<<std::endl;
    std::cin >> hour;
    int minute = 0; 
    std::cout << "Enter the number of minutes::"<<std::endl;
    std::cin >> minute;

    showTimeFormat(hour,minute);
 
     return 0;
 }
 
  void showTimeFormat(int hour,int minute){
    std::cout << "Time: "<<hour<<":"<<minute<<std::endl;
  }