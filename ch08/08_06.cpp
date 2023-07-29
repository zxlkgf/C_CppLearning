// 08_06.cpp
#include <iostream>
#include <cstring>
using namespace std;

template<typename T>
const T& maxn(const T arr[],unsigned n)
{
    unsigned index = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[index] < arr[i])
        {
            index = i;
        }
    }
    return arr[index];
}

const char* maxn(const char* arr[],unsigned n)
{
    int index = 0;
    for(int i = 0;i < n; i++)
    {
        if(strlen(arr[i])>strlen(arr[index]))
        {
            index = i;
        }
    }
    return arr[index];

}


int main()
{
	int	arr1[] = {32, -1, 99, 0, 256, 9};
	for (const auto& e : arr1) {
		cout << e << ' ';
	}
    cout << endl;
	cout << " ----max: " << maxn(arr1, sizeof(arr1)/sizeof(arr1[0])) << endl;

	double	arr2[] = {-3.2, 221.22, 9.9, 0, 1};
	for (const auto& e : arr2) {
		cout << e << ' ';
	}
    cout << endl;
	cout << " ----max: " << maxn(arr2, sizeof(arr2)/sizeof(arr2[0])) << endl;

	const char*	arr3[] = {	"aa aa",
								"dddddddddddd",
								"",
								"fffffff ffff",
								"kk kk",
	};
	for (const auto& e : arr3) {
		cout << '\"' << e << '\"' << ' ';
	}
    cout << endl;
	cout << " ----max: " << '\"' << maxn(arr3, sizeof(arr3)/sizeof(arr3[0])) << '\"' << endl;


}
