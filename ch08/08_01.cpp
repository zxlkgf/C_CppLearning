// 08_01.cpp    
#include <iostream>
//该函数打印字符串的次数为该函数被调用的次数
using namespace std;

static unsigned times = 0;                      // 函数被调用的次数
const unsigned one = 1;                         // 默认调用一次，当且仅当flag == 0

void method(char *ptr,int flag)
{
    ++times;                                    // 调用函数 times + 1
    unsigned num = (flag == 0) ? one : times;   // 打印次数 根据flag
    for(int i = 0;i < num; i ++){
        cout << "print #" << i+1 << ": " << ptr << endl;
    }
    
}


int main()
{
    char str[64] = "我是你爹！";
    method(str,0);
    method(str,0);
    method(str,1);
    method(str,-1);
    return 0;
}