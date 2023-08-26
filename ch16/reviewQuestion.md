1. 将它转换为使用string对象的声明，哪些方法不再需要显示定义
```cpp
class RQ1
{
private:
    string st;
public:
    RQ1():st(" "){};
    RQ1(const char * s):st(s){};
    ~RQ1(){};
};
```
不需要复制构造，析构，赋值，string类已经做了

---

2. 在易于使用方面，指出string对象至少两个优于C风格字符串。
c风格需要使用strcpy或者strncpy，string有拷贝构造，直接对象赋值  
c风格需要自己控制内存，string自己管理内存  

---

3. 编写一个函数，用string对象做传参，将string转为大写。
```cpp
#include <iostream>
#include <cctype>

void trans(string & st){
    for(int i = 0; i < st.size(); ++i)
    {
        st[i] = toupper(st[i]);
    }
} 
```

---

4. 从概念或者语法上来说，下面哪个不是正确使用auto_ptr.
```cpp
auto_ptr<int> pia(new int[20]);  // 应使用new
auto_ptr<string>(new string);   // auto_prt 没名字
int rigue = 7;
auto_ptr<int> pr(&rigue);       //必须new堆内存
auto_ptr dbl (new double);      //  未声明类型
```
---

5. 如果可以生成一个存储高尔夫球棍的栈，为什么它从概念上是一个坏的高尔夫球袋？
想要找到想要的球棍，必须出栈一些球棍，丢弃。

---

6. 为什么说对于逐洞记录高尔夫成绩来说，set是糟糕的选择
set是无序的。

---

7. 既然指针是一个迭代器，为什么STL设计人员没有简单的使用指针来替代迭代器。
迭代器是一个大的概念，即数组可以通过ptr++的形式找到下一个，而链表可以通过ptr= ptr->next找到下一个

---

8. 提供通用性

---

9. 给出Vector比常规数组方便的3个例子
Vector可以拷贝构造  
Vector可以自动扩容
Vector内置sort

---
