/**
  * @description 编写一个C++程序，它使用3个用户定义的函数(包括 main() )，并生成下面的输出
  * Three blind mice
  * Three blind mice
  * See how they run
  * See how they run
  * 
  * 其中一个函数要调用两次， 该函数生成前两行；另一个函数也被调用两次，并生成其余的输出
  **/

#include <iostream>

void threeBlindMice(void);
void seeHowTheyRun(void);

int main(int argc,char * argv[])
{
    threeBlindMice();
    threeBlindMice();
    seeHowTheyRun();
    seeHowTheyRun();

    return 0;
}

void threeBlindMice(void){
    std::cout <<"Three blind mice"<< std::endl;
}

void seeHowTheyRun(void){
    std::cout <<"See how they run"<< std::endl;
}