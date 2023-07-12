/**
  * @description 编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。（使用三个变量来存储这些信息。）
  * 该程序报告其BMI（Body Mass Index, 体重指数）。
  * 为了计算BMI，该程序以英寸的额方式指出用户的身高（1英尺 为 12 英寸），并将以英寸为单位的身高转换为以米为单位的身高（1 英寸 = 0.0254 米）。
  * 然后，将以磅为单位的体重转换为以千克为单位的体重（1 千克 = 2.2 磅）。
  * 最后，计算相应的BMI——体重（千克）除以身高(米)的平方。用符号常量表示各转换因子。
  * 
  */
#include <iostream>
#include <cmath>


int main(int argc,char * argv[])
{  
    using namespace std;
    cout << "请输入你的身高,英尺部分 : "<< endl;
    float foot;
    cin >> foot;

    cout << "请输入你的身高,英寸部分 : "<<endl;
    float inch;
    cin >> inch;

    cout << "请输入你的体重(镑) : "<<endl;
    float pounds;
    cin >> pounds;

    const float footToinch = 12.0f;
    const float inchToMeter = 0.0254;
    const float poundToKg = 2.2;

	float heightInch = inch + foot * footToinch;	// 以 英寸 为单位的身高
	float heightMeter = heightInch * inchToMeter;	// 以 米 为单位的身高
	
	float weightKg = pounds / poundToKg; // 以 千克 为单位的体重

	cout << "您的身高为：" << heightInch << " 英寸，"
		<< heightMeter << " 米" << endl;
	cout << "您的体重为：" << pounds << " 磅，"
		<< weightKg << " 千克" << endl;

    cout << "BMI = " << pow((weightKg / heightMeter), 2) << endl;

    return 0;
}
