# Chapter 4 复合类型

## 目录
* [4.1.2: 数组初始化](#数组初始化)
* [4.2: 字符数组初始化](#字符数组初始化)
* [4.2.1: 拼接字符串常量](#拼接字符串常量)
* [4.2.4: 字符串输入](#字符串输入)
* [4.3: string类简介](#string类简介)
* [4.4.1: 结构体初始化](#结构体初始化)
* [4.6: 枚举](#枚举)
* [4.7: 指针与C++基本原理](#指针与C++基本原理)
* [4.7.1: 声明和初始化指针](#声明和初始化指针)
* [4.7.4: 使用 new 来分配内存](#使用new来分配内存)
* [4.7.10: 数组的替代品](#数组的替代品)


### 数组初始化

对数组的初始化可以使用大括号{}。

如 int a[4] = { 0, 1, 2, 3 };

而如果括号内元素个数小于数组长度，则剩余部分会被初始化为0。

数组的初始化可以没有"="，如：int a[100]{};

C++ STL 提供 vector 以代替数组，C++11 新增模板类 array。


### 字符数组初始化

可以通过 char str[] = "string" 的方式来为字符数组赋初始值。


### 拼接字符串常量

C++ 允许拼接字符串字面值，即将两个用引号括起的字符串合并为一个。

由空白符分割的字符串会自动拼接。

```C++
char s[] = "str"        "ing";  // s = "string"
cout << "Hello"      " "
    "World!" << endl;  // output: Hello World!
```


### 字符串输入

cin.getline 输入一行，会丢弃掉换行符。

cin.get 不丢弃换行符。

cin.getline 或者 cin.get 返回值为当前的 cin 对象，因此可以像 cin.get().get() 这样连续使用。

可以通过 (cin >> str).get() 来消除行末回车。


### string类简介

string 初始化方式与字符数组类似：
```C++
string str1 = {"string1"};
string str2{"string2"};
```

string 读入一行： getline(cin, str)


### 结构体初始化

结构体可以使用大括号来初始化。[4-4-1.cpp](4-4-1.cpp)


### 枚举

enum(枚举)可以代替 const 创建符号常量，还允许定义新类型。

枚举值默认从 0 开始，每次 +1 。可以显性指定。未指定大小的会自动比前一位大 1 。

可以有多个枚举量相同。

可以省略枚举类型的名称。


### 指针与C++基本原理

面向对象编程与传统的过程性编程的一个区别在于，OOP 强调在运行阶段（而非编译阶段）进行决策。


### 声明和初始化指针

在声明语句中初始化指针，被初始化的是指针而非指向的值。

```C++
int a = 5;
int * pt = & a;  // & pt = 5, pt = & a
```

C++ 中认为，int * 是一种类型。

为指针赋值需要进行强制类型转换。
```C++
int * pt;
pt = (int *)0xB8000000;
```


### 使用new来分配内存

```C++
typeName * pointer_name = new typeName;
```

将从堆中分配内存给指针。

delete 与 new 应配对使用。

delete 用于 new 的地址：

```C++
int * ps = new int;
int * pq = ps;
delete pq;
```

对于数组的 new 和 delete:

```C++
int * psome = new int [10];
delete [] psome;
```


### 数组的替代品

vector 可以动态创建数组，但效率较低。

array 和数组的效率相当，长度不能为变量。可以通过 array[1] = 2 或者 array.get(1) = 2 的方式来访问，后者稍慢，但有索引检查。

```C++
#include <array>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    array<int, 5> a;
    a[0] = 1;
    a.get(1) = 2;
    int l;
    cin >> l;
    vector<int> b(l);  // vector 的长度可以为变量
    return 0;
}
```
