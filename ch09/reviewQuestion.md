1. 对于下面的情况，应该使用哪种存储方案？
a.homer是函数的形参                                             ---> 自动变量  
b.secret变量由两个文件共享                                       ---> 全局(外部)变量
c.topsecret变量由一个文件中的函数共享，但对于其他文件来说是隐藏的   ---> 静态变量
d.beencalled记录包含它的函数被调用的次数                          ---> 静态变量

---

2. using声明和using编译指令的区别?
using声明,使用命名空间内部某一个最小名称
using编译指令,使用命名空间内所有的名称

---

3. 重新编写下面代码，使其不适用using声明和using编译指令
ans:
```cpp
#include <iostream>
int main()
{
    double x;
    std::cout << "Enter Value: ";
    while(! (std::cin >> x))
    {
        std::cout << "Bad input ,Please enter a number: ";
        std::cin.clear();
        while(std::cin.get() != '\n')
        {
            continue;
        }
    }
    std::cout << "Value = " << x << std::endl;
    return 0;
 }
```

---

4. 重新编写下面的代码，使之使用using声明，而不是using编译指令
ans:
```cpp
#include <iostream>
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    double x;
    cout << "Enter Value: ";
    while(! (cin >> x))
    {
        cout << "Bad input ,Please enter a number: ";
        cin.clear();
        while(cin.get() != '\n')
        {
            continue;
        }
    }
    cout << "Value = " << x << endl;
    return 0;
}
```

---

5. 在一个文件中调用average(3,,6)函数时，它返回两个int参数的int平均值，在用一个程序的另一个文件中调用时，他返回两个int参数的double平均值，应如何实现
使用static 或者 命名空间包裹

---

6. 下面程序由两个文件组成，该程序显示什么内容？
10  
4  
0  
10,1  
10,-4  

---

7. 下面代码显示什么内容  
1  
4, 1, 2  
2  
2  
4, 1, 2  
2  

--- 