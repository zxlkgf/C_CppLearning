/**
 * 编写一个菜单驱动程序的雏形。该程序显示一个提供4个选项的菜单————每个选项用一个字母标记。
 * 如果用户使用有效选项之外的字母进行响应，程序将提示用户输入一个有效的字母，直到用户这样做为止。
 * 然后，该程序使用一条switch语句，根据用户的选择执行一个简单的操作。该程序的运行情况如下:
 * please enter one of the following choices:
 * c) carnivore         p) pianist
 * t) tree              g) game
 * f
 * please enter a c, p, t, or g: q
 * 
*/

#include <iostream>

void showMenu();

int main()
{
    showMenu();
    return 0;
}

void showMenu(){
    using namespace std;
    cout << "please enter one of the following choices:"<<endl;
    cout << "c) carnivore\t\tp) pianist"<<endl;
    cout << "t) tree\t\t\tg) game" <<endl;
    char ch ;
    while(cin >> ch){
        switch(ch){
			case 'c': 
				cout << "A dog is a carnivore. " << endl;
				break;
		
			case 'p': 
				cout << "Lang Lang is a pianist. " << endl;
				break;
		
			case 't': 
				cout << "A maple is a tree." << endl;
				break;
		
			case 'g': 
				cout << "Red alert is a game. " << endl;
				break;
			default:
				cout << "Please enter a c, p, t, or g: ";
				break;
        }
    } 
}