1. 请看下面两个计算空格和换行符数目的代码片段:
```cpp
//version 1
while(cin.get(ch))
{
    if(ch == ' ')spaces++;
    if(ch == '\n')newlines++;
}
//version 2
while(cin.get(ch))
{
    if(ch == ' ')spaces++;
    else if(ch == '\n')newlines++;
}

```
version 1 两种都需要判断  
version2 为空格则不进行换行操作  

---

2. 在程序清单6.2中，用ch+1替换++ch将发生什么变化？
输出为ch内包含的字母的ASCII码+1

---

3. 请认真考虑下面的程序:
```cpp
#include <iostream>
using namespace std;
int main()
{
    char ch;
    int ct1,ct2;
    ct1 = ct2 = 0;
    while((ch = cin.get())!='$'){
        cout << ch;
        ct1++;
        if(ch = '$'){
            ct2++;
        }
        cout << ch;
    }
    cout << "ct1 = " <<ct1<<", ct2 = " << ct2<<endl;
    return 0;
}
```
输入: Hi!  
输出: H$i$!$  
输入:Send $10 or $20 now!  
输出:S$e$n$d$ $ct1 = 9, ct2 = 9  

---

4. 创建表示下述条件的逻辑表达式
a.weight大于或等于115，但小于125        weight>=115&&weight<125;  
b.ch为q获取Q                            ch == 'Q' || ch =='q'
c.x为偶数，但不是26                     (x%2 == 0) && x != 26;
d.x为偶数，但不是26的倍数               (x%2 == 0) && !(x % 26 +=0)
e.donation为1000 - 2000或者guest为1     donation>=1000 && donation<=2000 && guest == 1
f.ch是小写字母或大写字母                （ch >='a' && ch<= 'z'） || （ch >= 'A' && ch <= 'Z'）

---

5. 在英语中,"I will not not speeak"的意思与"I will speak"相同，在c++中，!!x是否与x相同呢？
前提，x的type为bool

---

6. 创建一个条件表达式，其值为变量的绝对值。也就是说，如果变量x为正，则表达式的值为x，但如果x为负，则表达式的值为-x.
x >= 0 ? x : -x;

---

7. switch改写下面的代码片段
```cpp
switch(ch){
    case 'A':
    a_grade++;break;
    case 'B':
    b_grade++;break;
    case 'C':
    c_grafe++;break;
    case 'D':
    d_grade++;break;
    default:
    f_grade++;break;
}
```

---

8. 对于程序清单6.10，与使用数字相比，使用字符（a和c）表示菜单选项和case标签有何有点？
如果使用整数，用户输入字母会导致被挂起，而使用字母，即便输入数字也能被转换成ch，并通过switch的defualt进行重新输入。  

---

9. 请看下列代码片段:
```cpp
int line = 0;
char ch ;
while (cin.get(ch)){
    if(ch == 'Q')break;
    if(ch !='\n')continue;
    line++;
}
```
请重写该代码片段，不要使用beak和continue
```cpp
int line = 0;
char ch;
while( (ch == cin.get())!='Q'){
    if(ch == '\n')line++;
}
```

---