1. 为什么没有定义赋值运算符?
不需要开辟空间，单纯值拷贝，而且string内部已经重新定义了拷贝构造函数

---

2. 为什么要将showAll()和setAll()定义为虚?
按照派生类的方法执行。

---

3. 为什么要将abstr_emp定义为虚基类
在highfilnk的时候，防止出现两套abstr_emp

---

4. 为什么highflink没有数据部分
通过manager flink继承

---

5. 为什么只需要一个operator<< 
各派生类实现了各自的 virtual ShowAll() 函数，因此，operator<<() 在内部通过多态特性调用基类和派生类各自的 ShowAll() 实现输出。但是，书上的原型声明 virtual void ShowAll() const 有误，应改为 virtual std::ostream& ShowAll(std::ostream& os) const;


---

6. 
abstr_emp 的showAll是纯虚函数没法子调用