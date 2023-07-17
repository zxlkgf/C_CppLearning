1. 如何声明下列数据
a. actor是由30个char组成的数组          char actor[30];  
b. betsie是由100个short组成的数组       short betsie[100];  
c. chuck是由13个float组成的数组         float chuck[13];  
d. dipsea是由64个long组成的数组         long dipsea[64];  

---

2. 使用模板类array而不是数组完成问题1
a. array<char,30> actor;  
b. array<short,100> betsie;  
c. array<float, 13> chuck;  
d. array<long,64> dipsea;  

---

3. 声明一个包含五个元素的int数组，并将其初始化为前5个正奇数
```cpp
{
    int array[5];
    for(int i = 0;i < 5; i++){
        array[i] = i*2 + 1;
    }
}
```

---

4. 编写一条语句，将问题3数组第一个元素和最后一个元素的和赋值给变量even 
int even = array[0] + array[4];

---

5. 编写一条语句，显示float数组ideas中第2个元素的值
```cpp
std::cout << ideas[1] <<std::endl;
```

---

6. 声明一个char数组，并将其初始化为字符串"cheeseburger"
```cpp
char food_name = "cheeseburger";
```

---

7. 声明一个string对象，并将其初始化为字符串"Waldorf Salad"
```cpp
std::string str = "Waldorf Salad";
```

---

8. 设计一个鱼的结构声明。结构中包括品种，重量(整数,单位为盎司) 和 长度(英寸,包括小数)
```cpp
struct fish_attribution{
    std::string type;    
    int weight;
    float lenght;
}
```

---

9. 声明一个问题8中定义的结构的变量，并对其初始化
```cpp
fish_attribution attr = {
    "fishsss",
    100,
    10000.0F,
};

```

---

10. 用emun定义一个名为Response的类型，它包含Yes,No和Maybe等枚举变量，其中Yes的值为1,,NO的值为0,Maybe为2
```cpp
enum Response {No, Yes,Maybe};
```

---

11. 假设ted是一个double变量，请声明一个指向ted的指针，并使用该指针来显示ted的值。
```cpp
double ted = 100.0;
double *ptr = &ted;
std::cout << "The Value of ted is " << *ptr << std::endl;
```

---

12. 假设treacle是一个包含10个元素的float数组,请声明一个指向treacle的第一个元素的指针，并使用该指针来显示数组的第一个元素和最后一个元素.
```cpp
float treacle[10] = {0};
float *ptr = treacle;
std::cout <<"The first element of treacle is " << *ptr << std::endl;
std::cout <<"The first element of treacle is " << *(ptr+9) << std::endl;
```

---

13. 编写一段代码，要求用户输入一个正整数，然后创建一个动态int数组，其中包含的元素数目等于用户输入的值。首先使用new来完成这项任务,再使用vector对象来完成这项任务。
```cpp

int main(){
    std::cout << "pls enter a integer:" <<std :: endl;
    int size ;
    cin >> size ;

    int * ptr = new int[size];
    vector<int> vec(size);
}

```

---

14. 下面的代码是否有效?如果有效，他将打印出什么结果？
cout << (int *)" Home of the jolly bytes";  
以十进制方式打印出" Home of the jolly bytes"的十六进制地址  

---

15. 编写一段代码，给问题8中描述的结构动态分配内存，再读取该结构的成员的值。  
```cpp

struct fish_attribution{
    std::string type;    
    int weight;
    float lenght;
}

fish_attribution *attr = new fish_attribution;
std::cout << "fish name is  " << attr -> name << std::endl;
```

---

16. 程序清单4.6指出了混合输入数字和一行字符串时存储的问题，如果将下面的代码:cin.getline(address,80);  
替换为:  
cin >> address  
将对程序的运行带来什么影响？  
只读取一个单词 而非一整行  

---

17. 声明一个vector和一个array对象，它们都包含10个string对象。指出所需的头文件，但不要适用using。适用const老指定要包含的string对象数。
```cpp
#include <vector>
#include <array>
#include <string>
#defind string_size 10

std::vectory<std::string> vec(string_size)
std::array<std::string,string_size> arr;
```