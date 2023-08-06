1. 将设String类有如下私有成员
```cpp
class String
{
    private:
    char * str;
    int len;
}
```
a. String::String(){} 语法正确，但是一旦使用str 会出现空指针问题 
b. String::String(){const char* s}; 会造成指针指向同一个地址的问题。  
c. String::String(){const char* s}; 会造成空指针问题。

---

2. 如果你定义了一个类，其指针成员是使用new初始化的，请指出可能出现的3个问题。
1.析构函数需要释放new出来的空间  
2.拷贝函数需要先new 在拷贝，否则指向同一个地址，双重删除问题  
3.=赋值也需要重载，否则也会出现指向同一个地址，双重删除问题  

---

3. 如果没显示提供类方法，编译器会自动生成哪些类方法？请描述这些隐式生成的函数行为
1.默认构造  
2.默认拷贝  
3.默认析构  
4.默认赋值  

---

4. 找出下列错误
```cpp
class nifty
{
    char personality[64];
    int talents;
    nifty();
    nifty(const char * s);
    friend ostream & operator<<(Ostream & os,const nifty & n);
};

nifty::nifty()
{
    personality[0] = '\0';
    talents = 0; 
}

nifty::nifty(const char * s)
{
    memset(personality,0,64);
    strcpy(personality,s);
    talents = 0;
}

ostream & operator<<(Ostream & os,const nifty & n)
{
    os << n.personality << endl;
    os << n.talents << endl;
    return os;
}
```

---

6. 对于下面的类声明
```cpp
class Golfer
{
    private:
        char * fullname;
        int games;
        int * score;
    public:
        Golfer();
        Golfer(const char * name, int g = 0);
        Golfer(const Golfer& g);
        ~Golfer();
}
```
1.Golfer nancy                      --->    Golfer();
2.Golfer lili("Little Lulu");       --->    Golfer(const char * name, int g = 0)   
3.Golfer roy("Roy Hobbs", 12);      --->    Golfer(const char * name, int g = 0);
4.Golfer * par = new Golfer;        --->    Golfer();
5.Golfer next = lulu                --->    Golfer();Golfer(const Golfer& g);
6.Golfer hazzard = "Weed Thwacker"; --->    Golfer(const char * name, int g = 0);
7.*par = nancy;                     --->    默认 operator
8.nancy = "Nancy Putter"            --->    Golfer(const char * name, int g = 0);默认 operator