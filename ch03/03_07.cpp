/**
  * @description 编写一个程序，要去用户按照欧洲风格输入汽车耗油量（每 100 公里消耗的汽油量（升）），
  * 然后将其转化为美国风格的耗油量——每加仑多少英里。
  * 注意，除了使用不同的单位计量外，美国方法（距离/燃料）和欧洲方法（燃料/距离）相反。
  * 100 公里等于 62.14 英里，1 加仑等于 3.875 升。因此，19mpg 大约合 12.4l/100km，127mpg 大约合 8.71/100km。
  */
#include <iostream>


int main(int argc,char * argv[])
{
	using namespace std;
	
	float gasoline = 0.0;	// 升
	float gasoline_Europe = 0.0;	// 加仑
	const float GALLON_TRANSFORM_TO_LITRE = 3.875; // 1 加仑等于 3.875 升
	const float KM_TRANSFORM_TO_MILES = 62.14;	// 100 公里等于 62.14 英里

	cout << "请输入汽车耗油量(每100公里消耗汽油量(升))" << endl;
	cin >> gasoline;	// 每100公里消耗汽油量（升）
	
	float f1 = gasoline / GALLON_TRANSFORM_TO_LITRE; // 每100公里消耗汽油量（加仑） = 每 62.14 英里消耗的汽油量（加仑）
	float f2 = f1 / KM_TRANSFORM_TO_MILES; // 每1英里消耗汽油量（加仑）
	
	// gasoline_Europe = f1 * GALLON_TRANSFORM_TO_LITRE / ();
	cout << "转化成美国方法后" << endl;
	cout << 1/f2 << " mpg";
	return 0;
}
