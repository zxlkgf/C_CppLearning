/*
 * 结构CandyBar包含3个成员。 如编程练习5一样，编写一个程序，创建一个包含3个元素的candyBar数组，并将他们初始化为所选择的值，然后显示每个内容
*/
#include <iostream>
#include <string>
using namespace std;
struct CandyBar{
	std::string	name;
	double	weight;
	double	calories;
};

void printCandyBar(const CandyBar * const cb);

int main(int argc,char * argv[])
{
    CandyBar    snack[] =	{	{"Mocha Munch", 2.3, 350},
								{"阿尔卑斯", 6.3, 310},
								{"优の良品", 2.1, 291}	};
    for(int i  = 0 ;i < sizeof(snack)/sizeof(CandyBar);i++){
        printCandyBar((snack + i));
    }
    return 0;
}

void printCandyBar(const CandyBar * const cb){
    cout <<" snack name = "<< cb->name << endl;
    cout <<" snack weight = " << cb->weight << endl;
    cout <<" snack caloried = " << cb->calories << endl;
}