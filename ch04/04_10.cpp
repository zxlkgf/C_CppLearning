#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::cin;
using std::array;

#define times 3

int main()
{
    array<unsigned,times> score;
    cout << "请输入3次40码成绩"<<endl;
    cin >> score[0] >> score[1] >> score[2];

    float avg_score =( score[0] + score[1] + score[2] ) / times;

    cout << "次数 : "<<times <<", 平均成绩 : " << avg_score << endl;

}