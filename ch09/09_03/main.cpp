// 09_03.cpp
#include <iostream>
#include <new>
#include <cstring>
struct chaff
{
    char dross[20];
    int slag;
};

const unsigned bufferSize = 512;
char buffer[bufferSize];

int main()
{   
    chaff *cf = new (buffer)chaff[2];
    strcpy(cf[0].dross, "aaa");
    cf[0].slag = 1;

    strcpy(cf[1].dross, "bbb");
    cf[1].slag = 2;

    for(int i = 0; i < 2; i++)
    {
        std::cout << "dross : " << cf[i].dross << ", slag : " << cf[i].slag << std::endl;
    }

    return 0;
}