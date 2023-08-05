1. 使用成员函数为Stonewt类重载乘法运算符，该运算符将数据成员与double类型的值相乘。
```cpp
Stonewt 
Stonewt::operator *(double n)
{
    return Stonewt( n * pounds);
}

```

---

2. 友元函数与成员函数之间的区别是什么？ 
成员函数：类定义的一部分，类对象调用，
友元函数：非类内函数，可以直接调用。

---

3. 非成员函数必须是友元才能访问类成员吗？
访问私有必须友元，访问公有无所谓

---

4. 使用友元函数为Stonewt类重载乘法运算符，该运算符将double和stone值相乘
```cpp
friend Stonewt operator*(Stonewt& st,double n);
Stonewt operator*(Stonewt& st,double n)
{
    return Stonewt(st.stone * n);
}
```

---

5. 哪些运算符不能重载
```cpp
sizeof  
.*
.
::
?:
```

---

6. 在重载运算符=，(),[]和->时，有什么限制
这些运算符必须使用成员函数定义

---

7. 为Vector定义一个转换函数，将Vector类转换为一个double类的值，后者表示矢量长度
```cpp
operator double()(int x)
{
    return mang;
}
```