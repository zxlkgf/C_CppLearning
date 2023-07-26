1. 使用函数的3个步骤是什么？
定义函数，提供原型，调用函数

---

2. 请创建与下面描述匹配的函数原型
void igor();  
float tofu(int);  
double mpg(double,double);  
long summation(long [],int);  
double doctor(const char *);  
void ofcourse(boss);  
char * plot(map *);  

---
3. 编写一个接受3个参数的函数，int数组名,数组长度和一个int值，并将数组的所有元素都设置为该int值。
```cpp
void method(int array[],int size,int n)
{
    for(int i = 0;i < size; i++)
    {
        array[i] = n;
    }
}
```

4. 编写一个接受3个参数的函数，指向数组区间中的第一个元素的指针,指向数组区间最后一个元素后面的指针，以及一个int值，并将数组的每个袁术都设置为该int
```cpp
void method(int *start,int *end,int n){
    for(int * ptr = start; ptr != end; ptr++)
    {
        *ptr = n;
    }
}

```

5. 编写将double数组名和数组长度作为参数，并返回该数组中最大值的函数，该函数不应修改数组的内容
```cpp
double method(const double * ptr,int size)
{
    int index = 0;
    for(int i = 0 ; i < size ; i++){
        if(ptr[i] > ptr[index])
        {
            index = i;
        }
    }
}
```

6.为什么不对类型为基本类型的函数参数使用const限定符
以为是值拷贝，const没啥用。

---

7. C++程序可以用哪3中C-风格的字符串格式？
char[]  
"abc"  
char *  

---

8. 编写一个函数，其原型如下： int replace(char * str, char c1, char c2);该函数将字符串中所有的c1都替换为c2，并返回替换次数
```cpp
int replace(char * str, char c1, char c2)
{
    int cnt = 0;
    int index = 0;
    while(str[index] != '\0'){
        if(str[index] == c1){
            str[index]  = c2;
            cnt ++;
        }
        index ++;
    }
    return cnt;
}
```

---

9. 表达式*"pizza"的含义是什么？ "taco"[2]呢.? 
字符串"pizza"的地址的解引用，即p
字符串"taco"的地址对于char type位移2的位置的char是c

---

10. C++允许按值传递结构，也允许传递结构的地址。如果glitz是一个结构变量，如何按值传递它？如何传递它的地址。
值传递   glitz gz               创建一个副本
地址传递  &gz                   直接对原型修改

---

11. 函数judge()的返回类型为int，它将这样一个函数的地址作为参数: 将const char指针作为参数，并返回一个int值。请编写judge()函数的原型
int judge(int (*pf)(const char *));

---

12. 假设有如下结构声明:
struct application{  
char name[30];
int creadit_ratings[3];  
};  

a. 编写一个函数，它将application结构作为参数，并显示该结构的内容
```cpp
void show(application app){
    cout << app.name << endl;
    for(int i = 0; i < 3 ; i++){
        cout << app.creadit_ratings[i] << endl;
    }
}

```

b.编写一个函数，它将application结构的地址作为参数，并显示该参数指向的结构的内容。
```cpp
void show(application *app){
    cout << app->name << endl;
    for(int i = 0; i < 3 ; i++){
        cout << app->creadit_ratings[i] << endl;
    }
}
```

---

13. 假设函数f1()和f2()的原型如下:
void f1(application * a);  
const char * f2(const application * a1,const application * a2);  
请将p1和p2分别声明为指向f1和f2的指针：将ap声明为一个数组，它包含5个类型与p1相同的指针;
将pa声明为一个指针，它指向的数组包含10个类型和p2相同的指针。使用typedef来帮助完成这项工作。

```cpp
typedef void  (*p_f1)(application *);
p_f1 p1 = f1;

typedef const char *(*p_f2)(const application * ,const application * );
p_f1 ap[5];
p_f2 (*pa)[10];

```