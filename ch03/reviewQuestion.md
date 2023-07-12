1. 为什么C++有多种类型  
有多重类型的整数，可以根据特定的需求选择最合适的类型，  

---

2. 声明与下述描述相符的变量。  
a. short整型，值为80 : short rbis = 80;  
b. unsigned int整数,值为42110 : short int q = 42110;  
c.值为3000000000的整型  :   unsigned long ants = 3000000000;

---

3. C++提供什么措施来防止超出整型的范围？  
没有提供，超出就溢出。  

---

4. 33L和33之间的区别？
33L = long 类型  
33 = int 类型  

---

5. 下面两条语句是否等价？  
char grade = 65;   
char grade = 'A';   
在某些系统等价，某些不等价。

---

6. 如何使用C++来找出编码88表示的字符？至少指出2种方法。  
1.cout &lt;&lt;char(88)&lt;&lt;endl;  
2.char ch = 88;
cout &lt;&lt;ch&lt;&lt;endl;  

---

7. 将long值赋给float变量会导致舍入误差，将long值赋值给double呢？将longlong赋值给double呢？  
long为4字节则无损失，因为最大的long值为10亿,未超过doube的13位  
longlong超出double，有损失。  

---

8. 下列表达式的结果分别是多少？  
a. 8 * 9 + 2 = 74;  
b. 6 * 3 / 4 = 4;  
c. 3 / 4 * 6 = 0;  
d. 6.0 * 3 / 4 = 4.5;  
e. 15 % 4 = 3;   

---

9. 假设x1和x2是两个double变量，您要将它们作为整数相加，再讲结果赋值给一个整型变量。请编写一条完成这项任务的c++语句。如果要将它们作为double值相加并转换为int呢？   

int a = int(double b) + int (double c);  

int d = double e + double f;  

---

10. 下面每条语句声明的变量都是什么类型？  
a. auto cars = 15   int  
b. auto iou = 150/37f  float  
c. auto level = 'B'  char  
d. auto crat = U '/u00002155' char32_t  
e. auto fract = 8.25f/2.5   double  