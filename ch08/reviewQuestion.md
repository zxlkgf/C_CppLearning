1. 哪种函数适合定义为内联函数？
只有一行代码的小型非递归函数适合作为内联函数 

---

2. 假设song()函数的原型如下
void song(const char * name,int times);  
a. 如何修改原型使times的默认值为1?  
void song(const char * name,int times = 1);  
b. 函数定义需要做哪些修改?
没有，只有原型包含默认信息  
c. 能否成为为name提供默认值  
可以  

---

3. 编写iquote()的重载版本___显示其用双引号括起的参数。编写3个版本，一个用int参数，一个用于double参数，另一个用于string参数。
```cpp
void iquote(int );
void iquote(double)
void iquote(string str);
```

---

4. 下面是一个结构模板
```cpp
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

// a. 编写一个函数，将box结构的引用作为形参，并显示每个成员的值
 void method(const box &b)
 {
    using namespace std;
    cout << b.maker << b.height << b.width << b.length << b.volume << endl;
 }
 //b.编写一个函数，它将box结构的引用作为形参，并将volume成员设置为其他三边的乘积
  void method1(box &b)
 {
    using namespace std;
    b.volue = b.height * b.width * b.length;
 }
``` 

---

5. 为让函数fill()和show()使用引用参数，需要对程序清单15做哪些修改？
忽略


---

6. 支出下面每个目标是否可以使用默认参数或函数重载完成，或者这两种方法都无法完成，并提供合适的原型  
a. mass(denstity)返回密度为density，体积为volume的物体的质量，而mass(denstity)返回密度为density，体积为1.0立方米的物体的值。这些值的类型都是double  
```cpp
double mass(double d,double volume = 1.0)
```

b. repeat(10,"I'm OK")将指定的字符串显示10次，而repeat("But you're kind of stupid")将指定的字符串显示5次  
```cpp
void repeat (const int cnt,const char *);
void repeat (const char *);
```

c. average(3,6)返回两个int参数的平均值(int类型),而average(3.0,6.0)返回两个double值的平均值（double类型）  
```cpp
int average(int a, int b);
double average(double x, double y);
```

d. mangle("I'm glad to meet you")根据是将值赋给char变量还是char\*变量，分别返回字符I和指向字符串的指针.
不能  

---

7. 编写返回两个参数中较大值的函数模板
```cpp
template <class T>
const T & method(const T &a, const T &b){
    return a < b?b:a;
}
```

---

8. 给定复习题6的模板和复习题4的box结构，提供一个模板具体化，他接受两个box参数，并返回体积较大的一个。 
```cpp
template <> box max(box b1,box b2)
{
    return b1.volume > b2.volume ? b1 : b2;
}
```

---

9. 在下述代码中v1,v2,v3,v4,v5分别是哪种类型？
v1 float  
v2 float &  
v3 float &  
v4 int  
v5 double  