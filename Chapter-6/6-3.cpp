#include <cctype>
#include <iostream>
using namespace std;

int main() {
    char ch;
    while (cin >> ch) {
        cout << "isalnum: " << isalnum(ch)
             << endl; // 如果参数为字母或数字，返回true
        cout << "isalpha: " << isalpha(ch) << endl; // 如果参数为字符，返回true
        cout << "iscntrl: " << iscntrl(ch)
             << endl; // 如果参数是控制字符，返回true
        cout << "isdigit: " << isdigit(ch)
             << endl; // 如果参数是数字（0-9），返回true
        cout << "isgraph: " << isgraph(ch)
             << endl; // 如果参数是除空格之外的打印字符，返回true
        cout << "islower: " << islower(ch)
             << endl; // 如果参数是小写字符，返回true
        cout << "isprint: " << isprint(ch)
             << endl; // 如果参数是打印字符（包括空格），返回true
        cout << "ispunct: " << ispunct(ch)
             << endl; // 如果参数是标点符号，返回true
        cout << "isspace: " << isspace(ch)
             << endl; // 如果参数是空白字符，返回true
        cout << "isupper: " << isupper(ch)
             << endl; // 如果参数是大写字母，返回true
        cout << "isxdigit: " << isxdigit(ch)
             << endl; // 如果参数是十六进制数字（0-9、a-z、A-Z），返回true
        cout << "tolower: " << char(tolower(ch))
             << endl; // 如果参数是大写字符，则返回其小写，否则返回该参数
        cout << "toupper: " << char(toupper(ch))
             << endl; // 如果参数是小写字符，则返回其大写，否则返回该参数
    }
    return 0;
}