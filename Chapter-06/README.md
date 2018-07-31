# Chapter 6 分支语句和逻辑运算符

## 目录
* [6.2.6: 逻辑运算符表示方法](#逻辑运算符表示方法)
* [6.3: 字符函数库cctype](#字符函数库cctype)
* [6.8.3: 读取文本文件](#读取文本文件)
* [编程练习](problem/)


### 逻辑运算符表示方法

C++中可以使用 and 、 or 、 not 来代替 &&、||、!.


### 字符函数库 cctype

可以使用 ```#include <cctype> / #inlucde <ctype.h>``` 中的函数来判断字符。


### 读取文本文件

打开文件时应检查是否正常打开

```C++
ifstream inFile;
inFile.open(path);
if (!inFile.is_open())  // 可以使用inFile.good()
    exit(EXIT_FAILURE);
```

从文件读取可用 ```while (inFile.good()) inFile >> ...```，或直接```while (inFile >> ...)```
