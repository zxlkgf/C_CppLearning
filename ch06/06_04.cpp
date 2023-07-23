#include <iostream>
// Benevolent Order of Programmers name structure
const unsigned	SIZE = 64;
struct Bop {
	char		Fullname[SIZE];	// real name
	char		Title[SIZE];	// job title
	char		Bopname[SIZE];	// secret BOP name
	int	        preference;
};

int main()
{
    using namespace std;
    Bop boplist[] = {	{"Yang Yang", "chinamobile", "yangyang.gnu", 1},
							{"xiao wang", "microsoft", "xiaowang", 2},
							{"xiao liu", "IBM", "xiaoliu", 0},
							{"xiao zhang", "Huawei", "xiaozhang", 1}	
                    };
    bool showflag = true;
    while(showflag){
		cout << "Benevolent Order of Programmers Report" << endl;
		cout << "a. display by name" << "\t" << "b. display by title" << endl;
		cout << "c. display by bopname" << "\t" << "d. display by preference" << endl;
		cout << "q. quit" << endl;

        char ch ;
        if(!(cin>>ch)){
            showflag = false;
            break;
        }

        switch(ch)
        {
            case 'a':
            {
                for(const Bop &bop : boplist){
                    cout << bop.Fullname<<endl;
                }
                break;
            }
            case 'b':
            {
                for(const Bop &bop : boplist){
                    cout << bop.Title<<endl;
                }
                break;
            }
            case 'c':
            {
                for(const Bop &bop : boplist){
                    cout << bop.Bopname<<endl;
                }
                break;
            } 
            case 'd':
            {
                for(const Bop &bop : boplist){
                    if(bop.preference == 0){
                        cout << bop.Fullname<<endl;
                    }else if(bop.preference == 1){
                        cout << bop.Title<<endl;
                    }else if(bop.preference == 2){
                        cout << bop.Bopname<<endl;
                    }
                }
                break;
            }
            case 'q':
            {
                cout << "Bye!"<<endl;
                showflag = false;
                break;
            }
            default:
                cout << "ERROR" << endl;
                break;
        }

    }

}