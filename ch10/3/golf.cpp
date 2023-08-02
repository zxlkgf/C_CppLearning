#include <iostream>
#include <cstring>
#include <string>
#include "golf.h"

golf::golf(const char * name, int hc)
{
    stpcpy(this->fullname,name);
    this->handicap = hc;
}

golf::~golf()
{
    std::cout << "析构" <<std::endl;
}

int
golf::setgolf()
{
    std::cout << "请输入你的姓名:";
    std::string strTemp;
    std::getline(std::cin,strTemp);
    if("" == strTemp){
        return 0;
    }
    strcpy(this->fullname,strTemp.c_str());

    std::cout << "请输入差点:";
    int hc;
    std::cin >> hc;
    if(!hc){
        return 0;
    }
    std::cin.get();
    this->sethandicap(hc);

    return 1;
}

void 
golf::showgolf() const
{
    std::cout << this->fullname << "\t" << this->handicap << std::endl;
}

void
golf::sethandicap(int hc)
{
    this->handicap = hc;
}