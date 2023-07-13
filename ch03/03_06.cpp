/**
  * @description 编写一个程序，要求用户输入驱车里程（英里）和使用汽油量（加仑），
  * 然后指出汽车耗油量一加仑的里程。
  * 如果愿意，也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，
  * 按照指出欧洲风格的结果——即每 100 公里的耗油量（升）
  */
#include <iostream>


int main(int argc,char * argv[])
{
    using namespace std;
	float distance = 0.0;
	float gasoline = 0.0;
    cout << "请输入驱车里程(英里): _____\b\b\b\b\b";
	cin >> distance;
	cout << "请输入使用汽油量(加仑): _____\b\b\b\b\b";
	cin >> gasoline;

	cout << "汽车每英里消耗：" << gasoline / distance << " 加仑汽油 \n";

    return 0;
}
