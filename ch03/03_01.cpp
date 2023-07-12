/**
  * @description 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），
  * 然后将身高转换为英尺和英寸。该程序使用下划线字符来指示输入位置。另外，使用一个 const 符号常量来表示转换因子。
  * 1 英尺 = 12 英寸
  * 
  */
#include<iostream>

int main()
{
	using namespace std;
    const float footToInch = 12.0f;

	cout << "请输入你的身高(英寸)______\b\b\b\b\b\b";
	int height = 0;
	cin >> height;
	float result = height / footToInch;

	cout << "\n英尺(foot)转换成英寸(inch): " << height << " 英寸 = " << result << " 英尺." <<endl;

	return 0;
}