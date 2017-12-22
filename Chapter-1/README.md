# Chapter 1 预备知识

## 目录
* [1.4.4: cin.get](#cinget)

### cin.get

cin.get() 读取键盘输入直到按下回车

Test: [1-4-4.cpp](1-4-4.cpp)
```
Input:
abcdefg

Output:
a
b


Input:
'\n'
'\n'

Output:
'\n'
'\n'


Input:
a b c d

Output:
a


Input:
a

Output:
a
'\n'
 
```

可见cin.get()会在键入回车的时候读取第一个字符，剩余字符依旧在输入流中等待读取。

注意cin.get()并不会忽略换行符，如果读取的时候碰到换行符，则会将换行符读入。