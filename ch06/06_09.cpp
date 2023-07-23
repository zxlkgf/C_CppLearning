#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct TDonor {
	string	name;
	double	amount;
};

int main (void) 
{     
    ifstream inFile;
    string filename = "09.txt";
    inFile.open(filename);
    int rownum;
    inFile >> rownum;
    if(rownum == 0){
        cout << "No Data!" <<endl;
        return 0;
    }

    TDonor *donListptr = new TDonor[rownum];
    int index = 0;
    while(index < rownum){
        inFile.get();                           //清除换行
        getline(inFile,donListptr[index].name); //读取一整行
        inFile >> donListptr[index].amount;     //读取doubles数字,后面的空行换行在下次循环被清除
        index++;
    }

    cout << "荣誉捐赠者：" << endl;
	for (unsigned i = 0; i < rownum; ++i) {
		if (donListptr[i].amount >= 10000) {
			cout << donListptr[i].name << endl;
		}
	}

	cout << "普通捐赠者：" << endl;
	for (unsigned i = 0; i < rownum; ++i) {
		if (donListptr[i].amount < 10000) {
			cout << donListptr[i].name << endl;
		}
	}

    delete[] donListptr;
    inFile.close();

	return 0;
} 