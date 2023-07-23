#include <iostream>

int main()
{
    using namespace std;

    double input;

    while((cin>>input) && input >=0){
        double arrayForeSection[4] = {5000,10000,20000,35000};
        if(input <= 5000){
            arrayForeSection[0] = input;
            arrayForeSection[1] = arrayForeSection[2] =arrayForeSection[3] = 0;
        }else if((input -= 5000) <= 10000){
            arrayForeSection[1] = input;
            arrayForeSection[2] =arrayForeSection[3] = 0;
        }else if((input -= 10000) <= 20000){
            arrayForeSection[2] = input;
            arrayForeSection[3] = 0;
        }else{
            arrayForeSection[3] = input - 20000;
        }
		cout << "税收明细如下：" 
			 << arrayForeSection[0] << " * 0% + " << arrayForeSection[1] << " * 10% + "
			 << arrayForeSection[2] << " * 15% + " << arrayForeSection[3] << " * 20% "
			 << " = " << arrayForeSection[0] * 0 + arrayForeSection[1] * 0.1 + arrayForeSection[2] * 0.15 + arrayForeSection[3] * 0.2
			 << endl;
    }

    return 0;
}