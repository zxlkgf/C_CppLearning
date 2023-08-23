// list.cpp -- using a list
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

void outint(int n) {std::cout << n << " " ;}

int main()
{

    using namespace std;
    list<int> one(5,2);                         // 5 个 2           
    int stuff[5] = {1, 2, 4, 8, 6};
    list<int> two;
    two.insert(two.begin(),stuff,stuff + 5);   // 从two的头部插入stuff[0,5)
    int more[6] = {6, 4, 2, 4, 6, 5};
    list<int> three(two);
    three.insert(three.begin(),more,more+6);  // 将move[0,6)插入three

    cout << "list one: ";
    for_each(one.begin(),one.end(),outint);
    cout << endl;
    cout << "list two: ";
    for_each(two.begin(),two.end(),outint);
    cout << endl;
    cout << "list three: ";
    for_each(three.begin(),three.end(),outint);

    three.remove(2);                         // 移除数字2
    cout<< endl<< "list three minus 2s: ";
    for_each(three.begin(),three.end(),outint);
    three.splice(three.begin(),one);        // 将one插入到three的起点,one将空
    cout << endl << "list three after splic: ";
    for_each(three.begin(),three.end(),outint);
    cout << endl << "List one: ";
    for_each(one.begin(),one.end(), outint);
    three.unique();                         //去重复  仅仅去除相邻重复
    cout << endl << "List three after unique: ";
    for_each(three.begin(),three.end(),outint);
    three.sort();                            //升序排序
    three.unique();                          //去重复
    cout << endl << "List three after sort & unique: ";
    for_each(three.begin(),three.end(),outint);

    two.sort();                             // two 升序
    three.merge(two);                       //合并 前提都得排序
    cout << endl << "Sorted two merged into three: ";
    for_each(three.begin(),three.end(),outint);
    cout << endl;
    return 0;
}