# Chapter 3 处理数据

## 目录
* [3.1.3: 单值变量初始化](#单值变量初始化)
* [3.1.6: 进制表示](#进制表示)
* [3.1.8: cout.put](#coutput)
* [3.1.8.3: '\b'](#'\b')
* [3.1.8.5: char的类型](#char的类型)
* [3.2: 定义符号常量](#定义符号常量)
* [3.4.4.5: 强制类型转换](#强制类型转换)
* [3.4.5: auto](#auto)


### 单值变量初始化

可以使用大括号为单值变量初始化

```C++
int a = { 24 };
int b{ 36 };  // C++11
int c = {};  // c++11
int d{};  // C++11
```

### 进制表示

```C++
int chest = 42;  // 十进制
int waist = 0x42;  // 十六进制 结果为 66
int inseam = 042;  // 八进制 结果为 34
```

可以通过控制符 dec、 hex、 oct 来控制 cin、 cout 的进制

```C++
int num = 42;
cout << num << endl;  // 十进制
cout << hex << num << endl;  // 十六进制
cout << oct << num << endl; // 八进制
cout << num << endl;  // 还是八进制
cout << dec << num << endl;  // 十进制
// 输入同理
cin >> num;  // 以十进制输入
cin >> hex >> num;  // 以十六进制输入
cin >> num;  // 依旧为十六进制
```


### cout.put

用于输出一个字符，可以连续使用。[3-1-8.cpp](3-1-8.cpp)


### '\b'

'\b'在不同的系统中表现不同，可能会表现为：
- 光标回退（win10、VS2017中表现为此项（控制台下））
- 删除上一个字符
- 显示为一个小矩形（当输出到文件是显示为矩形（win10、VS2017））


### char的类型

char根据C++的实现不同，可能默认为有/无符号。

可以通过 unsigned 与 signed 显式的指定。


### wchar_t

wchar_t 用于拓展字符集，输入输出使用 wcin、 wcout。
可以通过添加前缀 L 来指示宽字符串。[3-1-8-6.cpp](3-1-8-6.cpp)


### 定义符号常量

尽量使用 const 而非 #define 来定义符号常量


### 强制类型转换

强制类型转换可以使用 (typeName)value 或者 typeName(value) 的方式，C++ 中更适用后者。


### auto

auto 可以用于自动推断变量类型。例如：
```C++
auto a = 1;  // a 是 int 类型
auto b = 0.0;  // b 是 double 类型
```

对于基本类型使用 auto 显得意义不大，且可能造成混乱。 auto 的优势在于处理复杂类型。例如：
```C++
// old
vector<double> scores;
vector<double>::iterator pv = scores.begin();

// new
vector<double> scores;
auto pv = scores.begin();
```