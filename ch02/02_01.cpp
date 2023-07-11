/**
 * @description 编写一个C++程序，它显示你的姓名和地址
*/
#include <iostream>

int main(int argc,char * argv[])
{
    std::string name = "张三";
    std::string address = "浙江省温州市";

    std::cout<<"我的姓名:"<<name<<std::endl;
    std::cout<<"我的地址:"<<address<<std::endl;

    return 0;
}
