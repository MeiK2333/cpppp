# Chapter 7 函数-C++中的编程模块

## 目录
* [7.3.3.2: 用const保护函数参数](#用const保护函数参数)
* [7.3.5: 指针和const](#指针和const)
* [7.6.3: 传递结构体的地址](#传递结构体的地址)
* [7.10.3: 探讨函数指针](#探讨函数指针)
* [7.10.3.1: 数组指针的加法](#数组指针的加法)
* [7.10.4: typedef](#typedef)
* [编程练习](problem/)


### 用const保护函数参数

可以在声明形参的时候使用关键词 const ，这样在函数内部便无法修改参数。

```C++
void show_array(const int a[]);
```


### 指针和const

让指针指向一个常量对象，可以防止使用该指针来修改所指向的值；或者将指针本身声明为常量，这样可以防止改变指针指向的位置。

```C++
int age = 39;
const int * pt = & age;  // 此时pt的指向（即age）无法修改，但pt的指向可以修改

int sloth = 3;
int * const ps = & sloth;  // 限定ps只能指向sloth，但是可以通过ps来修改sloth的值
```


### 传递结构体的地址

为减少时间与空间使用，结构体的参数传递可以采用传地址的方式，且可以不把结果作为返回值，而是直接修改的方式（作为参数一同传入）。[7-6-3.cpp](#7-6-3.cpp)


### 探讨函数指针

有函数声明为```double pam(int)```，则可以创建函数指针```double(*pf)(int); pf=pam;```来指向这个函数，通过```pf(4)```或者```(*pf)(4)```的方式来调用。

有函数声明
```C++
const double * f1(const double ar[], int n)
const double * f2(const double [], int);
const double * f3(const double *, int);
```

可以定义函数指针
```C++
const double * (* p1)(const double *, int) = f1;
auto p2 = f2;
```

现在定义一个函数指针数组用于存着三个函数的指针
```C++
const double * (* pa[3])(const double *, int) = {f1, f2, f3};
// const double *: 返回类型
// (* pa[3]): 声明为指针数组
// (const double *, int): 参数列表
// = {f1, f2, f3}: 初始化
```

```C++
double ar[] = {1, 2, 3, 4, 5};
pa[0](ar, 3);
(*pa[1])(ar, 3);
```

```C++
// 可以通过auto来创建指向数组指针的指针
auto pc = &pa;
// 或者
const double * (* (* pd)[3])(const double *, int) = &pa;

// pa 的类型为函数指针数组的数组指针
// pd 的类型是 指向函数指针数组的数组指针的指针
```

```pd``` 指向数组，因此 ```* pd``` 就是数组，```(* pd)[i]```就是数组中的第 i 个元素

此时可以使用 ```(* pd)[i]``` 或者 ```*(*pd)[i]``` 来调用函数，而此时函数的返回值为 ```double *``` 类型。

因此，```*(*(*pd)[i])(ar, 3)``` 就指向结果的double值。[7-10-3.cpp](7-10-3.cpp)


### 数组指针的加法

对于一个数组 a，a 是第一个元素的地址，即&a[0]

此时 &a 为整个数组的地址，虽然值与 a 相同，但类型不同

差别之一有：
```C++
int a[] = {1, 2, 3, 4, 5};
cout << a + 1 << endl;  // 数组中的下一个元素，即 a[1]
cout << & a + 1 << endl;  // 指向数组之后的位置
// **&a = *a = a[0]
```


### typedef

```C++
typedef const double * (* p_fun)(const double *, int);  // 创建新的类型 p_fun
p_fun = f1;

// 使用别名来简化代码
p_fun pa[3] = {f1, f2, f3};
p_fun (* pd)[3] = &pa;
```
