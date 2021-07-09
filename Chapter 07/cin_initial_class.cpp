#include <iostream>
#include <string>

using namespace std;

struct A
{
    A (const string & s):str(s){ }
    A ():A(" ") {}
    A (istream &is)
    {
        is >> str;
    }
    string str;
};

int main()
{
    cout << "start: " << endl;
    A test(cin);
    cout << "Class A: " << test.str << endl;
    return 0;
}
// 官方给的Sale_data中构造函数使用 istream 不太明白怎么一回事
// 尝试一下也没有弄明白，之后再看